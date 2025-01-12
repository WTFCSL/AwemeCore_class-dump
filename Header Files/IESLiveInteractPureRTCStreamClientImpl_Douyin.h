//
//     Generated by private class-dump
//

@class ByteRTCRoom, IESLiveInteractPureRTCstreamConfig, NSString, IESLiveInteractRTCMixAudioEngine, ByteRTCVideo;
@protocol IESLiveInteractPureRTCStreamDelegate;

@interface IESLiveInteractPureRTCStreamClientImpl_Douyin : NSObject <IESLiveInteractPureRTCStreamClient, ByteRTCVideoDelegate, ByteRTCRoomDelegate> {
    BOOL _audioCaptureEnabled;
    id<IESLiveInteractPureRTCStreamDelegate> delegate;
    ByteRTCVideo *_rtcEngine;
    ByteRTCRoom *_rtcRoom;
    IESLiveInteractPureRTCstreamConfig *_config;
    IESLiveInteractRTCMixAudioEngine *_mixEngine;
}

@property (retain, nonatomic) ByteRTCVideo *rtcEngine;
@property (retain, nonatomic) ByteRTCRoom *rtcRoom;
@property (retain, nonatomic) IESLiveInteractPureRTCstreamConfig *config;
@property (retain, nonatomic) IESLiveInteractRTCMixAudioEngine *mixEngine;
@property (nonatomic) BOOL audioCaptureEnabled;
@property (weak, nonatomic) id<IESLiveInteractPureRTCStreamDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtcEngine:(id)arg0 onError:(long long)arg1;
- (void)rtcEngine:(id)arg0 onFirstLocalAudioFrame:(long long)arg1;
- (void)rtcEngine:(id)arg0 onFirstRemoteAudioFrame:(id)arg1;
- (void)rtcEngine:(id)arg0 onSEIMessageReceived:(id)arg1 andMessage:(id)arg2;
- (void)rtcEngine:(id)arg0 onRemoteAudioPropertiesReport:(id)arg1 totalRemoteVolume:(long long)arg2;
- (void)rtcEngine:(id)arg0 onLocalAudioPropertiesReport:(id)arg1;
- (void)rtcEngine:(id)arg0 onLocalAudioStateChanged:(long long)arg1 error:(long long)arg2;
- (void)rtcEngine:(id)arg0 onAudioDeviceStateChanged:(id)arg1 device_type:(long long)arg2 device_state:(long long)arg3 device_error:(long long)arg4;
- (void)rtcEngine:(id)arg0 onPlayPublicStreamResult:(id)arg1 errorCode:(long long)arg2;
- (void)rtcEngine:(id)arg0 onPublicStreamSEIMessageReceived:(id)arg1 andMessage:(id)arg2 andSourceType:(long long)arg3;
- (void)rtcRoom:(id)arg0 onRoomStateChanged:(id)arg1 withUid:(id)arg2 state:(long long)arg3 extraInfo:(id)arg4;
- (void)rtcRoom:(id)arg0 onLeaveRoom:(id)arg1;
- (void)rtcRoom:(id)arg0 onLocalStreamStats:(id)arg1;
- (void)rtcRoom:(id)arg0 onUserJoined:(id)arg1 elapsed:(long long)arg2;
- (void)rtcRoom:(id)arg0 onUserLeave:(id)arg1 reason:(unsigned long long)arg2;
- (void)rtcRoom:(id)arg0 onUserPublishStream:(id)arg1 type:(unsigned long long)arg2;
- (void)rtcRoom:(id)arg0 onUserUnpublishStream:(id)arg1 type:(unsigned long long)arg2 reason:(long long)arg3;
- (void)rtcEngine:(id)arg0 onUserStartAudioCapture:(id)arg1 uid:(id)arg2;
- (void)rtcEngine:(id)arg0 onUserStopAudioCapture:(id)arg1 uid:(id)arg2;
- (void)rtcEngine:(id)arg0 onPushPublicStreamResult:(id)arg1 publicStreamId:(id)arg2 errorCode:(long long)arg3;
- (void)setupWithConfig:(id)arg0;
- (void)enableAudioMixing;
- (id)rtcEngine;
- (void)muteLocalAudioStream:(BOOL)arg0;
- (void)setRtcEngine:(id)arg0;
- (void)leaveRoom;
- (void)setAudioScenario:(long long)arg0;
- (void)setRtcRoom:(id)arg0;
- (id)rtcRoom;
- (void)muteLocalVideoStream:(BOOL)arg0;
- (void)muteRemoteAudioStreamWithStringUid:(id)arg0 mute:(BOOL)arg1;
- (void)muteAllRemoteAudioStreams:(BOOL)arg0;
- (void)muteAllRemoteVideoStreams:(BOOL)arg0;
- (void)muteRemoteVideoStreamWithStringUid:(id)arg0 mute:(BOOL)arg1;
- (void)enableAudioCapture:(BOOL)arg0;
- (void)setRemoteVolume:(long long)arg0;
- (void)startPlayPublicStream;
- (void)joinRoomWithVisibility:(BOOL)arg0;
- (void)stopPlayPublicStream;
- (void)joinRoom;
- (void)setUserVisibility:(BOOL)arg0;
- (void)disableAudioMixing;
- (BOOL)isAudioMixingEnabled;
- (void)pushAudioMixingStreamData:(float **)arg0 samples:(long long)arg1 sampleRate:(long long)arg2 channels:(long long)arg3;
- (void)setAudioMixingVolume:(int)arg0;
- (void)setMixEngine:(id)arg0;
- (id)mixEngine;
- (void)setPublicStreamVolume:(long long)arg0;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (void)stopAudioCapture;
- (id)initWithConfig:(id)arg0;
- (void)destroy;
- (id)delegate;
- (void)startAudioCapture;
- (void)setDelegate:(id)arg0;
- (BOOL)audioCaptureEnabled;
- (void)setAudioCaptureEnabled:(BOOL)arg0;

@end
