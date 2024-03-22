//
//     Generated by private class-dump
//

@protocol HMDANRMonitorDelegate;

@interface HMDANRMonitor : NSObject {
    id<HMDANRMonitorDelegate> _delegate;
}

@property (nonatomic) BOOL enableSample;
@property (nonatomic) double sampleInterval;
@property (nonatomic) double sampleTimeoutInterval;
@property (nonatomic) BOOL ignoreBackground;
@property (nonatomic) BOOL ignoreDuplicate;
@property (nonatomic) BOOL ignoreBacktrace;
@property (nonatomic) BOOL suspend;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) double launchThreshold;
@property (nonatomic) int maxContinuousReportTimes;
@property (nonatomic) BOOL enableRunloopMonitorV2;
@property (nonatomic) unsigned long long runloopMonitorThreadSleepInterval;
@property (retain, nonatomic) id<HMDANRMonitorDelegate> delegate;

+ (id)sharedInstance;

- (double)launchThreshold;
- (BOOL)ignoreDuplicate;
- (void)setIgnoreDuplicate:(BOOL)arg0;
- (void)setLaunchThreshold:(double)arg0;
- (void)setSampleTimeoutInterval:(double)arg0;
- (void)setIgnoreBackground:(BOOL)arg0;
- (void)setIgnoreBacktrace:(BOOL)arg0;
- (void)setEnableSample:(BOOL)arg0;
- (int)maxContinuousReportTimes;
- (void)setMaxContinuousReportTimes:(int)arg0;
- (BOOL)enableRunloopMonitorV2;
- (void)setEnableRunloopMonitorV2:(BOOL)arg0;
- (unsigned long long)runloopMonitorThreadSleepInterval;
- (void)setRunloopMonitorThreadSleepInterval:(unsigned long long)arg0;
- (BOOL)enableSample;
- (double)sampleTimeoutInterval;
- (BOOL)ignoreBackground;
- (BOOL)ignoreBacktrace;
- (id)init;
- (void)setTimeoutInterval:(double)arg0;
- (void).cxx_destruct;
- (void)stop;
- (BOOL)suspend;
- (double)sampleInterval;
- (double)timeoutInterval;
- (id)delegate;
- (void)setSampleInterval:(double)arg0;
- (void)start;
- (void)setDelegate:(id)arg0;
- (void)setSuspend:(BOOL)arg0;

@end
