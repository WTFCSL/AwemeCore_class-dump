//
//     Generated by private class-dump
//

@class AWEAwemeModel, NSString, UIView, AWEAdWebViewController, AWEAdFeedCommentViewController, AWEAdCustomHeaderWebViewNaviBar, DUXTabBarContainerController, DUXTabBar, AWEBDARifleViewController, UIPanGestureRecognizer, AWEAdCustomHeaderWebViewTopCard;
@protocol AWEAdLandingPageProtocol;

@interface AWEAdCustomHeaderWebViewController : UIViewController <UIGestureRecognizerDelegate, UIScrollViewDelegate, AWEBDARifleViewControllerLifeCycleProtocol, DUXTabBarContainerDelegate, AWEAdCustomHeaderWebViewController> {
    BOOL _isUserSliding;
    BOOL _isWebViewVerticalScollBlocked;
    AWEAdWebViewController *_webViewController;
    AWEBDARifleViewController *_lynxViewController;
    AWEAwemeModel *_awemeModel;
    UIPanGestureRecognizer *_topCardPanGesture;
    AWEAdCustomHeaderWebViewTopCard *_topCard;
    AWEAdCustomHeaderWebViewNaviBar *_naviBar;
    NSString *_barType;
    double _naviBarHeight;
    double _topCardHeight;
    double _topCardHeightDiff;
    double _canScrollDisdance;
    double _topCardShowHeight;
    double _containerViewOriginFrame;
    UIView *_containerView;
    AWEAdFeedCommentViewController *_commentViewController;
    DUXTabBarContainerController *_tabBarContainer;
    DUXTabBar *_tabBar;
    long long _tabBarSelectedIndex;
    id<AWEAdLandingPageProtocol> _finalDisplayedController;
}

@property (retain, nonatomic) AWEAdWebViewController *webViewController;
@property (retain, nonatomic) AWEBDARifleViewController *lynxViewController;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) UIPanGestureRecognizer *topCardPanGesture;
@property (retain, nonatomic) AWEAdCustomHeaderWebViewTopCard *topCard;
@property (retain, nonatomic) AWEAdCustomHeaderWebViewNaviBar *naviBar;
@property (copy, nonatomic) NSString *barType;
@property (nonatomic) double naviBarHeight;
@property (nonatomic) double topCardHeight;
@property (nonatomic) double topCardHeightDiff;
@property (nonatomic) BOOL isUserSliding;
@property (nonatomic) double canScrollDisdance;
@property (nonatomic) double topCardShowHeight;
@property (nonatomic) double containerViewOriginFrame;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) BOOL isWebViewVerticalScollBlocked;
@property (retain, nonatomic) AWEAdFeedCommentViewController *commentViewController;
@property (retain, nonatomic) DUXTabBarContainerController *tabBarContainer;
@property (retain, nonatomic) DUXTabBar *tabBar;
@property (nonatomic) long long tabBarSelectedIndex;
@property (retain, nonatomic) id<AWEAdLandingPageProtocol> finalDisplayedController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)adCustomHeaderWebViewControllerWithAwemeModel:(id)arg0;
+ (BOOL)canShowAdCustomHeaderWebViewControllerWithAwemeModel:(id)arg0;

- (id)awemeModel;
- (void)setAwemeModel:(id)arg0;
- (id)initWithAwemeModel:(id)arg0;
- (void)trackShow;
- (id)tabBarContainer;
- (void)setTabBarContainer:(id)arg0;
- (void)setBarType:(id)arg0;
- (void)setNaviBarHeight:(double)arg0;
- (double)naviBarHeight;
- (long long)numberOfControllers:(id)arg0;
- (id)slidingViewController:(id)arg0 viewControllerAtIndex:(long long)arg1;
- (void)slidingViewController:(id)arg0 didSelectIndex:(long long)arg1;
- (void)setupContainerViewAndFrame;
- (void)setupLynxViewControllerIfNeed;
- (void)setupWebViewController;
- (void)setupTabBarContainer;
- (void)setupTopBarWithBarType:(id)arg0;
- (void)setupNaviBar;
- (void)updateSubViewFollowedCompletion;
- (void)startFetchUserModel;
- (void)setTabBarSelectedIndex:(long long)arg0;
- (id)finalDisplayedController;
- (void)adCommentTrack:(id)arg0 event:(id)arg1 refer:(id)arg2;
- (BOOL)shouldShowLynxContentWithSmallBarType;
- (void)setLynxViewController:(id)arg0;
- (void)setFinalDisplayedController:(id)arg0;
- (id)lynxViewController;
- (double)topCardHeight;
- (double)topCardHeightDiff;
- (id)topCard;
- (void)setCanScrollDisdance:(double)arg0;
- (id)naviBar;
- (void)reportButtonTapped:(id)arg0;
- (void)updateSubViewFollowButton;
- (id)topCardPanGesture;
- (BOOL)checkShowRetain;
- (BOOL)isUserSliding;
- (void)blockContentOffsetAtVerticalZero:(id)arg0;
- (BOOL)isWebViewVerticalScollBlocked;
- (void)setIsUserSliding:(BOOL)arg0;
- (void)setContainerViewOriginFrame:(double)arg0;
- (double)containerViewOriginFrame;
- (void)setIsWebViewVerticalScollBlocked:(BOOL)arg0;
- (void)updateContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)updateNaviBarContentAlpha;
- (double)canScrollDisdance;
- (void)setTopCardPanGesture:(id)arg0;
- (id)commentViewController;
- (long long)tabBarSelectedIndex;
- (void)rifleViewController:(id)arg0 loadFailedWithErrorInfo:(id)arg1;
- (void)setTopCard:(id)arg0;
- (void)setNaviBar:(id)arg0;
- (void)setTopCardHeight:(double)arg0;
- (void)setTopCardHeightDiff:(double)arg0;
- (double)topCardShowHeight;
- (void)setTopCardShowHeight:(double)arg0;
- (void)setCommentViewController:(id)arg0;
- (void)handlePan:(id)arg0;
- (void).cxx_destruct;
- (void)setTabBar:(id)arg0;
- (id)tabBar;
- (unsigned long long)currentState;
- (void)setContainerView:(id)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (void)scrollViewDidScroll:(id)arg0;
- (id)barType;
- (id)containerView;
- (void)viewWillAppear:(BOOL)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (id)webViewController;
- (void)backButtonTapped:(id)arg0;
- (void)setWebViewController:(id)arg0;

@end
