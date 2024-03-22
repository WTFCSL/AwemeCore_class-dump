//
//     Generated by private class-dump
//

@class HTSLiveToolbarItem, NSDictionary, BDSCDownloadXsgGuideView, IESLiveAirPlayStore, UIView, HTSLiveApi, UIButton, UILongPressGestureRecognizer, IESLiveWebpLoadingView, BDSCUISettingModel, IESLivePopupItem, IESLiveAirplayTrack, NSString;
@protocol IESLiveSubscription, BDByteScreenCastLivePlayerControlViewProtocol;

@interface IESLiveByteCastFragment : IESLiveRoomComponent <HTSLiveStreamPlayerAction, IESLiveStreamResolutionActions, IESLivePaidStreamAction, IESScreenCastDelegate, HTSLiveAudienceActions, IESLiveGameDanmukuSettingAction, IESLiveByteCastProvider, HTSLiveMessageSubscriber, IESLivePublicScreenLayoutSubscriber, IESLiveExplainRoomAction, IESLiveAutoRotateAction, IESLiveRevenueInteractAction> {
    BOOL _inPaywallRoom;
    BOOL _onlyXiGuaTV;
    BOOL _didPauseOnLive;
    BOOL _didChangeVolumeWhenCasting;
    BOOL _isComponentShowing;
    BOOL _isComponentUsing;
    BOOL _castDanmakuEnable;
    BOOL _deviceSupportDanmaku;
    BOOL _didOnTV;
    BOOL _didChangeCamera;
    BOOL _needShowSearchViewAfterForceUpdateToPortrait;
    BOOL _needShowXsgGuideViewAfterForceUpdateToPortrait;
    BOOL _didChangResolution;
    BOOL _hasShowPlayerView;
    BOOL _isCastDanmakuStatus;
    BOOL _islandScapePanelV2Style;
    BOOL _isCastClicked;
    BOOL _isRefreshingURL;
    UIButton *_portraitButton;
    HTSLiveToolbarItem *_landscapeButtonItem;
    HTSLiveToolbarItem *_screenCastButtonItem;
    HTSLiveToolbarItem *_snapshotItem;
    BDSCDownloadXsgGuideView *_xsgGuideView;
    BDSCUISettingModel *_uiSettingsModel;
    long long _orientation;
    HTSLiveApi *_paywallApi;
    IESLiveAirplayTrack *_tracker;
    IESLiveAirPlayStore *_store;
    id<IESLiveSubscription> _fetchStreamDataSubscription;
    id<IESLiveSubscription> _fetchStreamDataForPreloadSubscription;
    id<IESLiveSubscription> _fetchStreamDataForPreRedirectSubscription;
    id<IESLiveSubscription> _mediaSizeSubscription;
    IESLivePopupItem *_controlViewPopupItem;
    IESLivePopupItem *_guideViewPopupItem;
    IESLiveWebpLoadingView *_loadingView;
    IESLiveWebpLoadingView *_newLoadingView;
    UIView<BDByteScreenCastLivePlayerControlViewProtocol> *_livePlayControlView;
    UIView *_refreshItemView;
    UIView *_feedbackItemView;
    UILongPressGestureRecognizer *_debugGesture;
    NSDictionary *_uiSetting;
    double _messageListHeight;
    unsigned long long _screencastVideoStyle;
}

@property (retain, nonatomic) UIButton *portraitButton;
@property (retain, nonatomic) HTSLiveToolbarItem *landscapeButtonItem;
@property (retain, nonatomic) HTSLiveToolbarItem *screenCastButtonItem;
@property (retain, nonatomic) HTSLiveToolbarItem *snapshotItem;
@property (retain, nonatomic) BDSCDownloadXsgGuideView *xsgGuideView;
@property (retain, nonatomic) BDSCUISettingModel *uiSettingsModel;
@property (nonatomic) long long orientation;
@property (nonatomic) BOOL inPaywallRoom;
@property (retain, nonatomic) HTSLiveApi *paywallApi;
@property (nonatomic) BOOL onlyXiGuaTV;
@property (nonatomic) BOOL didPauseOnLive;
@property (nonatomic) BOOL didChangeVolumeWhenCasting;
@property (retain, nonatomic) IESLiveAirplayTrack *tracker;
@property (retain, nonatomic) IESLiveAirPlayStore *store;
@property (nonatomic) BOOL isComponentShowing;
@property (nonatomic) BOOL isComponentUsing;
@property (retain, nonatomic) id<IESLiveSubscription> fetchStreamDataSubscription;
@property (retain, nonatomic) id<IESLiveSubscription> fetchStreamDataForPreloadSubscription;
@property (retain, nonatomic) id<IESLiveSubscription> fetchStreamDataForPreRedirectSubscription;
@property (retain, nonatomic) id<IESLiveSubscription> mediaSizeSubscription;
@property (retain, nonatomic) IESLivePopupItem *controlViewPopupItem;
@property (retain, nonatomic) IESLivePopupItem *guideViewPopupItem;
@property (retain, nonatomic) IESLiveWebpLoadingView *loadingView;
@property (retain, nonatomic) IESLiveWebpLoadingView *newLoadingView;
@property (retain, nonatomic) UIView<BDByteScreenCastLivePlayerControlViewProtocol> *livePlayControlView;
@property (retain, nonatomic) UIView *refreshItemView;
@property (retain, nonatomic) UIView *feedbackItemView;
@property (retain, nonatomic) UILongPressGestureRecognizer *debugGesture;
@property (copy, nonatomic) NSDictionary *uiSetting;
@property (nonatomic) double messageListHeight;
@property (nonatomic) BOOL castDanmakuEnable;
@property (nonatomic) BOOL deviceSupportDanmaku;
@property (nonatomic) BOOL didOnTV;
@property (nonatomic) BOOL didChangeCamera;
@property (nonatomic) BOOL needShowSearchViewAfterForceUpdateToPortrait;
@property (nonatomic) BOOL needShowXsgGuideViewAfterForceUpdateToPortrait;
@property (nonatomic) BOOL didChangResolution;
@property (nonatomic) BOOL hasShowPlayerView;
@property (nonatomic) BOOL isCastDanmakuStatus;
@property (nonatomic) unsigned long long screencastVideoStyle;
@property (nonatomic) BOOL islandScapePanelV2Style;
@property (nonatomic) BOOL isCastClicked;
@property (nonatomic) BOOL isRefreshingURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)arg0;

- (void)componentDidAppear;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })playerFrame;
- (BOOL)isScreenCasting;
- (void)seekToProgress:(double)arg0;
- (BOOL)needShowSearchViewAfterForceUpdateToPortrait;
- (void)setNeedShowSearchViewAfterForceUpdateToPortrait:(BOOL)arg0;
- (void)componentBindService;
- (void)componentCreate;
- (void)componentUnmount;
- (void)updateScreenCastConfig:(BOOL)arg0;
- (void)removeControlView:(id)arg0;
- (void)showControlView:(id)arg0;
- (void)setUiSettingsModel:(id)arg0;
- (id)uiSetting;
- (void)updateControlViewFrame;
- (void)castPlayProgressInfoChanged:(id)arg0;
- (void)castPlayStatusChanged:(unsigned long long)arg0;
- (BOOL)didChangeCamera;
- (void)remoteRoomDataReady:(id)arg0;
- (void)componentOrientationChanged:(long long)arg0;
- (void)liveWillFinished;
- (void)handleOrientationChanged:(long long)arg0;
- (void)paidStreamTrialDidPromised:(long long)arg0;
- (void)startRevenueInteractWithScene:(unsigned long long)arg0;
- (void)playerFrameDidChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)onStreamPlay;
- (void)onCameraWillChangeTo:(id)arg0 source:(long long)arg1;
- (void)onCameraDidChangeTo:(id)arg0 source:(long long)arg1;
- (void)registerObserve;
- (id)uiSettingsModel;
- (BOOL)supportClarityLimit;
- (void)connectToDevice:(id)arg0 onError:(id)arg1;
- (void)didConnectToDevice:(id)arg0;
- (void)castPlayDidClosed;
- (void)startConnectToDevice:(id)arg0;
- (void)disConnectToDevice:(id)arg0;
- (void)castPlayClarityDidChanged:(id)arg0;
- (void)castPlayClarityChooseButtonClicked;
- (void)castControlViewDanmakuButtonClicked:(id)arg0;
- (void)castPlayAttemptToShowToastWithTitle:(id)arg0;
- (void)castPlayNotSupportClarity:(id)arg0;
- (BOOL)supportPreRedirect;
- (void)setUiSetting:(id)arg0;
- (void)hideComponent;
- (BOOL)isLandscapeStream;
- (BOOL)enableSeek;
- (void)setDidChangeCamera:(BOOL)arg0;
- (void)searchViewWillShow;
- (void)seekLiveToNewest;
- (double)messageListHeight;
- (void)publicScreenLayoutChanged:(id)arg0 forType:(unsigned long long)arg1;
- (void)hideComponentsForPortrait;
- (void)showComponentsForPortrait;
- (void)showComponent;
- (void)componentOrientationTransitioning:(long long)arg0;
- (void)componentOrientationTransitionBegin:(long long)arg0;
- (void)animationForAutoRotateToOrientation:(long long)arg0 duration:(double)arg1 size:(struct CGSize { double x0; double x1; })arg2;
- (void)didAutoRotateToOrientation:(long long)arg0 size:(struct CGSize { double x0; double x1; })arg1;
- (void)lockControlView;
- (void)unLockControlView;
- (BOOL)isXsgSupportSeek;
- (BOOL)canCastDanmaku;
- (void)airplayStateDidChange:(BOOL)arg0;
- (void)onAirplayProgressUpdate:(double)arg0 duration:(double)arg1;
- (void)willChangeStreamResolution;
- (void)didChangeStreamResolution;
- (void)failedToChangeStreamResolution;
- (BOOL)supportScreenCastInRoom;
- (void)forceUpdateToPortraitInterceptWithCompletion:(id /* block */)arg0;
- (BOOL)isCastDanmakuStatus;
- (BOOL)castDanmakuEnable;
- (void)showAirplayDeviceList;
- (BOOL)onlyXiGuaTV;
- (void)setOnlyXiGuaTV:(BOOL)arg0;
- (void)areaTypeChanged:(long long)arg0;
- (void)fontSizeTypeChanged:(long long)arg0;
- (void)alphaPercentValueChanged:(long long)arg0;
- (void)settingReseted;
- (BOOL)liveDidOnTV;
- (void)explainRoomCameraFirstChanged:(BOOL)arg0;
- (void)setComponentShowingIfNeeded;
- (void)setIslandScapePanelV2Style:(BOOL)arg0;
- (void)setInPaywallRoom:(BOOL)arg0;
- (void)configDanmakuSwitch;
- (void)checkCastScreenState;
- (void)updateTraceLogInfo;
- (BOOL)castDanmakuShouldShow;
- (void)setIsComponentUsing:(BOOL)arg0;
- (void)preSearchDeviceIfNeeded;
- (id)mediaSizeSubscription;
- (BOOL)inPaywallRoom;
- (void)setMediaSizeSubscription:(id)arg0;
- (BOOL)isComponentUsing;
- (BOOL)didChangeVolumeWhenCasting;
- (BOOL)enableCastScreen;
- (BOOL)needShowXsgGuideViewAfterForceUpdateToPortrait;
- (void)setNeedShowXsgGuideViewAfterForceUpdateToPortrait:(BOOL)arg0;
- (void)showXsgGuideView;
- (void)loadScreenCastItemAtMoreGroup;
- (void)removeScreenCastItemAtMoreGroup;
- (void)showPortraitButtonIfNeeded;
- (void)updateLandscapeToolBarItems;
- (void)removePortraitButton;
- (void)removeLandscapeScreenCastItem;
- (void)setIsComponentShowing:(BOOL)arg0;
- (long long)castScreenExplicit;
- (BOOL)hasShowPlayerView;
- (id)portraitButton;
- (BOOL)judgeVisibleForPortraitButton;
- (void)trackLiveSceneCastEvent:(id)arg0 extraParams:(id)arg1;
- (BOOL)shouldPortraitIconUseNewStyle;
- (BOOL)isComponentShowing;
- (BOOL)disableEnterScreenCast;
- (void)trackScreenCastClickEvent:(BOOL)arg0;
- (void)trackScreenCastInterceptWith:(id)arg0;
- (id)permissionToastString;
- (void)castButtonDidClick;
- (void)setLandscapeButtonItem:(id)arg0;
- (id)screenCastButtonItem;
- (void)setScreenCastButtonItem:(id)arg0;
- (BOOL)canExposure;
- (void)setIsCastClicked:(BOOL)arg0;
- (void)preloadCastMeida;
- (void)preRedirectCastMedia;
- (BOOL)isCastClicked;
- (void)updateScreenCastItemWithStatus:(unsigned long long)arg0;
- (void)refreshCastItemUrl;
- (BOOL)islandScapePanelV2Style;
- (id)newLoadingView;
- (BOOL)castDanmakuAuth;
- (void)setScreencastVideoStyle:(unsigned long long)arg0;
- (id)fetchStreamDataSubscription;
- (id)generatePlayItemWithUrlArray:(id)arg0;
- (BOOL)isRefreshingURL;
- (id)generateDanmakuSetting;
- (void)callAirPlayStart;
- (void)setIsRefreshingURL:(BOOL)arg0;
- (void)setFetchStreamDataSubscription:(id)arg0;
- (id)fetchStreamDataForPreloadSubscription;
- (void)setFetchStreamDataForPreloadSubscription:(id)arg0;
- (id)fetchStreamDataForPreRedirectSubscription;
- (void)setFetchStreamDataForPreRedirectSubscription:(id)arg0;
- (id)xsgGuideView;
- (void)setDidChangeVolumeWhenCasting:(BOOL)arg0;
- (void)setHasShowPlayerView:(BOOL)arg0;
- (void)setCastDanmakuEnable:(BOOL)arg0;
- (void)setDidOnTV:(BOOL)arg0;
- (BOOL)didOnTV;
- (id)paywallApi;
- (void)setPaywallApi:(id)arg0;
- (void)setupCastPlayItem;
- (void)updateDanmakuButtonStateWith:(BOOL)arg0;
- (id)livePlayControlView;
- (BOOL)deviceSupportDanmaku;
- (void)setSnapshotItem:(id)arg0;
- (id)snapshotItem;
- (void)setLivePlayControlView:(id)arg0;
- (void)setControlViewPopupItem:(id)arg0;
- (void)updateDanmakuButtonState;
- (void)setIsCastDanmakuStatus:(BOOL)arg0;
- (void)updateDanmakuPanel:(BOOL)arg0;
- (id)debugGesture;
- (void)debugControlViewLongPress:(id)arg0;
- (void)setDebugGesture:(id)arg0;
- (id)controlViewPopupItem;
- (void)removeOtherToolBarItemsWhenScreenCastBegin;
- (void)showLandscapeToolBarItems;
- (void)removeLandscapeToolBarItems;
- (void)showLandscapeScreenCastItem;
- (void)addOtherToolBarItemsWhenScreenCastEnd;
- (id)refreshItemView;
- (id)feedbackItemView;
- (void)setGuideViewPopupItem:(id)arg0;
- (id)guideViewPopupItem;
- (void)setXsgGuideView:(id)arg0;
- (void)tryPausePlayer;
- (void)updateCastDanmakuEnable:(BOOL)arg0;
- (void)sendCastDanmakuSetting;
- (void)updateCastScreenExplicit:(long long)arg0;
- (void)setDeviceSupportDanmaku:(BOOL)arg0;
- (void)callAirPlayPlay;
- (BOOL)didPauseOnLive;
- (BOOL)didChangResolution;
- (void)setDidPauseOnLive:(BOOL)arg0;
- (void)setDidChangResolution:(BOOL)arg0;
- (void)callAirPlayPause;
- (void)resumePlayer;
- (void)resetScreenCastItem;
- (void)removeXsgGuideView;
- (void)callAirplayClose;
- (void)setMessageListHeight:(double)arg0;
- (void)trackEvent:(id)arg0 params:(id)arg1 logDesc:(id)arg2;
- (void)liveCastButtonDidClick;
- (void)castExtraParams:(id)arg0 complectionBlock:(id /* block */)arg1;
- (void)fetchPaywallStreamWithCallback:(id /* block */)arg0;
- (void)setPortraitButton:(id)arg0;
- (id)landscapeButtonItem;
- (void)setNewLoadingView:(id)arg0;
- (void)setRefreshItemView:(id)arg0;
- (void)setFeedbackItemView:(id)arg0;
- (unsigned long long)screencastVideoStyle;
- (id)tracker;
- (void)setTracker:(id)arg0;
- (void).cxx_destruct;
- (id)store;
- (long long)orientation;
- (void)setStore:(id)arg0;
- (void)setOrientation:(long long)arg0;
- (BOOL)isPlaying;
- (void)play;
- (void)pause;
- (void)messageReceived:(id)arg0;
- (void)showButton;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)removeButton;

@end