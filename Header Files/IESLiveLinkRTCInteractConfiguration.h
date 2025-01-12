//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSData, IESLiveLinkRTCSignalUser, IESLiveLinkAudioDiagnosisConfig;

@interface IESLiveLinkRTCInteractConfiguration : NSObject {
    BOOL _fmNeedRender;
    BOOL _deferredCompositingLayout;
    BOOL _enableInEarMonitoring;
    BOOL _enableExternVideo;
    BOOL _retainLastVideoFrame;
    BOOL _enableSetupAudioPushStream;
    BOOL _enableExternAudio;
    BOOL _byteAudioModeEnable;
    BOOL _rtcAudioCaptureDefaultStart;
    BOOL _rtcVideoCaptureDefaultStart;
    BOOL _useExternalRender;
    BOOL _useExternalAudioRender;
    BOOL _forceGlobalAPIServer;
    BOOL _isLandscapeVideo;
    BOOL _audioCaptureAsync;
    BOOL _sessionNeedRender;
    BOOL _enableBFrame;
    BOOL _useOriginalFrame;
    BOOL _useAudioMixer;
    BOOL _defaultAudioScenarioIsMedia;
    BOOL _enableSingleChorusFixedAVSync;
    BOOL _needSecondMix;
    BOOL _needBypassFOV;
    IESLiveLinkRTCSignalUser *_roomOwner;
    IESLiveLinkRTCSignalUser *_currentUser;
    long long _mode;
    long long _playMode;
    NSString *_publishUrl;
    NSString *_serverMixTaskId;
    long long _streamWidth;
    long long _streamHeight;
    long long _streamFps;
    long long _streamBitrate;
    long long _streamAudioCodec;
    long long _streamVideoCodec;
    long long _customizedAudioProfile;
    unsigned long long _externAudioSampleRate;
    unsigned long long _externAudioChannelsPerFrame;
    NSString *_project_key;
    NSString *_bizChannelId;
    long long _interactMixType;
    NSString *_appChannelType;
    NSString *_aID;
    NSString *_appVersion;
    long long _streamGop;
    long long _streamAudioChannels;
    long long _streamAudioSamplerate;
    long long _streamAudiobitrate;
    NSDictionary *_rtcExtInfo;
    NSString *_deviceId;
    long long _envMode;
    NSString *_abTestConfig;
    NSDictionary *_sdkParams;
    long long _mixSyncQueueLengthMs;
    long long _singleChorusFrameBufferMaxAllowSize;
    long long _singleChorusAuxMaxAllowDelay;
    IESLiveLinkAudioDiagnosisConfig *_audioDiagnosisConfig;
    NSString *_channelName;
    NSString *_channelKey;
    NSString *_appID;
    NSData *_appKey;
    long long _clientType;
    struct IESLiveLinkRTCVideoProfile { long long width; long long height; long long fps; long long bitrate; } _userCustomizedProfile;
}

@property (copy, nonatomic) NSString *channelName;
@property (copy, nonatomic) NSString *channelKey;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSData *appKey;
@property (nonatomic) long long clientType;
@property (retain, nonatomic) IESLiveLinkRTCSignalUser *roomOwner;
@property (retain, nonatomic) IESLiveLinkRTCSignalUser *currentUser;
@property (nonatomic) long long mode;
@property (nonatomic) long long playMode;
@property (nonatomic) BOOL fmNeedRender;
@property (nonatomic) BOOL deferredCompositingLayout;
@property (copy, nonatomic) NSString *publishUrl;
@property (copy, nonatomic) NSString *serverMixTaskId;
@property (nonatomic) long long streamWidth;
@property (nonatomic) long long streamHeight;
@property (nonatomic) long long streamFps;
@property (nonatomic) long long streamBitrate;
@property (nonatomic) long long streamAudioCodec;
@property (nonatomic) long long streamVideoCodec;
@property (nonatomic) long long customizedAudioProfile;
@property (nonatomic) struct IESLiveLinkRTCVideoProfile { long long width; long long height; long long fps; long long bitrate; } userCustomizedProfile;
@property (nonatomic) BOOL enableInEarMonitoring;
@property (nonatomic) BOOL enableExternVideo;
@property BOOL retainLastVideoFrame;
@property (nonatomic) BOOL enableSetupAudioPushStream;
@property (nonatomic) BOOL enableExternAudio;
@property (nonatomic) BOOL byteAudioModeEnable;
@property (nonatomic) BOOL rtcAudioCaptureDefaultStart;
@property (nonatomic) BOOL rtcVideoCaptureDefaultStart;
@property (nonatomic) unsigned long long externAudioSampleRate;
@property (nonatomic) unsigned long long externAudioChannelsPerFrame;
@property (copy, nonatomic) NSString *project_key;
@property (copy, nonatomic) NSString *bizChannelId;
@property (nonatomic) BOOL useExternalRender;
@property (nonatomic) BOOL useExternalAudioRender;
@property (nonatomic) long long interactMixType;
@property (copy, nonatomic) NSString *appChannelType;
@property (copy, nonatomic) NSString *aID;
@property (copy, nonatomic) NSString *appVersion;
@property (nonatomic) long long streamGop;
@property (nonatomic) long long streamAudioChannels;
@property (nonatomic) long long streamAudioSamplerate;
@property (nonatomic) long long streamAudiobitrate;
@property (copy, nonatomic) NSDictionary *rtcExtInfo;
@property (nonatomic) BOOL forceGlobalAPIServer;
@property (copy, nonatomic) NSString *deviceId;
@property (nonatomic) long long envMode;
@property (nonatomic) BOOL isLandscapeVideo;
@property (nonatomic) BOOL audioCaptureAsync;
@property (copy, nonatomic) NSString *abTestConfig;
@property (copy, nonatomic) NSDictionary *sdkParams;
@property (nonatomic) BOOL sessionNeedRender;
@property (nonatomic) BOOL enableBFrame;
@property (nonatomic) BOOL useOriginalFrame;
@property (nonatomic) BOOL useAudioMixer;
@property (nonatomic) BOOL defaultAudioScenarioIsMedia;
@property (nonatomic) long long mixSyncQueueLengthMs;
@property (nonatomic) BOOL enableSingleChorusFixedAVSync;
@property (nonatomic) long long singleChorusFrameBufferMaxAllowSize;
@property (nonatomic) long long singleChorusAuxMaxAllowDelay;
@property (retain, nonatomic) IESLiveLinkAudioDiagnosisConfig *audioDiagnosisConfig;
@property (nonatomic) BOOL needSecondMix;
@property (nonatomic) BOOL needBypassFOV;

+ (id)getVideoProfileDesc:(struct IESLiveLinkRTCVideoProfile { long long x0; long long x1; long long x2; long long x3; })arg0;
+ (BOOL)isShareVideo:(long long)arg0;

- (BOOL)enableBFrame;
- (void)setEnableBFrame:(BOOL)arg0;
- (BOOL)useAudioMixer;
- (void)setUseAudioMixer:(BOOL)arg0;
- (void)setAppKey:(id)arg0;
- (id)appKey;
- (id)project_key;
- (void)setProject_key:(id)arg0;
- (id)sdkParams;
- (void)setSdkParams:(id)arg0;
- (void)setEnableInEarMonitoring:(BOOL)arg0;
- (BOOL)enableInEarMonitoring;
- (id)abTestConfig;
- (BOOL)isLandscapeVideo;
- (id)rtcExtInfo;
- (void)setAID:(id)arg0;
- (id)aID;
- (void)setRtcExtInfo:(id)arg0;
- (void)setEnableExternAudio:(BOOL)arg0;
- (void)setRetainLastVideoFrame:(BOOL)arg0;
- (void)setAbTestConfig:(id)arg0;
- (id)appChannelType;
- (void)setAppChannelType:(id)arg0;
- (id)channelKey;
- (void)setChannelKey:(id)arg0;
- (BOOL)enableExternAudio;
- (BOOL)retainLastVideoFrame;
- (BOOL)fmNeedRender;
- (void)setFmNeedRender:(BOOL)arg0;
- (void)setStreamWidth:(long long)arg0;
- (void)setStreamHeight:(long long)arg0;
- (id)publishUrl;
- (void)setPublishUrl:(id)arg0;
- (long long)streamWidth;
- (long long)streamHeight;
- (long long)streamFps;
- (void)setStreamFps:(long long)arg0;
- (long long)streamBitrate;
- (void)setStreamBitrate:(long long)arg0;
- (long long)streamAudioCodec;
- (void)setStreamAudioCodec:(long long)arg0;
- (long long)streamVideoCodec;
- (void)setStreamVideoCodec:(long long)arg0;
- (long long)customizedAudioProfile;
- (void)setCustomizedAudioProfile:(long long)arg0;
- (struct IESLiveLinkRTCVideoProfile { long long x0; long long x1; long long x2; long long x3; })userCustomizedProfile;
- (void)setUserCustomizedProfile:(struct IESLiveLinkRTCVideoProfile { long long x0; long long x1; long long x2; long long x3; })arg0;
- (BOOL)enableExternVideo;
- (void)setEnableExternVideo:(BOOL)arg0;
- (unsigned long long)externAudioChannelsPerFrame;
- (void)setExternAudioChannelsPerFrame:(unsigned long long)arg0;
- (void)setBizChannelId:(id)arg0;
- (void)setInteractMixType:(long long)arg0;
- (BOOL)useExternalRender;
- (void)setUseExternalRender:(BOOL)arg0;
- (BOOL)useExternalAudioRender;
- (void)setUseExternalAudioRender:(BOOL)arg0;
- (long long)streamGop;
- (void)setStreamGop:(long long)arg0;
- (long long)streamAudioChannels;
- (void)setStreamAudioChannels:(long long)arg0;
- (void)setStreamAudioSamplerate:(long long)arg0;
- (long long)streamAudiobitrate;
- (void)setStreamAudiobitrate:(long long)arg0;
- (BOOL)forceGlobalAPIServer;
- (void)setForceGlobalAPIServer:(BOOL)arg0;
- (void)setIsLandscapeVideo:(BOOL)arg0;
- (BOOL)audioCaptureAsync;
- (void)setAudioCaptureAsync:(BOOL)arg0;
- (BOOL)defaultAudioScenarioIsMedia;
- (void)setDefaultAudioScenarioIsMedia:(BOOL)arg0;
- (BOOL)needSecondMix;
- (void)setNeedSecondMix:(BOOL)arg0;
- (BOOL)needBypassFOV;
- (void)setNeedBypassFOV:(BOOL)arg0;
- (void)setAudioDiagnosisConfig:(id)arg0;
- (long long)mixSyncQueueLengthMs;
- (long long)interactMixType;
- (BOOL)enableSingleChorusFixedAVSync;
- (long long)singleChorusFrameBufferMaxAllowSize;
- (long long)singleChorusAuxMaxAllowDelay;
- (void)setEnableSingleChorusFixedAVSync:(BOOL)arg0;
- (void)setSingleChorusFrameBufferMaxAllowSize:(long long)arg0;
- (void)setSingleChorusAuxMaxAllowDelay:(long long)arg0;
- (BOOL)byteAudioModeEnable;
- (void)setByteAudioModeEnable:(BOOL)arg0;
- (void)setDeferredCompositingLayout:(BOOL)arg0;
- (void)setServerMixTaskId:(id)arg0;
- (id)audioDiagnosisConfig;
- (long long)streamAudioSamplerate;
- (id)serverMixTaskId;
- (void)setExternAudioSampleRate:(unsigned long long)arg0;
- (unsigned long long)externAudioSampleRate;
- (BOOL)useOriginalFrame;
- (void)setUseOriginalFrame:(BOOL)arg0;
- (BOOL)enableSetupAudioPushStream;
- (void)setMixSyncQueueLengthMs:(long long)arg0;
- (BOOL)deferredCompositingLayout;
- (id)bizChannelId;
- (id)sdkParamDescription;
- (BOOL)rtcAudioCaptureDefaultStart;
- (BOOL)rtcVideoCaptureDefaultStart;
- (BOOL)sessionNeedRender;
- (void)setRtcAudioCaptureDefaultStart:(BOOL)arg0;
- (void)setRtcVideoCaptureDefaultStart:(BOOL)arg0;
- (void)setSessionNeedRender:(BOOL)arg0;
- (id)descOfMode:(long long)arg0;
- (void)setEnableSetupAudioPushStream:(BOOL)arg0;
- (BOOL)validate;
- (id)init;
- (void)setAppID:(id)arg0;
- (void)setAppVersion:(id)arg0;
- (void).cxx_destruct;
- (id)deviceId;
- (id)channelName;
- (long long)clientType;
- (long long)mode;
- (void)setMode:(long long)arg0;
- (id)appVersion;
- (id)appID;
- (id)currentUser;
- (void)setClientType:(long long)arg0;
- (void)setCurrentUser:(id)arg0;
- (id)description;
- (void)setDeviceId:(id)arg0;
- (void)setChannelName:(id)arg0;
- (void)setEnvMode:(long long)arg0;
- (long long)envMode;
- (void)setPlayMode:(long long)arg0;
- (long long)playMode;
- (id)roomOwner;
- (void)setRoomOwner:(id)arg0;

@end
