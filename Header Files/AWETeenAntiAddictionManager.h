//
//     Generated by private class-dump
//

@class AWETeenAntiAddictionTimeService, NSString, NSObject, AWETeenAntiAddictionDecisionService;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface AWETeenAntiAddictionManager : NSObject <AWEDigitalWellbeingMessage, AWEUserMessage> {
    BOOL _isTimerRunning;
    AWETeenAntiAddictionTimeService *_timeService;
    AWETeenAntiAddictionDecisionService *_decisionService;
    NSObject<OS_dispatch_source> *_dispatchTimer;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_source> *dispatchTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) BOOL isTimerRunning;
@property (readonly, nonatomic) AWETeenAntiAddictionTimeService *timeService;
@property (readonly, nonatomic) AWETeenAntiAddictionDecisionService *decisionService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)didFinishLogin;
- (void)didFinishLogout;
- (void)setIsTimerRunning:(BOOL)arg0;
- (BOOL)isTimerRunning;
- (void)teenModeDidChange:(BOOL)arg0 isLogout:(BOOL)arg1;
- (BOOL)isTimeLockShowing;
- (BOOL)isNightLockShowing;
- (void)networkConnectionChanged:(id)arg0;
- (id)timeService;
- (BOOL)withinNightLockTime;
- (BOOL)isAntiAddictionLockShowing;
- (void)scheduleDispatchTimer;
- (id)decisionService;
- (BOOL)antiAddictionLockWillShowWithinFiveMinutes;
- (void)startTimerIfNeededWhenTeenModeDidChange:(BOOL)arg0 isLogout:(BOOL)arg1;
- (BOOL)p_isU14User;
- (BOOL)isU14User;
- (void)doInAntiAddictionQueue:(id /* block */)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setDispatchQueue:(id)arg0;
- (void)setDispatchTimer:(id)arg0;
- (void)appDidBecomeActive:(id)arg0;
- (id)dispatchQueue;
- (id)dispatchTimer;
- (void)dealloc;
- (void)appWillResignActive:(id)arg0;
- (void)startTimerIfNeeded;
- (void)addTasks;

@end
