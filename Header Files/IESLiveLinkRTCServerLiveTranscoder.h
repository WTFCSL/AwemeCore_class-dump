//
//     Generated by private class-dump
//

@class NSLock, NSString, NSMutableDictionary, ByteRTCMixedStreamConfig, IESLiveLinkLiveRtc, IESLiveLinkRTCInteractTranscodeAVParams, IESLiveLinkMultiChorusMixedParam, IESLiveLinkRTCInteractVideoCompositingLayout;
@protocol ILiveTranscoderEventDelegate;

@interface IESLiveLinkRTCServerLiveTranscoder : IESLiveLinkLiveTranscoder <ByteRTCMixedStreamObserver> {
    BOOL _isLiveTranscodingRunning;
    IESLiveLinkLiveRtc *_liveRtc;
    id<ILiveTranscoderEventDelegate> _delegate;
    ByteRTCMixedStreamConfig *_mixedStreamConfig;
    NSMutableDictionary *_authInfo;
    NSLock *_authInfoLock;
    NSLock *_updateLayoutLock;
    IESLiveLinkRTCInteractTranscodeAVParams *_rtcTranscodeAVParams;
    IESLiveLinkRTCInteractVideoCompositingLayout *_lastVideoCompositingLayout;
    NSString *_account;
    NSString *_publishUrl;
    NSString *_userId;
    NSString *_roomId;
    NSMutableDictionary *_watermarksDict;
    NSString *_taskId;
    unsigned long long _singleChorusMode;
    IESLiveLinkMultiChorusMixedParam *_multiChorusParam;
}

@property (weak, nonatomic) IESLiveLinkLiveRtc *liveRtc;
@property (weak, nonatomic) id<ILiveTranscoderEventDelegate> delegate;
@property (retain, nonatomic) ByteRTCMixedStreamConfig *mixedStreamConfig;
@property (retain, nonatomic) NSMutableDictionary *authInfo;
@property (retain, nonatomic) NSLock *authInfoLock;
@property (retain, nonatomic) NSLock *updateLayoutLock;
@property (retain, nonatomic) IESLiveLinkRTCInteractTranscodeAVParams *rtcTranscodeAVParams;
@property (retain, nonatomic) IESLiveLinkRTCInteractVideoCompositingLayout *lastVideoCompositingLayout;
@property (retain, nonatomic) NSString *account;
@property (retain, nonatomic) NSString *publishUrl;
@property (retain, nonatomic) NSString *userId;
@property (nonatomic) BOOL isLiveTranscodingRunning;
@property (retain, nonatomic) NSString *roomId;
@property (retain, nonatomic) NSMutableDictionary *watermarksDict;
@property (retain, nonatomic) NSString *taskId;
@property (nonatomic) unsigned long long singleChorusMode;
@property (retain, nonatomic) IESLiveLinkMultiChorusMixedParam *multiChorusParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isSupportClientPushStream;
- (void)onMixingEvent:(unsigned long long)arg0 taskId:(id)arg1 error:(long long)arg2 mixType:(unsigned long long)arg3;
- (id)roomId;
- (void)setRoomId:(id)arg0;
- (void)setMixedStreamConfig:(id)arg0;
- (id)mixType;
- (void)updateWithParam:(id)arg0;
- (int)startChorus:(unsigned long long)arg0;
- (id)publishUrl;
- (void)setPublishUrl:(id)arg0;
- (id)rtcEngineKit;
- (void)setLiveRtc:(id)arg0;
- (void)setRtcTranscodeAVParams:(id)arg0;
- (void)setSingleChorusMode:(unsigned long long)arg0;
- (void)setMultiChorusParam:(id)arg0;
- (void)setIsLiveTranscodingRunning:(BOOL)arg0;
- (id)rtcTranscodeAVParams;
- (id)mixedStreamConfig;
- (BOOL)isLiveTranscodingRunning;
- (id)getMixedStreamConfig;
- (id)lastVideoCompositingLayout;
- (void)updateLiveTranscodingLayout:(BOOL)arg0;
- (id)multiChorusParam;
- (unsigned long long)singleChorusMode;
- (void)setupWithParam:(id)arg0;
- (void)startLiveTranscoding;
- (void)stopLiveTranscoding;
- (void)updateStreamingOutputSize:(struct CGSize { double x0; double x1; })arg0 withBitrate:(long long)arg1 withFps:(long long)arg2;
- (void)clearVideoCompositingLayout;
- (void)updateAuthInfo:(id)arg0 FrameType:(long long)arg1;
- (void)updateWaterMark:(id)arg0;
- (id)getMultiChorusParam;
- (int)stopChorus:(unsigned long long)arg0;
- (id)liveRtc;
- (void)setLastVideoCompositingLayout:(id)arg0;
- (void)setWatermarksDict:(id)arg0;
- (void)setUpdateLayoutLock:(id)arg0;
- (id)getLayout:(id)arg0;
- (void)updateAudioSpatiaInfo:(id)arg0 lcLayout:(id)arg1;
- (id)updateLayoutLock;
- (id)watermarksDict;
- (id)authInfoLock;
- (void)setAuthInfoLock:(id)arg0;
- (void)setAccount:(id)arg0;
- (id)account;
- (void).cxx_destruct;
- (id)authInfo;
- (id)userId;
- (void)setAuthInfo:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)taskId;
- (void)setUserId:(id)arg0;
- (void)setTaskId:(id)arg0;

@end