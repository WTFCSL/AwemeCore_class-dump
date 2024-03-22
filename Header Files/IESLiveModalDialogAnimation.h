//
//     Generated by private class-dump
//

@class UIControl, NSString, UIGestureRecognizer, UIViewController;

@interface IESLiveModalDialogAnimation : NSObject <UIViewControllerAnimatedTransitioning> {
    UIViewController *_presentor;
    UIViewController *_viewController;
    UIControl *_maskView;
    UIGestureRecognizer *_tapGestureRecognizer;
}

@property (weak, nonatomic) UIViewController *presentor;
@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) UIControl *maskView;
@property (retain, nonatomic) UIGestureRecognizer *tapGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animationsShow:(BOOL)arg0 animateTransition:(id)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;
- (double)transitionDuration:(id)arg0;
- (void)animateTransition:(id)arg0;
- (void)setViewController:(id)arg0;
- (id)viewController;
- (void).cxx_destruct;
- (void)setTapGestureRecognizer:(id)arg0;
- (id)maskView;
- (id)initWithViewController:(id)arg0;
- (id)tapGestureRecognizer;
- (void)setMaskView:(id)arg0;
- (id)presentor;
- (void)setPresentor:(id)arg0;

@end
