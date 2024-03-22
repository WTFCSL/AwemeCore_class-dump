//
//     Generated by private class-dump
//

@class LOTAnimationView, NSTimer, AWEAwemeModel, UIViewController;

@interface AWEPlayInteractionLikeAnimationView : UIView {
    BOOL _isDynamic;
    LOTAnimationView *_diggLikeAnimationView;
    long long _clickCount;
    long long _clickCountToBlast;
    AWEAwemeModel *_model;
    NSTimer *_timer;
    UIViewController *_viewController;
}

@property (retain, nonatomic) LOTAnimationView *diggLikeAnimationView;
@property (nonatomic) long long clickCount;
@property (nonatomic) long long clickCountToBlast;
@property (nonatomic) BOOL isDynamic;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) UIViewController *viewController;

- (void)setClickCountToBlast:(long long)arg0;
- (long long)clickCountToBlast;
- (id)getLOTAnimationViewWithGurd:(id)arg0 defaultFileName:(id)arg1 completionRemove:(BOOL)arg2;
- (void)setDiggLikeAnimationView:(id)arg0;
- (id)diggLikeAnimationView;
- (void)didClickLikeAnimation;
- (void)trackLikeMultiClickWithTag:(long long)arg0;
- (void)trackLikeAnimation:(id)arg0 status:(long long)arg1 reason_for_failure:(id)arg2;
- (void)handleAppDidEnterBackground;
- (void)hideIfNeed:(BOOL)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_scaleWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 withScale:(double)arg1;
- (BOOL)_pointInsideDisableInteractionView:(struct CGPoint { double x0; double x1; })arg0;
- (id)_disableInteractionView;
- (void)showWithModel:(id)arg0 withViewController:(id)arg1;
- (id)timer;
- (BOOL)isDynamic;
- (void)setModel:(id)arg0;
- (void)removeFromSuperview;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)invalidateTimer;
- (void)setViewController:(id)arg0;
- (id)viewController;
- (void).cxx_destruct;
- (id)model;
- (void)setClickCount:(long long)arg0;
- (void)addTimer:(double)arg0;
- (long long)clickCount;
- (void)didMoveToWindow;
- (void)setTimer:(id)arg0;
- (void)setIsDynamic:(BOOL)arg0;
- (void)stopAnimation;

@end