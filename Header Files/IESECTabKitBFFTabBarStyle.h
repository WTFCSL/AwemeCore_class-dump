//
//     Generated by private class-dump
//

@class CAGradientLayer;

@interface IESECTabKitBFFTabBarStyle : NSObject {
    CAGradientLayer *_indicatorGradientLayer;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _indicatorEdgeInsets;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } indicatorEdgeInsets;
@property (retain, nonatomic) CAGradientLayer *indicatorGradientLayer;

- (void)setIndicatorEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void)setIndicatorGradientLayer:(id)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })indicatorEdgeInsets;
- (id)indicatorGradientLayer;
- (void).cxx_destruct;

@end
