//
//     Generated by private class-dump
//

@class NSDictionary, NSTimer;

@interface ACCThrottle : NSObject {
    BOOL _isIdle;
    BOOL _needExecuteWhenTimerInvoke;
    id /* block */ _executor;
    double _timeInterval;
    NSDictionary *_userInfo;
    NSTimer *_timer;
}

@property (retain, nonatomic) NSDictionary *userInfo;
@property (nonatomic) BOOL isIdle;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL needExecuteWhenTimerInvoke;
@property (copy, nonatomic) id /* block */ executor;
@property (nonatomic) double timeInterval;

+ (id)throttleWithTimeInterval:(double)arg0 executor:(id /* block */)arg1;

- (void)setIsIdle:(BOOL)arg0;
- (void)p_invalidateTimer;
- (void)tryExecuteWithUserInfo:(id)arg0;
- (void)setNeedExecuteWhenTimerInvoke:(BOOL)arg0;
- (void)p_reschedule;
- (void)p_resetToIdel;
- (BOOL)needExecuteWhenTimerInvoke;
- (void)p_onTimerHandler;
- (void)cancelExecute;
- (id)timer;
- (id)init;
- (double)timeInterval;
- (void).cxx_destruct;
- (void)setTimeInterval:(double)arg0;
- (id /* block */)executor;
- (void)setUserInfo:(id)arg0;
- (void)setTimer:(id)arg0;
- (BOOL)isIdle;
- (id)userInfo;
- (void)dealloc;
- (void)setExecutor:(id /* block */)arg0;

@end