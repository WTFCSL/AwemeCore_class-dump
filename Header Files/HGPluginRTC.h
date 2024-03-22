//
//     Generated by private class-dump
//

@class NSString, HGUniqueID;
@protocol RtcEngineProtocol, HGRTCPluginDelegate;

@interface HGPluginRTC : HGPluginBase <RtcEventCallbackProtocol, HGApplicationLifeCycleMessage> {
    id<HGRTCPluginDelegate> _rtcPlugin;
    id<RtcEngineProtocol> _rtcEngine;
    HGUniqueID *_uniqueID;
}

@property (retain, nonatomic) id<HGRTCPluginDelegate> rtcPlugin;
@property (weak, nonatomic) id<RtcEngineProtocol> rtcEngine;
@property (weak, nonatomic) HGUniqueID *uniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applicationExitWithUniqueID:(id)arg0;
- (id)rtcEngine;
- (id)rtcPlugin;
- (void)setRtcPlugin:(id)arg0;
- (void)postMessage:(id)arg0 param:(id)arg1;
- (void)onJoinChannelSuccess:(int)arg0;
- (void)onRejoinChannelSuccess:(int)arg0;
- (void)onFirstLocalAudioFrame:(int)arg0;
- (void)onNetworkQuality:(id)arg0 txQuality:(int)arg1 rxQuality:(int)arg2;
- (void)onUserMuteAudio:(id)arg0 muted:(BOOL)arg1;
- (void)onUserJoined:(id)arg0 elapsed:(int)arg1;
- (void)onFirstRemoteAudioFrame:(id)arg0 elapsed:(int)arg1;
- (void)onUserOffline:(id)arg0 reason:(int)arg1;
- (void)onWarning:(int)arg0;
- (void)onUserEnableAudio:(id)arg0 enabled:(BOOL)arg1;
- (void)onUserEnableLocalAudio:(id)arg0 enabled:(BOOL)arg1;
- (void)onLogReport:(id)arg0 log_content:(id)arg1;
- (void)onAudioVolumeIndication:(id)arg0 volume:(int)arg1 speakerNumber:(int)arg2;
- (void)onConnectionLost;
- (void)onConnectionInterrupted;
- (void)onLeaveChannel;
- (void)onStreamPublishSucceed;
- (void)onExtraEvent:(id)arg0;
- (void)onUserMuteAudio:(id)arg0 elapsed:(int)arg1;
- (void)onUserEnableAudio:(id)arg0 elapsed:(int)arg1;
- (void)onUserEnableLocalAudio:(id)arg0 elapsed:(int)arg1;
- (void)createRtcEngineWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)operateRtcEngineWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)setRtcEngine:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;
- (void)dealloc;
- (void)onError:(int)arg0;

@end