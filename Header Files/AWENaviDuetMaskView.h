//
//     Generated by private class-dump
//

@class NSArray, CAGradientLayer;

@interface AWENaviDuetMaskView : UIView {
    CAGradientLayer *_tGradientLayer;
    CAGradientLayer *_bGradientLayer;
    NSArray *_cgcolors;
}

@property (retain, nonatomic) CAGradientLayer *tGradientLayer;
@property (retain, nonatomic) CAGradientLayer *bGradientLayer;
@property (copy, nonatomic) NSArray *cgcolors;

- (id)tGradientLayer;
- (id)bGradientLayer;
- (void)renderingIfNeeded;
- (id)cgcolors;
- (void)setTGradientLayer:(id)arg0;
- (void)setBGradientLayer:(id)arg0;
- (void)setCgcolors:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutSubviews;

@end
