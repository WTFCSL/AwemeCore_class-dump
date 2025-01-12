//
//     Generated by private class-dump
//

@protocol RTVVoipAudioCoordinatorProtocol <RTVXRControllerInterface, RTVLifeCycleProtocol>

- (void)renderModel:(id)arg0 context:(id)arg1;
- (BOOL)hasHeadset;
- (void)stopPlay;
- (void)playForReceive;
- (void)storeAudioSessionContextIfNeeded;
- (void)refreshPlayCallerSoundIfNeeded;
- (void)refreshPlayCallerSoundByCallKit;
- (void)startCallingPlayWithIdentifier:(id)arg0;
- (void)stopCallingPlayWithIdentifier:(id)arg0;
- (void)adjustAudioSessionOptionsIfNeededForPiP;

@end
