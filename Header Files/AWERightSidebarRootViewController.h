//
//     Generated by private class-dump
//

@class AWERightSidebarFeedContext, NSString, UIView, UIGestureRecognizer, AWERightSidebarRootViewModel, AWERightSideBarPageBottomViewController, UIViewController, AWERightSidebarListViewController, AWERightSideBarInteractViewController;
@protocol AWERightSidebarSourceTransationContextProvider, AWERightSidebarMainViewControllerProtocol;

@interface AWERightSidebarRootViewController : UIViewController <AWERightSidebarTargetTransationContextProvider, AWERightSidebarPinchZoomInnerContextProvider> {
    BOOL _open;
    BOOL _didPop;
    AWERightSidebarRootViewModel *_rootViewModel;
    UIView *_closeView;
    UIView *_feedContanierView;
    UIViewController<AWERightSidebarMainViewControllerProtocol> *_mainFeedViewController;
    AWERightSidebarListViewController *_listViewController;
    AWERightSideBarPageBottomViewController *_pageBottomViewController;
    id<AWERightSidebarSourceTransationContextProvider> _sourceViewControllerContext;
    AWERightSidebarFeedContext *_context;
    NSString *_referString;
    AWERightSideBarInteractViewController *_animationInteractViewController;
    unsigned long long _transitionDirection;
    UIGestureRecognizer *_transitionGestureRecognizer;
}

@property (retain, nonatomic) AWERightSidebarRootViewModel *rootViewModel;
@property (retain, nonatomic) UIView *closeView;
@property (retain, nonatomic) UIView *feedContanierView;
@property (retain, nonatomic) UIViewController<AWERightSidebarMainViewControllerProtocol> *mainFeedViewController;
@property (retain, nonatomic) AWERightSidebarListViewController *listViewController;
@property (retain, nonatomic) AWERightSideBarPageBottomViewController *pageBottomViewController;
@property (weak, nonatomic) id<AWERightSidebarSourceTransationContextProvider> sourceViewControllerContext;
@property (retain, nonatomic) AWERightSidebarFeedContext *context;
@property (nonatomic) BOOL open;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) AWERightSideBarInteractViewController *animationInteractViewController;
@property (nonatomic) unsigned long long transitionDirection;
@property (retain, nonatomic) UIGestureRecognizer *transitionGestureRecognizer;
@property (nonatomic) BOOL didPop;
@property (readonly, nonatomic) double rightSidebarWidth;
@property (readonly, nonatomic) double rightSidebarBottomOffset;
@property (readonly, nonatomic) double rightSidebarTopOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referString;
- (void)setReferString:(id)arg0;
- (id)transition_destinatedViewControllerForSlideDirection:(unsigned long long)arg0 gestureRecognizer:(id)arg1;
- (BOOL)transition_shouldStartInteractiveTranstionToVC:(id)arg0;
- (unsigned long long)transition_destinatedType;
- (void)addNotifications;
- (id)closeView;
- (void)setCloseView:(id)arg0;
- (void)removeSelf;
- (void)p_appWillResignActive:(id)arg0;
- (void)p_appDidBecomeActive:(id)arg0;
- (void)p_windowDidBecomeKeyNotification:(id)arg0;
- (void)p_windowDidResignKeyNotification:(id)arg0;
- (void)playIfActive;
- (id)mainAppWindow;
- (id)rsf_feedTableViewController;
- (void)transitionCommpletedIsPush:(BOOL)arg0 wasCancelled:(BOOL)arg1;
- (id)rootViewModel;
- (void)setInteractViewMaskViewLayoutWithPercentage:(double)arg0;
- (void)rsf_transationBeforPopWithSourceContext:(id)arg0;
- (void)rsf_transationPopingWithSourceContext:(id)arg0 percentage:(double)arg1;
- (void)popSelf;
- (id)rsf_pinchTargetVideoController;
- (id)rsf_pinchTargetRichContentContainer;
- (id)rsf_pinchTargetTableViewController;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rsf_targetFrame;
- (void)rsf_pinchLazyLoadMainFeed;
- (void)rsf_pushAnimationComplete;
- (id)rsf_pinchCurrentAweme;
- (id)rsf_pinchFeedCurrentPlayAweme;
- (void)rsf_pinchStart;
- (void)rsf_pinchFinishWithCloseMethod:(id)arg0;
- (void)rsf_pinchStartInWithVideoController:(id)arg0;
- (void)setRootViewModel:(id)arg0;
- (id)mainFeedViewController;
- (void)setMainFeedViewController:(id)arg0;
- (id)initWithAweme:(id)arg0 factory:(id)arg1 setContext:(id /* block */)arg2;
- (void)bindRootViewModelBlock;
- (void)trackForPageShow;
- (void)didBlankSpaceClick;
- (void)setFeedContanierView:(id)arg0;
- (id)feedContanierView;
- (id)getUniteBackgroundColor;
- (void)setPageBottomViewController:(id)arg0;
- (id)pageBottomViewController;
- (void)setupPageBottomViewController;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getFeedContainerViewFrame;
- (void)setUniteBackgroundColor;
- (double)getTopInset;
- (double)getBottomInset;
- (double)rightSidebarWidth;
- (void)trackForPageExitWithCloseMethod:(id)arg0;
- (double)rightSidebarBottomOffset;
- (id)animationInteractViewController;
- (void)changeFeedViewControllerPlayState;
- (id)getTargetCellController;
- (BOOL)isForceDontRemoveSelfWithTopViewController;
- (BOOL)isForceRemoveSelfWithTopViewController;
- (id)sourceViewControllerContext;
- (void)trackForPageExit;
- (double)getTableViewBottomInset;
- (void)setSourceViewControllerContext:(id)arg0;
- (void)setAnimationInteractViewController:(id)arg0;
- (void)setListViewControllerViewOriginX:(double)arg0;
- (void)setBottomViewControllerViewOriginY:(double)arg0;
- (double)rightSidebarTopOffset;
- (void)setTransitionGestureRecognizer:(id)arg0;
- (void)trackForEnterPersonPage;
- (id)transitionGestureRecognizer;
- (void)popWithCloseMethod:(id)arg0;
- (void)rsf_lazyLoadMainFeed;
- (void)rsf_transationBeforePushWithSourceContext:(id)arg0;
- (void)rsf_transationPushingWithSourceContext:(id)arg0 percentage:(double)arg1;
- (double)getLeftFeedContentHeight;
- (void)trackForStayTime;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (BOOL)open;
- (void)setContext:(id)arg0;
- (void)setOpen:(BOOL)arg0;
- (void)viewWillDisappear:(BOOL)arg0;
- (long long)preferredStatusBarStyle;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)setListViewController:(id)arg0;
- (id)context;
- (BOOL)isActive;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (id)listViewController;
- (unsigned long long)transitionDirection;
- (void)setupView;
- (void)setTransitionDirection:(unsigned long long)arg0;
- (void)setupInitialLayout;
- (BOOL)didPop;
- (void)setDidPop:(BOOL)arg0;

@end