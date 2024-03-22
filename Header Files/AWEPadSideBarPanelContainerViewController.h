//
//     Generated by private class-dump
//

@class UIViewController, UILongPressGestureRecognizer, NSString, UIView, UIPanGestureRecognizer, UITapGestureRecognizer;
@protocol AWEPlayInteractionViewControllerProtocol, AWECommentListViewControllerProtocol, AWEPadCommentSideBarPanelDelegate;

@interface AWEPadSideBarPanelContainerViewController : UIViewController <AWEPadUIAdaptionViewTransitionObserver, AWEPadCommentPanelObserveProtocol, UIGestureRecognizerDelegate, AWEPadSideBarPanelProtocol> {
    BOOL isShowing;
    BOOL _isAnimating;
    BOOL _isDismissing;
    BOOL _isLandscape;
    BOOL _isScrolling;
    BOOL _isDisplayAnimating;
    BOOL _isShowingKeyboard;
    BOOL _needshowAccessoryView;
    id<AWEPadCommentSideBarPanelDelegate> delegate;
    UIViewController<AWECommentListViewControllerProtocol> *_commentViewController;
    UIView *_contentView;
    UIView *_containerView;
    UIView *_maskView;
    UIViewController *_topViewController;
    double _offsetX;
    long long _scene;
    UIView *_coverView;
    double _offsetY;
    UITapGestureRecognizer *_tapGesture;
    double _originPanX;
    UIPanGestureRecognizer *_pandGesture;
    UILongPressGestureRecognizer *_longPressGesture;
    double _lastOffset;
    id<AWEPlayInteractionViewControllerProtocol> _container;
    UIPanGestureRecognizer *_panCommentGesture;
    id<AWEPlayInteractionViewControllerProtocol> _currentInteraction;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *maskView;
@property (weak, nonatomic) UIViewController *topViewController;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) double offsetX;
@property (nonatomic) BOOL isDismissing;
@property (nonatomic) long long scene;
@property (retain, nonatomic) UIView *coverView;
@property (nonatomic) BOOL isLandscape;
@property (nonatomic) double offsetY;
@property (nonatomic) BOOL isScrolling;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (nonatomic) double originPanX;
@property (retain, nonatomic) UIPanGestureRecognizer *pandGesture;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGesture;
@property (nonatomic) double lastOffset;
@property (weak, nonatomic) id<AWEPlayInteractionViewControllerProtocol> container;
@property (nonatomic) BOOL isDisplayAnimating;
@property (retain, nonatomic) UIPanGestureRecognizer *panCommentGesture;
@property (retain, nonatomic) id<AWEPlayInteractionViewControllerProtocol> currentInteraction;
@property (nonatomic) BOOL isShowingKeyboard;
@property (nonatomic) BOOL needshowAccessoryView;
@property (retain, nonatomic) UIView *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEPadCommentSideBarPanelDelegate> delegate;
@property (nonatomic) BOOL isShowing;
@property (retain, nonatomic) UIViewController<AWECommentListViewControllerProtocol> *commentViewController;

+ (Class)aAWEPadModuleAdapterClass;

- (void)setIsShowing:(BOOL)arg0;
- (id)aAWEPadModuleAdapter;
- (id)commentViewController;
- (void)setCommentViewController:(id)arg0;
- (BOOL)enableOptimize;
- (void)scrollViewDidScroll:(id)arg0 withViewController:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg0 withViewController:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 withViewController:(id)arg2;
- (double)commentScreenPercent;
- (void)onTabBarChangedNotification:(id)arg0;
- (void)trackLogWithKey:(id)arg0 message:(id)arg1;
- (BOOL)enableScroll;
- (BOOL)isDisplayAnimating;
- (void)setIsDisplayAnimating:(BOOL)arg0;
- (void)setOriginPanX:(double)arg0;
- (double)originPanX;
- (void)performViewController_viewDidAppear:(id)arg0;
- (void)performViewController_viewDidDisappear:(id)arg0;
- (void)setNeedshowAccessoryView:(BOOL)arg0;
- (void)handleFeedContainerIndexChange:(id)arg0;
- (void)alertDidShow;
- (void)keyboardFrameChange:(id)arg0;
- (BOOL)needHideInteraction;
- (void)forceDismissWithAnimate:(BOOL)arg0;
- (void)setPanCommentGesture:(id)arg0;
- (id)panCommentGesture;
- (id)pandGesture;
- (void)updateWithOriginX:(double)arg0;
- (void)configSceneWithTopViewController:(id)arg0;
- (void)hideInteractionIfNeed:(BOOL)arg0;
- (void)handleTapMaskView:(id)arg0;
- (void)handlePanMaskView:(id)arg0;
- (void)setPandGesture:(id)arg0;
- (double)maxScrollOffset;
- (void)handleDidEndScrollView:(id)arg0;
- (BOOL)needshowAccessoryView;
- (void)dismissPanelWithCompletion:(id /* block */)arg0 animate:(BOOL)arg1 closeMethod:(long long)arg2;
- (void)showPanelWithCompletion:(id /* block */)arg0 animate:(BOOL)arg1 withContainer:(id)arg2;
- (id)container;
- (void)keyboardDidHide:(id)arg0;
- (BOOL)isAnimating;
- (void)setIsScrolling:(BOOL)arg0;
- (id)longPressGesture;
- (id)init;
- (void)setScene:(long long)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (void)setContainer:(id)arg0;
- (BOOL)isScrolling;
- (BOOL)isDismissing;
- (BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg0;
- (id)maskView;
- (void)setIsLandscape:(BOOL)arg0;
- (void)setContainerView:(id)arg0;
- (BOOL)isShowing;
- (void)alertDidDismiss;
- (void)viewDidDisappear:(BOOL)arg0;
- (id)tapGesture;
- (id)contentView;
- (id)delegate;
- (id)containerView;
- (id)topViewController;
- (BOOL)isLandscape;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveEvent:(id)arg1;
- (void)viewWillAppear:(BOOL)arg0;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)setMaskView:(id)arg0;
- (long long)scene;
- (void)setIsAnimating:(BOOL)arg0;
- (void)setContentView:(id)arg0;
- (double)lastOffset;
- (void)setLastOffset:(double)arg0;
- (void)setLongPressGesture:(id)arg0;
- (void)setupUI;
- (BOOL)isShowingKeyboard;
- (void)setIsShowingKeyboard:(BOOL)arg0;
- (void)setIsDismissing:(BOOL)arg0;
- (void)handlePanGesture:(id)arg0;
- (void)setTapGesture:(id)arg0;
- (double)offsetX;
- (void)setOffsetX:(double)arg0;
- (double)offsetY;
- (void)setOffsetY:(double)arg0;
- (double)panelWidth;
- (void)setTopViewController:(id)arg0;
- (id)coverView;
- (void)setCoverView:(id)arg0;
- (id)currentInteraction;
- (void)setCurrentInteraction:(id)arg0;

@end