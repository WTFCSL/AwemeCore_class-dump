//
//     Generated by private class-dump
//

@protocol RTVXREngineDelegate <NSObject>

@optional

- (void)xrEngineWillBeginSetup:(id)arg0;
- (void)xrEngineDidFinishSetup:(id)arg0;
- (void)xrEngineWillBeginSetupInteractConfig:(id)arg0;
- (void)xrEngineDidFinishSetupInteractConfig:(id)arg0;
- (void)xrEngine:(id)arg0 willJoinRoom:(id)arg1;
- (void)xrEngine:(id)arg0 didJoinRoom:(id)arg1 withUid:(id)arg2;
- (void)xrEngine:(id)arg0 newSessionCreatedLocal:(BOOL)arg1 withUid:(id)arg2;
- (void)xrEngine:(id)arg0 onUserWillLeave:(id)arg1;
- (void)xrEngine:(id)arg0 didLeaveRoom:(id)arg1;
- (void)xrEngine:(id)arg0 didUserOffline:(id)arg1 reason:(unsigned long long)arg2;
- (void)xrEngine:(id)arg0 didRenderFirstLocalVideoFrame:(struct CGSize { double x0; double x1; })arg1;
- (void)xrEngine:(id)arg0 onLocalStreamVideoFrame:(struct CGSize { double x0; double x1; })arg1;
- (void)xrEngine:(id)arg0 didReceiveFirstRemoteAudioFrameOfUid:(id)arg1;
- (void)xrEngine:(id)arg0 onAudioFramePlayStateChanged:(id)arg1 state:(unsigned long long)arg2;
- (void)xrEngine:(id)arg0 didReceiveFirstRemoteVideoFrameOfUid:(id)arg1 size:(struct CGSize { double x0; double x1; })arg2;
- (void)xrEngine:(id)arg0 remoteVideoStats:(id)arg1;
- (void)xrEngine:(id)arg0 remoteAudioStats:(id)arg1;
- (void)xrEngine:(id)arg0 onRoomStats:(id)arg1;
- (void)xrEngine:(id)arg0 firstRemoteVideoDidRenderOfUid:(id)arg1;
- (void)xrEngine:(id)arg0 didVideoEnabled:(BOOL)arg1 byUid:(id)arg2;
- (void)xrEngine:(id)arg0 onFirstRemoteVideoFrameDecoded:(id)arg1 withFrameInfo:(id)arg2;
- (void)xrEngine:(id)arg0 onUserUnpublishStream:(id)arg1 type:(unsigned long long)arg2 reason:(long long)arg3;
- (void)xrEngine:(id)arg0 onUserPublishStream:(id)arg1 type:(unsigned long long)arg2;
- (void)xrEngine:(id)arg0 didLocalVideoEnabled:(BOOL)arg1 byUid:(id)arg2;
- (void)xrEngine:(id)arg0 didVideoMuted:(BOOL)arg1 byUid:(id)arg2;
- (void)xrEngine:(id)arg0 didAudioEnabled:(BOOL)arg1 byUid:(id)arg2;
- (void)xrEngine:(id)arg0 didReceiveSpeakerAudioVolumUpdates:(id)arg1 totalVolume:(unsigned long long)arg2;
- (void)xrEngineDidInturrpt:(id)arg0;
- (void)xrEngineDidLost:(id)arg0;
- (void)xrEngine:(id)arg0 didOccurError:(id)arg1;
- (void)xrEngine:(id)arg0 networkQualityDidChange:(id)arg1;
- (void)xrEngine:(id)arg0 reportToTTMonitorData:(id)arg1 logTypeStr:(id)arg2;
- (void)xrEngine:(id)arg0 didMediaDeviceStateChanged:(long long)arg1 device_state:(long long)arg2;
- (void)xrEngine:(id)arg0 onAudioDeviceStateChanged:(id)arg1 device_type:(long long)arg2 device_state:(long long)arg3 device_error:(long long)arg4;
- (void)xrEngine:(id)arg0 onVideoDeviceStateChanged:(id)arg1 device_type:(long long)arg2 device_state:(long long)arg3 device_error:(long long)arg4;
- (void)xrEngine:(id)arg0 videoCaptureStateChange:(unsigned long long)arg1;
- (void)xrEngine:(id)arg0 audioCaptureStateChange:(unsigned long long)arg1;
- (void)xrEngine:(id)arg0 captureVideoFrameProcessed:(struct __CVBuffer { } *)arg1 pts:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg2;
- (void)xrEngine:(id)arg0 didPublishSucceedOfStream:(id)arg1;
- (void)xrEngine:(id)arg0 onRemoteVideoStateChanged:(id)arg1 videoState:(long long)arg2 stateChangeReason:(long long)arg3;
- (void)xrEngine:(id)arg0 onLocalVideoStateChanged:(long long)arg1 streamState:(long long)arg2 withStreamError:(long long)arg3;
- (void)xrEngine:(id)arg0 onLocalAudioStateChanged:(long long)arg1 withStreamError:(long long)arg2;
- (void)xrEngine:(id)arg0 onRemoteAudioStateChanged:(id)arg1 audioState:(long long)arg2 stateChangeReason:(long long)arg3;
- (void)xrEngine:(id)arg0 onAudioFrameSendStateChanged:(id)arg1 state:(unsigned long long)arg2;
- (void)xrEngine:(id)arg0 onVideoFrameSendStateChanged:(id)arg1 state:(unsigned long long)arg2;
- (void)xrEngine:(id)arg0 didRemotePublish:(BOOL)arg1 streamType:(unsigned long long)arg2 byUid:(id)arg3;
- (void)xrEngine:(id)arg0 didSubscribeStream:(unsigned long long)arg1 state:(long long)arg2 uid:(id)arg3;
- (void)xrEngine:(id)arg0 onRoomBinaryMessageReceived:(id)arg1 message:(id)arg2;
- (void)xrEngine:(id)arg0 onUserBinaryMessageReceived:(id)arg1 message:(id)arg2;
- (void)xrEngine:(id)arg0 onRoomMessageReceived:(id)arg1 message:(id)arg2;
- (void)xrEngine:(id)arg0 onUserMessageReceived:(id)arg1 message:(id)arg2;
- (void)xrEngine:(id)arg0 onUserMessageSendResult:(long long)arg1 error:(long long)arg2;
- (void)xrEngine:(id)arg0 onRoomMessageSendResult:(long long)arg1 error:(long long)arg2;
- (void)xrEngine:(id)arg0 reportLogLevel:(int)arg1 filename:(id)arg2 tag:(id)arg3 line:(int)arg4 funcName:(id)arg5 format:(id)arg6;
- (void)xrEngineDidRenderFirstLocalAudioFrame:(id)arg0;
- (void)xrEngine:(id)arg0 localVideoStats:(id)arg1;

@end
