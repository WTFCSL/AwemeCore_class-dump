//
//     Generated by private class-dump
//

@interface IESMMTimeMachineConfig : NSObject {
    long long _timeMachineType;
    double _beginTime;
    double _startTime;
    double _duration;
}

@property (nonatomic) long long timeMachineType;
@property (nonatomic) double beginTime;
@property (nonatomic) double startTime;
@property (nonatomic) double duration;

- (void)setTimeMachineType:(long long)arg0;
- (long long)timeMachineType;
- (id)init;
- (void)setStartTime:(double)arg0;
- (void)setBeginTime:(double)arg0;
- (double)duration;
- (double)startTime;
- (double)beginTime;
- (void)setDuration:(double)arg0;

@end
