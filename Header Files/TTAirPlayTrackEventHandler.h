//
//     Generated by private class-dump
//

@class NSString;

@interface TTAirPlayTrackEventHandler : NSObject <ByteRTCVideoDelegate, ByteRTCRoomDelegate> {
    BOOL _hasTrackFirstFrameRendered;
    BOOL _hasTrackFirstFrameDecoded;
    NSString *_logId;
    id /* block */ _slardarTrackEventCallBack;
    id /* block */ _etTrackEventCallBack;
    double _dataChannelElapse;
    long long _recvBytes;
}

@property (copy, nonatomic) id /* block */ slardarTrackEventCallBack;
@property (copy, nonatomic) id /* block */ etTrackEventCallBack;
@property (nonatomic) BOOL hasTrackFirstFrameRendered;
@property (nonatomic) BOOL hasTrackFirstFrameDecoded;
@property double dataChannelElapse;
@property (nonatomic) long long recvBytes;
@property (copy, nonatomic) NSString *logId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtcEngine:(id)arg0 onError:(long long)arg1;
- (void)rtcEngine:(id)arg0 onFirstRemoteVideoFrameRendered:(id)arg1 withFrameInfo:(id)arg2;
- (void)rtcEngine:(id)arg0 onFirstRemoteVideoFrameDecoded:(id)arg1 withFrameInfo:(id)arg2;
- (void)rtcEngine:(id)arg0 onRemoteVideoStateChanged:(id)arg1 withVideoState:(long long)arg2 withVideoStateReason:(long long)arg3;
- (void)rtcRoom:(id)arg0 onRoomStateChanged:(id)arg1 withUid:(id)arg2 state:(long long)arg3 extraInfo:(id)arg4;
- (void)rtcRoom:(id)arg0 onRoomStats:(id)arg1;
- (void)rtcRoom:(id)arg0 onRemoteStreamStats:(id)arg1;
- (void)rtcRoom:(id)arg0 onUserJoined:(id)arg1 elapsed:(long long)arg2;
- (void)rtcRoom:(id)arg0 onUserLeave:(id)arg1 reason:(unsigned long long)arg2;
- (void)rtcRoom:(id)arg0 onUserPublishStream:(id)arg1 type:(unsigned long long)arg2;
- (id)logId;
- (void)setLogId:(id)arg0;
- (void)trackEvent:(id)arg0 metric:(id)arg1 category:(id)arg2 extra:(id)arg3;
- (void)setSlardarTrackEventCallBack:(id /* block */)arg0;
- (void)trackOperationDelay:(double)arg0 frameIndex:(long long)arg1 interval:(long long)arg2 frames:(unsigned long long)arg3 isSuccess:(BOOL)arg4;
- (void)rtcRoom:(id)arg0 onUserUnPublishStream:(id)arg1 type:(unsigned long long)arg2 reason:(long long)arg3;
- (void)setHasTrackFirstFrameRendered:(BOOL)arg0;
- (void)setHasTrackFirstFrameDecoded:(BOOL)arg0;
- (void)trackJoinRoomSuccess:(BOOL)arg0;
- (void)trackRejoinRoom;
- (void)trackRemoteJoin:(id)arg0;
- (void)trackRemoteLeave:(id)arg0;
- (void)trackLeaveRoom:(id)arg0;
- (void)trackRemoteSubscribe:(id)arg0;
- (void)trackRemoteUnsubscribe:(id)arg0;
- (BOOL)hasTrackFirstFrameDecoded;
- (void)trackRecallFirstFrameDecoded:(id)arg0;
- (void)trackFirstFrameDecoded:(id)arg0;
- (BOOL)hasTrackFirstFrameRendered;
- (void)trackRecallFirstFrame:(id)arg0;
- (void)trackFirstFrameArrive:(id)arg0;
- (void)trackRtcError:(id)arg0;
- (void)trackRtcPerformance:(id)arg0;
- (double)dataChannelElapse;
- (id /* block */)slardarTrackEventCallBack;
- (void)setETTrackEventCallBack:(id /* block */)arg0;
- (void)trackSDKInit;
- (void)trackEngineInit:(id)arg0;
- (void)trackPlayGame;
- (void)trackJoinRoom;
- (void)trackAddRenderView:(id)arg0;
- (void)trackSdkDestroy;
- (void)trackstopVideoStreamAndQuitRoomFrom:(id)arg0;
- (id /* block */)etTrackEventCallBack;
- (void)setEtTrackEventCallBack:(id /* block */)arg0;
- (void)setDataChannelElapse:(double)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)trackEvent:(id)arg0;
- (long long)recvBytes;
- (void)setRecvBytes:(long long)arg0;
- (void)addObservers;

@end