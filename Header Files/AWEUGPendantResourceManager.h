//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSString, NSOperationQueue, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AWEUGPendantResourceManager : HTSService <AWEPerfResourceCleanStrategy, AWEUGPendantResourceManagerProtocol> {
    NSOperationQueue *_downloadQueue;
    NSMutableArray *_uiIndentifys;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableDictionary *_cacheVisitDict;
}

@property (retain, nonatomic) NSOperationQueue *downloadQueue;
@property (retain, nonatomic) NSMutableArray *uiIndentifys;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSMutableDictionary *cacheVisitDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)trackLogWithKey:(id)arg0 message:(id)arg1;
- (void)loadWholeLottieFromModel:(id)arg0 useDefault:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)loadAlphaVideoFromModel:(id)arg0 useDefault:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)loadPNGImageFromModel:(id)arg0 useDefaule:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)loadTaskCompleteLottieFromModel:(id)arg0 completion:(id /* block */)arg1;
- (id)cleanPaths;
- (void)cleanResourceWithStrategy:(unsigned long long)arg0;
- (double)cleanSizeWithStrategy:(unsigned long long)arg0;
- (void)cleanRootFolder:(id)arg0;
- (void)setupResourceRootFolder:(id)arg0;
- (id)lottieResourceDir:(id)arg0;
- (id)lottieNamed:(id)arg0 bundleName:(id)arg1 formPath:(id)arg2;
- (void)postResourceIsReadyNotify:(id)arg0;
- (id)lottieZipFilePath:(id)arg0;
- (void)ResourceDownloadNotify:(id)arg0;
- (id)resourceIdentifyFromModel:(id)arg0;
- (BOOL)isResourceExisted:(id)arg0;
- (id)uiIndentifys;
- (id)getPendantRootFolder;
- (void)downloadActivityResourceWith:(id)arg0;
- (BOOL)isLottieResourceExisted:(id)arg0;
- (void)loadDefaultLottieFromModel:(id)arg0 completion:(id /* block */)arg1;
- (void)downloadResourceWithModel:(id)arg0 retryTimes:(long long)arg1 completion:(id /* block */)arg2;
- (BOOL)isAlphaVideoResourceExisted:(id)arg0;
- (void)loadDefaultAlphaVideoFromModel:(id)arg0 completion:(id /* block */)arg1;
- (id)alphaVideoNamed:(id)arg0 fromDir:(id)arg1;
- (BOOL)isTaskCompletedLottieResourceExisted:(id)arg0;
- (void)downloadTaskCompletedLottieWithModel:(id)arg0 retryTimes:(long long)arg1 completion:(id /* block */)arg2;
- (BOOL)isPNGResourceExisted:(id)arg0;
- (void)loadDefaultPNGImageFromModel:(id)arg0 completion:(id /* block */)arg1;
- (id)pngImagePath:(id)arg0;
- (void)downloadLottieWithModel:(id)arg0 retryTimes:(long long)arg1 completion:(id /* block */)arg2;
- (void)downloadPNGWithModel:(id)arg0 retryTimes:(long long)arg1 completion:(id /* block */)arg2;
- (void)downloadAlphaVideoWithModel:(id)arg0 retryTimes:(long long)arg1 completion:(id /* block */)arg2;
- (void)handleAlphaVideoSourceWithModel:(id)arg0;
- (double)calculateCleanSizeWithSafeIntervalInDay:(long long)arg0;
- (void)cleanUpWithSafeIntervalInDay:(long long)arg0;
- (void)performAutomaticCleanUp;
- (void)performProactiveCleanUp;
- (void)performUltimateCleanUp;
- (double)cleanSizeWithExpiredDays:(long long)arg0;
- (id)cacheVisitDict;
- (void)updateCacheVisitDictionaryWithKey:(id)arg0 value:(id)arg1;
- (id)uriOfUrl:(id)arg0;
- (id)pngImageName:(id)arg0;
- (void)loadLottieFromModel:(id)arg0 useDefaule:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)preDownloadActivityResourceIfNeededWith:(id)arg0;
- (void)performLoadDowngrade;
- (id)getPendantDefaultRootFolder;
- (void)setUiIndentifys:(id)arg0;
- (void)setCacheVisitDict:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setDispatchQueue:(id)arg0;
- (void)setDownloadQueue:(id)arg0;
- (id)dispatchQueue;
- (id)downloadQueue;

@end
