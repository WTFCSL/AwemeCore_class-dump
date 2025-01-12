//
//     Generated by private class-dump
//

@class UILabel, CAGradientLayer, UIView;

@interface AWELiveCardTopInfoTagView : UIView {
    UILabel *_firstLabel;
    UILabel *_secondLabel;
    CAGradientLayer *_gradientLayer;
    UIView *_translucentBackgroundView;
}

@property (retain, nonatomic) UILabel *firstLabel;
@property (retain, nonatomic) UILabel *secondLabel;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIView *translucentBackgroundView;

- (id)tagLabel;
- (id)pinkGradientBgLabelWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)blueGradientBgLabelWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)purpleGradientBgLabelWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)gradientBgLabelWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 startColor:(id)arg1 endColor:(id)arg2;
- (void)updateWithFirstTitle:(id)arg0 secondTitle:(id)arg1 tagType:(long long)arg2;
- (id)translucentBackgroundViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTranslucentBackgroundView:(id)arg0;
- (id)gradientLayerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 tagType:(long long)arg1;
- (id)translucentBackgroundView;
- (id)gradientLayer;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setGradientLayer:(id)arg0;
- (id)firstLabel;
- (void)setFirstLabel:(id)arg0;
- (id)secondLabel;
- (void)setSecondLabel:(id)arg0;

@end
