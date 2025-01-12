//
//     Generated by private class-dump
//

@class UIView, NSString, UITapGestureRecognizer, UIViewPropertyAnimator, UIPanGestureRecognizer, UIViewController, NSObject, UIScrollView;
@protocol AFDHalfScreenPresentationProtocol, AFDHalfScreenDelegate;

@interface AFDHalfScreenPresentationViewController : UIViewController <UIGestureRecognizerDelegate, AFDHalfScreenHostViewControllerProtocol> {
    BOOL _awe_shouldBypassPresentationHook;
    BOOL _interactiveDismissal;
    BOOL _standalone;
    UIViewController<AFDHalfScreenPresentationProtocol> *_contentViewController;
    NSObject<AFDHalfScreenDelegate> *_appearanceDelegate;
    long long _customPresentationStyle;
    UIView *_dimmingView;
    UITapGestureRecognizer *_tapDismissGesture;
    UIPanGestureRecognizer *_panDismissGesture;
    UIViewPropertyAnimator *_interactiveAnimator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIViewController<AFDHalfScreenPresentationProtocol> *contentViewController;
@property (readonly, nonatomic) UIScrollView *contentScrollView;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frameOfContentView;
@property (retain, nonatomic) UIView *dimmingView;
@property (nonatomic) BOOL interactiveDismissal;
@property (retain, nonatomic) UITapGestureRecognizer *tapDismissGesture;
@property (retain, nonatomic) UIPanGestureRecognizer *panDismissGesture;
@property (retain, nonatomic) UIViewPropertyAnimator *interactiveAnimator;
@property (nonatomic) BOOL standalone;
@property (weak, nonatomic) NSObject<AFDHalfScreenDelegate> *appearanceDelegate;
@property (nonatomic) long long customPresentationStyle;
@property (nonatomic) BOOL awe_shouldBypassPresentationHook;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)awe_shouldBypassPresentationHook;
- (double)dimmingViewAlpha;
- (void)presentHalfScreenAnimated:(BOOL)arg0 presentingViewController:(id)arg1 completion:(id /* block */)arg2;
- (void)dismissHalfScreenAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (id)panDismissGesture;
- (id)interactiveAnimator;
- (id)tapDismissGesture;
- (void)updateDimmingViewAccessibilityFrame;
- (long long)customPresentationStyle;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfContentView;
- (void)addChildContentViewController;
- (void)presentationAnimation:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)addToParentViewController:(id)arg0 completion:(id /* block */)arg1;
- (void)removeChildContentViewController;
- (void)removeWithCompletion:(id /* block */)arg0;
- (void)dismissAnimation:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)setInteractiveAnimator:(id)arg0;
- (void)dismissInteractiveWithCompletion:(id /* block */)arg0;
- (void)setInteractiveDismissal:(BOOL)arg0;
- (void)setCustomPresentationStyle:(long long)arg0;
- (void)setAwe_shouldBypassPresentationHook:(BOOL)arg0;
- (BOOL)interactiveDismissal;
- (void)setTapDismissGesture:(id)arg0;
- (void)setPanDismissGesture:(id)arg0;
- (void)setAppearanceDelegate:(id)arg0;
- (id)appearanceDelegate;
- (id)childViewControllerForStatusBarStyle;
- (id)contentViewController;
- (void)viewDidLayoutSubviews;
- (void)setDimmingView:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0;
- (id)dimmingView;
- (void)setContentViewController:(id)arg0;
- (void)viewWillDisappear:(BOOL)arg0;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (id)contentView;
- (id)contentScrollView;
- (void)viewWillAppear:(BOOL)arg0;
- (void)viewDidLoad;
- (id)initWithContentViewController:(id)arg0;
- (BOOL)accessibilityPerformEscape;
- (void)setStandalone:(BOOL)arg0;
- (BOOL)standalone;
- (void)dimmingViewTapped:(id)arg0;
- (void)handlePanGesture:(id)arg0;

@end
