//
//     Generated by private class-dump
//

@class UILabel, CAGradientLayer;

@interface IESLiveKTVGradientLabel : UIView {
    UILabel *_label;
}

@property (retain, nonatomic) UILabel *label;
@property (readonly, nonatomic) CAGradientLayer *gradientLayer;

+ (Class)layerClass;

- (id)gradientLayer;
- (void).cxx_destruct;
- (void)setLabel:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)label;
- (void)layoutSubviews;

@end