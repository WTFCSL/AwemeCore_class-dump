//
//     Generated by private class-dump
//

@class NSString, IESLiveRevenueInteractStreamAverageFPSCalculator, IESLiveGCDTimer, IESLiveRevenueInteractDegradeSetting;
@protocol IESLivePerfSampler;

@interface IESLiveRevenueInteractPerfMonitor : NSObject <IESLiveRevenueInteractPerfMonitorAction, IESLiveRevenueInteractAction> {
    IESLiveRevenueInteractDegradeSetting *_setting;
    id<IESLivePerfSampler> _perfSampler;
    unsigned long long _state;
    unsigned long long _currentWarningLevel;
    unsigned long long _trigger;
    unsigned long long _monitorWarningLevel;
    unsigned long long _perfWarningLevel;
    IESLiveGCDTimer *_preMonitorTimer;
    double _lastPreMonitorRecordDegradeTime;
    IESLiveGCDTimer *_residentMonitorIntervalTimer;
    IESLiveGCDTimer *_residentMonitorSampleTimer;
    double _firstResidentMonitorRecordDegradeTime;
    IESLiveRevenueInteractStreamAverageFPSCalculator *_calculator;
    double _degradeStartTime;
}

@property (retain, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (retain, nonatomic) IESLiveRevenueInteractDegradeSetting *setting;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long currentWarningLevel;
@property (nonatomic) unsigned long long trigger;
@property (nonatomic) unsigned long long monitorWarningLevel;
@property (nonatomic) unsigned long long perfWarningLevel;
@property (retain, nonatomic) IESLiveGCDTimer *preMonitorTimer;
@property (nonatomic) double lastPreMonitorRecordDegradeTime;
@property (retain, nonatomic) IESLiveGCDTimer *residentMonitorIntervalTimer;
@property (retain, nonatomic) IESLiveGCDTimer *residentMonitorSampleTimer;
@property (nonatomic) double firstResidentMonitorRecordDegradeTime;
@property (retain, nonatomic) IESLiveRevenueInteractStreamAverageFPSCalculator *calculator;
@property (nonatomic) double degradeStartTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)arg0;
- (void)setCalculator:(id)arg0;
- (id)calculator;
- (id)perfSampler;
- (void)setPerfSampler:(id)arg0;
- (void)startRevenueInteractWithScene:(unsigned long long)arg0;
- (void)endRevenueInteractWithScene:(unsigned long long)arg0;
- (BOOL)enableDegrade;
- (void)startInteractPreMonitor;
- (void)endInteractPreMonitor;
- (void)startInteractResidentMonitor;
- (void)endInteractResidentMonitor;
- (unsigned long long)currentWarningLevel;
- (BOOL)enableBaseDegrade;
- (double)degradeStartTime;
- (void)trackRecoverTriggerWithDegradeTime:(double)arg0;
- (void)setDegradeStartTime:(double)arg0;
- (void)trackDegradeTrigger;
- (void)updateCurrentWarningLevelWithPerfWarningLevel:(unsigned long long)arg0;
- (unsigned long long)monitorWarningLevel;
- (void)setMonitorWarningLevel:(unsigned long long)arg0;
- (void)setCurrentWarningLevel:(unsigned long long)arg0;
- (unsigned long long)perfWarningLevel;
- (void)setPerfWarningLevel:(unsigned long long)arg0;
- (void)startPreMonitor;
- (double)lastPreMonitorRecordDegradeTime;
- (void)checkPreMonitorData;
- (void)startResidentMonitor;
- (void)stopPreMonitorTimer;
- (void)stopResidentMonitorTimer;
- (void)setFirstResidentMonitorRecordDegradeTime:(double)arg0;
- (void)setLastPreMonitorRecordDegradeTime:(double)arg0;
- (void)setPreMonitorTimer:(id)arg0;
- (id)residentMonitorSampleTimer;
- (void)checkResidentMonitorData;
- (void)setResidentMonitorSampleTimer:(id)arg0;
- (void)setResidentMonitorIntervalTimer:(id)arg0;
- (void)updateCurrentWarningLevelWithMonitorWarningLevel:(unsigned long long)arg0;
- (double)firstResidentMonitorRecordDegradeTime;
- (void)trackSampleData;
- (id)preMonitorTimer;
- (id)residentMonitorIntervalTimer;
- (id)getBaseParam;
- (id)getBasePerformanceDict;
- (void).cxx_destruct;
- (unsigned long long)state;
- (unsigned long long)trigger;
- (void)setState:(unsigned long long)arg0;
- (void)setup;
- (void)setTrigger:(unsigned long long)arg0;
- (void)clear;
- (void)dealloc;
- (id)setting;
- (void)setSetting:(id)arg0;
- (void)applicationDidEnterBackgroundNotification:(id)arg0;
- (void)applicationWillEnterForegroundNotification:(id)arg0;
- (void)sampleData;

@end
