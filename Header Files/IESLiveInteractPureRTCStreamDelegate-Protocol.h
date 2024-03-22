//
//     Generated by private class-dump
//

@protocol IESLiveInteractPureRTCStreamDelegate <NSObject>

@optional

- (void)rtcStreamClient:(id)arg0 onError:(id)arg1;
- (void)rtcStreamClient:(id)arg0 onJoinRoomFinish:(id)arg1;
- (void)rtcStreamClientOnLeaveRoomFinish:(id)arg0;
- (void)rtcStreamClient:(id)arg0 onUserJoined:(id)arg1;
- (void)rtcStreamClient:(id)arg0 onUserLeaved:(id)arg1 reason:(unsigned long long)arg2;
- (void)rtcStreamClient:(id)arg0 onStreamPublishSuccess:(id)arg1;
- (void)rtcStreamClient:(id)arg0 onUserMuteAudio:(id)arg1 isMute:(BOOL)arg2;
- (void)rtcStreamClient:(id)arg0 onUserAudioCaptureChanged:(id)arg1 isCapturing:(BOOL)arg2 error:(id)arg3;
- (void)rtcStreamClient:(id)arg0 onFirstRemoteAudioFrameOfUid:(id)arg1 roomID:(id)arg2;
- (void)rtcStreamClientOnFirstLocalAudioFrame:(id)arg0;
- (void)rtcStreamClient:(id)arg0 onUserAudioVolumeIndication:(id)arg1 volume:(long long)arg2 totalVolume:(long long)arg3;
- (void)rtcStreamClient:(id)arg0 onPlayPublicStreamResult:(id)arg1;
- (void)rtcStreamClient:(id)arg0 onPublicStreamSystemSEIReceived:(id)arg1 error:(id)arg2;
- (void)rtcStreamClient:(id)arg0 onPublicStreamCustomSEIReceived:(id)arg1 error:(id)arg2;
- (void)rtcStreamClient:(id)arg0 onReceiveSEI:(id)arg1 fromUserID:(id)arg2;
- (void)rtcStreamClient:(id)arg0 onDetectLocalUserVoiceWithLinearVolume:(long long)arg1 nonlinearVolume:(long long)arg2;
- (void)rtcStreamClient:(id)arg0 onUndetectLocalUserVoiceWithLinearVolume:(long long)arg1 nonlinearVolume:(long long)arg2;

@end