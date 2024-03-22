//
//     Generated by private class-dump
//

@class NSTimer, NSDictionary, NSString;

@interface IESLiveCountdownTaskFragment : IESLiveRoomComponent <HTSLiveStreamPlayerAction> {
    BOOL _playerHasStart;
    NSTimer *_timer;
    double _finishTaskTime;
    long long _leftTime;
    NSDictionary *_countdownParams;
    long long _uniqueID;
    long long _maxRetryCount;
}

@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) double finishTaskTime;
@property (nonatomic) long long leftTime;
@property (retain, nonatomic) NSDictionary *countdownParams;
@property (nonatomic) long long uniqueID;
@property (nonatomic) long long maxRetryCount;
@property (nonatomic) BOOL playerHasStart;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)arg0;

- (long long)leftTime;
- (void)setLeftTime:(long long)arg0;
- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)streamPlayerDidReadyToRender;
- (void)startLiveIfNeed;
- (id)countdownParams;
- (void)setCountdownParams:(id)arg0;
- (BOOL)playerHasStart;
- (void)setFinishTaskTime:(double)arg0;
- (void)setPlayerHasStart:(BOOL)arg0;
- (void)countdownTask;
- (double)finishTaskTime;
- (void)trackTask;
- (void)becomeActive;
- (long long)maxRetryCount;
- (id)timer;
- (void)setMaxRetryCount:(long long)arg0;
- (void)startTimer;
- (void).cxx_destruct;
- (long long)uniqueID;
- (void)setUniqueID:(long long)arg0;
- (void)stopTimer;
- (void)enterBackground;
- (void)setTimer:(id)arg0;
- (void)pauseTimer;
- (void)resumeTimer;
- (void)dealloc;
- (void)uploadTask;

@end
