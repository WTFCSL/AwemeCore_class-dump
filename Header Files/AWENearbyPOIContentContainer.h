//
//     Generated by private class-dump
//

@class UIImageView, AWEGradientView;

@interface AWENearbyPOIContentContainer : UIView {
    UIImageView *_imageView;
    AWEGradientView *_bgGraidentView;
    AWEGradientView *_boderGradientView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastBounds;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) AWEGradientView *bgGraidentView;
@property (retain, nonatomic) AWEGradientView *boderGradientView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastBounds;

- (void)configViewsWithModel:(id)arg0 size:(struct CGSize { double x0; double x1; })arg1;
- (void)addBgGradient;
- (void)addBoderGradient;
- (id)boderGradientView;
- (id)bgGraidentView;
- (void)setBgGraidentView:(id)arg0;
- (void)setBoderGradientView:(id)arg0;
- (void).cxx_destruct;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setImageView:(id)arg0;
- (void)layoutSubviews;
- (void)setupUI;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })lastBounds;
- (void)setLastBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;

@end
