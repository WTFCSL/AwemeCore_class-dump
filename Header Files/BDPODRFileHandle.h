//
//     Generated by private class-dump
//

@class NSError, NSString, NSFileHandle, BDPODRFileDownloader, BDPODRXDepAnalyzer, NSMutableDictionary, BDPODRXFileBasicModel, NSMutableSet, BDPSTLQueue, NSObject;
@protocol OS_dispatch_queue, BDPFileHandleLifecycleDelegate;

@interface BDPODRFileHandle : NSObject <BDPODRXResolveDelegate, BDPFileHandleFullProtocol> {
    BDPODRXFileBasicModel *_model;
    long long _loadStatus;
    id<BDPFileHandleLifecycleDelegate> _delegate;
    BDPODRFileDownloader *_downloader;
    NSObject<OS_dispatch_queue> *_readOperationProcessQueue;
    NSObject<OS_dispatch_queue> *_fileReadProcessQueue;
    NSMutableDictionary *_downloadProgressBlkDic;
    BDPSTLQueue *_downloadCompletionQueue;
    BDPSTLQueue *_fileInfoQueue;
    NSMutableSet *_fileTaskSet;
    NSError *_loadError;
    long long _createLoadStatus;
    double _downloadProgress;
    NSString *_appFolderPath;
    unsigned long long _originalFileOffset;
    unsigned long long _downloadOffset;
    NSString *_protectTempPath;
    NSFileHandle *_fileHandle;
    NSError *_downloadError;
    NSString *_downloadScene;
    BDPODRXDepAnalyzer *_depAnalyzer;
}

@property (retain, nonatomic) BDPODRXFileBasicModel *model;
@property (retain, nonatomic) NSMutableDictionary *downloadProgressBlkDic;
@property (retain, nonatomic) BDPSTLQueue *downloadCompletionQueue;
@property (retain, nonatomic) BDPSTLQueue *fileInfoQueue;
@property (retain, nonatomic) NSMutableSet *fileTaskSet;
@property (nonatomic) long long loadStatus;
@property (nonatomic) long long createLoadStatus;
@property (nonatomic) double downloadProgress;
@property (copy, nonatomic) NSString *appFolderPath;
@property (nonatomic) unsigned long long originalFileOffset;
@property (nonatomic) unsigned long long downloadOffset;
@property (copy, nonatomic) NSString *protectTempPath;
@property (retain, nonatomic) NSFileHandle *fileHandle;
@property (retain, nonatomic) NSError *downloadError;
@property (copy, nonatomic) NSString *downloadScene;
@property (readonly, weak, nonatomic) id<BDPFileHandleLifecycleDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)loadStatusForModel:(id)arg0;
+ (id)handleWithBasicModel:(id)arg0 delegate:(id)arg1 error:(id *)arg2;
+ (BOOL)allPackagesDownloadedForModel:(id)arg0;

- (id)basic;
- (void)setDownloadScene:(id)arg0;
- (id)downloadScene;
- (void)appContainerWillBeClosed;
- (void)cancelAllReadDataCompletionBlks;
- (void)readDataWithFilePath:(id)arg0 syncIfDownloaded:(BOOL)arg1 dispatchQueue:(id)arg2 completion:(id /* block */)arg3;
- (void)_handleDownloadFinishedWithError:(id)arg0;
- (id)fileTaskSet;
- (id)downloadProgressBlkDic;
- (void)setDownloadProgressBlkDic:(id)arg0;
- (id)downloadCompletionQueue;
- (id)fileInfoQueue;
- (id)appFolderPath;
- (id)protectTempPath;
- (void)setDownloadCompletionQueue:(id)arg0;
- (void)setFileInfoQueue:(id)arg0;
- (void)setFileTaskSet:(id)arg0;
- (void)setAppFolderPath:(id)arg0;
- (unsigned long long)originalFileOffset;
- (void)setOriginalFileOffset:(unsigned long long)arg0;
- (unsigned long long)downloadOffset;
- (void)setDownloadOffset:(unsigned long long)arg0;
- (void)setProtectTempPath:(id)arg0;
- (id)initWithBasicModel:(id)arg0 delegate:(id)arg1 error:(id *)arg2;
- (long long)loadStatusForPagePath:(id)arg0;
- (void)setCreateLoadStatus:(long long)arg0;
- (long long)createLoadStatus;
- (void)fileHandleDidLoadFromCache;
- (void)startDownloadTask:(unsigned long long)arg0;
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
- (void)notifyPagePath:(id)arg0 loadProgressBlk:(id /* block */)arg1;
- (void)addLoadProgressBlk:(id /* block */)arg0;
- (void)removeAllLoadProgressBlks;
- (void)addCompletionByPagePath:(id)arg0 blk:(id /* block */)arg1;
- (void)addPkgHeaderDidParseBlk:(id /* block */)arg0;
- (BOOL)usedCacheMeta;
- (void)addCompletionBlk:(id /* block */)arg0;
- (void)readDataWithRPath:(id)arg0 pagePath:(id)arg1 syncIfDownloaded:(BOOL)arg2 dispatchQueue:(id)arg3 completion:(id /* block */)arg4;
- (void)readDataFromMemoryPkgsWithPath:(id)arg0 completion:(id /* block */)arg1;
- (void)stopDownloadTask;
- (void)getDependedPkgsFileInfosForPath:(id)arg0 withCompletion:(id /* block */)arg1;
- (void)readDataFromMemoryPkgsWithStartPath:(id)arg0 filePath:(id)arg1 completion:(id /* block */)arg2;
- (void)updateAcessInfo;
- (void)updateBasicInfo;
- (void)_startDownloadODR;
- (void)_clearDecompressODRFileResource;
- (double)downloadProgress;
- (void)setModel:(id)arg0;
- (void)setFileHandle:(id)arg0;
- (id)fileHandle;
- (id)downloadError;
- (void).cxx_destruct;
- (long long)loadStatus;
- (id)model;
- (void)setLoadStatus:(long long)arg0;
- (void)setDownloadProgress:(double)arg0;
- (id)delegate;
- (void)dealloc;
- (void)setDownloadError:(id)arg0;

@end