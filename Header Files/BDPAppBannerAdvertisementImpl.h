//
//     Generated by private class-dump
//

@class NSPointerArray, BDPUniqueID, NSString;

@interface BDPAppBannerAdvertisementImpl : NSObject <BDARVBannerDelegate, BDARVCardViewContainerDelegate, BDPPluginAppAdvertisementBannerImplProtocol> {
    BOOL _isEnterBackground;
    NSPointerArray *_adContainer;
    BDPUniqueID *_uniqueID;
}

@property (nonatomic) BOOL isEnterBackground;
@property (retain, nonatomic) NSPointerArray *adContainer;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (BOOL)isEnterBackground;
- (void)setIsEnterBackground:(BOOL)arg0;
- (void)banner:(id)arg0 didClickButtonWithInfo:(id)arg1;
- (void)bannerWillStartLoad:(id)arg0;
- (void)banner:(id)arg0 didLoadFailWithError:(id)arg1;
- (void)bannerDidLoadSuccess:(id)arg0;
- (void)banner:(id)arg0 didContentResize:(struct CGSize { double x0; double x1; })arg1;
- (void)banner:(id)arg0 didClickBannerWithInfo:(id)arg1;
- (void)banner:(id)arg0 didClickCloseWithInfo:(id)arg1;
- (void)cardViewContainerDidLoadFailWithError:(id)arg0 error:(id)arg1;
- (void)cardViewContainerDidLoadSuccess:(id)arg0;
- (void)cardViewContainer:(id)arg0 didContentResize:(struct CGSize { double x0; double x1; })arg1 info:(id)arg2;
- (void)cardViewContainer:(id)arg0 didClickCardViewWithInfo:(id)arg1 completed:(id /* block */)arg2;
- (void)cardViewContainer:(id)arg0 didClickCloseWithInfo:(id)arg1;
- (id)adContainer;
- (void)_stopTimerForBanner:(id)arg0;
- (void)_startTimerForBannerIfNeed:(id)arg0;
- (void)_stopOrStartBannerAdTimer:(BOOL)arg0;
- (void)setAdContainer:(id)arg0;
- (void)insertAdContainerWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)updateAdContainerWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)removeAdContainerWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)_insertBannerWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)_insertFeedWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)_onStateAdErrorWithAdUnitID:(id)arg0 pageId:(long long)arg1 error:(id)arg2 errorCode:(long long)arg3 errorType:(id)arg4;
- (void)_refreshCardViewVisibleState:(id)arg0;
- (id)_feedADModelList:(id)arg0;
- (void)_updateCardViewsVisibleState;
- (BOOL)_getCardOnScreenState:(id)arg0;
- (id)_feedADModelFromBannerStyle:(id)arg0 scaleRate:(double)arg1;
- (void)_advertisementStateChangeWithAdUnitID:(id)arg0 state:(id)arg1 data:(id)arg2 pageId:(long long)arg3;
- (void)_onStateAdClosedWithAdUnitID:(id)arg0 viewId:(id)arg1 pageId:(long long)arg2;
- (void)_onStateAdResizeWithAdUnitID:(id)arg0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1 pageId:(long long)arg2;
- (void)_onStateAdLoadedWithAdUnitID:(id)arg0 pageId:(long long)arg1;
- (void)cardViewContainer:(id)arg0 didClickBannerWithInfo:(id)arg1;
- (void)_setupObserver;
- (id)init;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;
- (void)_enterBackground:(id)arg0;
- (void)_enterForeground:(id)arg0;

@end