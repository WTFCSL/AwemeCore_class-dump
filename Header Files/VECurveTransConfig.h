//
//     Generated by private class-dump
//

@interface VECurveTransConfig : NSObject {
    unsigned long long _sourceType;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _spinCycleTime;
}

@property (nonatomic) unsigned long long sourceType;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } spinCycleTime;

- (void)setSpinCycleTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })spinCycleTime;
- (void)setSourceType:(unsigned long long)arg0;
- (unsigned long long)sourceType;

@end
