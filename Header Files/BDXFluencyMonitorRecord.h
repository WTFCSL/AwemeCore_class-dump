//
//     Generated by private class-dump
//

@class NSDictionary, BDXMonitor;

@interface BDXFluencyMonitorRecord : NSObject {
    double _startTime;
    double _stopTime;
    long long _frameCount;
    double _hitchTime;
    double _lightDropframeTime;
    double _middleDropframeTime;
    double _highDropframeTime;
    BDXMonitor *_monitor;
    long long _platform;
    NSDictionary *_data;
}

@property (readonly, nonatomic) double startTime;
@property (nonatomic) double stopTime;
@property (nonatomic) long long frameCount;
@property (nonatomic) double hitchTime;
@property (nonatomic) double lightDropframeTime;
@property (nonatomic) double middleDropframeTime;
@property (nonatomic) double highDropframeTime;
@property (retain, nonatomic) BDXMonitor *monitor;
@property (nonatomic) long long platform;
@property (copy, nonatomic) NSDictionary *data;

- (double)hitchTime;
- (void)setHitchTime:(double)arg0;
- (double)lightDropframeTime;
- (void)setLightDropframeTime:(double)arg0;
- (double)middleDropframeTime;
- (void)setMiddleDropframeTime:(double)arg0;
- (double)highDropframeTime;
- (void)setHighDropframeTime:(double)arg0;
- (id)data;
- (void).cxx_destruct;
- (id)monitor;
- (long long)frameCount;
- (void)setData:(id)arg0;
- (void)setMonitor:(id)arg0;
- (void)setPlatform:(long long)arg0;
- (long long)platform;
- (double)startTime;
- (double)stopTime;
- (void)setFrameCount:(long long)arg0;
- (void)setStopTime:(double)arg0;
- (id)initWithStartTime:(double)arg0;

@end
