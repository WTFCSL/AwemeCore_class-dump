//
//     Generated by private class-dump
//

@class NSObject;
@protocol OS_dispatch_source;

@interface AWEProcessingUnitMonitor : NSObject {
    BOOL _stopRecordGPU;
    BOOL _enableTrack;
    BOOL _enableLabTrack;
    BOOL _enableBGTrack;
    BOOL _enableThreadNameTrack;
    BOOL _isBackground;
    NSObject<OS_dispatch_source> *_timer;
    long long _interval;
    double _launchCPU;
    long long _index;
}

@property (nonatomic) BOOL stopRecordGPU;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) long long interval;
@property (nonatomic) BOOL enableTrack;
@property (nonatomic) BOOL enableLabTrack;
@property (nonatomic) BOOL enableBGTrack;
@property (nonatomic) BOOL enableThreadNameTrack;
@property (nonatomic) BOOL isBackground;
@property (nonatomic) double launchCPU;
@property (nonatomic) long long index;

+ (double)AWECPUUsageFromThread:(long long *)arg0 threadInfoMap:(id *)arg1;
+ (id)sharedMonitor;
+ (void)start;

- (void)recordProcessingUnitUsage;
- (BOOL)stopRecordGPU;
- (void)setStopRecordGPU:(BOOL)arg0;
- (void)onAppEnterBackground;
- (void)setEnableTrack:(BOOL)arg0;
- (BOOL)enableTrack;
- (BOOL)enableLabTrack;
- (void)setEnableLabTrack:(BOOL)arg0;
- (double)launchCPU;
- (void)setLaunchCPU:(double)arg0;
- (void)setEnableBGTrack:(BOOL)arg0;
- (void)setEnableThreadNameTrack:(BOOL)arg0;
- (void)onAppDidActive;
- (BOOL)enableBGTrack;
- (BOOL)enableThreadNameTrack;
- (id)timer;
- (void)setIndex:(long long)arg0;
- (id)init;
- (void)setIsBackground:(BOOL)arg0;
- (void).cxx_destruct;
- (long long)interval;
- (void)setInterval:(long long)arg0;
- (void)setTimer:(id)arg0;
- (long long)index;
- (BOOL)isBackground;
- (void)startTimerWithInterval:(long long)arg0;

@end
