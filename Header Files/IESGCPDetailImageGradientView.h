//
//     Generated by private class-dump
//

@class UIImageView, CAGradientLayer;

@interface IESGCPDetailImageGradientView : UIView {
    BOOL _autoFitHeight;
    UIImageView *_imageView;
    double _imageAlpha;
    CAGradientLayer *_gradientLayer;
    double _gradientLayerTopMargin;
    CAGradientLayer *_secondGradientLayer;
    double _secondGradientLayerTopMargin;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) double imageAlpha;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) double gradientLayerTopMargin;
@property (retain, nonatomic) CAGradientLayer *secondGradientLayer;
@property (nonatomic) double secondGradientLayerTopMargin;
@property (nonatomic) BOOL autoFitHeight;

- (void)setAutoFitHeight:(BOOL)arg0;
- (BOOL)autoFitHeight;
- (id)secondGradientLayer;
- (double)gradientLayerTopMargin;
- (double)secondGradientLayerTopMargin;
- (void)setGradientWithColors:(id)arg0 secondGradientLayerColors:(id)arg1 gradientLayerTopMargin:(double)arg2 secondGradientLayerTopMargin:(double)arg3;
- (void)didSetImage;
- (void)setGradientLayerTopMargin:(double)arg0;
- (void)setSecondGradientLayer:(id)arg0;
- (void)setSecondGradientLayerTopMargin:(double)arg0;
- (id)gradientLayer;
- (void).cxx_destruct;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setImageView:(id)arg0;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg0;
- (void)setGradientLayer:(id)arg0;
- (double)imageAlpha;
- (void)setImageAlpha:(double)arg0;

@end
