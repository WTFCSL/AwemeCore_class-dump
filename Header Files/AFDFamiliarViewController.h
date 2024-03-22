//
//     Generated by private class-dump
//

@class AFDFamiliarTopElementContainer, DUXBottomNotification, UILabel, NSDictionary, UITapGestureRecognizer, UIViewController, MASConstraint, UIView, AFDFamiliarSkylightViewController, NSString, AFDFriendsTabFreshenTipsView, AWEFamiliarDataController, AFDNewFriendWorkNoticeView, NSArray, AWEAwemeModel, UIPanGestureRecognizer;
@protocol AWEFeedTableViewControllerMixVideoProtocol, AWEFeedTableViewControllerProtocol, AWEFeedTabItemViewControllerProtocol, AWEHPSkylightProtocol, AWEHPSkylightUndertakeContextProtocol;

@interface AFDFamiliarViewController : AFDMultiTabBaseFeedViewController <AFDFamiliarSkylightDelegate, AWEHPSkylightUndertakeHostProtocol, AWEHPSkylightAnimateUnderTakeHostProtocol, AWEHPChannelCommonSkylightUndertakeHostProtocol, AWEHPChannelAirplaneSkylightUndertakeHostProtocol, AWEUserMessage, AWEPublishTaskMessage, AFDCloseFriendsMessage, AFDNewFriendWorkCountMessage, AFDF2FFollowTaskRadarMessage, UIGestureRecognizerDelegate, AWEFamiliarViewControllerProtocol, AFDFmiliarFeedOnTopTabLifeCycleProtocol> {
    BOOL _hasHomeSkylightFirstShowed;
    BOOL _needInsertAfterRefresh;
    BOOL _showSkylightWhenPublishLanding;
    BOOL _showSkylightWhenPublishLandingVCNotInited;
    BOOL _shouldAnimateSkylightHidden;
    BOOL _shouldShowContinueFeedGuide;
    NSDictionary *insertRequestParams;
    AWEFamiliarDataController *_dataController;
    UIViewController<AWEFeedTableViewControllerProtocol, AWEFeedTabItemViewControllerProtocol, AWEFeedTableViewControllerMixVideoProtocol> *_feedTableVC;
    UIView<AWEHPSkylightProtocol> *_skylightContainer;
    id<AWEHPSkylightUndertakeContextProtocol> _skylightContext;
    AFDFriendsTabFreshenTipsView *_landingTipsView;
    AFDFamiliarTopElementContainer *_topElementContainer;
    AFDNewFriendWorkNoticeView *_friendWorkNoticeView;
    AFDNewFriendWorkNoticeView *_nextWorkNoticeView;
    NSArray *_recordedFriendWorkNoticeAvatars;
    NSString *_recordedFriendWorkNoticeText;
    DUXBottomNotification *_backToHomepageSnackBar;
    NSArray *_prioritizedNonVideoInsertTasks;
    AWEAwemeModel *_insertModel;
    double _enterTime;
    UIViewController *_followTaskActivityViewController;
    AFDFamiliarSkylightViewController *_skylightViewController;
    UIView *_skylightEntranceBubbleView;
    UILabel *_skylightEntranceLabel;
    UIView *_skylightCatchView;
    UITapGestureRecognizer *_skylightCatchViewTap;
    UIPanGestureRecognizer *_skylightCatchViewPan;
    AFDNewFriendWorkNoticeView *_continueFeedGuide;
    MASConstraint *_tableViewTopToSelfConstraint;
    MASConstraint *_skylightTopToSelfConstraint;
}

@property (readonly, nonatomic) BOOL skylight_hidden;
@property (retain, nonatomic) NSString *skylightEnterMethod;
@property (retain, nonatomic) NSString *skylightExitMethod;
@property (nonatomic) unsigned long long skyLightOpenTime;
@property (retain, nonatomic) UIView<AWEHPSkylightProtocol> *skylightContainer;
@property (retain, nonatomic) id<AWEHPSkylightUndertakeContextProtocol> skylightContext;
@property (nonatomic) BOOL hasHomeSkylightFirstShowed;
@property (retain, nonatomic) AWEFamiliarDataController *dataController;
@property (retain, nonatomic) UIViewController<AWEFeedTableViewControllerProtocol, AWEFeedTabItemViewControllerProtocol, AWEFeedTableViewControllerMixVideoProtocol> *feedTableVC;
@property (retain, nonatomic) AFDFriendsTabFreshenTipsView *landingTipsView;
@property (retain, nonatomic) AFDFamiliarTopElementContainer *topElementContainer;
@property (retain, nonatomic) AFDNewFriendWorkNoticeView *friendWorkNoticeView;
@property (retain, nonatomic) AFDNewFriendWorkNoticeView *nextWorkNoticeView;
@property (copy, nonatomic) NSArray *recordedFriendWorkNoticeAvatars;
@property (copy, nonatomic) NSString *recordedFriendWorkNoticeText;
@property (weak, nonatomic) DUXBottomNotification *backToHomepageSnackBar;
@property (retain, nonatomic) NSArray *prioritizedNonVideoInsertTasks;
@property (nonatomic) BOOL needInsertAfterRefresh;
@property (retain, nonatomic) AWEAwemeModel *insertModel;
@property (nonatomic) double enterTime;
@property (retain, nonatomic) UIViewController *followTaskActivityViewController;
@property (retain, nonatomic) AFDFamiliarSkylightViewController *skylightViewController;
@property (retain, nonatomic) UIView *skylightEntranceBubbleView;
@property (retain, nonatomic) UILabel *skylightEntranceLabel;
@property (retain, nonatomic) UIView *skylightCatchView;
@property (retain, nonatomic) UITapGestureRecognizer *skylightCatchViewTap;
@property (retain, nonatomic) UIPanGestureRecognizer *skylightCatchViewPan;
@property (nonatomic) BOOL showSkylightWhenPublishLanding;
@property (nonatomic) BOOL showSkylightWhenPublishLandingVCNotInited;
@property (nonatomic) BOOL shouldAnimateSkylightHidden;
@property (retain, nonatomic) AFDNewFriendWorkNoticeView *continueFeedGuide;
@property (nonatomic) BOOL shouldShowContinueFeedGuide;
@property (retain, nonatomic) MASConstraint *tableViewTopToSelfConstraint;
@property (retain, nonatomic) MASConstraint *skylightTopToSelfConstraint;
@property (readonly, copy, nonatomic) NSString *referString;
@property (readonly, nonatomic) long long currentIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSDictionary *insertRequestParams;

+ (Class)aAWELiteUGSocialModuleAdapterClass;
+ (Class)aAWEFlameHTSAdapterClass;

- (id)referString;
- (void)task:(id)arg0 didBeginWithInfo:(id)arg1;
- (void)didFinishLogin;
- (void)task:(id)arg0 didEndWithResult:(long long)arg1 error:(id)arg2;
- (void)replaceMusicPublishProgressWithTask:(id)arg0 taskStatus:(long long)arg1;
- (void)didFinishLogout;
- (void)willSendUnfollowUserRequestWithContext:(id)arg0;
- (BOOL)btm_autoManaged;
- (id)btm_pageIdentifier;
- (id)enterFrom;
- (id)transition_destinatedViewControllerForSlideDirection:(unsigned long long)arg0 gestureRecognizer:(id)arg1;
- (void)animatedRefreshWithCompletion:(id /* block */)arg0;
- (BOOL)currentTabIsTop;
- (BOOL)canRefresh;
- (BOOL)isCommentPanelShowing;
- (void)seekPlayTimeWithItemID:(id)arg0;
- (id)currentAweme;
- (void)momentWillLandingToSkylight:(BOOL)arg0 hasVCInited:(BOOL)arg1;
- (void)skiiDidUpdateSkylightEnabled:(BOOL)arg0;
- (void)setDataController:(id)arg0;
- (void)insertVideosToFamiliarFeedWithAweme:(id)arg0;
- (BOOL)currentTabIsFamiliarFeed;
- (long long)currentAwemeIndex;
- (id)insertRequestParams;
- (void)setInsertRequestParams:(id)arg0;
- (void)channelEnterWithModel:(id)arg0;
- (void)channelLeaveWithModel:(id)arg0;
- (void)disableRefreshGesture:(BOOL)arg0;
- (double)enterTime;
- (void)setEnterTime:(double)arg0;
- (id)aAWELiteUGSocialModuleAdapter;
- (id)skylightViewController;
- (id)skylightContainer;
- (void)setSkylightContainer:(id)arg0;
- (void)tabBarDidChangeNotification:(id)arg0;
- (void)setSkylightViewController:(id)arg0;
- (id)skylightCatchView;
- (void)setSkylightCatchView:(id)arg0;
- (BOOL)canShowAlert;
- (BOOL)isSomethingShowingAbove;
- (BOOL)currentTabIsPresentingLightTheme;
- (BOOL)currentTabCanChangeTheme;
- (void)refreshWhenYellowDotShowingWithCompletion:(id /* block */)arg0;
- (void)preloadViewIfNeed;
- (void)toggleFamiliarFeedAllReadTip:(BOOL)arg0 WithLastViewModel:(id)arg1;
- (BOOL)isInRefreshing;
- (void)setPureModeForFamiliar:(BOOL)arg0;
- (BOOL)skylight_hidden;
- (id)skylight_avatarListView;
- (id)feedTableVC;
- (id)aAWEFlameHTSAdapter;
- (void)onPushAwemeDislikeNotification:(id)arg0;
- (void)onAwemeDeleteNotification:(id)arg0;
- (void)splashViewDidDisappear:(id)arg0;
- (void)setSkylightContext:(id)arg0;
- (id)skylightContext;
- (id)homepageSkylightAnimateUnderTakeHostContentView;
- (void)homepageSkylightAnimateUnderTakeHostWillAnimateWithModel:(id)arg0;
- (void)homepageSkylightAnimateUnderTakeHostAnimatingWithModel:(id)arg0;
- (void)p_recoverPureModePlayInteractionIfNeed;
- (void)p_pureModePlayInteractionIfNeed;
- (BOOL)channelPlayInteractionNeedPureMode;
- (void)homepageSkylight:(id)arg0 updateState:(long long)arg1 withAnimate:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)homepageSkylight:(id)arg0 updateExpandedUIConfig:(id)arg1 withAnimate:(BOOL)arg2 completion:(id /* block */)arg3;
- (id)getCurrentHPChannelSkylightUndertakeHostContext;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getHPChannelTopContainerFrame;
- (struct CGPoint { double x0; double x1; })getHPChannelAirplaneCenterPoint;
- (void)setInsertModel:(id)arg0;
- (id)insertModel;
- (BOOL)skylightHidden;
- (void)setSkylightHidden:(BOOL)arg0 animated:(BOOL)arg1;
- (void)removeFollowTaskActivityPage;
- (void)perf_setExtra;
- (void)setupUnderTakeSkylightContainerWithStyle:(id)arg0;
- (void)channelSelectByChangeTabEventFrom:(id)arg0;
- (void)channelLeaveByChangeTabEvent;
- (id)homeSkylightContext;
- (BOOL)isContentScrollViewInTop;
- (void)channelSelectEventFrom:(id)arg0 enterMethod:(id)arg1;
- (void)channelLeaveEventTo:(id)arg0 enterMethod:(id)arg1;
- (id)homepageSkylightAccessApproach;
- (void)slidingViewControllerWillBeginDraggingEvent;
- (void)slidingViewControllerDidEndScrollEvent;
- (void)trackEnterWithEnterMethod:(id)arg0 enterFrom:(id)arg1;
- (void)skylightDidRefresh;
- (void)skylight_hideAnimated:(BOOL)arg0;
- (void)trackSkylightClose;
- (void)p_tryShowNewFriendWorkNoticeAfterSkylightFold;
- (void)skylight_showAnimated:(BOOL)arg0;
- (void)trackSkylightShow;
- (void)setSkyLightOpenTime:(unsigned long long)arg0;
- (id)skylightEnterMethod;
- (unsigned long long)skyLightOpenTime;
- (id)skylightExitMethod;
- (void)setSkylightExitMethod:(id)arg0;
- (void)setSkylightTopToSelfConstraint:(id)arg0;
- (id)skylightTopToSelfConstraint;
- (void)skylight_setupCatchView;
- (void)skylight_setupEntranceView;
- (id)tableViewTopToSelfConstraint;
- (id)skylightEntranceBubbleView;
- (id)topElementContainer;
- (void)setContinueFeedGuide:(id)arg0;
- (id)continueFeedGuide;
- (void)skylight_setHidden:(BOOL)arg0 animated:(BOOL)arg1;
- (void)skylight_handleCatchViewTap:(id)arg0;
- (void)setSkylightCatchViewTap:(id)arg0;
- (void)skylight_handleCatchViewPan:(id)arg0;
- (void)setSkylightCatchViewPan:(id)arg0;
- (id)skylightCatchViewPan;
- (id)skylightCatchViewTap;
- (void)setSkylightEnterMethod:(id)arg0;
- (void)setSkylightEntranceLabel:(id)arg0;
- (void)setSkylightEntranceBubbleView:(id)arg0;
- (id)skylightEntranceLabel;
- (id)recordedFriendWorkNoticeAvatars;
- (id)recordedFriendWorkNoticeText;
- (void)showNewFriendWorkNotice:(id)arg0 text:(id)arg1;
- (void)showNewFriendWorkNoticeWithCurrentDataSource;
- (void)showNextFriendWorkNotice:(id)arg0;
- (void)dismissNextFriendWorkNotice:(BOOL)arg0;
- (BOOL)showSkylightWhenPublishLandingVCNotInited;
- (void)setShowSkylightWhenPublishLandingVCNotInited:(BOOL)arg0;
- (void)setShowSkylightWhenPublishLanding:(BOOL)arg0;
- (void)skylight_refreshIfNeeded;
- (void)skylight_refreshWithIgnoreFrequency:(BOOL)arg0;
- (void)skylight_setupSkylight;
- (void)skylight_showContinueFeedGuideIfNeeded;
- (void)p_setupDataController;
- (void)p_setupBackToHomepageSnackBar;
- (void)p_fetchNonVideoCardIfNeeded;
- (void)setShouldShowContinueFeedGuide:(BOOL)arg0;
- (BOOL)showSkylightWhenPublishLanding;
- (void)setShouldAnimateSkylightHidden:(BOOL)arg0;
- (id)followTaskActivityViewController;
- (BOOL)shouldAnimateSkylightHidden;
- (BOOL)shouldShowContinueFeedGuide;
- (void)setTableViewTopToSelfConstraint:(id)arg0;
- (void)p_setupTopElementContainer;
- (void)setTopElementContainer:(id)arg0;
- (void)hideLandingTipsViewWithAnimation;
- (void)showLandingTipsView;
- (void)p_showFamiliarColdStartLandingToastIfNeeded;
- (void)p_setLastLeaveFamiliarTabTypeIfNeeded;
- (void)insertNonVideoCardIfNeeded;
- (void)onFriendFeedAwemeSlideToNextNotification:(id)arg0;
- (BOOL)hasHomeSkylightFirstShowed;
- (void)p_resetSkylightContainerAndContentViewController;
- (void)setHasHomeSkylightFirstShowed:(BOOL)arg0;
- (void)p_dismisBackToHomepageSnackBarIfNeeded;
- (void)setRecordedFriendWorkNoticeAvatars:(id)arg0;
- (void)setRecordedFriendWorkNoticeText:(id)arg0;
- (void)setFriendWorkNoticeView:(id)arg0;
- (id)friendWorkNoticeView;
- (void)p_showTopElementOfNewFriendWorkNotice:(id)arg0;
- (id)landingTipsView;
- (id)nextWorkNoticeView;
- (void)setNextWorkNoticeView:(id)arg0;
- (void)p_showSuccessToast;
- (BOOL)p_showBackToHomepageSnackBarIfNeeded;
- (void)setBackToHomepageSnackBar:(id)arg0;
- (void)p_handleBackToHomepageAction;
- (id)prioritizedNonVideoInsertTasks;
- (void)setNeedInsertAfterRefresh:(BOOL)arg0;
- (void)promotionLandRadarVenueIfNeeded;
- (BOOL)needInsertAfterRefresh;
- (id)getPreviousTabId;
- (void)trackExit;
- (void)p_hideBackToHomepageSnackBarIfNeeded:(BOOL)arg0;
- (void)setFollowTaskActivityViewController:(id)arg0;
- (void)channelTrackRefreshWithRefreshType:(long long)arg0;
- (void)setFeedTableVC:(id)arg0;
- (void)setLandingTipsView:(id)arg0;
- (id)backToHomepageSnackBar;
- (void)setPrioritizedNonVideoInsertTasks:(id)arg0;
- (id)init;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg0;
- (void)applicationWillEnterForeground:(id)arg0;
- (void).cxx_destruct;
- (long long)currentIndex;
- (long long)type;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)applicationDidEnterBackground:(id)arg0;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (BOOL)isActive;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)play;
- (void)pause;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)setupUI;
- (id)dataController;
- (void)addObservers;
- (void)removeObservers;

@end
