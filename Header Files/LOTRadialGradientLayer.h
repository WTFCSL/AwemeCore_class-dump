//
//     Generated by private class-dump
//

@class NSArray;

@interface LOTRadialGradientLayer : CALayer

@property struct CGPoint { double x0; double x1; } startPoint;
@property struct CGPoint { double x0; double x1; } endPoint;
@property (copy, nonatomic) NSArray *colors;
@property (copy, nonatomic) NSArray *locations;
@property (nonatomic) BOOL isRadial;

+ (BOOL)needsDisplayForKey:(id)arg0;

- (BOOL)isRadial;
- (struct CGPoint { double x0; double x1; })endPoint;
- (struct CGPoint { double x0; double x1; })startPoint;
- (id)locations;
- (id)colors;
- (void)setColors:(id)arg0;
- (void)setLocations:(id)arg0;
- (void)setEndPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)setStartPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)setIsRadial:(BOOL)arg0;
- (void)drawInContext:(struct CGContext { } *)arg0;
- (id)actionForKey:(id)arg0;

@end
