//
//     Generated by private class-dump
//

@interface IESGCPLinearValueCurve : IESGCPValueCurve {
    double _from;
    double _to;
}

@property (nonatomic) double from;
@property (nonatomic) double to;

- (double)from;
- (void)setFrom:(double)arg0;
- (double)to;
- (void)setTo:(double)arg0;
- (id)transform:(double)arg0;

@end