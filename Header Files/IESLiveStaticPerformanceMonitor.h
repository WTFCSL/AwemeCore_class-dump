//
//     Generated by private class-dump
//

@interface IESLiveStaticPerformanceMonitor : NSObject {
    long long _slowSession;
    double _sampleRate;
}

@property (nonatomic) long long slowSession;
@property (nonatomic) double sampleRate;

- (id)toDic;
- (long long)slowSession;
- (void)setSlowSession:(long long)arg0;
- (double)sampleRate;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setSampleRate:(double)arg0;

@end
