//
//     Generated by private class-dump
//

@interface AWEPageSnapCubicBezier : NSObject {
    double p1x;
    double p1y;
    double p2x;
    double p2y;
}

- (double)solveCubicBezierCurveWithX:(double)arg0;
- (double)solveCurveX:(double)arg0 epsilon:(double)arg1;
- (double)sampleCurveY:(double)arg0;
- (double)sampleCurveX:(double)arg0;
- (double)sampleCurveDerivativeX:(double)arg0;
- (id)initWithControlPoints:(double)arg0 :(double)arg1 :(double)arg2 :(double)arg3;

@end
