//
//     Generated by private class-dump
//

@class CAGradientLayer;

@interface AWENearbySkeletonView : UIView {
    CAGradientLayer *_animLayer;
}

@property (retain, nonatomic) CAGradientLayer *animLayer;

- (id)animLayer;
- (void)setAnimLayer:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)startAnimation;
- (void)stopAnimation;

@end