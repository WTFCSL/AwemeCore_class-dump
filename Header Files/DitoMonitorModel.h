//
//     Generated by private class-dump
//

@class NSDictionary;

@interface DitoMonitorModel : NSObject {
    long long _triggerTimes;
    double _duration;
    double _currentStart;
    NSDictionary *_params;
}

@property (nonatomic) long long triggerTimes;
@property (nonatomic) double duration;
@property (nonatomic) double currentStart;
@property (copy, nonatomic) NSDictionary *params;

- (double)currentStart;
- (void)setCurrentStart:(double)arg0;
- (long long)triggerTimes;
- (void)setTriggerTimes:(long long)arg0;
- (void).cxx_destruct;
- (double)duration;
- (id)params;
- (void)setDuration:(double)arg0;
- (void)setParams:(id)arg0;

@end