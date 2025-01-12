//
//     Generated by private class-dump
//

@protocol IESLiveInteractionLinkerLinkService <NSObject>

@property (readonly, nonatomic) BOOL isProcessingApply;

- (long long)startType;
- (void)cancelApplyWithParams:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)isInvitingUser:(id)arg0;
- (BOOL)isFirstInit;
- (BOOL)isProcessingApply;
- (id)joinToken;
- (id)playModes;
- (void)inviteWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)replyWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)applyWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)permitWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)kickoutWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)quitRoomWithReason:(unsigned long long)arg0 notifyServer:(BOOL)arg1;
- (void)quickStartJoinChannel;
- (void)startInteractDirectly;
- (void)stopInteractDirectly;
- (id)suspendInteractionLinker:(BOOL)arg0;
- (void)resumeInteractionLinker:(id)arg0 needLinkmic:(BOOL)arg1;
- (void)startInteractWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)resumeWithResumeResponse:(id)arg0 autoPushStream:(BOOL)arg1;
- (void)stopInteractWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)muteUserWithUserID:(id)arg0 completion:(id /* block */)arg1;
- (void)unMuteUserWithUserID:(id)arg0 completion:(id /* block */)arg1;
- (void)muteOtherRoomWithRoomID:(id)arg0 completion:(id /* block */)arg1;
- (void)unMuteOtherRoomWithRoomID:(id)arg0 completion:(id /* block */)arg1;
- (void)openCameraWithUserID:(id)arg0 completion:(id /* block */)arg1;
- (void)closeCameraWithUserID:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)isInteractModeEnable;
- (BOOL)isSelfAudience;
- (void)leaveInteractWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)forceChangeToWaitingStatusWithLinkmicID:(id)arg0;
- (void)didStartWithRoom:(id)arg0;
- (void)quickStartWithInitResponse:(id)arg0 autoJoinChannel:(BOOL)arg1;
- (BOOL)isInteracting;

@end
