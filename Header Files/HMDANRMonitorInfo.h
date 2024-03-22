//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDictionary;

@interface HMDANRMonitorInfo : NSObject {
    BOOL _sampleFlag;
    BOOL _background;
    BOOL _isLaunch;
    BOOL _isUITrackingRunloopMode;
    double _timestamp;
    double _duration;
    double _inAppTime;
    unsigned long long _anrTime;
    NSString *_stackLog;
    double _mainThreadCPUUsage;
    NSArray *_flameGraph;
    NSDictionary *_binaryImages;
}

@property (nonatomic) double timestamp;
@property (nonatomic) double duration;
@property (nonatomic) double inAppTime;
@property (nonatomic) unsigned long long anrTime;
@property (retain, nonatomic) NSString *stackLog;
@property (nonatomic) BOOL sampleFlag;
@property (nonatomic) BOOL background;
@property (nonatomic) BOOL isLaunch;
@property (nonatomic) BOOL isUITrackingRunloopMode;
@property (nonatomic) double mainThreadCPUUsage;
@property (retain, nonatomic) NSArray *flameGraph;
@property (retain, nonatomic) NSDictionary *binaryImages;

- (void)setBinaryImages:(id)arg0;
- (void)setInAppTime:(double)arg0;
- (double)inAppTime;
- (void)setStackLog:(id)arg0;
- (void)setSampleFlag:(BOOL)arg0;
- (void)setIsUITrackingRunloopMode:(BOOL)arg0;
- (void)setMainThreadCPUUsage:(double)arg0;
- (id)flameGraph;
- (void)setFlameGraph:(id)arg0;
- (unsigned long long)anrTime;
- (void)setAnrTime:(unsigned long long)arg0;
- (id)stackLog;
- (BOOL)sampleFlag;
- (BOOL)isUITrackingRunloopMode;
- (double)mainThreadCPUUsage;
- (BOOL)background;
- (double)timestamp;
- (void).cxx_destruct;
- (void)setBackground:(BOOL)arg0;
- (double)duration;
- (void)setTimestamp:(double)arg0;
- (id)binaryImages;
- (void)setDuration:(double)arg0;
- (BOOL)isLaunch;
- (void)setIsLaunch:(BOOL)arg0;

@end
