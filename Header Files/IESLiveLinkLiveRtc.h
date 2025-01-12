//
//     Generated by private class-dump
//

@class NSLock, NSString, NSData, IESLiveLinkLiveRtcHost, NSMutableDictionary, IESLiveLinkLiveVideoParam, ByteRTCVideo, IESLiveLinkLiveDualStreamParam;
@protocol ByteRTCVideoDelegate;

@interface IESLiveLinkLiveRtc : NSObject {
    BOOL _isVideoExtSource;
    BOOL _isVideoExtRender;
    BOOL _isAudioExtSource;
    BOOL _isAudioExtRender;
    BOOL _isMultiEngine;
    BOOL _isExEngine;
    long long _liveRtcExpectedMixType;
    unsigned long long _audioInputSampleRate;
    unsigned long long _audioInputChannelNum;
    unsigned long long _audioOutputSampleRate;
    unsigned long long _audioOutputChannelNum;
    long long _videoInputWidthFromCustomer;
    long long _videoInputHeightFromCustomer;
    long long _videoInputFpsFromCustomer;
    long long _videoInputBitRateKbpsFromCustomer;
    long long _videoInputGopFromCustomer;
    NSString *_liveRtcLastAppId;
    NSString *_liveRtcCurrentAppId;
    id<ByteRTCVideoDelegate> _LiveRtcDelegate;
    NSString *_liveRtcAccountID;
    NSString *_liveRtcToken;
    NSData *_liveRtcTokenData;
    NSString *_liveRtcSignKey;
    NSString *_liveRtcRoomId;
    NSString *_liveRtcUserId;
    NSString *_liveRtcbusinessID;
    NSString *_liveRtcConfig;
    NSString *_forceGlobalApiServer;
    IESLiveLinkLiveRtcHost *_liveRtcHost;
    long long _liveRtcParamMode;
    long long _liveRtcMixType;
    IESLiveLinkLiveVideoParam *_liveVideoParamServerDefine;
    IESLiveLinkLiveDualStreamParam *_liveDualStreamParam;
    IESLiveLinkLiveVideoParam *_liveVideoParam1V1Client;
    IESLiveLinkLiveVideoParam *_liveVideoParam1V1Server;
    long long _liveRtcMixVideoBitRateKbps;
    long long _liveRtcMixServerVideoWidth;
    long long _liveRtcMixServerVideoHeight;
    long long _liveRtcMixServerVideoFps;
    long long _liveRtcMixServerVideoBitRateKbps;
    NSString *_liveRtcMaxTranscodingCbInterval;
    IESLiveLinkLiveVideoParam *_liveVideoParamPerformanceProfileLow;
    IESLiveLinkLiveVideoParam *_liveRtcVideoInputParam;
    NSLock *_apiLock;
    long long _currentState;
    NSMutableDictionary *_liveRtcVideoSinks;
    NSMutableDictionary *_liveRtcAudioSinks;
    NSMutableDictionary *_streamSubsMap;
    ByteRTCVideo *_rtcVideoEngine;
}

@property (copy, nonatomic) NSString *liveRtcLastAppId;
@property (copy, nonatomic) NSString *liveRtcCurrentAppId;
@property (weak, nonatomic) id<ByteRTCVideoDelegate> LiveRtcDelegate;
@property (copy, nonatomic) NSString *liveRtcAccountID;
@property (copy, nonatomic) NSString *liveRtcToken;
@property (copy, nonatomic) NSData *liveRtcTokenData;
@property (copy, nonatomic) NSString *liveRtcSignKey;
@property (copy, nonatomic) NSString *liveRtcRoomId;
@property (copy, nonatomic) NSString *liveRtcUserId;
@property (copy, nonatomic) NSString *liveRtcbusinessID;
@property (copy, nonatomic) NSString *liveRtcConfig;
@property (copy, nonatomic) NSString *forceGlobalApiServer;
@property (retain, nonatomic) IESLiveLinkLiveRtcHost *liveRtcHost;
@property (nonatomic) long long liveRtcParamMode;
@property (nonatomic) long long liveRtcMixType;
@property (retain, nonatomic) IESLiveLinkLiveVideoParam *liveVideoParamServerDefine;
@property (retain, nonatomic) IESLiveLinkLiveDualStreamParam *liveDualStreamParam;
@property (retain, nonatomic) IESLiveLinkLiveVideoParam *liveVideoParam1V1Client;
@property (retain, nonatomic) IESLiveLinkLiveVideoParam *liveVideoParam1V1Server;
@property (nonatomic) long long liveRtcMixVideoBitRateKbps;
@property (nonatomic) long long liveRtcMixServerVideoWidth;
@property (nonatomic) long long liveRtcMixServerVideoHeight;
@property (nonatomic) long long liveRtcMixServerVideoFps;
@property (nonatomic) long long liveRtcMixServerVideoBitRateKbps;
@property (copy, nonatomic) NSString *liveRtcMaxTranscodingCbInterval;
@property (retain, nonatomic) IESLiveLinkLiveVideoParam *liveVideoParamPerformanceProfileLow;
@property (retain, nonatomic) IESLiveLinkLiveVideoParam *liveRtcVideoInputParam;
@property (retain, nonatomic) NSLock *apiLock;
@property long long currentState;
@property (retain, nonatomic) NSMutableDictionary *liveRtcVideoSinks;
@property (retain, nonatomic) NSMutableDictionary *liveRtcAudioSinks;
@property (retain, nonatomic) NSMutableDictionary *streamSubsMap;
@property (retain, nonatomic) ByteRTCVideo *rtcVideoEngine;
@property long long liveRtcExpectedMixType;
@property BOOL isVideoExtSource;
@property BOOL isVideoExtRender;
@property BOOL isAudioExtSource;
@property BOOL isAudioExtRender;
@property (nonatomic) unsigned long long audioInputSampleRate;
@property (nonatomic) unsigned long long audioInputChannelNum;
@property (nonatomic) unsigned long long audioOutputSampleRate;
@property (nonatomic) unsigned long long audioOutputChannelNum;
@property (nonatomic) long long videoInputWidthFromCustomer;
@property (nonatomic) long long videoInputHeightFromCustomer;
@property (nonatomic) long long videoInputFpsFromCustomer;
@property (nonatomic) long long videoInputBitRateKbpsFromCustomer;
@property (nonatomic) long long videoInputGopFromCustomer;
@property (nonatomic) BOOL isMultiEngine;
@property (nonatomic) BOOL isExEngine;

+ (BOOL)isVaildRtcExtInfoJson:(id)arg0;

- (BOOL)pushExternalVideoFrame:(struct __CVBuffer { } *)arg0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg1 rotation:(long long)arg2 extendedData:(id)arg3 supplementaryInfo:(id)arg4;
- (id)rtcEngine;
- (BOOL)configEngine;
- (int)setVideoCaptureConfig:(id)arg0;
- (int)sendUserMessageOutsideRoom:(id)arg0 message:(id)arg1;
- (id)liveRtcToken;
- (void)setLiveRtcToken:(id)arg0;
- (id)liveRtcRoomId;
- (void)setLiveRtcRoomId:(id)arg0;
- (id)liveRtcUserId;
- (void)setLiveRtcUserId:(id)arg0;
- (id)liveRtcbusinessID;
- (void)setLiveRtcbusinessID:(id)arg0;
- (long long)liveRtcMixServerVideoWidth;
- (void)setLiveRtcMixServerVideoWidth:(long long)arg0;
- (long long)liveRtcMixServerVideoHeight;
- (void)setLiveRtcMixServerVideoHeight:(long long)arg0;
- (long long)liveRtcMixServerVideoFps;
- (void)setLiveRtcMixServerVideoFps:(long long)arg0;
- (long long)liveRtcMixServerVideoBitRateKbps;
- (void)setLiveRtcMixServerVideoBitRateKbps:(long long)arg0;
- (long long)liveRtcParamMode;
- (void)setLiveRtcParamMode:(long long)arg0;
- (id)liveRtcVideoInputParam;
- (void)setLiveRtcVideoInputParam:(id)arg0;
- (BOOL)isExEngine;
- (BOOL)isMultiEngine;
- (id)initLiveRtcWithAppId:(id)arg0 delegate:(id)arg1 parameters:(id)arg2 isMultiEngine:(BOOL)arg3 isExEngine:(BOOL)arg4 delegateEx:(id)arg5;
- (void)setLiveRtcLastAppId:(id)arg0;
- (void)setLiveRtcDelegate:(id)arg0;
- (void)setLiveRtcConfig:(id)arg0;
- (void)setLiveRtcCurrentAppId:(id)arg0;
- (void)setLiveRtcSignKey:(id)arg0;
- (void)setLiveRtcAccountID:(id)arg0;
- (void)setLiveRtcMixVideoBitRateKbps:(long long)arg0;
- (void)setLiveRtcMixType:(long long)arg0;
- (void)setLiveRtcExpectedMixType:(long long)arg0;
- (void)setLiveVideoParamServerDefine:(id)arg0;
- (void)setLiveVideoParam1V1Client:(id)arg0;
- (void)setLiveVideoParam1V1Server:(id)arg0;
- (id)liveDualStreamParam;
- (void)setLiveDualStreamParam:(id)arg0;
- (void)setLiveVideoParamPerformanceProfileLow:(id)arg0;
- (void)setLiveRtcHost:(id)arg0;
- (void)setIsAudioExtSource:(BOOL)arg0;
- (void)setIsAudioExtRender:(BOOL)arg0;
- (void)setIsVideoExtSource:(BOOL)arg0;
- (void)setIsVideoExtRender:(BOOL)arg0;
- (void)setAudioInputSampleRate:(unsigned long long)arg0;
- (void)setAudioInputChannelNum:(unsigned long long)arg0;
- (void)setAudioOutputSampleRate:(unsigned long long)arg0;
- (void)setAudioOutputChannelNum:(unsigned long long)arg0;
- (void)setVideoInputWidthFromCustomer:(long long)arg0;
- (void)setVideoInputHeightFromCustomer:(long long)arg0;
- (void)setVideoInputFpsFromCustomer:(long long)arg0;
- (void)setVideoInputBitRateKbpsFromCustomer:(long long)arg0;
- (id)liveRtcVideoSinks;
- (void)setLiveRtcVideoSinks:(id)arg0;
- (id)liveRtcAudioSinks;
- (void)setLiveRtcAudioSinks:(id)arg0;
- (id)streamSubsMap;
- (void)setStreamSubsMap:(id)arg0;
- (void)setApiLock:(id)arg0;
- (BOOL)parseRtcExtInfoInternal:(id)arg0;
- (BOOL)parseRtcVideoParams:(id)arg0;
- (id)liveRtcCurrentAppId;
- (id)liveRtcSignKey;
- (long long)liveRtcMixType;
- (long long)liveRtcMixVideoBitRateKbps;
- (id)liveVideoParamPerformanceProfileLow;
- (void)configVideoParams;
- (BOOL)isVideoExtSource;
- (BOOL)isAudioExtSource;
- (BOOL)isVideoExtRender;
- (BOOL)isAudioExtRender;
- (unsigned long long)audioInputChannelNum;
- (unsigned long long)audioOutputChannelNum;
- (long long)videoInputWidthFromCustomer;
- (long long)videoInputHeightFromCustomer;
- (long long)videoInputFpsFromCustomer;
- (long long)videoInputBitRateKbpsFromCustomer;
- (id)liveVideoParamServerDefine;
- (long long)liveRtcExpectedMixType;
- (id)liveVideoParam1V1Server;
- (id)liveVideoParam1V1Client;
- (void)setLiveRtcTokenData:(id)arg0;
- (void)setForceGlobalApiServer:(id)arg0;
- (void)setLiveRtcMaxTranscodingCbInterval:(id)arg0;
- (long long)videoInputGopFromCustomer;
- (void)rtcExtInfoParse:(id)arg0;
- (id)rtcExtInfoObtain;
- (void)rtcExtInfoRefresh:(id)arg0;
- (int)joinChannel:(id)arg0;
- (int)leaveChannel:(id)arg0 leaveRoomBlock:(id /* block */)arg1;
- (void)setVideoFrameCallBack:(id /* block */)arg0 userId:(id)arg1;
- (void)setAudioFrameCallBack:(id /* block */)arg0 userId:(id)arg1;
- (int)pushExternalAudioFrame:(void *)arg0 size:(int)arg1 timestamp:(double)arg2;
- (int)pullExternalAudioFrame:(void *)arg0 size:(int)arg1;
- (int)dualStreamSubOfUid:(id)arg0 streamID:(id)arg1 rtcRoom:(id)arg2 subVideo:(BOOL)arg3 subAudio:(BOOL)arg4;
- (int)dualStreamUnsubOfUid:(id)arg0 streamID:(id)arg1 rtcRoom:(id)arg2 subVideo:(BOOL)arg3 subAudio:(BOOL)arg4;
- (long long)setVideoProfiles:(id)arg0 orientationMode:(long long)arg1;
- (unsigned long long)audioInputSampleRate;
- (unsigned long long)audioOutputSampleRate;
- (void)setVideoInputGopFromCustomer:(long long)arg0;
- (void)setIsMultiEngine:(BOOL)arg0;
- (void)setIsExEngine:(BOOL)arg0;
- (id)liveRtcLastAppId;
- (id)LiveRtcDelegate;
- (id)liveRtcAccountID;
- (id)liveRtcTokenData;
- (id)liveRtcConfig;
- (id)forceGlobalApiServer;
- (id)liveRtcHost;
- (id)liveRtcMaxTranscodingCbInterval;
- (id)rtcVideoEngine;
- (void)setRtcVideoEngine:(id)arg0;
- (void)setCurrentState:(long long)arg0;
- (void).cxx_destruct;
- (long long)currentState;
- (void)dealloc;
- (int)login;
- (id)apiLock;

@end
