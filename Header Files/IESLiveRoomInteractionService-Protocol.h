//
//     Generated by private class-dump
//

@protocol IESLiveRoomInteractionService <IESLiveInteractionStreamPlayerService>

- (BOOL)beInBigPartyLayoutStyle;
- (BOOL)hasDealWithFirstSEI;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bigPartyPlayerFrameWithOriginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (unsigned long long)bigPartyStreamStyle;
- (BOOL)beInIntimateChatInteractiveScene;
- (BOOL)beInMultiAudioKTV;
- (BOOL)beInCustomizedMultiAudio;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })customizeAudioPlayerFrame;
- (id)currentInteractType;
- (BOOL)isConnectingGuestInChatRoom;
- (BOOL)isAudioCaptureInBackgroundThisTime;
- (BOOL)multiAudioAnchorEnablePushStreamInBackground;
- (BOOL)multiAudioAnchorIsMuted;
- (long long)intimateChatSessionCount;
- (BOOL)hasBigPartyComponent;
- (BOOL)beInBigPartyInteractiveScene;
- (BOOL)beInEqualBigPartyInteractiveScene;
- (BOOL)beInBigPartyKTV;

@end
