//
//     Generated by private class-dump
//

@class NSString, DigitalHumanRtcInfo, NSTimer;
@protocol VoiceTextDelegate, DigitalHumanStatusDelegate;

@interface DigitalHuman : NSObject <WsEventCallBack> {
    unsigned int _lastPushId;
    NSString *_avatarCID;
    NSString *_avatarUID;
    NSString *_cacheSceneId;
    DigitalHumanRtcInfo *_cacheRtcInfo;
    id<VoiceTextDelegate> _voiceTxtDelegate;
    id<DigitalHumanStatusDelegate> _digitalHumanStatusDelegate;
    NSTimer *_heartbeatTimer;
    long long _lastSuccessHeartbeatTime;
    long long _sendHeartBeatTime;
}

@property (retain, nonatomic) NSString *cacheSceneId;
@property (retain, nonatomic) DigitalHumanRtcInfo *cacheRtcInfo;
@property (weak, nonatomic) id<VoiceTextDelegate> voiceTxtDelegate;
@property (weak, nonatomic) id<DigitalHumanStatusDelegate> digitalHumanStatusDelegate;
@property (retain, nonatomic) NSTimer *heartbeatTimer;
@property (nonatomic) long long lastSuccessHeartbeatTime;
@property long long sendHeartBeatTime;
@property unsigned int lastPushId;
@property (retain, nonatomic) NSString *avatarCID;
@property (retain, nonatomic) NSString *avatarUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)getRtcInfoByWsWithAvatarId:(id)arg0 withBotId:(id)arg1 withStyleId:(id)arg2 withSuccess:(id /* block */)arg3 withFailedHandler:(id /* block */)arg4;
+ (id)initWithUid:(id)arg0 withCid:(id)arg1;
+ (void)initialize;

- (void)onMessage:(id)arg0;
- (void)setAvatarCID:(id)arg0;
- (void)setAvatarUID:(id)arg0;
- (void)setLastPushId:(unsigned int)arg0;
- (void)setSendHeartBeatTime:(long long)arg0;
- (void)setLastSuccessHeartbeatTime:(long long)arg0;
- (void)startWithParams:(id)arg0 withSuccessHandler:(id /* block */)arg1 withFailedHandler:(id /* block */)arg2;
- (void)callHomeInfo;
- (void)setCacheSceneId:(id)arg0;
- (void)setCacheRtcInfo:(id)arg0;
- (id)getCommonParamsByDigitalHunman;
- (void)startWithRtcInfoWithParams:(id)arg0 withTimeState:(id)arg1 withSuccessHandler:(id /* block */)arg2;
- (void)initConnWithSuccessHandler:(id /* block */)arg0 withFailedHandler:(id /* block */)arg1;
- (void)startWithoutRtcInfoWithParams:(id)arg0 withBeginTime:(long long)arg1 withSuccessHandler:(id /* block */)arg2 withFailedHandler:(id /* block */)arg3;
- (id)digitalHumanStatusDelegate;
- (void)sendHeartBeatMsg;
- (long long)sendHeartBeatTime;
- (long long)lastSuccessHeartbeatTime;
- (void)onStopInner;
- (id)avatarUID;
- (id)avatarCID;
- (id)cacheRtcInfo;
- (id)cacheSceneId;
- (void)setDigitalHumanStatusDelegate:(id)arg0;
- (void)setVoiceTxtDelegate:(id)arg0;
- (unsigned int)lastPushId;
- (void)onHandlerSubtitlesNotify:(id)arg0;
- (void)onHandlerEventNotify:(id)arg0;
- (void)onHandlerErrorNotify:(id)arg0;
- (id)voiceTxtDelegate;
- (long long)convertToDHEventType:(int)arg0;
- (long long)convertToDHErrorType:(int)arg0;
- (void)getRoomAddrWithSuccess:(id /* block */)arg0 withFailedHandler:(id /* block */)arg1;
- (void)getHomeInfoWithSuccess:(id /* block */)arg0 withFailedHandler:(id /* block */)arg1;
- (void)chatWithContent:(id)arg0 onSuccessHandler:(id /* block */)arg1 onFailedHandler:(id /* block */)arg2;
- (void)repeatWithContent:(id)arg0 withSuccessHandler:(id /* block */)arg1 withFailedHandler:(id /* block */)arg2;
- (void)interruptWithIsSelf:(BOOL)arg0 withSuccessHandler:(id /* block */)arg1 withFailedHandler:(id /* block */)arg2;
- (void)stopWithSuccessHandler:(id /* block */)arg0 withFailedHandler:(id /* block */)arg1;
- (void)interactiveSignal:(long long)arg0 query:(id)arg1 response:(id)arg2 withSuccessHandler:(id /* block */)arg3 withFailedHandler:(id /* block */)arg4;
- (void)setDigitalHumanCallback:(id)arg0;
- (void)setUserAndDigitalhumanVoiceTextListener:(id)arg0;
- (id)getRoomIndexInfo;
- (void)onLoginSuccessWithResumeMode:(int)arg0 withByClose:(BOOL)arg1;
- (void)onLoginFailedWithCode:(int)arg0 withMsg:(id)arg1;
- (void)onDisconnectMax;
- (void)onExceptionMax;
- (id)getCommonParamsForWsEvent;
- (id)init;
- (void).cxx_destruct;
- (void)setHeartbeatTimer:(id)arg0;
- (id)heartbeatTimer;
- (void)onClose;
- (void)startHeartBeat;

@end
