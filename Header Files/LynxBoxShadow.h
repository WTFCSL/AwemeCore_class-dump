//
//     Generated by private class-dump
//

@class UIColor, CALayer;

@interface LynxBoxShadow : NSObject {
    BOOL _inset;
    UIColor *_shadowColor;
    double _offsetX;
    double _offsetY;
    double _blurRadius;
    double _spreadRadius;
    CALayer *_layer;
}

@property (retain, nonatomic) UIColor *shadowColor;
@property (nonatomic) double offsetX;
@property (nonatomic) double offsetY;
@property (nonatomic) double blurRadius;
@property (nonatomic) double spreadRadius;
@property (nonatomic) BOOL inset;
@property (retain, nonatomic) CALayer *layer;

- (BOOL)isEqualToBoxShadow:(id)arg0;
- (double)spreadRadius;
- (void)setSpreadRadius:(double)arg0;
- (void)setLayer:(id)arg0;
- (void).cxx_destruct;
- (double)blurRadius;
- (id)shadowColor;
- (void)setBlurRadius:(double)arg0;
- (void)setShadowColor:(id)arg0;
- (id)layer;
- (BOOL)inset;
- (void)setInset:(BOOL)arg0;
- (double)offsetX;
- (void)setOffsetX:(double)arg0;
- (double)offsetY;
- (void)setOffsetY:(double)arg0;

@end
