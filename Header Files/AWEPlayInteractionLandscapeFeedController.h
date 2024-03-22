//
//     Generated by private class-dump
//

@class NSString, AWELandscapeDanmakuInputEntryView, UIView, AWEPaymentEventHandler, UIViewController;
@protocol AWELandscapeFeedEntryViewProtocol;

@interface AWEPlayInteractionLandscapeFeedController : AWEPlayInteractionBaseController <UIViewControllerTransitioningDelegate, AWELandscapeFeedTransitionAnimatorDataSource, AWELandscapeFeedViewControllerDelegate, AWEPadUIAdaptionViewTransitionObserver, AWEPaymentEventHandlerDelegate, AWEPlayInteractionComponentGlobalPriorityComponentProtocol, AWEPlayInteractionLandscapeFeedControllerProtocol, AWELandscapeTransitionOuterContextProvider> {
    BOOL _isMonitoring;
    BOOL _didAppear;
    BOOL _hadTraceUpdateLandscape;
    BOOL _hasFakeDanmakuSwitch;
    BOOL _hasTrackDanmakuPubShow;
    BOOL _hideByDescriptionLabel;
    BOOL _hideByPaymentMaskView;
    BOOL _danmakuPostPauseVideoPlay;
    BOOL _isHidingTabbar;
    BOOL _isShowingKeyBoard;
    BOOL _isLandscapeEntryWeaking;
    BOOL _isLandscapePaymentMaskShowing;
    BOOL _isShowDanmakuEntryView;
    BOOL _isOverlapWithPlayer;
    UIView<AWELandscapeFeedEntryViewProtocol> *_landscapeEntryView;
    AWELandscapeDanmakuInputEntryView *_danmakuInputEntryView;
    long long _lastDeviceOrientation;
    double _videoRealbottom;
    UIViewController *_rootViewController;
    double _topPadding;
    NSString *_accountType;
    unsigned long long _pauseClearType;
    AWEPaymentEventHandler *_paymentEventHandler;
}

@property (retain, nonatomic) UIView<AWELandscapeFeedEntryViewProtocol> *landscapeEntryView;
@property (retain, nonatomic) AWELandscapeDanmakuInputEntryView *danmakuInputEntryView;
@property (nonatomic) BOOL isMonitoring;
@property (nonatomic) BOOL didAppear;
@property (nonatomic) long long lastDeviceOrientation;
@property (nonatomic) double videoRealbottom;
@property (weak, nonatomic) UIViewController *rootViewController;
@property (nonatomic) BOOL hadTraceUpdateLandscape;
@property (nonatomic) double topPadding;
@property (nonatomic) BOOL hasFakeDanmakuSwitch;
@property (nonatomic) BOOL hasTrackDanmakuPubShow;
@property (copy, nonatomic) NSString *accountType;
@property (nonatomic) BOOL hideByDescriptionLabel;
@property (nonatomic) BOOL hideByPaymentMaskView;
@property (nonatomic) unsigned long long pauseClearType;
@property (nonatomic) BOOL danmakuPostPauseVideoPlay;
@property (nonatomic) BOOL isHidingTabbar;
@property (nonatomic) BOOL isShowingKeyBoard;
@property (nonatomic) BOOL isLandscapeEntryWeaking;
@property (nonatomic) BOOL isLandscapePaymentMaskShowing;
@property (nonatomic) BOOL isShowDanmakuEntryView;
@property (retain, nonatomic) AWEPaymentEventHandler *paymentEventHandler;
@property (nonatomic) BOOL isOverlapWithPlayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPadRotateGuideAdapterClass;

- (void)awe_viewController:(id)arg0 willTransitionToSize:(struct CGSize { double x0; double x1; })arg1 transitionCoordinator:(id)arg2;
- (void)setHide:(BOOL)arg0;
- (void)configBeforEnterToLandscapeFeed;
- (id)aAWEPadModuleAdapter;
- (BOOL)currentDanmakuSwitch;
- (void)updateAllSubViews;
- (void)beginMonitor;
- (void)endMonitor;
- (id)originVideoPlayerContainerView;
- (void)clearScreen:(id)arg0;
- (BOOL)isShowingPanels;
- (id)screenCastControlView;
- (double)currentPlayProgress;
- (long long)lastDeviceOrientation;
- (void)setLastDeviceOrientation:(long long)arg0;
- (void)handleKeyboardDidHideNotification:(id)arg0;
- (void)handleKeyboardWillShowNotification:(id)arg0;
- (BOOL)isFromGeneralSearch;
- (void)removeControllerFromSuperView;
- (void)setDidAppear:(BOOL)arg0;
- (void)handleDanmakuInputViewClick;
- (void)updateScreenCastViewLayout:(id)arg0;
- (id)landscapeTransitionContext;
- (void)willEnterLandscape;
- (void)willExitLandscapeWithModel:(id)arg0 modelList:(id)arg1;
- (void)didExitLandscapeWithFromContext:(id)arg0;
- (double)playerControllerMoveUpOffsetWithModel:(id)arg0;
- (BOOL)useBlackMaskViewWithModel:(id)arg0;
- (BOOL)useBlackMaskViewForFocusView;
- (BOOL)useNewTransition;
- (BOOL)isFromPersonalPage;
- (void)quitFromLandscapeFeed:(id)arg0;
- (void)quitFromLandScapeFeedWithRequestOrder:(BOOL)arg0 requestOrderSchema:(id)arg1;
- (void)quitFromLandScapeWithShouldShowRewardedAdvertising:(BOOL)arg0 params:(id)arg1;
- (void)quitFromLandscapeFeedForPinchView:(id)arg0;
- (void)quitFromLandscapeFeedForPersonalStory:(id)arg0;
- (void)resetSpeedIfNeededForPinchView;
- (void)landscapeCollectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 awemeModel:(id)arg3;
- (unsigned long long)canAutoRotate;
- (void)traceRotateScreen;
- (void)autoEnterLandscapeFeedIfNeeded;
- (void)autoEnterLandscapeFeed;
- (BOOL)isShowingKeyBoard;
- (void)setIsShowingKeyBoard:(BOOL)arg0;
- (id)paymentEventHandler;
- (void)setPaymentEventHandler:(id)arg0;
- (void)setDanmakuPostPauseVideoPlay:(BOOL)arg0;
- (BOOL)danmakuPostPauseVideoPlay;
- (double)calcuteEntryTopOffset:(BOOL)arg0;
- (void)setHasFakeDanmakuSwitch:(BOOL)arg0;
- (BOOL)isFromDanmakuMessage;
- (BOOL)hasFakeDanmakuSwitch;
- (void)handlePOIEntryUpdateUILayoutNotification;
- (void)handleEntryShouldUpdateLayoutNotification:(id)arg0;
- (void)handleEntryShouldUpdateLayoutForRightSidebarNotification:(id)arg0;
- (void)handleDescHeightChangedNotification:(id)arg0;
- (id)landscapeEntryView;
- (id)danmakuInputEntryView;
- (BOOL)canShowDanmakuEntryView;
- (void)weakLandscapeEntryDisable;
- (void)updateDanmakuLayOut;
- (void)playInteractionElementDescriptionLabelExpand:(id)arg0;
- (id)aAWEPadRotateGuideAdapter;
- (void)updateEntryLayoutIfNeededAnimated:(BOOL)arg0 forbidVideoMoveUp:(BOOL)arg1 forceUpdate:(BOOL)arg2;
- (void)hideEntryView:(BOOL)arg0;
- (void)setHideByPaymentMaskView:(BOOL)arg0;
- (void)setPauseClearType:(unsigned long long)arg0;
- (void)updateEntryLayoutIfNeededAnimated:(BOOL)arg0 forbidVideoMoveUp:(BOOL)arg1;
- (void)updateLandscapeFeedEntryView:(BOOL)arg0;
- (BOOL)isLandscapePaymentMaskShowing;
- (void)setIsLandscapePaymentMaskShowing:(BOOL)arg0;
- (void)landscapeEntryViewTapped;
- (void)setHadTraceUpdateLandscape:(BOOL)arg0;
- (void)setHideByDescriptionLabel:(BOOL)arg0;
- (void)addKVOObserverIfNeeded;
- (void)weakLandscapeEntryStart;
- (BOOL)isShowDanmakuEntryView;
- (void)setLandscapeEntryView:(id)arg0;
- (void)setDanmakuInputEntryView:(id)arg0;
- (void)traceEntranceShow;
- (BOOL)hasTrackDanmakuPubShow;
- (void)setHasTrackDanmakuPubShow:(BOOL)arg0;
- (void)updateDanmakuInputViewLayOutWithShow;
- (void)setIsOverlapWithPlayer:(BOOL)arg0;
- (BOOL)hideByDescriptionLabel;
- (BOOL)hideByPaymentMaskView;
- (BOOL)isLandscapeEntryWeaking;
- (double)weakLandscapeEntryTargetAlpha;
- (BOOL)isHideEntryView;
- (BOOL)enableShowEntryView;
- (void)traceRotateLandscapeScreen:(unsigned long long)arg0;
- (void)realEnterLandscapeFeedWithEnterMethod:(id)arg0;
- (void)traceLandscapeEntranceByClick:(BOOL)arg0;
- (BOOL)isCurrentVideo;
- (BOOL)shouldAvoidFakeLandscape;
- (BOOL)isOverlapWithPlayer;
- (BOOL)enableLandscapeEntryInOtherSceneWithModel:(id)arg0;
- (void)realUpdateEntryLayoutIfNeededAnimated:(BOOL)arg0 forbidVideoMoveUp:(BOOL)arg1 forceUpdate:(BOOL)arg2;
- (void)updateEntryLayoutForStyleFullScreen:(BOOL)arg0 forbidVideoMoveUp:(BOOL)arg1 forceUpdate:(BOOL)arg2;
- (void)setVideoRealbottom:(double)arg0;
- (void)changePlayerFrameIfNeededWithOffset:(double)arg0 playVideoVC:(id)arg1;
- (void)changeStickerLayoutIfNeeded;
- (void)showDanmakuInputViewIfNeed;
- (long long)secondsBeforeLandscapeEntryWeak;
- (BOOL)canShowLandscapeEntryWeak;
- (void)setIsLandscapeEntryWeaking:(BOOL)arg0;
- (void)weakLandscapeEntryEnableIfNeeded;
- (BOOL)isFromNormalMixVideo;
- (void)requestOrder:(id)arg0;
- (unsigned long long)pauseClearType;
- (BOOL)canUseExternDataController;
- (BOOL)shouldHideTabBar;
- (void)setIsHidingTabbar:(BOOL)arg0;
- (BOOL)isHidingTabbar;
- (void)setIsShowDanmakuEntryView:(BOOL)arg0;
- (void)handleDanmakuPubAndCloseShowTrack;
- (double)videoRealbottom;
- (BOOL)hadTraceUpdateLandscape;
- (void)prepareForDisplay;
- (void)setRootViewController:(id)arg0;
- (id)rootViewController;
- (id)init;
- (void)appDidEnterBackground:(id)arg0;
- (void).cxx_destruct;
- (id)containerID;
- (BOOL)isMonitoring;
- (void)setData:(id)arg0;
- (id)transitionController;
- (double)topPadding;
- (id)accountType;
- (id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2;
- (void)appDidBecomeActive:(id)arg0;
- (void)viewDidAppear;
- (BOOL)didAppear;
- (id)animationControllerForDismissedController:(id)arg0;
- (void)setAccountType:(id)arg0;
- (void)dealloc;
- (void)reset;
- (void)viewDidLoad;
- (void)orientationChanged:(id)arg0;
- (void)didEndDisplaying;
- (void)setTopPadding:(double)arg0;
- (void)viewDidDisappear;
- (void)willDisplay;
- (void)setIsMonitoring:(BOOL)arg0;
- (void)viewWillDisappear;

@end