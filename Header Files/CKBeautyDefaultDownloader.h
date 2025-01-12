//
//     Generated by private class-dump
//

@class NSString, NSTimer, NSOperationQueue, NSHashTable, NSMutableArray, CKBeautyDownloaderConfig;

@interface CKBeautyDefaultDownloader : NSObject <CKBeautyDownloaderProtocol> {
    BOOL _needUpdateEffect;
    CKBeautyDownloaderConfig *_config;
    NSOperationQueue *_operationQueue;
    NSHashTable *_subscribers;
    NSMutableArray *_toBeNotifiedEffectIds;
    NSTimer *_notifyTimer;
    double _checkUpdatePannelDuration;
    double _downloadEffectDuration;
}

@property (retain, nonatomic) CKBeautyDownloaderConfig *config;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSHashTable *subscribers;
@property (retain, nonatomic) NSMutableArray *toBeNotifiedEffectIds;
@property (retain, nonatomic) NSTimer *notifyTimer;
@property (nonatomic) BOOL needUpdateEffect;
@property (nonatomic) double checkUpdatePannelDuration;
@property (nonatomic) double downloadEffectDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)downloadEffects:(id)arg0 completion:(id /* block */)arg1;
- (id)performanceTrackInfo;
- (void)fetchResponseFromCacheWithCompletion:(id /* block */)arg0;
- (void)downloadEffectListWithCompletion:(id /* block */)arg0 downloadOption:(id)arg1;
- (void)resetPerformanceTrackInfo;
- (BOOL)p_checkShouldIgnoreCacheForRequestOpt;
- (void)p_downloadEffectList:(id /* block */)arg0;
- (id)checkupdateExtraParams;
- (void)setCheckUpdatePannelDuration:(double)arg0;
- (void)setNeedUpdateEffect:(BOOL)arg0;
- (BOOL)responseDataIsUseful:(id)arg0;
- (void)retryDownloadEffectListUsingOnlineLogicWithCompletion:(id /* block */)arg0;
- (void)appendDownloadingTaskWithEffect:(id)arg0 progress:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)toBeNotifiedEffectIds;
- (void)p_updateNotifyTimer;
- (void)readCachedListWithStartTime:(double)arg0 downloadCompletion:(id /* block */)arg1;
- (void)p_notifyDownloadedEffectIds;
- (void)p_downloadEffectList:(id /* block */)arg0 ignoreRequestOpt:(BOOL)arg1;
- (void)setDownloadEffectDuration:(double)arg0;
- (void)p_updateLastABGroup;
- (BOOL)needUpdateEffect;
- (double)checkUpdatePannelDuration;
- (double)downloadEffectDuration;
- (void)checkUpdateAndDownloadListWithCompletion:(id /* block */)arg0 downloadOption:(id)arg1;
- (void)setToBeNotifiedEffectIds:(id)arg0;
- (void)setOperationQueue:(id)arg0;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)subscribers;
- (id)initWithConfig:(id)arg0;
- (id)operationQueue;
- (void)addSubscriber:(id)arg0;
- (id)notifyTimer;
- (void)setNotifyTimer:(id)arg0;
- (void)setSubscribers:(id)arg0;

@end
