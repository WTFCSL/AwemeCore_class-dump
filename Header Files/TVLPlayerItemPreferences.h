//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSURL, NSArray, TVLPlayableURL;

@interface TVLPlayerItemPreferences : NSObject {
    BOOL _allowsMainBackupSwitch;
    BOOL _enableUseSDR2HDR;
    BOOL _protocolDowngraded;
    BOOL _ignoreSuggestedProtocolType;
    BOOL _LSSSuggestQuic;
    BOOL _hidden;
    BOOL _adaptiveEnabled;
    BOOL _defaultSelectd;
    BOOL _useFastOpenDurationFromSetAPI;
    BOOL _enableLatencyNetworkAdaptOnRetry;
    BOOL _enableSmoothlySwitch;
    BOOL _disableABRAlgorithm;
    BOOL _useExternalResolutionAsDefault;
    BOOL _enableReleaseAudioWrapperInStop;
    BOOL _enableUseAudioRecordInAudioWrapper;
    BOOL _enableUseTraitObjectInVideoWrapper;
    BOOL _shouldIgnoreCheckMetalDevice;
    BOOL _didEnableBMFSharpen;
    BOOL _enableLiveIO;
    BOOL _enableLiveIOUseABR;
    BOOL _enablePcdnUseRTS;
    BOOL _liveIOPlay;
    BOOL _enableNotifyLiveIOFinishInAsync;
    BOOL _enableLiveIOP2p;
    BOOL _enableLiveIOSupprotQuic;
    BOOL _enableResetPlayerInClose;
    BOOL _enableUseNewSeiInLoudness;
    BOOL _didOpenSamiCoreNewBalance;
    BOOL _forbidSDR2HDRInPreview;
    BOOL _abrSwitchAction;
    BOOL _enableRetryWithAbrRes;
    BOOL _enableUseBMFNewInterface;
    int _cmafAbrPts;
    float _rtmProbedLossrate;
    int _enablePcdnAndFlvAdapt;
    int _isUsedPredictFastOpenDuration;
    unsigned long long _ID;
    NSString *_sourceType;
    NSString *_params;
    NSDictionary *_options;
    NSDictionary *_HTTPPorts;
    NSDictionary *_RTMPPorts;
    long long _priority;
    long long _timeShiftInSeconds;
    long long _fastOpenDuration;
    NSString *_secretKey;
    NSString *_appId;
    NSString *_URL;
    NSString *_formatType;
    NSString *_actualResolutionType;
    NSString *_initialResolutionType;
    NSDictionary *_HTTPHeaders;
    TVLPlayableURL *_originPlayableURL;
    TVLPlayableURL *_smoothlyPlayableURL;
    long long _smoothlySwitchInterval;
    long long _neqNetworkType;
    long long _rtmProbedResult;
    long long _rtmProbedRttMin;
    long long _rtmProbedRttMax;
    NSString *_rtmProbedIp;
    NSString *_abrDefaultResolution;
    NSString *_abrTargetSmoothlyResolution;
    NSArray *_abrResolutionList;
    long long _forceUseMetalRenderType;
    NSDictionary *_liveIOLogInfo;
    NSString *_liveIOVersion;
    id _enablePcdnDownload;
    id _enablePcdnUpload;
    id _pcdnH2pCache;
    id _pcdnWatchThreshold;
    long long _usingFlexType;
    long long _startPlayBufferWaitTime;
    long long _finalUseFastOpenDuration;
    NSDictionary *_vqscoreConfig;
}

@property (readonly, nonatomic) NSURL *HASControlURL;
@property (nonatomic) unsigned long long ID;
@property (copy, nonatomic) NSString *URL;
@property (copy, nonatomic) NSString *sourceType;
@property (copy, nonatomic) NSString *formatType;
@property (copy, nonatomic) NSString *actualResolutionType;
@property (copy, nonatomic) NSString *initialResolutionType;
@property (copy, nonatomic) NSString *params;
@property (copy, nonatomic) NSDictionary *options;
@property (copy, nonatomic) NSDictionary *HTTPHeaders;
@property (copy, nonatomic) NSString *secretKey;
@property (weak, nonatomic) TVLPlayableURL *originPlayableURL;
@property (weak, nonatomic) TVLPlayableURL *smoothlyPlayableURL;
@property (nonatomic) BOOL enableSmoothlySwitch;
@property (nonatomic) BOOL disableABRAlgorithm;
@property (nonatomic) BOOL useExternalResolutionAsDefault;
@property (nonatomic) BOOL enableReleaseAudioWrapperInStop;
@property (nonatomic) BOOL enableUseAudioRecordInAudioWrapper;
@property (nonatomic) BOOL enableUseTraitObjectInVideoWrapper;
@property (nonatomic) long long smoothlySwitchInterval;
@property (nonatomic) long long neqNetworkType;
@property (nonatomic) long long rtmProbedResult;
@property (nonatomic) long long rtmProbedRttMin;
@property (nonatomic) long long rtmProbedRttMax;
@property (nonatomic) float rtmProbedLossrate;
@property (copy, nonatomic) NSString *rtmProbedIp;
@property (copy, nonatomic) NSString *abrDefaultResolution;
@property (copy, nonatomic) NSString *abrTargetSmoothlyResolution;
@property (copy, nonatomic) NSArray *abrResolutionList;
@property (copy, nonatomic) NSString *appId;
@property (nonatomic) long long forceUseMetalRenderType;
@property (nonatomic) BOOL shouldIgnoreCheckMetalDevice;
@property (nonatomic) BOOL didEnableBMFSharpen;
@property (nonatomic) BOOL enableLiveIO;
@property (nonatomic) BOOL enableLiveIOUseABR;
@property (nonatomic) BOOL enablePcdnUseRTS;
@property (copy, nonatomic) NSDictionary *liveIOLogInfo;
@property (nonatomic) BOOL liveIOPlay;
@property (nonatomic) BOOL enableNotifyLiveIOFinishInAsync;
@property (nonatomic) BOOL enableLiveIOP2p;
@property (nonatomic) BOOL enableLiveIOSupprotQuic;
@property (copy, nonatomic) NSString *liveIOVersion;
@property (nonatomic) id enablePcdnDownload;
@property (nonatomic) id enablePcdnUpload;
@property (nonatomic) int enablePcdnAndFlvAdapt;
@property (nonatomic) id pcdnH2pCache;
@property (nonatomic) id pcdnWatchThreshold;
@property (nonatomic) long long usingFlexType;
@property (nonatomic) long long startPlayBufferWaitTime;
@property (nonatomic) BOOL enableResetPlayerInClose;
@property (nonatomic) long long finalUseFastOpenDuration;
@property (nonatomic) BOOL enableUseNewSeiInLoudness;
@property (nonatomic) BOOL didOpenSamiCoreNewBalance;
@property (nonatomic) BOOL forbidSDR2HDRInPreview;
@property (nonatomic) int isUsedPredictFastOpenDuration;
@property (nonatomic) BOOL abrSwitchAction;
@property (nonatomic) BOOL enableRetryWithAbrRes;
@property (copy, nonatomic) NSDictionary *vqscoreConfig;
@property (nonatomic) BOOL enableUseBMFNewInterface;
@property (readonly, copy, nonatomic) NSString *videoCodecType;
@property (readonly, copy, nonatomic) NSString *protocolType;
@property (readonly, copy, nonatomic) NSString *DRType;
@property (readonly, copy, nonatomic) NSString *pushResolution;
@property (nonatomic) BOOL protocolDowngraded;
@property (nonatomic) BOOL ignoreSuggestedProtocolType;
@property (nonatomic) BOOL LSSSuggestQuic;
@property (readonly, copy, nonatomic) NSString *resolutionType;
@property (retain, nonatomic) NSDictionary *HTTPPorts;
@property (retain, nonatomic) NSDictionary *RTMPPorts;
@property (nonatomic) long long priority;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (nonatomic, getter=isAdaptiveEnabled) BOOL adaptiveEnabled;
@property (nonatomic, getter=isDefaultSelectd) BOOL defaultSelectd;
@property (readonly, nonatomic) long long defaultVideoBitrateForLLASH;
@property (readonly, nonatomic) long long defaultVideoBitrateInKbps;
@property (readonly, nonatomic) long long defaultVideoBitrate;
@property (readonly, nonatomic) long long GOPDurationInMillseconds;
@property (readonly, copy, nonatomic) NSString *suggestedFormatType;
@property (readonly, nonatomic) BOOL supportsTimeShift;
@property (readonly, nonatomic) BOOL allowsFormatFallback;
@property (readonly, nonatomic) BOOL isVRModeAvailable;
@property (readonly, nonatomic) long long timeShiftLowerBoundInSeconds;
@property (nonatomic) long long timeShiftInSeconds;
@property (nonatomic, getter=isUseFastOpenDurationFromSetAPI) BOOL useFastOpenDurationFromSetAPI;
@property (nonatomic, getter=getFastOpenDuration) long long fastOpenDuration;
@property (nonatomic) BOOL enableLatencyNetworkAdaptOnRetry;
@property (nonatomic) int cmafAbrPts;
@property (readonly, nonatomic) BOOL enableUseSDR2HDR;

+ (id)defaultComparableProperties;
+ (id)registeredFormatTypes;
+ (id)preferencesWithData:(id)arg0;
+ (id)registeredSourceTypes;
+ (id)defaultPreferences;

- (id)playableURL;
- (void)setFastOpenDuration:(long long)arg0;
- (id)HTTPPorts;
- (id)RTMPPorts;
- (id)abrResolutionList;
- (long long)defaultVideoBitrate;
- (id)pushResolution;
- (BOOL)enableSmoothlySwitch;
- (void)updatePlayableUrlToTargetResolution:(id)arg0;
- (void)setAbrSwitchAction:(BOOL)arg0;
- (BOOL)enableRetryWithAbrRes;
- (long long)GOPDurationInMillseconds;
- (long long)finalUseFastOpenDuration;
- (id)VRConfiguration;
- (BOOL)isVRModeAvailable;
- (BOOL)enableUseBMFNewInterface;
- (long long)defaultVideoBitrateInKbps;
- (void)setUsingFlexType:(long long)arg0;
- (void)setEnableUseSDR2HDR:(BOOL)arg0;
- (BOOL)forbidSDR2HDRInPreview;
- (void)setDidEnableBMFSharpen:(BOOL)arg0;
- (id)vqscoreConfig;
- (id)abrDefaultResolution;
- (void)setOriginPlayableURL:(id)arg0;
- (long long)timeShiftInSeconds;
- (BOOL)supportsTimeShift;
- (int)cmafAbrPts;
- (BOOL)ignoreSuggestedProtocolType;
- (long long)defaultVideoBitrateForLLASH;
- (BOOL)isAdaptiveEnabled;
- (id)suggestedFormatType;
- (void)setIgnoreSuggestedProtocolType:(BOOL)arg0;
- (BOOL)isEqualToPreferences:(id)arg0 requiredProperties:(id)arg1;
- (BOOL)enableLiveIO;
- (BOOL)enablePcdnUseRTS;
- (BOOL)enableLiveIOSupprotQuic;
- (BOOL)enableLiveIOUseABR;
- (void)setEnableLiveIO:(BOOL)arg0;
- (id)HASControlURL;
- (void)setInitialResolutionType:(id)arg0;
- (id)initialResolutionType;
- (void)setActualResolutionType:(id)arg0;
- (BOOL)isEqualToPreferences:(id)arg0 ignoreProperties:(id)arg1;
- (void)updateOptionsWithData:(id)arg0;
- (BOOL)LSSSuggestQuic;
- (id)protocolTypeFromURL:(id)arg0;
- (id)abrTargetSmoothlyResolution;
- (void)checkSmoothlyResolutionIsValideInAuto;
- (void)checkSmoothlyResolutionIsValideInNotAuto;
- (BOOL)shouldUseSDKQuery;
- (BOOL)supportAoResolution;
- (void)updateActualResolutionType:(id)arg0;
- (void)updateSdkParamsFromLssSettings:(id)arg0 shouldForbidUseLss:(BOOL)arg1;
- (id)DRType;
- (BOOL)allowsMainBackupSwitch;
- (BOOL)allowsFormatFallback;
- (long long)timeShiftLowerBoundInSeconds;
- (void)setTimeShiftInSeconds:(long long)arg0;
- (void)checkSmoothlyResolutionIsValide;
- (BOOL)isLowLatencyFLV;
- (long long)fastOpenGOPCacheInMilliseconds;
- (void)resetActualResolutionType;
- (BOOL)enableUseSDR2HDR;
- (id)getStreamSuffix:(id)arg0;
- (BOOL)protocolDowngraded;
- (void)setProtocolDowngraded:(BOOL)arg0;
- (void)setLSSSuggestQuic:(BOOL)arg0;
- (void)setAdaptiveEnabled:(BOOL)arg0;
- (void)setUseFastOpenDurationFromSetAPI:(BOOL)arg0;
- (BOOL)enableLatencyNetworkAdaptOnRetry;
- (void)setEnableLatencyNetworkAdaptOnRetry:(BOOL)arg0;
- (void)setCmafAbrPts:(int)arg0;
- (id)actualResolutionType;
- (id)originPlayableURL;
- (id)smoothlyPlayableURL;
- (void)setEnableSmoothlySwitch:(BOOL)arg0;
- (BOOL)disableABRAlgorithm;
- (void)setDisableABRAlgorithm:(BOOL)arg0;
- (BOOL)useExternalResolutionAsDefault;
- (void)setUseExternalResolutionAsDefault:(BOOL)arg0;
- (BOOL)enableReleaseAudioWrapperInStop;
- (void)setEnableReleaseAudioWrapperInStop:(BOOL)arg0;
- (BOOL)enableUseAudioRecordInAudioWrapper;
- (void)setEnableUseAudioRecordInAudioWrapper:(BOOL)arg0;
- (BOOL)enableUseTraitObjectInVideoWrapper;
- (void)setEnableUseTraitObjectInVideoWrapper:(BOOL)arg0;
- (long long)smoothlySwitchInterval;
- (void)setSmoothlySwitchInterval:(long long)arg0;
- (long long)neqNetworkType;
- (void)setNeqNetworkType:(long long)arg0;
- (long long)rtmProbedResult;
- (void)setRtmProbedResult:(long long)arg0;
- (long long)rtmProbedRttMin;
- (void)setRtmProbedRttMin:(long long)arg0;
- (long long)rtmProbedRttMax;
- (void)setRtmProbedRttMax:(long long)arg0;
- (float)rtmProbedLossrate;
- (void)setRtmProbedLossrate:(float)arg0;
- (id)rtmProbedIp;
- (void)setRtmProbedIp:(id)arg0;
- (void)setAbrTargetSmoothlyResolution:(id)arg0;
- (long long)forceUseMetalRenderType;
- (void)setForceUseMetalRenderType:(long long)arg0;
- (BOOL)shouldIgnoreCheckMetalDevice;
- (void)setShouldIgnoreCheckMetalDevice:(BOOL)arg0;
- (BOOL)didEnableBMFSharpen;
- (void)setEnableLiveIOUseABR:(BOOL)arg0;
- (void)setEnablePcdnUseRTS:(BOOL)arg0;
- (id)liveIOLogInfo;
- (void)setLiveIOLogInfo:(id)arg0;
- (BOOL)liveIOPlay;
- (void)setLiveIOPlay:(BOOL)arg0;
- (BOOL)enableNotifyLiveIOFinishInAsync;
- (void)setEnableNotifyLiveIOFinishInAsync:(BOOL)arg0;
- (BOOL)enableLiveIOP2p;
- (void)setEnableLiveIOP2p:(BOOL)arg0;
- (void)setEnableLiveIOSupprotQuic:(BOOL)arg0;
- (id)liveIOVersion;
- (void)setLiveIOVersion:(id)arg0;
- (id)enablePcdnDownload;
- (void)setEnablePcdnDownload:(id)arg0;
- (id)enablePcdnUpload;
- (void)setEnablePcdnUpload:(id)arg0;
- (int)enablePcdnAndFlvAdapt;
- (void)setEnablePcdnAndFlvAdapt:(int)arg0;
- (id)pcdnH2pCache;
- (void)setPcdnH2pCache:(id)arg0;
- (id)pcdnWatchThreshold;
- (void)setPcdnWatchThreshold:(id)arg0;
- (long long)usingFlexType;
- (long long)startPlayBufferWaitTime;
- (void)setStartPlayBufferWaitTime:(long long)arg0;
- (BOOL)enableResetPlayerInClose;
- (void)setEnableResetPlayerInClose:(BOOL)arg0;
- (BOOL)enableUseNewSeiInLoudness;
- (void)setEnableUseNewSeiInLoudness:(BOOL)arg0;
- (BOOL)didOpenSamiCoreNewBalance;
- (void)setDidOpenSamiCoreNewBalance:(BOOL)arg0;
- (void)setForbidSDR2HDRInPreview:(BOOL)arg0;
- (int)isUsedPredictFastOpenDuration;
- (void)setIsUsedPredictFastOpenDuration:(int)arg0;
- (BOOL)abrSwitchAction;
- (void)setEnableRetryWithAbrRes:(BOOL)arg0;
- (void)setVqscoreConfig:(id)arg0;
- (void)setEnableUseBMFNewInterface:(BOOL)arg0;
- (void)setDefaultSelectd:(BOOL)arg0;
- (BOOL)isUseFastOpenDurationFromSetAPI;
- (long long)getFastOpenDuration;
- (void)setAbrResolutionList:(id)arg0;
- (void)setAbrDefaultResolution:(id)arg0;
- (void)setHTTPPorts:(id)arg0;
- (void)setRTMPPorts:(id)arg0;
- (id)getUncommonQueryWithSDKParams;
- (BOOL)isDefaultSelectd;
- (void)setFinalUseFastOpenDuration:(long long)arg0;
- (void)setSmoothlyPlayableURL:(id)arg0;
- (void)setAllowsMainBackupSwitch:(BOOL)arg0;
- (void)setSourceType:(id)arg0;
- (id)sourceType;
- (void)setAppId:(id)arg0;
- (id)init;
- (id)secretKey;
- (unsigned long long)ID;
- (void)setID:(unsigned long long)arg0;
- (void).cxx_destruct;
- (void)setSecretKey:(id)arg0;
- (void)setOptions:(id)arg0;
- (void)setPriority:(long long)arg0;
- (void)setURL:(id)arg0;
- (id)HTTPHeaders;
- (void)setHTTPHeaders:(id)arg0;
- (id)URL;
- (BOOL)isEqual:(id)arg0;
- (id)description;
- (id)params;
- (id)options;
- (void)setHidden:(BOOL)arg0;
- (id)appId;
- (BOOL)isHidden;
- (long long)priority;
- (id)formatType;
- (void)setFormatType:(id)arg0;
- (id)protocolType;
- (id)videoCodecType;
- (void)setParams:(id)arg0;
- (id)resolutionType;

@end
