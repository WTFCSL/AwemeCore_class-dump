//
//     Generated by private class-dump
//

@class NSObject, NSArray, NSString, IESLivePerfSampleContext, NSNumber, NSMutableArray;
@protocol OS_dispatch_queue, IESLiveSettings;

@interface IESLiveClientDiagnose : NSObject <IESLiveClientDiagnoseAdapter> {
    BOOL _isPKing;
    BOOL _isSing;
    BOOL _firstStandardDeviationFlag;
    BOOL _secondStandardDeviationFlag;
    BOOL _isAnchorHeatingWarning;
    BOOL _enablePerformanceService;
    id /* block */ _interactionGuest;
    id /* block */ _isGuest;
    unsigned long long _mainThreadID;
    IESLivePerfSampleContext *_context;
    struct IESLiveClientDiagnoseConfig { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; long long x9; long long x10; long long x11; float x12; long long x13; long long x14; long long x15; } *_clientDiagnoseConfig;
    NSMutableArray *_prefSampleInfoQueue;
    double _cpuFreqSampleTime;
    NSMutableArray *_cpuFreqSampleInfo;
    long long _low_power_mode_duration;
    NSNumber *_lastLowPowerTime;
    long long _battery_state_duration;
    NSNumber *_lastBatteryTime;
    long long _temp_over_duration;
    NSNumber *_lastTempOverTime;
    NSNumber *_lastSeriouceOverTime;
    long long _serious_over_duration;
    NSNumber *_lastNormalOverTime;
    long long _normal_over_duration;
    NSObject<OS_dispatch_queue> *_diagnoseQueue;
    long long _streamStallCount;
    long long _continuouslyStreamStallCount;
    long long _uiStallCount;
    long long _continuouslyUIStallCount;
    long long _otherCount;
    long long _continuouslyPowerAbnormalCount;
    long long _continuouslyNormalCount;
    NSNumber *_abGuestCount;
    NSNumber *_cbIsGuest;
    NSMutableArray *_resultCallbacks;
    NSArray *_strategyPrefSampleInfos;
    long long _strategyTempOverDuration;
    long long _strategyTempSeriousDuration;
    long long _strategyTempNormalDuration;
    double _lastFirstSDFlagTime;
    double _seriousStallTimeInterval;
    long long _uiSeriousStallCount;
    long long _preThermalState;
    double _anchorPreviewFpsDeviation;
    long long _anchorPreviewFpsDuration;
    long long _temperatureStateAnchor;
    long long _temperatureDurationAnchor;
    long long _anchorUiStallSeriousCount;
    id<IESLiveSettings> _settings;
}

@property (nonatomic) unsigned long long mainThreadID;
@property (retain, nonatomic) IESLivePerfSampleContext *context;
@property (nonatomic) struct IESLiveClientDiagnoseConfig { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; long long x9; long long x10; long long x11; float x12; long long x13; long long x14; long long x15; } *clientDiagnoseConfig;
@property (retain, nonatomic) NSMutableArray *prefSampleInfoQueue;
@property (nonatomic) double cpuFreqSampleTime;
@property (retain, nonatomic) NSMutableArray *cpuFreqSampleInfo;
@property (nonatomic) long long low_power_mode_duration;
@property (retain, nonatomic) NSNumber *lastLowPowerTime;
@property (nonatomic) long long battery_state_duration;
@property (retain, nonatomic) NSNumber *lastBatteryTime;
@property (nonatomic) long long temp_over_duration;
@property (retain, nonatomic) NSNumber *lastTempOverTime;
@property (retain, nonatomic) NSNumber *lastSeriouceOverTime;
@property (nonatomic) long long serious_over_duration;
@property (retain, nonatomic) NSNumber *lastNormalOverTime;
@property (nonatomic) long long normal_over_duration;
@property (nonatomic) BOOL isPKing;
@property (nonatomic) BOOL isSing;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *diagnoseQueue;
@property (nonatomic) long long streamStallCount;
@property (nonatomic) long long continuouslyStreamStallCount;
@property (nonatomic) long long uiStallCount;
@property (nonatomic) long long continuouslyUIStallCount;
@property (nonatomic) long long otherCount;
@property (nonatomic) long long continuouslyPowerAbnormalCount;
@property (nonatomic) long long continuouslyNormalCount;
@property (copy) NSNumber *abGuestCount;
@property (copy) NSNumber *cbIsGuest;
@property (retain, nonatomic) NSMutableArray *resultCallbacks;
@property (copy, nonatomic) NSArray *strategyPrefSampleInfos;
@property (nonatomic) long long strategyTempOverDuration;
@property (nonatomic) long long strategyTempSeriousDuration;
@property (nonatomic) long long strategyTempNormalDuration;
@property (nonatomic) BOOL firstStandardDeviationFlag;
@property (nonatomic) double lastFirstSDFlagTime;
@property (nonatomic) BOOL secondStandardDeviationFlag;
@property (nonatomic) double seriousStallTimeInterval;
@property (nonatomic) long long uiSeriousStallCount;
@property (nonatomic) long long preThermalState;
@property (nonatomic) double anchorPreviewFpsDeviation;
@property (nonatomic) long long anchorPreviewFpsDuration;
@property (nonatomic) long long temperatureStateAnchor;
@property (nonatomic) long long temperatureDurationAnchor;
@property (nonatomic) long long anchorUiStallSeriousCount;
@property (nonatomic) BOOL isAnchorHeatingWarning;
@property (retain, nonatomic) id<IESLiveSettings> settings;
@property (nonatomic) BOOL enablePerformanceService;
@property (copy, nonatomic) id /* block */ interactionGuest;
@property (copy, nonatomic) id /* block */ isGuest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)currentThermalState;
- (BOOL)diagnoseThermal;
- (id)diagnoseCpu:(id)arg0;
- (id)diagnoseGpu:(id)arg0;
- (BOOL)isPKing;
- (void)setInteractionGuest:(id /* block */)arg0;
- (void)pkStart;
- (void)pkEnd;
- (void)collectAnchorPreViewFps:(id)arg0;
- (id)performanceLatestDataFrom:(long long)arg0 inDuration:(double)arg1;
- (void)setMainThreadID:(unsigned long long)arg0;
- (void)setClientDiagnoseConfig:(struct IESLiveClientDiagnoseConfig { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; long long x9; long long x10; long long x11; float x12; long long x13; long long x14; long long x15; } *)arg0;
- (void)setDiagnoseQueue:(id)arg0;
- (void)anchorHeatingDegradeConfig;
- (void)setEnablePerformanceService:(BOOL)arg0;
- (BOOL)enablePerformanceService;
- (void)setAnchorPreviewFpsDeviation:(double)arg0;
- (void)setAnchorPreviewFpsDuration:(long long)arg0;
- (void)setTemperatureStateAnchor:(long long)arg0;
- (void)setTemperatureDurationAnchor:(long long)arg0;
- (void)setAnchorUiStallSeriousCount:(long long)arg0;
- (id)prefSampleInfoQueue;
- (struct IESLiveClientDiagnoseConfig { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; long long x9; long long x10; long long x11; float x12; long long x13; long long x14; long long x15; } *)clientDiagnoseConfig;
- (id)diagnosePss:(id)arg0;
- (id)diagnoseStream:(id)arg0;
- (id)diagnoseStall:(id)arg0;
- (id)diagnoseStallV2:(id)arg0;
- (long long)battery_state_duration;
- (long long)low_power_mode_duration;
- (long long)temp_over_duration;
- (id)getNetInfo:(id)arg0;
- (id)getVideoGiftDuartion:(id)arg0;
- (id)getEffectGiftDuartion:(id)arg0;
- (id)getLynxGiftDuartion:(id)arg0;
- (id)abGuestCount;
- (id)cbIsGuest;
- (id)getTotalCommment:(id)arg0;
- (void)getPKAndSingDuration:(id)arg0 pkDuration:(id *)arg1 singDurantion:(id *)arg2;
- (void)reportDiagnoseInfo:(id)arg0;
- (id)resultCallbacks;
- (long long)continuouslyNormalCount;
- (long long)continuouslyUIStallCount;
- (long long)continuouslyStreamStallCount;
- (long long)continuouslyPowerAbnormalCount;
- (id)decimalNumber:(id)arg0 multiplyingBy:(id)arg1;
- (id)decimalNumber:(id)arg0 dividingBy:(id)arg1;
- (void)appendString:(id)arg0 string:(id)arg1;
- (long long)preThermalState;
- (void)setNormal_over_duration:(long long)arg0;
- (void)setLastNormalOverTime:(id)arg0;
- (void)setSerious_over_duration:(long long)arg0;
- (void)setLastSeriouceOverTime:(id)arg0;
- (void)setLastTempOverTime:(id)arg0;
- (void)setTemp_over_duration:(long long)arg0;
- (id)lastTempOverTime;
- (id)lastSeriouceOverTime;
- (long long)serious_over_duration;
- (id)lastNormalOverTime;
- (long long)normal_over_duration;
- (void)setPreThermalState:(long long)arg0;
- (id)strategyPrefSampleInfos;
- (void)setStrategyTempOverDuration:(long long)arg0;
- (void)setStrategyTempSeriousDuration:(long long)arg0;
- (void)setStrategyTempNormalDuration:(long long)arg0;
- (id)lastBatteryTime;
- (void)setBattery_state_duration:(long long)arg0;
- (void)setLastBatteryTime:(id)arg0;
- (id)lastLowPowerTime;
- (void)setLow_power_mode_duration:(long long)arg0;
- (void)setLastLowPowerTime:(id)arg0;
- (BOOL)isSing;
- (void)updateBatteryStateDuration:(id)arg0;
- (void)updateCriticalThermalDuration:(id)arg0;
- (void)setStrategyPrefSampleInfos:(id)arg0;
- (id)diagnoseQueue;
- (id /* block */)interactionGuest;
- (void)setAbGuestCount:(id)arg0;
- (void)setCbIsGuest:(id)arg0;
- (void)diagnosePrefSampleInfoQueue;
- (void)setResultCallbacks:(id)arg0;
- (void)setIsSing:(BOOL)arg0;
- (void)collectPrefSampleInfo:(id)arg0;
- (void)setIsPKing:(BOOL)arg0;
- (long long)temperatureStateAnchor;
- (long long)temperatureDurationAnchor;
- (void)setIsAnchorHeatingWarning:(BOOL)arg0;
- (BOOL)anchorUISeriousStallCheck;
- (BOOL)anchorPreviewFpsStandardDeviCheck;
- (BOOL)isAnchorHeatingWarning;
- (double)seriousStallTimeInterval;
- (long long)uiSeriousStallCount;
- (void)setUiSeriousStallCount:(long long)arg0;
- (void)setSeriousStallTimeInterval:(double)arg0;
- (long long)anchorUiStallSeriousCount;
- (double)anchorPreviewFpsDeviation;
- (BOOL)firstStandardDeviationFlag;
- (double)lastFirstSDFlagTime;
- (long long)anchorPreviewFpsDuration;
- (void)setFirstStandardDeviationFlag:(BOOL)arg0;
- (void)setLastFirstSDFlagTime:(double)arg0;
- (double)varianceIndataList:(id)arg0;
- (double)averageValueIndataList:(id)arg0;
- (long long)strategyTempOverDuration;
- (long long)strategyTempSeriousDuration;
- (long long)strategyTempNormalDuration;
- (double)standardDeviationIndataList:(id)arg0;
- (void)removeResultCallback:(id /* block */)arg0;
- (void)playKTVBGM;
- (void)stopKTVBGM;
- (void)videoStallWithStallTime:(double)arg0;
- (BOOL)anchorHeatingTriggerWarning;
- (BOOL)anchorHeatingTriggerDegrade;
- (double)currentUistallRate;
- (double)currentPreviewFps;
- (double)heatingTime;
- (id)cpuFreqSampleInfo;
- (unsigned long long)mainThreadID;
- (void)setPrefSampleInfoQueue:(id)arg0;
- (double)cpuFreqSampleTime;
- (void)setCpuFreqSampleTime:(double)arg0;
- (void)setCpuFreqSampleInfo:(id)arg0;
- (long long)streamStallCount;
- (void)setStreamStallCount:(long long)arg0;
- (void)setContinuouslyStreamStallCount:(long long)arg0;
- (long long)uiStallCount;
- (void)setUiStallCount:(long long)arg0;
- (void)setContinuouslyUIStallCount:(long long)arg0;
- (void)setContinuouslyPowerAbnormalCount:(long long)arg0;
- (void)setContinuouslyNormalCount:(long long)arg0;
- (BOOL)secondStandardDeviationFlag;
- (void)setSecondStandardDeviationFlag:(BOOL)arg0;
- (id)initWithContext:(id)arg0;
- (id /* block */)isGuest;
- (void)diagnose;
- (void).cxx_destruct;
- (void)setSettings:(id)arg0;
- (void)setContext:(id)arg0;
- (void)setup;
- (id)settings;
- (id)context;
- (void)dealloc;
- (void)setIsGuest:(id /* block */)arg0;
- (void)setOtherCount:(long long)arg0;
- (long long)otherCount;
- (void)registerResultCallback:(id /* block */)arg0;

@end