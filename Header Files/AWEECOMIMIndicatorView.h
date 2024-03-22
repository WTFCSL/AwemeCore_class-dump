//
//     Generated by private class-dump
//

@class UIImageView;

@interface AWEECOMIMIndicatorView : UIView {
    BOOL _isAnimating;
    UIImageView *_indicatorImageView;
}

@property (nonatomic) BOOL isAnimating;
@property (retain, nonatomic) UIImageView *indicatorImageView;

+ (void)stopAfterSecond:(double)arg0 block:(id /* block */)arg1;

- (id)indicatorImageView;
- (void)setIndicatorImageView:(id)arg0;
- (BOOL)isAnimating;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)startAnimation;
- (void)setIsAnimating:(BOOL)arg0;
- (void)stopAnimation;

@end