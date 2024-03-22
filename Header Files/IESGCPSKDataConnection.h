//
//     Generated by private class-dump
//

@class NSString, IESGCPApi;

@interface IESGCPSKDataConnection : NSObject <IESGCPSKDataConnectionInterface> {
    IESGCPApi *_api;
}

@property (retain, nonatomic) IESGCPApi *api;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)expiredDate;
- (void)triggerDataConnectWithModel:(id)arg0;
- (void)validContext:(id)arg0;
- (void)fetch:(id)arg0 completion:(id /* block */)arg1;
- (id)validLiveSceneParamsWithContext:(id)arg0;
- (id)validVideoSceneParamsWithContext:(id)arg0;
- (BOOL)shouldTriggerDataConnectionWithModel:(id)arg0;
- (void)writeTriggerActionCacheWithModel:(id)arg0;
- (void)reportEventForModel:(id)arg0 gamesMonitorInfo:(id)arg1;
- (id)cacheKeyForModel:(id)arg0;
- (id)watchContentKeyWithModel:(id)arg0;
- (id)watchContentCacheWithModel:(id)arg0;
- (BOOL)isActionCacheConditionSuccessWithModel:(id)arg0;
- (BOOL)isWatchActionForModel:(id)arg0;
- (BOOL)isSingleWatchDurationLimitConditionSuccessWithModel:(id)arg0;
- (BOOL)isAllWatchContentLimitConditionSuccessWithModel:(id)arg0;
- (void)writeWatchContentWithModel:(id)arg0;
- (id)requestParamsForModel:(id)arg0;
- (id)eventNameForModel:(id)arg0;
- (id)reportParamsForModel:(id)arg0 gameMonitorInfo:(id)arg1;
- (void)removeWatchContentWithModel:(id)arg0;
- (void).cxx_destruct;
- (id)api;
- (void)setApi:(id)arg0;

@end
