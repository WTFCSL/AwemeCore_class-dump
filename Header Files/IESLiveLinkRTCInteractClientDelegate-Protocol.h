//
//     Generated by private class-dump
//

@protocol IESLiveLinkRTCInteractClientDelegate <NSObject>

- (id)getVideoFrameElapse;
- (void)interactClientWillLeaveChannel:(id)arg0;
- (void)interactClientDidLeaveChannel:(id)arg0 withStats:(id)arg1;
- (void)interactClient:(id)arg0 newSessionCreated:(id)arg1 local:(BOOL)arg2;
- (void)interactClient:(id)arg0 updateLayoutOfPublisher:(id)arg1;
- (void)interactClient:(id)arg0 updateLayoutOfSessionViews:(BOOL)arg1;
- (void)interactClient:(id)arg0 didOccurError:(id)arg1;
- (void)interactClient:(id)arg0 didOccurWarning:(id)arg1;
- (void)interactClient:(id)arg0 onJoinRoomResult:(id)arg1 withUid:(id)arg2 joinType:(long long)arg3 elapsed:(long long)arg4;
- (void)interactClient:(id)arg0 bindExtRendererForSession:(id)arg1;
- (void)interactClient:(id)arg0 unbindExtRendererForSession:(id)arg1;
- (void)rtcEngineConnectionDidLost:(id)arg0;
- (void)rtcEngine:(id)arg0 connectionStateChanged:(BOOL)arg1;

@optional

- (void)interactClientConnectionDidInterrupted:(id)arg0;
- (void)interactClient:(id)arg0 remoteVideoStats:(id)arg1;
- (void)interactClient:(id)arg0 localVideoStats:(id)arg1;
- (void)interactClient:(id)arg0 localAudioStats:(id)arg1;
- (void)interactClient:(id)arg0 remoteAudioStats:(id)arg1;
- (void)interactClient:(id)arg0 publishVideoStats:(id)arg1;
- (void)interactClient:(id)arg0 didOfflineOfUid:(id)arg1 reason:(unsigned long long)arg2;
- (void)interactClient:(id)arg0 firstRemoteVideoDecodedOfUid:(id)arg1 size:(struct CGSize { double x0; double x1; })arg2 elapsed:(long long)arg3;
- (void)interactClient:(id)arg0 onSEIMessageReceived:(id)arg1 byUid:(id)arg2;
- (void)interactClient:(id)arg0 reportKeyApiCallToTTMonitorData:(id)arg1;
- (void)interactClient:(id)arg0 reportToTTMonitorData:(id)arg1 logTypeStr:(id)arg2;
- (void)interactClient:(id)arg0 reportLogLevel:(int)arg1 filename:(id)arg2 tag:(id)arg3 line:(int)arg4 funcName:(id)arg5 format:(id)arg6;
- (void)interactClient:(id)arg0 firstLocalAudioFrame:(long long)arg1;
- (void)interactClient:(id)arg0 firstRemoteAudioFrameOfUid:(id)arg1 elapsed:(long long)arg2;
- (void)interactClient:(id)arg0 didVideoMuted:(BOOL)arg1 byUid:(id)arg2;
- (void)interactClient:(id)arg0 didLocalVideoEnabled:(BOOL)arg1 byUid:(id)arg2;
- (void)interactClient:(id)arg0 videoSizeChangedOfUid:(id)arg1 size:(struct CGSize { double x0; double x1; })arg2 rotation:(long long)arg3;
- (void)interactClient:(id)arg0 onForwardStreamStateChanged:(id)arg1;
- (void)interactClient:(id)arg0 onPlayPublicStreamResult:(id)arg1 errorCode:(int)arg2;
- (void)interactClient:(id)arg0 onPublicStreamSEIMessageReceived:(id)arg1 andMessage:(id)arg2 sourceType:(long long)arg3;
- (void)interactClient:(id)arg0 onFirstPublicStreamVideoFrameDecoded:(id)arg1 withFrameInfo:(id)arg2;
- (void)interactClient:(id)arg0 onFirstPublicStreamAudioFrame:(id)arg1;
- (void)interactClient:(id)arg0 onSubtitleStateChanged:(id)arg1;
- (void)interactClient:(id)arg0 onSubtitleMessageReceived:(id)arg1;
- (void)interactClient:(id)arg0 onUserMessageReceivedOutsideRoom:(id)arg1 message:(id)arg2;
- (void)interactClient:(id)arg0 onUserMessageReceived:(id)arg1 message:(id)arg2;
- (void)interactClient:(id)arg0 onUserBinaryMessageReceived:(id)arg1 message:(id)arg2;
- (void)interactClient:(id)arg0 onRoomMessageReceived:(id)arg1 message:(id)arg2;
- (void)interactClient:(id)arg0 onRoomBinaryMessageReceived:(id)arg1 message:(id)arg2;
- (void)interactClient:(id)arg0 networkQuality:(id)arg1;
- (void)interactClient:(id)arg0 onMediaDeviceStateChanged:(id)arg1 device_type:(long long)arg2 device_state:(long long)arg3 device_error:(long long)arg4;
- (void)interactClient:(id)arg0 firstRemoteAudioFrameDecodedOfUid:(id)arg1 elapsed:(long long)arg2;
- (void)interactClient:(id)arg0 didAudioEnabled:(BOOL)arg1 byUid:(id)arg2;
- (void)interactClient:(id)arg0 didAudioMuted:(BOOL)arg1 byUid:(id)arg2;
- (void)interactClient:(id)arg0 didLocalAudioEnabled:(BOOL)arg1 byUid:(id)arg2;
- (void)interactClient:(id)arg0 didVideoEnabled:(BOOL)arg1 byUid:(id)arg2;
- (void)interactClient:(id)arg0 firstRemoteFrameRenderCallback:(id)arg1;
- (void)interactClient:(id)arg0 remoteFrameRenderCallback:(id)arg1 frameSize:(struct CGSize { double x0; double x1; })arg2 frameBuffer:(struct __CVBuffer { } *)arg3;
- (void)interactClient:(id)arg0 didStreamRemoved:(id)arg1 info:(id)arg2;
- (void)interactClient:(id)arg0 didPublishSucceedOfStream:(id)arg1;
- (void)interactClient:(id)arg0 onStreamAdd:(id)arg1 info:(id)arg2;
- (void)interactClient:(id)arg0 onPushExternalVideoFrameChanged:(struct CGSize { double x0; double x1; })arg1;
- (void)interactClient:(id)arg0 onUserJoined:(id)arg1 extraInfo:(id)arg2 elapsed:(long long)arg3;
- (void)interactClient:(id)arg0 onUserMessageSendResult:(long long)arg1 error:(long long)arg2;
- (void)interactClient:(id)arg0 onRoomMessageSendResult:(long long)arg1 error:(long long)arg2;
- (id)interactClient:(id)arg0 ttUrlDispatchWithUrl:(id)arg1;
- (id)interactClient:(id)arg0 ttUrlDispatchResultWithUrl:(id)arg1;
- (BOOL)interactClientShouldSetTTUrl;
- (void)interactClient:(id)arg0 onPushPublicStreamResult:(id)arg1 errorCode:(int)arg2;
- (void)interactClient:(id)arg0 firstLocalVideoFrameWithSize:(struct CGSize { double x0; double x1; })arg1 elapsed:(long long)arg2;
- (void)interactClient:(id)arg0 didRejoinChannel:(id)arg1 withUid:(id)arg2 elapsed:(long long)arg3;
- (void)rtcEngineDidPublishRtmpStreamSucceed;

@end
