//
//     Generated by private class-dump
//

@class RxScheduler, NSString, RTVVoipManager;
@protocol RxInjector, RTVXRSettingsInterface;

@interface RTVPacemaker : NSObject {
    BOOL _stopKeepAlive;
    BOOL _isKeepAliving;
    id<RxInjector> _injector;
    RTVVoipManager *_voIPManager;
    RxScheduler *_scheduler;
    id<RTVXRSettingsInterface> _xrSettings;
    NSString *_callID;
    double _keepAliveInterval;
    double _lastKeepAliveTime;
    double _keepAliveDelay;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) RTVVoipManager *voIPManager;
@property (readonly, nonatomic) RxScheduler *scheduler;
@property (readonly, nonatomic) id<RTVXRSettingsInterface> xrSettings;
@property (readonly, copy, nonatomic) NSString *callID;
@property (readonly, nonatomic) BOOL stopKeepAlive;
@property (nonatomic) BOOL isKeepAliving;
@property (nonatomic) double keepAliveInterval;
@property (nonatomic) double lastKeepAliveTime;
@property (nonatomic) double keepAliveDelay;

+ (id)pacemakerWithCallID:(id)arg0 injector:(id)arg1;

- (void)rxAwakeFromPropertyInjection;
- (id)xrSettings;
- (double)__now;
- (void)__keepAliveWithDelay:(double)arg0;
- (void)setIsKeepAliving:(BOOL)arg0;
- (double)lastKeepAliveTime;
- (void)setLastKeepAliveTime:(double)arg0;
- (id)voIPManager;
- (void)__logValue:(id)arg0;
- (double)__newIntervalWithValue:(id)arg0;
- (void)__logError:(id)arg0;
- (id)__sendKeepAlive;
- (void)__pollingKeepAliveWithDelay:(double)arg0;
- (void)__withoutPollingKeepAliveDelay:(double)arg0;
- (BOOL)isKeepAliving;
- (double)keepAliveInterval;
- (void).cxx_destruct;
- (void)stop;
- (id)scheduler;
- (id)injector;
- (void)start;
- (void)dealloc;
- (void)setKeepAliveInterval:(double)arg0;
- (id)callID;
- (BOOL)stopKeepAlive;
- (id)initWithCallID:(id)arg0;
- (double)keepAliveDelay;
- (void)setKeepAliveDelay:(double)arg0;

@end
