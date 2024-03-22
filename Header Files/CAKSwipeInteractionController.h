//
//     Generated by private class-dump
//

@class NSString, UIViewController, UIView;
@protocol CAKSwipeInteractionControllerDelegate, UIViewControllerContextTransitioning;

@interface CAKSwipeInteractionController : UIPercentDrivenInteractiveTransition <UIGestureRecognizerDelegate> {
    BOOL _interactionInProgress;
    BOOL _shouldCompleteTransition;
    BOOL _forbidTransitionGes;
    BOOL _forbidSimultaneousScrollViewPanGesture;
    UIViewController *_viewController;
    id<CAKSwipeInteractionControllerDelegate> _delegate;
    id<UIViewControllerContextTransitioning> _transitionContext;
    UIView *_toViewSnapshot;
    UIView *_blackMaskView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _fromVCFrame;
}

@property (retain, nonatomic) id<UIViewControllerContextTransitioning> transitionContext;
@property (retain, nonatomic) UIView *toViewSnapshot;
@property (retain, nonatomic) UIView *blackMaskView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } fromVCFrame;
@property (nonatomic) BOOL interactionInProgress;
@property (nonatomic) BOOL shouldCompleteTransition;
@property (weak, nonatomic) UIViewController *viewController;
@property (nonatomic) BOOL forbidTransitionGes;
@property (nonatomic) BOOL forbidSimultaneousScrollViewPanGesture;
@property (weak, nonatomic) id<CAKSwipeInteractionControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)viewControllerBasedStatusBarAppearanceEnabled;

- (void)wireToViewController:(id)arg0;
- (void)setForbidSimultaneousScrollViewPanGesture:(BOOL)arg0;
- (void)lockCurrentStatusBar;
- (void)unlockCurrentStatusBar;
- (void)setForbidTransitionGes:(BOOL)arg0;
- (void)prepareGestureRecognizerInView:(id)arg0;
- (void)setShouldCompleteTransition:(BOOL)arg0;
- (BOOL)shouldCompleteTransition;
- (void)setFromVCFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setToViewSnapshot:(id)arg0;
- (id)toViewSnapshot;
- (void)setBlackMaskView:(id)arg0;
- (id)blackMaskView;
- (double)_originYForViewController;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fromVCFrame;
- (BOOL)forbidTransitionGes;
- (BOOL)forbidSimultaneousScrollViewPanGesture;
- (void)updateInteractiveTransition:(double)arg0;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (id)init;
- (void)setTransitionContext:(id)arg0;
- (void)setViewController:(id)arg0;
- (id)transitionContext;
- (id)viewController;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (id)delegate;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (void)startInteractiveTransition:(id)arg0;
- (void)setDelegate:(id)arg0;
- (BOOL)interactionInProgress;
- (void)handlePanGesture:(id)arg0;
- (void)setInteractionInProgress:(BOOL)arg0;

@end