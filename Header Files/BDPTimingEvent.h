//
//     Generated by private class-dump
//

@interface BDPTimingEvent : NSObject {
    unsigned long long _startTime;
    unsigned long long _duration;
    unsigned long long _countingTime;
}

@property (nonatomic) unsigned long long startTime;
@property (nonatomic) unsigned long long duration;

- (void)reStart;
- (id)init;
- (void)setStartTime:(unsigned long long)arg0;
- (BOOL)isStart;
- (void)stop;
- (unsigned long long)duration;
- (unsigned long long)startTime;
- (void)start;
- (void)reset;
- (void)setDuration:(unsigned long long)arg0;

@end