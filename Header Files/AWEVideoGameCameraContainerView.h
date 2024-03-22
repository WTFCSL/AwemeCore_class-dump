//
//     Generated by private class-dump
//

@class NSString, CAKeyframeAnimation, UIView, ACCAnimatedButton;

@interface AWEVideoGameCameraContainerView : UIView <CAAnimationDelegate> {
    BOOL _isShowingForEffectControlGame;
    ACCAnimatedButton *_closeBtn;
    UIView *_blurEffectView;
    CAKeyframeAnimation *_animation;
    id /* block */ _appearCompletion;
    id /* block */ _disappearCompletion;
}

@property (retain, nonatomic) UIView *blurEffectView;
@property (retain, nonatomic) CAKeyframeAnimation *animation;
@property (copy, nonatomic) id /* block */ appearCompletion;
@property (copy, nonatomic) id /* block */ disappearCompletion;
@property (retain, nonatomic) ACCAnimatedButton *closeBtn;
@property (nonatomic) BOOL isShowingForEffectControlGame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissWithAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (id)closeBtn;
- (void)setCloseBtn:(id)arg0;
- (void)showWithAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (id /* block */)disappearCompletion;
- (void)setDisappearCompletion:(id /* block */)arg0;
- (void)setIsShowingForEffectControlGame:(BOOL)arg0;
- (void)setAppearCompletion:(id /* block */)arg0;
- (BOOL)isShowingForEffectControlGame;
- (id /* block */)appearCompletion;
- (id)init;
- (void).cxx_destruct;
- (id)animation;
- (void)setAnimation:(id)arg0;
- (void)animationDidStop:(id)arg0 finished:(BOOL)arg1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)setupUI;
- (id)blurEffectView;
- (void)setBlurEffectView:(id)arg0;

@end
