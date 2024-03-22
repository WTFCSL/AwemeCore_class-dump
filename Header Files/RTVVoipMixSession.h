//
//     Generated by private class-dump
//

@class NSTimer;
@protocol RTVVoipSessionControllerInterface;

@interface RTVVoipMixSession : RTVVoipSession {
    BOOL _isPollingPullRoomInfoEnable;
    NSTimer *_firstFrameTimer;
    long long _firstFrameTimerCount;
    long long _firstFrameTimerMaxCount;
    id<RTVVoipSessionControllerInterface> _sessionController;
}

@property (nonatomic) BOOL isPollingPullRoomInfoEnable;
@property (retain, nonatomic) NSTimer *firstFrameTimer;
@property (nonatomic) long long firstFrameTimerCount;
@property (nonatomic) long long firstFrameTimerMaxCount;
@property (retain, nonatomic) id<RTVVoipSessionControllerInterface> sessionController;

+ (id)createSessionWithVoip:(id)arg0 injector:(id)arg1;

- (void)__addObserver;
- (BOOL)supportInviteParticipator;
- (void)xrEngine:(id)arg0 didJoinRoom:(id)arg1 withUid:(id)arg2;
- (void)xrEngine:(id)arg0 didUserOffline:(id)arg1 reason:(unsigned long long)arg2;
- (void)xrEngine:(id)arg0 didReceiveFirstRemoteAudioFrameOfUid:(id)arg1;
- (void)xrEngine:(id)arg0 didReceiveFirstRemoteVideoFrameOfUid:(id)arg1 size:(struct CGSize { double x0; double x1; })arg2;
- (id)inviteParticipators:(id)arg0 groups:(id)arg1;
- (void)renderXREngine:(id)arg0;
- (id)participator;
- (BOOL)enableInviteParticipator;
- (id)participatorID;
- (id)__userNamesWithUserIDs:(id)arg0;
- (void)__renderModel:(id)arg0 context:(id)arg1;
- (void)__invalidateFirstFrameTimer;
- (id)__handleInviteParticipantResult:(id)arg0 serverToast:(id)arg1;
- (long long)__sessionTypeWithVoip:(id)arg0;
- (void)__updateSessionAdapterWithVoip:(id)arg0;
- (void)__onTheCallIfNeeded;
- (void)__addSessionTypeObserver;
- (id)__prejoinRoomIfNeeded;
- (id)__prepareCallerVoipInfoFromServer;
- (id)__prepareCalleeVoipInfoFromServer;
- (BOOL)__needHandleInvalidRTCInfoWithVoip:(id)arg0;
- (void)__beginFirstFrameTimer;
- (void)__stateMachine:(id)arg0 didTransferFrom:(id)arg1 to:(id)arg2 context:(id)arg3;
- (void)__handleToOnTheCallWhenFirstFrameArrived;
- (BOOL)__shouldOnTheCallWhenAudioFirstFrameArrived:(id)arg0;
- (void)__handleOnTheCallWhenInAppBackgroundState;
- (void)__updateSessionType;
- (long long)__1v1SessionTypeForVoipType:(long long)arg0;
- (id)firstFrameTimer;
- (void)setFirstFrameTimerMaxCount:(long long)arg0;
- (long long)firstFrameTimerCount;
- (void)setFirstFrameTimerCount:(long long)arg0;
- (long long)firstFrameTimerMaxCount;
- (void)setFirstFrameTimer:(id)arg0;
- (id)__isPrejoinRoomEnable;
- (id)__prepareVoipInfoFromServer;
- (void)sessionAdapter:(id)arg0 showToast:(id)arg1;
- (id)__pollingRoomServiceModelWithReason:(long long)arg0;
- (BOOL)isPollingPullRoomInfoEnable;
- (void)setIsPollingPullRoomInfoEnable:(BOOL)arg0;
- (void)setSessionController:(id)arg0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)sessionController;
- (BOOL)isTerminated;

@end