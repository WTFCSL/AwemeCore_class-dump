//
//     Generated by private class-dump
//

@class UIViewController, AWERVLVPanelFactory, AWERVVideoInfoElementContainer, AWEUILoadingView, NSMutableArray, AWEAwemeModel, NSString, NSMutableDictionary, AWERVLVFloatPanelContainerViewController, UIButton, AWERelatedVideoDetailVideoViewModel, UIView, AWEImmersionProgressSliderView, AWERVLVRightPanelContainerViewController, UIPanGestureRecognizer, AWERelatedVideoVideoPlayerViewController, AWERVDetailPageContext, MASConstraint, UIScrollView, AWERVDrawBackView, AWERelatedVideoDetailVideoInteractView, AWEAwemeResponseModel;
@protocol AWERVLVSlidingPanelContainerViewControllerProtocol, AWECommentListInputViewProtocol, AWERelatedVideoDetailVideoViewControllerDelegate;

@interface AWERelatedVideoDetailVideoViewController : AWEShellViewController <AWEPadLongVideoPlayerProtocol, AWERelatedVideoDetailVideoContainerViewControllerDelegate, AWERelatedVideoVideoPlayerViewControllerDelegate, AWEIoniaTransitionAnimatorDataSource, AWEPurePageTransitionAnimatorDataSource, UIViewControllerTransitioningDelegate, AWELandscapeFeedViewControllerDelegate, HTSAccountMessage, AWEUserMessage, UIGestureRecognizerDelegate, UIScrollViewDelegate, AWERVDSlideTransitionInnerContentProvider, AWERVDetailInnerContentProvider, AWEPadRVDTargetTransitionContextProvider, AWERVDFullScreenTransitionOuterContextProvider, AWETransitioningViewController, AWERVContainerProtocol, DUXSheetDelegate, AWEZoomTransitionInnerContextProvider> {
    BOOL _active;
    BOOL _processingLogin;
    BOOL _isDismissing;
    BOOL _shouldPreventPauseForDisAppear;
    BOOL _awemeRefreshCompleted;
    BOOL _isAutomaticalPause;
    BOOL _userScrollAfterShrink;
    BOOL _isAdContainerPauseVideoWhenRefreshModel;
    AWERelatedVideoVideoPlayerViewController *_videoViewController;
    UIView *_videoPlayerContainerView;
    UIViewController<AWERVLVSlidingPanelContainerViewControllerProtocol> *_containerVC;
    id<AWERelatedVideoDetailVideoViewControllerDelegate> _rvdVCDelegate;
    AWERVDetailPageContext *_pageContext;
    AWEAwemeResponseModel *_recommendResponse;
    AWERelatedVideoDetailVideoViewModel *_viewModel;
    AWERVVideoInfoElementContainer *_infoElementContainer;
    NSMutableDictionary *_paramDic;
    MASConstraint *_infoContainerHeightContraints;
    double _stayDuration;
    long long _jumpCount;
    NSMutableArray *_viewAwemeList;
    NSMutableArray *_viewAwemeTypeList;
    double _videoInfoHeight;
    double _lastContainerVCHeight;
    long long _outPlayState;
    UIScrollView *_containerScrollView;
    UIView *_videoInfoContainerView;
    AWERelatedVideoDetailVideoInteractView *_bottomInteractView;
    UIView<AWECommentListInputViewProtocol> *_inputView;
    UIPanGestureRecognizer *_gestureCheckRecoginizer;
    UIView *_blackBackgroundView;
    AWEUILoadingView *_loadingView;
    AWEImmersionProgressSliderView *_immersionProgressSlider;
    UIButton *_backButton;
    UIButton *_searchButton;
    UIButton *_moreButton;
    AWERVLVPanelFactory *_panelFactory;
    UIView *_contentContainerView;
    AWERVLVRightPanelContainerViewController *_rightContainerVC;
    AWERVLVFloatPanelContainerViewController *_floatContainerVC;
    double _lastDetailVCWidth;
    AWERVDrawBackView *_drawBackView;
    struct CGPoint { double x; double y; } _currentScrollOffset;
    struct CGPoint { double x; double y; } _currentContainerVCScrollOffset;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _videoFrame;
}

@property (retain, nonatomic) AWERVDetailPageContext *pageContext;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEAwemeResponseModel *recommendResponse;
@property (retain, nonatomic) AWERelatedVideoDetailVideoViewModel *viewModel;
@property (retain, nonatomic) AWERVVideoInfoElementContainer *infoElementContainer;
@property (nonatomic) BOOL isDismissing;
@property (nonatomic) BOOL processingLogin;
@property (nonatomic) BOOL shouldPreventPauseForDisAppear;
@property (retain, nonatomic) NSMutableDictionary *paramDic;
@property (nonatomic) BOOL awemeRefreshCompleted;
@property (retain, nonatomic) MASConstraint *infoContainerHeightContraints;
@property (nonatomic) double stayDuration;
@property (nonatomic) BOOL isAutomaticalPause;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic) long long jumpCount;
@property (retain, nonatomic) NSMutableArray *viewAwemeList;
@property (retain, nonatomic) NSMutableArray *viewAwemeTypeList;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } videoFrame;
@property (nonatomic) double videoInfoHeight;
@property (nonatomic) double lastContainerVCHeight;
@property (nonatomic) BOOL userScrollAfterShrink;
@property (nonatomic) long long outPlayState;
@property (retain, nonatomic) UIScrollView *containerScrollView;
@property (retain, nonatomic) UIView *videoPlayerContainerView;
@property (retain, nonatomic) UIView *videoInfoContainerView;
@property (retain, nonatomic) AWERelatedVideoDetailVideoInteractView *bottomInteractView;
@property (retain, nonatomic) UIView<AWECommentListInputViewProtocol> *inputView;
@property (retain, nonatomic) UIPanGestureRecognizer *gestureCheckRecoginizer;
@property (retain, nonatomic) UIView *blackBackgroundView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) AWEImmersionProgressSliderView *immersionProgressSlider;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIButton *searchButton;
@property (retain, nonatomic) UIButton *moreButton;
@property (retain, nonatomic) AWERVLVPanelFactory *panelFactory;
@property (retain, nonatomic) UIView *contentContainerView;
@property (retain, nonatomic) AWERVLVRightPanelContainerViewController *rightContainerVC;
@property (retain, nonatomic) AWERVLVFloatPanelContainerViewController *floatContainerVC;
@property (nonatomic) double lastDetailVCWidth;
@property (nonatomic) BOOL isAdContainerPauseVideoWhenRefreshModel;
@property (nonatomic) struct CGPoint { double x; double y; } currentScrollOffset;
@property (nonatomic) struct CGPoint { double x; double y; } currentContainerVCScrollOffset;
@property (retain, nonatomic) AWERVDrawBackView *drawBackView;
@property (retain, nonatomic) AWERelatedVideoVideoPlayerViewController *videoViewController;
@property (retain, nonatomic) UIViewController<AWERVLVSlidingPanelContainerViewControllerProtocol> *containerVC;
@property (weak, nonatomic) id<AWERelatedVideoDetailVideoViewControllerDelegate> rvdVCDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPadRTVAdapterClass;
+ (BOOL)enableBackToSearchTransFix;
+ (Class)aAWEPadLongVideoPlayerAdapterClass;

- (id)awemeModel;
- (id)aweui_emptyPageConfigForState:(unsigned long long)arg0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg0;
- (void)setAweui_viewControllerState:(unsigned long long)arg0;
- (void)didFinishLogin;
- (void)willStartLogin;
- (void)didCancelLogin;
- (void)didFinishLogout;
- (void)didFinishUnFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (BOOL)configWithRouterParamDict:(id)arg0;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (id)awe_preferredTransitionProviderClassNameForContext:(id)arg0;
- (void)setAwemeModel:(id)arg0;
- (BOOL)transition_gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (BOOL)transition_shouldStartInteractiveTranstionForSlideDirection:(unsigned long long)arg0 gestureRecognizer:(id)arg1;
- (void)transition_didStartTransitionWithContext:(id)arg0;
- (void)popViewControllerCancelled;
- (id)transition_destinatedViewControllerForSlideDirection:(unsigned long long)arg0 gestureRecognizer:(id)arg1;
- (id)controllerByProtocol:(id)arg0;
- (void)setContainerVC:(id)arg0;
- (void)awe_themeReload;
- (id)containerVC;
- (void)transition_didCancelPercentDrivenTransitionWithContext:(id)arg0;
- (id)aAWEPadModuleAdapter;
- (BOOL)configWithParamDict:(id)arg0;
- (BOOL)shouldPreventPause;
- (double)stayDuration;
- (id)anchorContainerView;
- (id)originVideoPlayerContainerView;
- (id)createControllerManager;
- (id)rvdTransitionContext;
- (void)addNotifications;
- (void)setVideoFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)registerMessage;
- (void)setStayDuration:(double)arg0;
- (void)enterFullScreenByClick:(BOOL)arg0;
- (void)trackStayTime;
- (void)willLoginAtPlatform:(unsigned long long)arg0;
- (void)refreshWithAwemeModel:(id)arg0;
- (void)setParamDic:(id)arg0;
- (id)paramDic;
- (void)backButtonDidClicked:(id)arg0;
- (Class)trackService;
- (void)unregisterMessage;
- (void)setupPageContext;
- (id)videoPlayerContainerView;
- (void)setProcessingLogin:(BOOL)arg0;
- (BOOL)processingLogin;
- (id)videoInfoContainerView;
- (void)setVideoInfoContainerView:(id)arg0;
- (double)videoDefaultHeight:(id)arg0;
- (id)aAWEPadRTVAdapter;
- (double)landscapeTransitionDuration;
- (double)videoHeightWidthRatio;
- (double)videoDefaultHeight;
- (void)quitFromLandscapeFeed:(id)arg0;
- (BOOL)enableRotate;
- (void)quitByChangeToPortrait:(id)arg0;
- (void)quitFromLandScapeFeedWithRequestOrder:(BOOL)arg0 requestOrderSchema:(id)arg1;
- (void)handleClickMoreButton;
- (void)attemptToResumeWhenLogin;
- (void)enterImmersionMode;
- (void)exitImmersionMode;
- (void)dismissPanelVC:(id)arg0;
- (void)showPanelWithViewController:(id)arg0;
- (void)ioniaPlayerControlFullScreenClicked:(id)arg0;
- (void)player:(id)arg0 playNextVideo:(id)arg1 isMixVideo:(BOOL)arg2;
- (void)ioniaVideoViewController:(id)arg0 sliderTouchStart:(id)arg1 bySlideScreen:(BOOL)arg2;
- (void)ioniaVideoViewController:(id)arg0 touchStartDuration:(double)arg1 bySlideScreen:(BOOL)arg2;
- (void)ioniaVideoViewController:(id)arg0 sliderTouchEnded:(id)arg1 bySlideScreen:(BOOL)arg2;
- (void)ioniaVideoViewController:(id)arg0 sliderEndDuration:(double)arg1 bySlideScreen:(BOOL)arg2;
- (id)initWithModel:(id)arg0 params:(id)arg1 recommendModel:(id)arg2;
- (id)initWithItemID:(id)arg0 params:(id)arg1 recommendModel:(id)arg2;
- (void)setRvdVCDelegate:(id)arg0;
- (id)initWithModel:(id)arg0 params:(id)arg1 videoViewController:(id)arg2 recommendModel:(id)arg3 pageConfig:(id)arg4;
- (void)autoEnterLandscapeFeedIfNeeded;
- (long long)jumpCount;
- (void)doubleClickSlidingTabbar:(id)arg0;
- (void)containerBackToTop:(id)arg0;
- (void)slidingToRelatedVideoTap;
- (void)slidingToCommentTap;
- (BOOL)containerCanScrollVertical:(id)arg0 scrollView:(id)arg1;
- (void)didCreateInputView:(id)arg0;
- (void)didShowInputViewBlock;
- (void)willHideInputViewBlock;
- (void)willShowInputViewBlock;
- (void)appendRouterLogExtraDictWithParamDict:(id)arg0;
- (void)updateVideoViewControllerEnterFrom;
- (void)configLongVideoContextWithParamDict:(id)arg0;
- (void)configMediumVideoContextWithParamDict:(id)arg0;
- (void)compensateFromWatchVideoHall;
- (id)initWithModel:(id)arg0 params:(id)arg1 videoViewController:(id)arg2 recommendModel:(id)arg3;
- (BOOL)isFromLongVideoBottomBar:(id)arg0;
- (void)setRecommendResponse:(id)arg0;
- (void)preRequestNetwork;
- (void)startDetailStayTime;
- (id)bottomInteractView;
- (void)setBottomInteractView:(id)arg0;
- (void)setupVideoInfoContainer;
- (void)setPanelFactory:(id)arg0;
- (void)setupPanelContainerPage;
- (void)setupPage;
- (void)refreshAwemeDataIfNeeded;
- (double)lastDetailVCWidth;
- (id)aAWEPadLongVideoPlayerAdapter;
- (void)configPanels;
- (void)refreshPanelContainers;
- (void)setLastDetailVCWidth:(double)arg0;
- (void)transitionBetweenFloatPanelAndRightPanel;
- (BOOL)resumeVideoPlayer;
- (void)pauseVideoPlayer;
- (id)infoElementContainer;
- (double)videoMaxHeight;
- (double)videoMinHeight;
- (id)recommendResponse;
- (void)setRightContainerVC:(id)arg0;
- (id)rightContainerVC;
- (void)setupHalfPageUI;
- (id)panelFactory;
- (BOOL)awemeRefreshCompleted;
- (id)floatContainerVC;
- (id)immersionProgressSlider;
- (void)setImmersionProgressSlider:(id)arg0;
- (void)detailSelectRelatedRecommendVideo:(id)arg0;
- (void)scrollToMinVideo:(BOOL)arg0;
- (void)refreshWithUIContentOffset:(struct CGPoint { double x0; double x1; })arg0;
- (double)lastContainerVCHeight;
- (void)hiddenBottomInteractiveViewIfNeed;
- (double)getBottomBarNewHeight;
- (void)backButtonHooker:(id)arg0;
- (void)handleClickSearch;
- (double)containerMaxOffset;
- (void)scrollToTabBar:(BOOL)arg0;
- (void)setVideoInfoHeight:(double)arg0;
- (void)replaceCurrentAwemeWithModel:(id)arg0 resetPlayerStatus:(BOOL)arg1;
- (void)setInfoElementContainer:(id)arg0;
- (double)videoInfoHeight;
- (double)containerMinOffset;
- (double)immersionProgressSliderHeight;
- (id)gestureCheckRecoginizer;
- (id)blackBackgroundView;
- (void)refreshWithUI;
- (id)infoContainerHeightContraints;
- (void)setInfoContainerHeightContraints:(id)arg0;
- (void)setLastContainerVCHeight:(double)arg0;
- (unsigned long long)refreshDataType;
- (void)refreshWithNewAwemeID:(id)arg0;
- (void)refreshWithNewAlbumID:(id)arg0;
- (void)refreshWithNewAlbumID:(id)arg0 episodeID:(id)arg1 awemeID:(id)arg2;
- (void)refreshWithNewAlbumID:(id)arg0 episodeID:(id)arg1 awemeID:(id)arg2 highlightEpisodeId:(id)arg3;
- (void)refreshWithAwemeModel:(id)arg0 resetPlayerStatus:(BOOL)arg1;
- (void)setAwemeRefreshCompleted:(BOOL)arg0;
- (void)refreshParamsDict;
- (BOOL)isAdContainerPauseVideoWhenRefreshModel;
- (void)setIsAdContainerPauseVideoWhenRefreshModel:(BOOL)arg0;
- (void)setJumpCount:(long long)arg0;
- (id)viewAwemeList;
- (id)viewAwemeTypeList;
- (long long)relatedRecordMaxCount;
- (void)enterFullScreenWithEnterMethod:(id)arg0;
- (void)setIsAutomaticalPause:(BOOL)arg0;
- (BOOL)isAutomaticalPause;
- (BOOL)shouldPreventPauseForDisAppear;
- (void)prepareToBack;
- (void)afterQuitFromLandscapeFeed;
- (void)updateEnterMethod:(id)arg0;
- (void)scrollToDefault:(BOOL)arg0;
- (void)rvdFullScreenTransitionUpdateOffset:(long long)arg0 isScrolled:(BOOL)arg1;
- (id)rvdFullScreenTransitionContext;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rvdTransitionVideoPlayerEnterFrame;
- (unsigned long long)rvdZoomTransitionAllowedTriggerDirection;
- (id)rvdTransitionCurrentModel;
- (void)rvdTransitionDidUpdatePlayerController;
- (void)rvdTransitionDidTranstionCompletion:(BOOL)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rvdSlideTransitionVideoPlayerEnterFrame;
- (unsigned long long)rvdInteractiveSectionSlideDownTransitionAllowedTriggerDirection;
- (id)rvdSlideTransitionVCSnapShotContainerScrollView;
- (id)rvdSlideTransitionVCSnapShotBottomInteractView;
- (BOOL)rvdSlideTransitionIsPlayBeforeOut;
- (BOOL)rvdSlideTransitionIsStopBeforeOut;
- (unsigned long long)rvdSlideTransitionTriggerDirection;
- (void)rvdSlideTransitionWillStartTransition;
- (void)rvdSlideTransitionDidTranstionCompletion:(BOOL)arg0 currentPlayTime:(double)arg1;
- (BOOL)enablePadRVDPopAnimation;
- (void)setScrollEnableWhenAnimation:(BOOL)arg0;
- (BOOL)rvdChangeUnfollowStatus;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rvdSlideTransitionPreferEndFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)rvdSlideTransitionCanSyncDiffAwemeModelToFeed;
- (BOOL)rvdSlideTransitionCanChangeAlpha;
- (void)rvdSlideTransitionWithIsAutoPause:(BOOL)arg0;
- (void)rvdFullScreenTransitionDidCompleteWithOffset:(long long)arg0;
- (BOOL)shouldRvdFullScreenTransitionUpdatePlayerControllerWithFromContext:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })preferMediaFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setOutPlayState:(long long)arg0;
- (void)setCurrentScrollOffset:(struct CGPoint { double x0; double x1; })arg0;
- (void)setCurrentContainerVCScrollOffset:(struct CGPoint { double x0; double x1; })arg0;
- (void)scrollToFitMix:(BOOL)arg0;
- (void)updateVideoPlayerFrameWhenScrolling:(double)arg0;
- (BOOL)userScrollAfterShrink;
- (void)setUserScrollAfterShrink:(BOOL)arg0;
- (struct CGPoint { double x0; double x1; })currentContainerVCScrollOffset;
- (id)createBackButton;
- (void)onGestureCheckPan:(id)arg0;
- (id)padAdapter_getLeftContaniner;
- (id)padAdapter_videoPlayerContainer;
- (id)padAdapter_getRightContainerVC;
- (double)padAdapter_videoDefaultHeight;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })padAdapter_getVideoFrame;
- (void)padAdapter_updateVideoFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)updateInputView:(id)arg0;
- (void)scrollToMaxVideo:(BOOL)arg0;
- (void)setShouldPreventPauseForDisAppear:(BOOL)arg0;
- (void)progressSliderShow:(BOOL)arg0 completion:(id /* block */)arg1;
- (id)getBottomInteractiveViewSnapshotView;
- (void)setVideoPlayerContainerView:(id)arg0;
- (id)rvdVCDelegate;
- (long long)outPlayState;
- (void)searchButtonDidClicked:(id)arg0;
- (id)drawBackView;
- (void)setViewAwemeList:(id)arg0;
- (void)setViewAwemeTypeList:(id)arg0;
- (void)setGestureCheckRecoginizer:(id)arg0;
- (void)setBlackBackgroundView:(id)arg0;
- (void)setFloatContainerVC:(id)arg0;
- (void)setDrawBackView:(id)arg0;
- (id)init;
- (void)viewDidLayoutSubviews;
- (void)didMoveToParentViewController:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)moreButton;
- (void)setContentContainerView:(id)arg0;
- (void)setSearchButton:(id)arg0;
- (BOOL)isDismissing;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)scrollViewDidScrollToTop:(id)arg0;
- (id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2;
- (id)searchButton;
- (void)scrollViewDidEndScrollingAnimation:(id)arg0;
- (void)appDidBecomeActive:(id)arg0;
- (id)createContext;
- (long long)preferredStatusBarStyle;
- (struct CGPoint { double x0; double x1; })currentScrollOffset;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)setMoreButton:(id)arg0;
- (void)setViewModel:(id)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (void)setInputView:(id)arg0;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (BOOL)isActive;
- (id)viewModel;
- (id)inputView;
- (id)animationControllerForDismissedController:(id)arg0;
- (void)setActive:(BOOL)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (void)updateContentSize;
- (void)dealloc;
- (id)contentContainerView;
- (void)viewDidLoad;
- (id)backButton;
- (void)loadView;
- (void)setBackButton:(id)arg0;
- (void)appWillResignActive:(id)arg0;
- (id)containerScrollView;
- (void)setContainerScrollView:(id)arg0;
- (void)setupUI;
- (void)setIsDismissing:(BOOL)arg0;
- (double)bottomBarHeight;
- (id)pageContext;
- (void)setPageContext:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })videoFrame;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)videoViewController;
- (void)setVideoViewController:(id)arg0;

@end