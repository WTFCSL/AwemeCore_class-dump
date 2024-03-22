//
//     Generated by private class-dump
//

@class NSString, IESLiveActionSheetPresentAnimator, UIPanGestureRecognizer, UIViewController;

@interface IESLiveActionSheetPresentViewController : UIViewController <UIViewControllerTransitioningDelegate> {
    BOOL _enablePanDown;
    BOOL _enableTimingFunction;
    BOOL _useAutoLayout;
    id /* block */ _beginDismissHandler;
    id /* block */ _canDismissHandler;
    id /* block */ _willDismissHandler;
    id /* block */ _presentHandler;
    double _animationDuration;
    IESLiveActionSheetPresentAnimator *_animator;
    UIViewController *_contentViewController;
    UIPanGestureRecognizer *_hideGesture;
}

@property (retain, nonatomic) IESLiveActionSheetPresentAnimator *animator;
@property (retain, nonatomic) UIViewController *contentViewController;
@property (retain, nonatomic) UIPanGestureRecognizer *hideGesture;
@property (nonatomic) BOOL useAutoLayout;
@property (copy, nonatomic) id /* block */ beginDismissHandler;
@property (copy, nonatomic) id /* block */ canDismissHandler;
@property (copy, nonatomic) id /* block */ willDismissHandler;
@property (copy, nonatomic) id /* block */ dismissHandler;
@property (copy, nonatomic) id /* block */ presentHandler;
@property (nonatomic) BOOL enablePanDown;
@property (nonatomic) BOOL enableTimingFunction;
@property (nonatomic) double animationDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPresentHandler:(id /* block */)arg0;
- (id /* block */)presentHandler;
- (void)setBackgroundViewHidden:(BOOL)arg0;
- (id)initWithViewController:(id)arg0 viewSize:(struct CGSize { double x0; double x1; })arg1 backgroundView:(id)arg2 landscape:(BOOL)arg3;
- (void)setEnablePanDown:(BOOL)arg0;
- (id)initWithView:(id)arg0 viewSize:(struct CGSize { double x0; double x1; })arg1 backgroundView:(id)arg2 landscape:(BOOL)arg3;
- (void)setCanDismissHandler:(id /* block */)arg0;
- (void)addHideGestureForView:(id)arg0;
- (id)hideGesture;
- (void)setHideGesture:(id)arg0;
- (id)initWithView:(id)arg0 backgroundView:(id)arg1 landscape:(BOOL)arg2;
- (void)setUseAutoLayout:(BOOL)arg0;
- (BOOL)useAutoLayout;
- (id)initWithView:(id)arg0 viewSize:(struct CGSize { double x0; double x1; })arg1 backgroundView:(id)arg2;
- (void)setBeginDismissHandler:(id /* block */)arg0;
- (void)showBackAfterPan;
- (id /* block */)beginDismissHandler;
- (id /* block */)canDismissHandler;
- (BOOL)enableTimingFunction;
- (void)setEnableTimingFunction:(BOOL)arg0;
- (BOOL)enablePanDown;
- (id)animator;
- (BOOL)shouldAutorotate;
- (id)contentViewController;
- (long long)modalPresentationStyle;
- (void).cxx_destruct;
- (double)animationDuration;
- (id)transitioningDelegate;
- (void)setContentViewController:(id)arg0;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)setDismissHandler:(id /* block */)arg0;
- (id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2;
- (void)setAnimationDuration:(double)arg0;
- (void)didReceiveMemoryWarning;
- (void)pan:(id)arg0;
- (id)animationControllerForDismissedController:(id)arg0;
- (void)setAnimator:(id)arg0;
- (void)viewDidLoad;
- (id /* block */)dismissHandler;
- (id /* block */)willDismissHandler;
- (void)setWillDismissHandler:(id /* block */)arg0;

@end
