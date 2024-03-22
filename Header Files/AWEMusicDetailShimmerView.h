//
//     Generated by private class-dump
//

@class AWEMusicDetailShimmerViewColor, CAGradientLayer;

@interface AWEMusicDetailShimmerView : UIView {
    BOOL _shimmering;
    unsigned long long _shimmerDirection;
    AWEMusicDetailShimmerViewColor *_color;
    CAGradientLayer *_maskLayer;
}

@property (retain, nonatomic) CAGradientLayer *maskLayer;
@property (nonatomic) BOOL shimmering;
@property (nonatomic) unsigned long long shimmerDirection;
@property (retain, nonatomic) AWEMusicDetailShimmerViewColor *color;

- (BOOL)shimmering;
- (void)setShimmering:(BOOL)arg0;
- (void)beginShimmering;
- (void)endShimmering;
- (void)updateMaskColors;
- (void)updateMaskLayout;
- (unsigned long long)shimmerDirection;
- (void)createMaskIfNeeded;
- (id)createSliderAnimation;
- (void)startShimming;
- (void)stopShimming;
- (void)setShimmerDirection:(unsigned long long)arg0;
- (id)color;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutSubviews;
- (void)setColor:(id)arg0;
- (id)maskLayer;
- (void)setMaskLayer:(id)arg0;

@end