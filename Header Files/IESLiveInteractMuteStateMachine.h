//
//     Generated by private class-dump
//

@class IESLiveInteractMuteStateMachineConfig, NSMutableArray;
@protocol IESLiveInteractMuteStateMachineDelegate;

@interface IESLiveInteractMuteStateMachine : NSObject {
    BOOL _shouldUnMuteLocalWhenBack;
    BOOL _shouldShowToastWhenBack;
    BOOL _shouldUnMuteSelfForceWhenBack;
    int _silenceStatus;
    id<IESLiveInteractMuteStateMachineDelegate> _delegate;
    unsigned long long _muteReason;
    NSMutableArray *_operationQueue;
    IESLiveInteractMuteStateMachineConfig *_config;
    unsigned long long _currentState;
    unsigned long long _muteStateBeforeSinging;
    double _unMatchTimeDuration;
    double _lastUnMatchTiming;
    double _totalTime;
}

@property (retain, nonatomic) NSMutableArray *operationQueue;
@property (retain, nonatomic) IESLiveInteractMuteStateMachineConfig *config;
@property (nonatomic) unsigned long long currentState;
@property (nonatomic) unsigned long long muteReason;
@property (nonatomic) BOOL shouldUnMuteLocalWhenBack;
@property (nonatomic) BOOL shouldShowToastWhenBack;
@property (nonatomic) int silenceStatus;
@property (nonatomic) unsigned long long muteStateBeforeSinging;
@property (nonatomic) BOOL shouldUnMuteSelfForceWhenBack;
@property (nonatomic) double unMatchTimeDuration;
@property (nonatomic) double lastUnMatchTiming;
@property (nonatomic) double totalTime;
@property (weak, nonatomic) id<IESLiveInteractMuteStateMachineDelegate> delegate;

- (void)showToast:(id)arg0;
- (int)silenceStatus;
- (void)setSilenceStatus:(int)arg0;
- (void)onReceiveSelfSilenceStatus:(int)arg0;
- (void)muteWithState:(unsigned long long)arg0;
- (void)unMuteWithState:(unsigned long long)arg0;
- (void)muteSelfLocally;
- (void)muteWithState:(unsigned long long)arg0 force:(BOOL)arg1;
- (void)muteSelfWithResume:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)unMuteSelfWithEnforced:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)unMuteWithState:(unsigned long long)arg0 force:(BOOL)arg1 noRequestOnMuteSelf:(BOOL)arg2;
- (void)muteWithState:(unsigned long long)arg0 force:(BOOL)arg1 noRequestOnMuteSelf:(BOOL)arg2;
- (void)startOperateIfNeededWithNewNode:(id)arg0;
- (unsigned long long)muteReason;
- (void)p_startOperation;
- (void)p_realMuteWithState:(unsigned long long)arg0 force:(BOOL)arg1 noRequestOnMuteSelf:(BOOL)arg2;
- (void)p_realUnMuteWithState:(unsigned long long)arg0 force:(BOOL)arg1 noRequestOnMuteSelf:(BOOL)arg2;
- (void)finishLatestOperation;
- (void)notificationIfNeededWithSilenceStatus:(int)arg0 newState:(unsigned long long)arg1;
- (void)setMuteReason:(unsigned long long)arg0;
- (void)setShouldShowToastWhenBack:(BOOL)arg0;
- (void)setShouldUnMuteSelfForceWhenBack:(BOOL)arg0;
- (unsigned long long)muteStateBeforeSinging;
- (void)setMuteStateBeforeSinging:(unsigned long long)arg0;
- (void)setShouldUnMuteLocalWhenBack:(BOOL)arg0;
- (BOOL)shouldUnMuteSelfForceWhenBack;
- (BOOL)shouldUnMuteLocalWhenBack;
- (BOOL)shouldShowToastWhenBack;
- (double)lastUnMatchTiming;
- (double)unMatchTimeDuration;
- (void)setUnMatchTimeDuration:(double)arg0;
- (void)setLastUnMatchTiming:(double)arg0;
- (void)statusFixIfNeededWith:(int)arg0;
- (id)silenceStatusLogStringWithSilenceStatus:(int)arg0;
- (void)unMuteSelfLocally;
- (id)logForCurrentState;
- (void)setCurrentState:(unsigned long long)arg0;
- (double)totalTime;
- (void)setOperationQueue:(id)arg0;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)currentState;
- (id)config;
- (id)initWithConfig:(id)arg0;
- (id)operationQueue;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (BOOL)isBackground;
- (void)setTotalTime:(double)arg0;

@end
