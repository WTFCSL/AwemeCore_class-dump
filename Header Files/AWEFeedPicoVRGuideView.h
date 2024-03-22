//
//     Generated by private class-dump
//

@class UILabel, LOTAnimationView;

@interface AWEFeedPicoVRGuideView : UIView {
    BOOL _willDismiss;
    id /* block */ _dismissedBlock;
    long long _type;
    UILabel *_tipsLabel;
    LOTAnimationView *_animationView;
}

@property (nonatomic) long long type;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) LOTAnimationView *animationView;
@property (nonatomic) BOOL willDismiss;
@property (copy, nonatomic) id /* block */ dismissedBlock;

- (id)tipsLabel;
- (void)setTipsLabel:(id)arg0;
- (id)tipText;
- (void)setDismissedBlock:(id /* block */)arg0;
- (id /* block */)dismissedBlock;
- (id)lottieName;
- (void)setWillDismiss:(BOOL)arg0;
- (void)initSubviews;
- (void)dismiss;
- (void).cxx_destruct;
- (long long)type;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)willDismiss;
- (void)setType:(long long)arg0;
- (void)play;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)initConstraints;
- (id)animationView;
- (void)setAnimationView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 type:(long long)arg1;

@end