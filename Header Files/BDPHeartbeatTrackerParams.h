//
//     Generated by private class-dump
//

@class NSTimer, NSDictionary;

@interface BDPHeartbeatTrackerParams : NSObject {
    NSTimer *_timer;
    double _interval;
    NSDictionary *_trackParams;
    unsigned long long _duration;
    unsigned long long _order;
}

@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) double interval;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) unsigned long long order;

- (id)trackParams;
- (void)setTrackParams:(id)arg0;
- (id)timer;
- (unsigned long long)order;
- (void)setOrder:(unsigned long long)arg0;
- (void).cxx_destruct;
- (double)interval;
- (void)setInterval:(double)arg0;
- (unsigned long long)duration;
- (id)initWithConfig:(id)arg0;
- (void)setTimer:(id)arg0;
- (void)setDuration:(unsigned long long)arg0;

@end
