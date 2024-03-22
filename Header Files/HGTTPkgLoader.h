//
//     Generated by private class-dump
//

@class NSFileHandle, NSMutableDictionary, HGTTPkgModel, NSObject, HGPkgHeaderParser, NSMutableArray, NSString, HGRAPackResult, HGPkgHeaderInfo, NSRecursiveLock, NSMutableSet, HGQueue, NSError, HGPkgFileBasicModel;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, HGTTPkgLoaderDelegate;

@interface HGTTPkgLoader : NSObject <HGFileHandleProtocol, HGRAPackDelegate> {
    char _index;
    float _loadProgress;
    int _progressBlkIndex;
    HGTTPkgModel *_ttModel;
    id<HGTTPkgLoaderDelegate> _delegate;
    HGPkgFileBasicModel *_basic;
    double _createTime;
    NSMutableDictionary *_loadProgressBlkDic;
    HGPkgHeaderParser *_parser;
    NSError *_parseError;
    unsigned long long _originalFileOffset;
    unsigned long long _lastFileOffset;
    NSMutableSet *_readDataTasksSet;
    NSMutableSet *_chunkDataTasksSet;
    NSMutableSet *_observeTasksSet;
    HGQueue *_checkFileInfoBlkQueue;
    HGQueue *_completedBlkQueue;
    HGQueue *_headerParsedBlkQueue;
    NSMutableSet *_syncApiSemaphores;
    NSMutableSet *_loadedFileNames;
    NSMutableArray *_fileRecords;
    HGRAPackResult *_observeResult;
    NSString *_pkgPath;
    NSFileHandle *_fileHandle;
    HGPkgHeaderInfo *_fileInfo;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSRecursiveLock *_readDataTasksLock;
    NSObject<OS_dispatch_semaphore> *_syncApiLock;
    long long _createLoadStatus;
    long long _loadStatus;
}

@property (weak, nonatomic) id<HGTTPkgLoaderDelegate> delegate;
@property (retain, nonatomic) HGTTPkgModel *ttModel;
@property (retain, nonatomic) HGPkgFileBasicModel *basic;
@property (nonatomic) double createTime;
@property (retain, nonatomic) HGPkgHeaderParser *parser;
@property (nonatomic) unsigned long long originalFileOffset;
@property (retain, nonatomic) NSMutableSet *chunkDataTasksSet;
@property (retain, nonatomic) NSMutableSet *syncApiSemaphores;
@property (retain, nonatomic) NSMutableSet *loadedFileNames;
@property (retain, nonatomic) NSMutableArray *fileRecords;
@property (copy, nonatomic) NSString *pkgPath;
@property (retain, nonatomic) NSFileHandle *fileHandle;
@property (retain, nonatomic) HGPkgHeaderInfo *fileInfo;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSRecursiveLock *readDataTasksLock;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *syncApiLock;
@property (nonatomic) long long createLoadStatus;
@property (nonatomic) long long loadStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)loadStatusForModel:(id)arg0;
+ (id)loaderWithModel:(id)arg0 delegate:(id)arg1 error:(id *)arg2;
+ (id)headerInfoFromFileHandle:(id)arg0 fileOffset:(unsigned long long)arg1;
+ (void)initialize;

- (void)setBasic:(id)arg0;
- (id)basic;
- (void)appContainerWillBeClosed;
- (void)cancelAllReadDataCompletionBlks;
- (void)readDataWithFilePath:(id)arg0 syncIfDownloaded:(BOOL)arg1 dispatchQueue:(id)arg2 completion:(id /* block */)arg3;
- (long long)httpRangeOffset;
- (void)ttpkgDownloadTaskWillBegin:(id)arg0;
- (void)pkgDownloadTask:(id)arg0 receivedData:(id)arg1 totalBytes:(long long)arg2 httpStatus:(unsigned long long)arg3 error:(id)arg4;
- (void)pkgDownloadTask:(id)arg0 didFinishWithResult:(id)arg1;
- (void)pkgDownloadTask:(id)arg0 didCancelWithResult:(id)arg1;
- (id)handleRecvDataQueue;
- (unsigned long long)originalFileOffset;
- (void)setOriginalFileOffset:(unsigned long long)arg0;
- (void)updateBasicInfoWithFlag:(BOOL)arg0;
- (void)setCreateLoadStatus:(long long)arg0;
- (void)setPkgPath:(id)arg0;
- (long long)createLoadStatus;
- (id)ttModel;
- (void)fileHandleDidLoadFromCache;
- (void)checkExistedFileInPkg:(id)arg0 withCompletion:(id /* block */)arg1;
- (void)getFileSizeInPkg:(id)arg0 withCompletion:(id /* block */)arg1;
- (void)getContentsOfDirAtPath:(id)arg0 withCompletion:(id /* block */)arg1;
- (void)readDataWithFilePath:(id)arg0 dispatchQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)readDataURLWithFilePath:(id)arg0 dispatchQueue:(id)arg1 completion:(id /* block */)arg2;
- (id)readDataWithFilePath:(id)arg0 error:(id *)arg1;
- (id)urlOfDataWithFilePath:(id)arg0 error:(id *)arg1;
- (BOOL)fileExistsInPkgAtPath:(id)arg0;
- (long long)fileSizeInPkgAtPath:(id)arg0;
- (id)contentsOfPkgDirAtPath:(id)arg0;
- (void)addLoadProgressBlk:(id /* block */)arg0;
- (void)removeAllLoadProgressBlks;
- (void)addCompletionByPagePath:(id)arg0 blk:(id /* block */)arg1;
- (void)addPkgHeaderDidParseBlk:(id /* block */)arg0;
- (BOOL)usedCacheMeta;
- (void)addCompletionBlk:(id /* block */)arg0;
- (void)observeFileDidDownloadWithPath:(id)arg0 dispatchQueue:(id)arg1 callbackBlk:(id /* block */)arg2;
- (id)pkgPath;
- (id)fileInfo;
- (void)setFileInfo:(id)arg0;
- (void)setTtModel:(id)arg0;
- (void)setReadDataTasksLock:(id)arg0;
- (void)setSyncApiLock:(id)arg0;
- (void)monitorHeaderParseWithLoadStatus:(long long)arg0 beginDate:(id)arg1 endDate:(id)arg2;
- (void)resetFileHandleAndCache;
- (id)fileRecords;
- (void)writeAppFileData:(id)arg0 withTotalBytes:(long long)arg1;
- (void)trackDonwloadResultForTask:(id)arg0 result:(id)arg1;
- (void)appFileHasNoMoreDataToWrite;
- (void)handleDownloadFinishedTask:(id)arg0 withError:(id)arg1;
- (void)tryHandleCompletedBlksWithError:(id)arg0;
- (void)tryHandleTasks;
- (id)readDataTasksLock;
- (void)triggerCompletionBlkOfTask:(id)arg0;
- (id)writeAuxiliaryFileWithData:(id)arg0 appId:(id)arg1 versionMark:(id)arg2 filePath:(id)arg3;
- (id)getDataWithFilePath:(id)arg0 offset:(unsigned long long)arg1 size:(unsigned long long)arg2 error:(id *)arg3;
- (id)syncApiLock;
- (id)syncApiSemaphores;
- (id)loadedFileNames;
- (void)interruptAppFileWriting;
- (void)readDataWithFilePath:(id)arg0 dispatchThread:(id)arg1 completion:(id /* block */)arg2;
- (id)chunkDataTasksSet;
- (void)setChunkDataTasksSet:(id)arg0;
- (void)setSyncApiSemaphores:(id)arg0;
- (void)setLoadedFileNames:(id)arg0;
- (void)setFileRecords:(id)arg0;
- (void)setFileHandle:(id)arg0;
- (id)fileHandle;
- (id)parser;
- (void).cxx_destruct;
- (long long)loadStatus;
- (void)setSerialQueue:(id)arg0;
- (void)setCreateTime:(double)arg0;
- (id)serialQueue;
- (void)setLoadStatus:(long long)arg0;
- (id)delegate;
- (double)createTime;
- (void)setDelegate:(id)arg0;
- (void)setParser:(id)arg0;

@end
