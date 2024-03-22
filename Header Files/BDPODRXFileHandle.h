//
//     Generated by private class-dump
//

@class NSHashTable, BDPQueue, NSString, BDPODRXDepAnalyzer, NSMutableDictionary, BDPODRXFileBasicModel, NSObject, BDPExceptionLoader, NSMutableSet;
@protocol BDPFileHandleLifecycleDelegate, OS_dispatch_semaphore;

@interface BDPODRXFileHandle : NSObject <BDPODRXLoaderDelegate, BDPFileHandleFullProtocol> {
    float _loadProgress;
    int _downloadMax;
    BDPODRXFileBasicModel *_basic;
    double _createTime;
    long long _loadStatus;
    id<BDPFileHandleLifecycleDelegate> _delegate;
    long long _createLoadStatus;
    NSObject<OS_dispatch_semaphore> *_loaderLock;
    BDPExceptionLoader *_exceptionLoader;
    BDPODRXDepAnalyzer *_depAnalyzer;
    NSMutableSet *_loadersSet;
    NSMutableDictionary *_downloadingLoaders;
    NSMutableDictionary *_readyLoaders;
    BDPQueue *_unreadyLoaders;
    NSHashTable *_unsafePromises;
}

@property (weak, nonatomic) id<BDPFileHandleLifecycleDelegate> delegate;
@property (retain, nonatomic) BDPODRXFileBasicModel *basic;
@property (nonatomic) int downloadMax;
@property (nonatomic) double createTime;
@property (nonatomic) long long loadStatus;
@property (nonatomic) long long createLoadStatus;
@property (retain, nonatomic) NSMutableDictionary *downloadingLoaders;
@property (retain, nonatomic) BDPQueue *unreadyLoaders;
@property (readonly, nonatomic) float loadProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)loadStatusForModel:(id)arg0 pagePath:(id)arg1;
+ (long long)loadStatusForModel:(id)arg0 pagePath:(id)arg1 checkStatusBlk:(id /* block */)arg2;
+ (long long)loadStatusForModel:(id)arg0;
+ (void)copyReuseableFilesIfNeededFromOldMeta:(id)arg0 toMeta:(id)arg1;
+ (id)handleWithBasicModel:(id)arg0 delegate:(id)arg1 error:(id *)arg2;
+ (BOOL)allPackagesDownloadedForModel:(id)arg0;

- (void)setBasic:(id)arg0;
- (id)basic;
- (void)appContainerWillBeClosed;
- (void)cancelAllReadDataCompletionBlks;
- (void)readDataWithFilePath:(id)arg0 syncIfDownloaded:(BOOL)arg1 dispatchQueue:(id)arg2 completion:(id /* block */)arg3;
- (long long)loadStatusForPagePath:(id)arg0;
- (void)setCreateLoadStatus:(long long)arg0;
- (void)setDownloadMax:(int)arg0;
- (long long)createLoadStatus;
- (void)fileHandleDidLoadFromCache;
- (id)downloadingLoaders;
- (int)downloadMax;
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
- (void)loader:(id)arg0 notifyDownloadFinished:(id)arg1 withError:(id)arg2;
- (void)loader:(id)arg0 retryDownloadTask:(id)arg1 withError:(id)arg2;
- (void)copyReuseableFilesIfNeededFromOldMeta:(id)arg0;
- (void)addCompletionBlk:(id /* block */)arg0;
- (void)readDataWithRPath:(id)arg0 pagePath:(id)arg1 syncIfDownloaded:(BOOL)arg2 dispatchQueue:(id)arg3 completion:(id /* block */)arg4;
- (void)preparePackageIfNeededWithPagePath:(id)arg0 highPriority:(BOOL)arg1 from:(long long)arg2;
- (long long)createLoadStatusForPkgInfo:(id)arg0;
- (void)readDataFromMemoryPkgsWithPath:(id)arg0 completion:(id /* block */)arg1;
- (void)stopDownloadTask;
- (float)loadProgress;
- (void)setDownloadingLoaders:(id)arg0;
- (void)preparePackageIfNeededWithFilePath:(id)arg0 highPriority:(BOOL)arg1 from:(long long)arg2;
- (void)getDependedPkgsFileInfosForPath:(id)arg0 withCompletion:(id /* block */)arg1;
- (BOOL)fileIsDirectoryInPkgAtPath:(id)arg0;
- (void)readDataFromMemoryPkgsWithStartPath:(id)arg0 filePath:(id)arg1 completion:(id /* block */)arg2;
- (void)setUnreadyLoaders:(id)arg0;
- (void)pluginPkgLoaderPreConfigWithPkgInfo:(id)arg0;
- (id)unreadyLoaders;
- (void)pr_preparePackageIfNeededWithPkgInfos:(id)arg0 highPriority:(BOOL)arg1 from:(long long)arg2;
- (void).cxx_destruct;
- (long long)loadStatus;
- (void)setCreateTime:(double)arg0;
- (void)setLoadStatus:(long long)arg0;
- (id)delegate;
- (double)createTime;
- (void)setDelegate:(id)arg0;

@end
