//
//     Generated by private class-dump
//

@class NSTimer, CADisplayLink, NSDictionary, NSMutableArray;

@interface IESLiveSlidePerfSamplerImpl : NSObject <IESLiveSlidePerfMonitor> {
    BOOL _optimize;
    BOOL _supportsTargetTimestamp;
    BOOL _supportsDynamicFrameRate;
    BOOL _enableNewDropFrameMonitor;
    CADisplayLink *_displayLink;
    NSMutableArray *_recordList;
    long long _frameCount;
    double _lastTrackTime;
    double _lastTargetTrackTime;
    double _lastVSyncInterval;
    NSTimer *_timer;
    NSDictionary *_latestPerSampleInfoDic;
    long long _componentLoadState;
}

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) NSMutableArray *recordList;
@property (nonatomic) long long frameCount;
@property (nonatomic) double lastTrackTime;
@property (nonatomic) double lastTargetTrackTime;
@property (nonatomic) double lastVSyncInterval;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) NSDictionary *latestPerSampleInfoDic;
@property (nonatomic) BOOL optimize;
@property (nonatomic) long long componentLoadState;
@property (nonatomic) BOOL supportsTargetTimestamp;
@property (nonatomic) BOOL supportsDynamicFrameRate;
@property (nonatomic) BOOL enableNewDropFrameMonitor;

- (void)didSetAttachingDIContext;
- (void)applicationWillResignActiveNotification:(id)arg0;
- (double)lastVSyncInterval;
- (void)setLastVSyncInterval:(double)arg0;
- (BOOL)supportsTargetTimestamp;
- (BOOL)supportsDynamicFrameRate;
- (void)_initData;
- (double)lastTrackTime;
- (void)setLastTrackTime:(double)arg0;
- (long long)componentLoadState;
- (void)updateScrollState:(long long)arg0;
- (void)updateScrollState:(long long)arg0 withComponentLoadState:(long long)arg1;
- (id)getLatestPerSampleInfoDic;
- (BOOL)enableNewDropFrameMonitor;
- (void)setEnableNewDropFrameMonitor:(BOOL)arg0;
- (void)setComponentLoadState:(long long)arg0;
- (void)setOptimize:(BOOL)arg0;
- (void)setSupportsTargetTimestamp:(BOOL)arg0;
- (void)setSupportsDynamicFrameRate:(BOOL)arg0;
- (void)_displayLinkAction:(id)arg0;
- (void)_report:(id)arg0;
- (void)setLatestPerSampleInfoDic:(id)arg0;
- (void)_scheduleEndState;
- (id)latestPerSampleInfoDic;
- (void)_checkDropFrame:(id)arg0;
- (void)setLastTargetTrackTime:(double)arg0;
- (double)lastTargetTrackTime;
- (id)timer;
- (void)setDisplayLink:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (long long)frameCount;
- (void)setup;
- (void)setTimer:(id)arg0;
- (id)displayLink;
- (void)setFrameCount:(long long)arg0;
- (void)setRecordList:(id)arg0;
- (id)recordList;
- (BOOL)optimize;

@end
