//
//     Generated by private class-dump
//

@class UIColor, NSMutableDictionary, NSString;

@interface AWEUIDynamicColor : UIColor {
    NSString *_name;
    id /* block */ _resolveBlock;
    UIColor *_currentResolvedColor;
    NSMutableDictionary *_constColors;
}

@property (copy, nonatomic) id /* block */ resolveBlock;
@property (retain, nonatomic) UIColor *currentResolvedColor;
@property (retain, nonatomic) NSMutableDictionary *constColors;
@property (copy, nonatomic) NSString *name;

+ (id)dynamicColorWithResolveBlock:(id /* block */)arg0;

- (id)dux_colorWithTheme:(long long)arg0;
- (id)constColorForTheme:(id)arg0;
- (void)invalidateCurrentColor;
- (id)constColorForColorSuit:(unsigned long long)arg0;
- (id /* block */)resolveBlock;
- (id)currentResolvedColor;
- (void)setResolveBlock:(id /* block */)arg0;
- (void)setCurrentResolvedColor:(id)arg0;
- (void)setConstColors:(id)arg0;
- (id)constColors;
- (BOOL)getRed:(double *)arg0 green:(double *)arg1 blue:(double *)arg2 alpha:(double *)arg3;
- (void)setStroke;
- (void).cxx_destruct;
- (struct CGColor { } *)CGColor;
- (void)set;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)_highContrastDynamicColor;
- (id)colorWithAlphaComponent:(double)arg0;
- (BOOL)_isDynamic;
- (BOOL)getHue:(double *)arg0 saturation:(double *)arg1 brightness:(double *)arg2 alpha:(double *)arg3;
- (BOOL)getWhite:(double *)arg0 alpha:(double *)arg1;
- (void)setFill;
- (unsigned long long)hash;
- (void)setName:(id)arg0;
- (BOOL)isEqual:(id)arg0;
- (id)description;
- (id)forwardingTargetForSelector:(SEL)arg0;
- (id)name;

@end
