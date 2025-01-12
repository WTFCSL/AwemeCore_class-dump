//
//     Generated by private class-dump
//

@class NSString, NSTimer, CADisplayLink, UIButton;

@interface AWEPlayVideoAutoSleepManager : NSObject <AWEMaskWindowHitTestProtocol, AWEPerfSceneMonitorProtocol> {
    BOOL _isInAutoSleepTimeRange;
    BOOL _lastIdleTimerDisabled;
    BOOL _isInAutoLockStage;
    BOOL _isAlreadyLockScreen;
    long long _autoSleepThreshold;
    NSTimer *_sleepTimer;
    NSString *_scene;
    NSString *_subScene;
    double _lastBrightness;
    CADisplayLink *_brightnessDisplayLink;
    UIButton *_brightnessInteractionButton;
    double _lastEnterAutoSleepTime;
    double _lastAutoSleepLockTime;
    double _lastInteractionTime;
}

@property (nonatomic) long long autoSleepThreshold;
@property (nonatomic) BOOL isInAutoSleepTimeRange;
@property (retain, nonatomic) NSTimer *sleepTimer;
@property (retain, nonatomic) NSString *scene;
@property (retain, nonatomic) NSString *subScene;
@property (nonatomic) BOOL lastIdleTimerDisabled;
@property (nonatomic) BOOL isInAutoLockStage;
@property (nonatomic) BOOL isAlreadyLockScreen;
@property (nonatomic) double lastBrightness;
@property (retain, nonatomic) CADisplayLink *brightnessDisplayLink;
@property (retain, nonatomic) UIButton *brightnessInteractionButton;
@property (nonatomic) double lastEnterAutoSleepTime;
@property (nonatomic) double lastAutoSleepLockTime;
@property (nonatomic) double lastInteractionTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)subScene;
- (void)setSubScene:(id)arg0;
- (void)handleWillResignActive;
- (void)windowHitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1 targetView:(id)arg2;
- (void)applicationIdleTimerDisabledDidChange:(BOOL)arg0;
- (void)setAutoSleepThreshold:(long long)arg0;
- (long long)autoSleepThreshold;
- (void)setIsInAutoSleepTimeRange:(BOOL)arg0;
- (void)setLastIdleTimerDisabled:(BOOL)arg0;
- (void)setIsInAutoLockStage:(BOOL)arg0;
- (void)setLastEnterAutoSleepTime:(double)arg0;
- (void)setLastAutoSleepLockTime:(double)arg0;
- (void)setIsAlreadyLockScreen:(BOOL)arg0;
- (void)handleWillBecomeUnavailable;
- (void)handleDidBecomeAvailable;
- (void)checkEnterAutoSleepRange;
- (void)cancelAutoSleep;
- (void)checkEnterAutoSleepRangeFuture;
- (BOOL)isAlreadyLockScreen;
- (void)traceReportData:(long long)arg0 dousingReawakenDuration:(double)arg1 dousedReawakenDuration:(double)arg2;
- (BOOL)isInAutoLockStage;
- (double)lastBrightness;
- (void)setLastBrightness:(double)arg0;
- (double)lastAutoSleepLockTime;
- (BOOL)shouldEnterAutomaticSleep;
- (long long)currentHour;
- (BOOL)isInAutoSleepTimeRange;
- (BOOL)lastIdleTimerDisabled;
- (double)remainingTimeIntervalUntil:(long long)arg0;
- (void)setAutoSleepTimerIfNeeded;
- (id)brightnessDisplayLink;
- (void)setBrightnessDisplayLink:(id)arg0;
- (double)lastEnterAutoSleepTime;
- (void)setupAutoSleepTimer;
- (void)autoSleepStepIfNeeded;
- (void)setSleepTimer:(id)arg0;
- (id)sleepTimer;
- (void)didUpdateScene:(id)arg0;
- (void)didUpdateScene:(id)arg0 subScene:(id)arg1;
- (id)brightnessInteractionButton;
- (void)setBrightnessInteractionButton:(id)arg0;
- (double)lastInteractionTime;
- (id)init;
- (void)setScene:(id)arg0;
- (void).cxx_destruct;
- (void)setLastInteractionTime:(double)arg0;
- (void)handleDidBecomeActive;
- (id)scene;
- (void)updateBrightness;

@end
