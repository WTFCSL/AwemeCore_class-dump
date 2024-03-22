//
//     Generated by private class-dump
//

@class UILabel, NSString, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue, AWETeenEyeProtectionDelegate;

@interface AWETeenAntiAddictionEyeProtectionManager : NSObject <AWEDigitalWellbeingMessage, AWETeenEyeProtectLockMessage> {
    BOOL _isTimerValid;
    BOOL _notShowWhenvideoWithinFiveMinutes;
    BOOL _enableShow;
    id<AWETeenEyeProtectionDelegate> _delegate;
    NSObject<OS_dispatch_source> *_dispatchTimer;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    double _lastTimeStamp;
    double _userDuration;
    UILabel *_durationLabel;
}

@property (retain, nonatomic) NSObject<OS_dispatch_source> *dispatchTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) double lastTimeStamp;
@property (nonatomic) double userDuration;
@property (nonatomic) BOOL isTimerValid;
@property (nonatomic) BOOL notShowWhenvideoWithinFiveMinutes;
@property (nonatomic) BOOL enableShow;
@property (retain, nonatomic) UILabel *durationLabel;
@property (weak, nonatomic) id<AWETeenEyeProtectionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)timerInterval;
+ (double)maxUserDuration;
+ (id)sharedManager;

- (void)teenModeDidChange:(BOOL)arg0 isLogout:(BOOL)arg1;
- (void)unlockPageDidDismiss;
- (void)setLastTimeStamp:(double)arg0;
- (double)lastTimeStamp;
- (BOOL)enableShow;
- (void)setEnableShow:(BOOL)arg0;
- (void)p_cancelTimer;
- (void)applicationEnterBackgroundNotification:(id)arg0;
- (void)pauseTimerIfNeeded;
- (void)triggerShowEyeProtectLockIfNeeded;
- (BOOL)shouldShowEyeProtectionLock;
- (void)eyeProtectSettingDidChanged:(BOOL)arg0;
- (void)setEyeProtectionEnableShow:(BOOL)arg0;
- (void)p_addTask;
- (BOOL)p_eyeProtectionEnable;
- (void)scheduleDispatchTimer;
- (BOOL)isTimerValid;
- (void)setIsTimerValid:(BOOL)arg0;
- (double)userDuration;
- (void)setUserDuration:(double)arg0;
- (void)setNotShowWhenvideoWithinFiveMinutes:(BOOL)arg0;
- (BOOL)notShowWhenvideoWithinFiveMinutes;
- (void)clearTimer;
- (id)init;
- (void).cxx_destruct;
- (void)setDispatchQueue:(id)arg0;
- (void)setDispatchTimer:(id)arg0;
- (id)delegate;
- (id)dispatchQueue;
- (id)dispatchTimer;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)startTimerIfNeeded;
- (id)durationLabel;
- (void)setDurationLabel:(id)arg0;

@end
