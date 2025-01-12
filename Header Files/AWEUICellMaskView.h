//
//     Generated by private class-dump
//

@class UIImageView, UIVisualEffectView;

@interface AWEUICellMaskView : UIView {
    UIVisualEffectView *_effectView;
    UIImageView *_logoImageView;
}

@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) UIImageView *logoImageView;

- (id)init;
- (id)effectView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setEffectView:(id)arg0;
- (id)logoImageView;
- (void)setLogoImageView:(id)arg0;
- (void)_setupUI;

@end
