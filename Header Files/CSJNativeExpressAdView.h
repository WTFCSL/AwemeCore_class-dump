//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSDate, NSDictionary, CSJPlayerTimeObserverModel, UIViewController, UIButton, UIView, CSJViewShowAreaTracker, NSString, CSJRenderEngine, CSJAdInfoViewModel, CSJNativeAd, CSJPlayer, CSJDislikeContext;
@protocol CSJNativeExpressAdViewDelegate, CSJNativeExpressAdViewDismissDelegate, CSJImmersiveMiddleExpressDelegate;

@interface CSJNativeExpressAdView : CSJAdBaseView <BUVideoPlayerDelegate, CSJRenderEngineDelegate, BUWebViewDelegate, CSJNativeAdDelegate, CSJAdClientBiddingProtocol> {
    UIViewController *_rootViewController;
    BOOL _isReady;
    BOOL _isAutoPresentAppStore;
    BOOL _isShowing;
    BOOL _haveBecomeVisiable;
    BOOL _liveAdJumped;
    BOOL _validImmersiveExpressView;
    BOOL _storeKitOpened;
    BOOL _hasStartRender;
    BOOL _isRenderSuccess;
    CSJDislikeContext *_dislikeContext;
    double _viewDidAllVisibleTime;
    NSDate *_didEnterBackgroundDate;
    NSDate *_willEnterForegroundDate;
    CSJViewShowAreaTracker *_areaTracker;
    CSJPlayerTimeObserverModel *_playerTimeObserverModel;
    long long _convertActionType;
    id<CSJImmersiveMiddleExpressDelegate> _middleExpressDelegate;
    NSDictionary *_relatedMaterialMetaJSON;
    NSMutableDictionary *_relatedAdAppsID;
    CSJRenderEngine *_renderEngine;
    CSJNativeAd *_nativeAd;
    id<CSJNativeExpressAdViewDelegate> _expressAdViewDelegate;
    id<CSJNativeExpressAdViewDismissDelegate> _expressAdViewDismissDelegate;
    long long _userBehaviorType;
    NSDictionary *_clickInfo;
    NSString *_clickAreaType;
    NSString *_clickAreaId;
    NSDictionary *_rectInfo;
    long long _areaType;
    long long _clickAreaCategory;
    long long _nativeExpressAdViewSource;
    double _renderTimeout;
    CSJAdInfoViewModel *_infoViewModel;
    UIButton *_closeButton;
    long long _renderIndex;
    NSDictionary *_adAnalysisData;
    id /* block */ _renderFinishBlock;
    id /* block */ _renderFailBlock;
    UIView *_successView;
}

@property (retain, nonatomic) CSJPlayer *player;
@property (nonatomic) BOOL hasPlayedFinish;
@property (nonatomic) BOOL hasPlayed;
@property (nonatomic) BOOL playingOnline;
@property (nonatomic) BOOL isDefaltState;
@property (readonly, nonatomic) long long realVideoDuration;
@property (copy, nonatomic) NSDictionary *js2NativeParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) CSJDislikeContext *dislikeContext;
@property (nonatomic) BOOL isAutoPresentAppStore;
@property (nonatomic) double viewDidAllVisibleTime;
@property (retain, nonatomic) NSDate *didEnterBackgroundDate;
@property (retain, nonatomic) NSDate *willEnterForegroundDate;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL haveBecomeVisiable;
@property (nonatomic) BOOL liveAdJumped;
@property (retain, nonatomic) CSJViewShowAreaTracker *areaTracker;
@property (retain, nonatomic) CSJPlayerTimeObserverModel *playerTimeObserverModel;
@property (nonatomic) long long convertActionType;
@property (nonatomic) BOOL validImmersiveExpressView;
@property (weak, nonatomic) id<CSJImmersiveMiddleExpressDelegate> middleExpressDelegate;
@property (copy, nonatomic) NSDictionary *relatedMaterialMetaJSON;
@property (retain, nonatomic) NSMutableDictionary *relatedAdAppsID;
@property (retain, nonatomic) CSJRenderEngine *renderEngine;
@property (retain, nonatomic) CSJNativeAd *nativeAd;
@property (nonatomic) BOOL isReady;
@property (weak, nonatomic) id<CSJNativeExpressAdViewDelegate> expressAdViewDelegate;
@property (weak, nonatomic) id<CSJNativeExpressAdViewDismissDelegate> expressAdViewDismissDelegate;
@property (nonatomic) long long userBehaviorType;
@property (copy, nonatomic) NSDictionary *clickInfo;
@property (copy, nonatomic) NSString *clickAreaType;
@property (copy, nonatomic) NSString *clickAreaId;
@property (copy, nonatomic) NSDictionary *rectInfo;
@property (nonatomic) long long areaType;
@property (nonatomic) long long clickAreaCategory;
@property (nonatomic) BOOL storeKitOpened;
@property (nonatomic) long long nativeExpressAdViewSource;
@property (nonatomic) double renderTimeout;
@property (nonatomic) BOOL hasStartRender;
@property (readonly, nonatomic) BOOL renderDynamicTemplate;
@property (nonatomic) BOOL isRenderSuccess;
@property (retain, nonatomic) CSJAdInfoViewModel *infoViewModel;
@property (retain, nonatomic) UIButton *closeButton;
@property (readonly, nonatomic) long long currentDynamicShowType;
@property (nonatomic) long long renderIndex;
@property (copy, nonatomic) NSDictionary *adAnalysisData;
@property (copy, nonatomic) id /* block */ renderFinishBlock;
@property (copy, nonatomic) id /* block */ renderFailBlock;
@property (retain, nonatomic) UIView *successView;
@property (readonly, copy, nonatomic) NSDictionary *mediaExt;
@property (readonly, nonatomic) long long videoDuration;
@property (readonly, nonatomic) double currentPlayedTime;
@property (weak, nonatomic) UIViewController *rootViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsShowing:(BOOL)arg0;
- (double)currentPlayTime;
- (id)clickInfo;
- (void)setClickInfo:(id)arg0;
- (void)setClickAreaCategory:(long long)arg0;
- (long long)convertActionType;
- (void)setConvertActionType:(long long)arg0;
- (id)infoViewModel;
- (void)setRelatedMaterialMetaJSON:(id)arg0;
- (void)fireEventRelatedMaterialMeta;
- (long long)renderIndex;
- (id)relatedMaterialMetaJSON;
- (long long)nativeExpressAdViewSource;
- (void)setInfoViewModel:(id)arg0;
- (void)setNativeAd:(id)arg0;
- (id)nativeAd;
- (void)setValidImmersiveExpressView:(BOOL)arg0;
- (void)setMiddleExpressDelegate:(id)arg0;
- (void)nativeAdDidBecomeVisible:(id)arg0;
- (id)areaTracker;
- (void)setAreaTracker:(id)arg0;
- (void)setDidEnterBackgroundDate:(id)arg0;
- (void)setWillEnterForegroundDate:(id)arg0;
- (double)viewDidAllVisibleTime;
- (void)setViewDidAllVisibleTime:(double)arg0;
- (id)adAnalysisData;
- (long long)currentDynamicShowType;
- (id)dislikeContext;
- (void)setDislikeContext:(id)arg0;
- (double)innerTotalPlayTime;
- (void)win:(id)arg0;
- (void)loss:(id)arg0 lossReason:(id)arg1 winBidder:(id)arg2;
- (void)nativeAd:(id)arg0 dislikeWithReason:(id)arg1;
- (void)nativeAd:(id)arg0 adContainerViewDidRemoved:(id)arg1;
- (id)mediaExt;
- (id)getAdCreativeToken;
- (void)setIsDefaltState:(BOOL)arg0;
- (BOOL)isDefaltState;
- (void)handleChangeVideoStateWithParams:(id)arg0;
- (void)handleVideoTransformWithParams:(id)arg0;
- (void)setJs2NativeParam:(id)arg0;
- (void)reportLabel:(id)arg0 adExtraDataType:(long long)arg1 skipType:(long long)arg2;
- (id)getAdExtraDataDict:(long long)arg0 skipType:(long long)arg1;
- (void)setNativeExpressAdViewSource:(long long)arg0;
- (void)setHasStartRender:(BOOL)arg0;
- (BOOL)_shouldInitPlayer;
- (void)setRenderEngine:(id)arg0;
- (void)addReachabilityNotification;
- (void)_reportExpressAdShowWithBool:(BOOL)arg0;
- (void)p_stopWebMotionObserver;
- (void)render_internal;
- (BOOL)hasStartRender;
- (void)setHaveBecomeVisiable:(BOOL)arg0;
- (void)_internal_visiable;
- (void)safeDelegate_nativeExpressAdViewWillShow:(id)arg0;
- (id)didEnterBackgroundDate;
- (id)willEnterForegroundDate;
- (void)safeDelegate_nativeExpressAdView:(id)arg0 dislikeWithReason:(id)arg1;
- (void)safeDelegate_nativeExpressAdViewDidRemoved:(id)arg0;
- (void)handleClickEventIsVideoClicked:(BOOL)arg0 isEndcardClicked:(BOOL)arg1 clickExtraInfo:(id)arg2;
- (void)safeDelegate_nativeExpressAdViewWillPresentScreen:(id)arg0;
- (void)startHandleClickEventIsVideoClicked:(BOOL)arg0 isEndcardClicked:(BOOL)arg1 clickExtraInfo:(id)arg2 model:(id)arg3;
- (void)safeDelegate_nativeExpressAdViewWillDismiss:(id)arg0;
- (void)safeDelegate_nativeExpressAdViewDismiss:(id)arg0;
- (void)handleClickEventIsVideoClicked:(BOOL)arg0 isEndcardClicked:(BOOL)arg1 clickExtraInfo:(id)arg2 model:(id)arg3;
- (void)safeDelegate_nativeExpressAdViewDidCloseOtherController:(id)arg0 interactionType:(long long)arg1;
- (long long)clickAreaCategory;
- (BOOL)shouldControlFromWeb:(id)arg0;
- (id)getAdExtraDataDic;
- (BOOL)liveAdJumped;
- (void)setLiveAdJumped:(BOOL)arg0;
- (BOOL)isAutoPresentAppStore;
- (void)setIsAutoPresentAppStore:(BOOL)arg0;
- (void)safeDelegate_nativeExpressAdViewDidClick:(id)arg0;
- (void)p_restartWebMotionObserver;
- (long long)realVideoDuration;
- (void)receiveEnterBackgroundNotification:(id)arg0;
- (id)clickAreaType;
- (long long)userBehaviorType;
- (id)clickAreaId;
- (id)rectInfo;
- (void)safeDelegate_nativeExpressAdViewRenderFail:(id)arg0 error:(id)arg1;
- (void)setIsRenderSuccess:(BOOL)arg0;
- (id /* block */)renderFailBlock;
- (void)_update_playerView_gaosi;
- (void)videoViewTapped:(id)arg0;
- (void)safeDelegate_nativeExpressAdViewRenderSuccess:(id)arg0;
- (id /* block */)renderFinishBlock;
- (BOOL)haveBecomeVisiable;
- (double)renderTimeout;
- (void)pbu_clickEventWithRenderInteractionModel:(id)arg0 clickExtraInfo:(id)arg1;
- (void)jsCallNative_muteVideoWithParams:(id)arg0;
- (void)jsCallNative_skipVideo;
- (void)jsCallNative_changeVideoStateWithParams:(id)arg0;
- (id)jsCallNative_getCurrentVideoState;
- (id)jsCallNative_getMaterialMetaWithParams:(id)arg0;
- (void)jsCallNative_immersiveVideoPageBack;
- (void)jsCallNative_startVideoTransformWithParams:(id)arg0;
- (void)handleDislikeEvent;
- (id)interactiveStart:(id)arg0;
- (id)interactiveFinished:(id)arg0;
- (void)setAdAnalysisData:(id)arg0;
- (id)handleRequestVideoPause:(id)arg0;
- (void)setClickAreaType:(id)arg0;
- (void)setClickAreaId:(id)arg0;
- (void)setRectInfo:(id)arg0;
- (void)setUserBehaviorType:(long long)arg0;
- (BOOL)validImmersiveExpressView;
- (void)handleMiddlePageClickEventWithParams:(id)arg0;
- (void)handleHalfShowAppStoreWithResult:(id)arg0;
- (void)safeDelegate_immersiveMiddleExpressPageBack;
- (id)relatedAdAppsID;
- (void)safeDelegate_immersiveMiddleExpressClickWithMaterial:(id)arg0;
- (id)expressAdViewDelegate;
- (id)expressAdViewDismissDelegate;
- (id)middleExpressDelegate;
- (void)startHandleClickEventIsVideoClicked:(BOOL)arg0 isEndcardClicked:(BOOL)arg1 clickExtraInfo:(id)arg2;
- (void)showRewardAgainEntrance;
- (void)setRelatedAdAppsID:(id)arg0;
- (void)setExpressAdViewDelegate:(id)arg0;
- (void)setRenderTimeout:(double)arg0;
- (BOOL)isRenderSuccess;
- (void)bannerCarouselAction;
- (void)pauseWithIsFromNativeDynamic:(BOOL)arg0;
- (void)setExpressAdViewDismissDelegate:(id)arg0;
- (void)setRenderFinishBlock:(id /* block */)arg0;
- (void)setRenderFailBlock:(id /* block */)arg0;
- (BOOL)renderNative;
- (double)currentPlayedTime;
- (void)handleClickEventIsVideoClicked:(BOOL)arg0 isEndcardClicked:(BOOL)arg1;
- (void)handleClickCallback;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 nativeAd:(id)arg1 nativeExpressAdViewSource:(long long)arg2;
- (void)_initPlayer;
- (void)setPlayerTimeObserverModel:(id)arg0;
- (id)playerTimeObserverModel;
- (void)startPlayVideo;
- (BOOL)playingOnline;
- (void)continuePlay;
- (void)setIsJSBPauseVideo:(BOOL)arg0;
- (void)receiveWillEnterForegroundNotification;
- (void)setStoreKitOpened:(BOOL)arg0;
- (void)receiveEnterBackgroundNotification;
- (void)receiveWillTerminateNotification;
- (void)handleSkipVideo:(id)arg0;
- (void)handleSkipVideo;
- (void)jsCallNative_handleInterstitialWebviewClose;
- (void)reportLabel:(id)arg0 adExtraDataType:(long long)arg1;
- (void)showDislikeHUD;
- (id)renderEngine;
- (void)setHasPlayed:(BOOL)arg0;
- (void)setHasPlayedFinish:(BOOL)arg0;
- (id)js2NativeParam;
- (void)setPlayingOnline:(BOOL)arg0;
- (BOOL)storeKitOpened;
- (BOOL)isJSBPauseVideo;
- (BOOL)hasPlayedFinish;
- (void)handleInvalidVideoUrl;
- (void)openPlayable;
- (id)jsCallNative_getPlayTimeCurrent;
- (id)handleInteractiveStart:(id)arg0;
- (id)handleInteractiveFinished:(id)arg0;
- (id)handleInteractiveEnd;
- (BOOL)renderDynamicTemplate;
- (void)handleClickEventInvideo:(id)arg0;
- (void)registregistReachability;
- (void)safeDelegate_nativeExpressAdView:(id)arg0 stateDidChanged:(long long)arg1;
- (void)safeDelegate_nativeExpressAdViewPlayerDidPlayFinish:(id)arg0 error:(id)arg1;
- (void)audioSessionHandleWithMute:(BOOL)arg0;
- (void)renderEngine:(id)arg0 successView:(id)arg1 error:(id)arg2;
- (double)renderTimeoutInRenderEngine:(id)arg0;
- (long long)playPercentInRenderEngine:(id)arg0;
- (id)renderEngine:(id)arg0 renderInteractionModel:(id)arg1 clickExtraInfo:(id)arg2;
- (void)renderEngine:(id)arg0 report_webview_time_trackWithParams:(id)arg1;
- (void)renderEngine:(id)arg0 reportError:(id)arg1;
- (void)renderEngine:(id)arg0 reportLabel:(id)arg1;
- (id)nativeAdInRenderEngine:(id)arg0;
- (void)receiveWillEnterForegroundNotification:(id)arg0;
- (id)c_xyDict;
- (void)tapAdLogo;
- (id)getTrackTag;
- (void)setRenderIndex:(long long)arg0;
- (void)setRootViewController:(id)arg0;
- (id)rootViewController;
- (BOOL)mute;
- (void)willMoveToSuperview:(id)arg0;
- (void)_applicationDidEnterBackground;
- (BOOL)isMemberOfClass:(Class)arg0;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:(Class)arg0;
- (void)_applicationWillEnterForeground;
- (BOOL)isReady;
- (void)close;
- (void)stop;
- (void)didMoveToSuperview;
- (BOOL)isShowing;
- (void)setPlayer:(id)arg0;
- (void)didMoveToWindow;
- (void)connectionChanged:(id)arg0;
- (long long)videoDuration;
- (void)dealloc;
- (void)play;
- (void)willMoveToWindow:(id)arg0;
- (void)pause;
- (void)setMute:(BOOL)arg0;
- (void)replay;
- (id)player;
- (void)setIsReady:(BOOL)arg0;
- (void)render;
- (void)setPrice:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (void)_applicationDidBecomeActive;
- (void)applicationWillTerminateNotification:(id)arg0;
- (BOOL)hasPlayed;
- (long long)areaType;
- (void)setAreaType:(long long)arg0;
- (id)successView;
- (void)setSuccessView:(id)arg0;

@end