//
//     Generated by private class-dump
//

@interface MeasureContext : NSObject {
    BOOL _finalMeasure;
    double _rootWidth;
    long long _rootWidthMode;
    double _rootHeight;
    long long _rootHeightMode;
}

@property (readonly, nonatomic) double rootWidth;
@property (readonly, nonatomic) long long rootWidthMode;
@property (readonly, nonatomic) double rootHeight;
@property (readonly, nonatomic) long long rootHeightMode;
@property (readonly, nonatomic) BOOL finalMeasure;

- (double)rootHeight;
- (BOOL)finalMeasure;
- (id)initWithFinalMeasure:(BOOL)arg0;
- (long long)rootWidthMode;
- (long long)rootHeightMode;
- (double)rootWidth;

@end
