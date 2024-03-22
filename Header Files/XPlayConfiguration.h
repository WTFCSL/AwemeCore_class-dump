//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDictionary, NSDateFormatter;
@protocol XPlayHoverBallConfig, XPlayCustomResolution, XPlayAgreementConfig, XPlayResolution, XPlayResolutionConfig, XPlayDataConfig;

@interface XPlayConfiguration : NSObject <BDModelCustom, XPlayConfigurationProtocol> {
    BOOL useDefaultShouldAutorotate;
    BOOL shouldAutorotate;
    BOOL useGameOrientation;
    BOOL useNativeKeyboardIfSupported;
    BOOL useNativeShockIfSupported;
    BOOL useNativeMotion;
    BOOL pcVirtualHandle;
    BOOL needAuthorized;
    BOOL needRealNameAuth;
    BOOL isArchivedGame;
    BOOL enableRTCMulti;
    BOOL enablePixelBuffer;
    BOOL enableAudioFrame;
    BOOL muteAudioPlayback;
    BOOL _isMute;
    BOOL _isSandbox;
    BOOL _hideHoverBall;
    NSString *gameId;
    NSString *channel;
    NSString *gameName;
    unsigned long long displayWidth;
    unsigned long long displayHeight;
    long long originX;
    long long originY;
    NSString *expectCore;
    NSString *xToken;
    NSDictionary *extra;
    NSDictionary *appExtra;
    long long supportLiveType;
    NSDictionary *openInfo;
    NSString *uniGameId;
    long long trialTimeUpStatus;
    unsigned long long pcDisplayWidthRatio;
    unsigned long long pcDisplayHeightRatio;
    NSDictionary *innerExtra;
    NSString *_subChannel;
    NSString *_openClientKey;
    NSDateFormatter *_dateFormatter;
    NSString *_logID;
    NSString *_cid;
    NSString *_accessKey;
    NSString *_lastCore;
    NSString *_core;
    unsigned long long _gameOrientation;
    unsigned long long _playTime;
    unsigned long long _remainingPlayTime;
    unsigned long long _requestId;
    id<XPlayResolution> _currentResolution;
    id<XPlayCustomResolution> _currentCustomResolution;
    NSArray *_supportResolutions;
    long long _preload;
    long long _podType;
    long long _platformType;
    id<XPlayResolutionConfig> _resolutionConfig;
    id<XPlayDataConfig> _dataConfig;
    id<XPlayAgreementConfig> _agreementConfig;
    NSString *_itemId;
    id<XPlayHoverBallConfig> _hoverBallConfig;
    double _initTS;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
}

@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *lastCore;
@property (copy, nonatomic) NSString *core;
@property (nonatomic) unsigned long long gameOrientation;
@property (nonatomic) unsigned long long playTime;
@property (nonatomic) unsigned long long remainingPlayTime;
@property (nonatomic) unsigned long long requestId;
@property (nonatomic) BOOL useNativeMotion;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (retain, nonatomic) id<XPlayResolution> currentResolution;
@property (retain, nonatomic) id<XPlayCustomResolution> currentCustomResolution;
@property (copy, nonatomic) NSArray *supportResolutions;
@property (nonatomic) long long preload;
@property (nonatomic) long long podType;
@property (nonatomic) long long platformType;
@property (retain, nonatomic) id<XPlayResolutionConfig> resolutionConfig;
@property (retain, nonatomic) id<XPlayDataConfig> dataConfig;
@property (retain, nonatomic) id<XPlayAgreementConfig> agreementConfig;
@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSString *uniGameId;
@property (copy, nonatomic) NSDictionary *openInfo;
@property (nonatomic) BOOL isArchivedGame;
@property (nonatomic) BOOL needAuthorized;
@property (nonatomic) BOOL needRealNameAuth;
@property (nonatomic) BOOL hideHoverBall;
@property (retain, nonatomic) id<XPlayHoverBallConfig> hoverBallConfig;
@property (nonatomic) double initTS;
@property BOOL isMute;
@property (copy, nonatomic) NSString *subChannel;
@property (nonatomic) BOOL isSandbox;
@property (copy, nonatomic) NSString *openClientKey;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (copy, nonatomic) NSString *logID;
@property (copy, nonatomic) NSString *cid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *gameId;
@property (copy, nonatomic) NSString *xToken;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *gameName;
@property (nonatomic) unsigned long long displayWidth;
@property (nonatomic) unsigned long long displayHeight;
@property (nonatomic) long long originX;
@property (nonatomic) long long originY;
@property (nonatomic) unsigned long long pcDisplayWidthRatio;
@property (nonatomic) unsigned long long pcDisplayHeightRatio;
@property (copy, nonatomic) NSString *expectCore;
@property (nonatomic) BOOL pcVirtualHandle;
@property (nonatomic) BOOL enableRTCMulti;
@property (nonatomic) BOOL muteAudioPlayback;
@property (nonatomic) BOOL enablePixelBuffer;
@property (nonatomic) BOOL enableAudioFrame;
@property (nonatomic) BOOL useDefaultShouldAutorotate;
@property (nonatomic) BOOL shouldAutorotate;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSDictionary *appExtra;
@property (copy, nonatomic) NSDictionary *innerExtra;
@property (nonatomic) BOOL useNativeKeyboardIfSupported;
@property (nonatomic) BOOL useGameOrientation;
@property (nonatomic) BOOL useNativeShockIfSupported;
@property (nonatomic) long long supportLiveType;
@property (nonatomic) long long trialTimeUpStatus;
@property (readonly, nonatomic) unsigned short gameOrientationAngle;
@property (readonly, copy, nonatomic) NSString *debugInfo;

+ (id)modelPropertyBlacklist;

- (void)setExtra:(id)arg0;
- (id)gameName;
- (void)setGameName:(id)arg0;
- (id)dataConfig;
- (void)setIsMute:(BOOL)arg0;
- (id)commonNetParams;
- (void)setShouldAutorotate:(BOOL)arg0;
- (void)setPlayTime:(unsigned long long)arg0;
- (id)supportResolutions;
- (id)configResolution:(id)arg0;
- (void)setDataConfig:(id)arg0;
- (BOOL)configurationSetWithDictionary:(id)arg0;
- (BOOL)examineConfiguration;
- (long long)supportLiveType;
- (BOOL)enableRTCMulti;
- (BOOL)enablePixelBuffer;
- (BOOL)enableAudioFrame;
- (BOOL)muteAudioPlayback;
- (id)gameId;
- (id)xToken;
- (void)setGameId:(id)arg0;
- (void)setXToken:(id)arg0;
- (unsigned long long)pcDisplayWidthRatio;
- (void)setPcDisplayWidthRatio:(unsigned long long)arg0;
- (unsigned long long)pcDisplayHeightRatio;
- (void)setPcDisplayHeightRatio:(unsigned long long)arg0;
- (id)expectCore;
- (void)setExpectCore:(id)arg0;
- (BOOL)pcVirtualHandle;
- (void)setPcVirtualHandle:(BOOL)arg0;
- (void)setEnableRTCMulti:(BOOL)arg0;
- (void)setMuteAudioPlayback:(BOOL)arg0;
- (void)setEnablePixelBuffer:(BOOL)arg0;
- (void)setEnableAudioFrame:(BOOL)arg0;
- (BOOL)useDefaultShouldAutorotate;
- (void)setUseDefaultShouldAutorotate:(BOOL)arg0;
- (id)appExtra;
- (void)setAppExtra:(id)arg0;
- (id)innerExtra;
- (void)setInnerExtra:(id)arg0;
- (BOOL)useNativeKeyboardIfSupported;
- (void)setUseNativeKeyboardIfSupported:(BOOL)arg0;
- (BOOL)useGameOrientation;
- (void)setUseGameOrientation:(BOOL)arg0;
- (BOOL)useNativeShockIfSupported;
- (void)setUseNativeShockIfSupported:(BOOL)arg0;
- (void)setSupportLiveType:(long long)arg0;
- (long long)trialTimeUpStatus;
- (void)setTrialTimeUpStatus:(long long)arg0;
- (unsigned long long)gameOrientation;
- (unsigned short)gameOrientationAngle;
- (unsigned long long)remainingPlayTime;
- (BOOL)useNativeMotion;
- (id)currentCustomResolution;
- (long long)podType;
- (id)resolutionConfig;
- (id)agreementConfig;
- (id)openInfo;
- (id)uniGameId;
- (BOOL)isArchivedGame;
- (BOOL)needAuthorized;
- (BOOL)needRealNameAuth;
- (BOOL)hideHoverBall;
- (id)hoverBallConfig;
- (void)setCurrentCustomResolution:(id)arg0;
- (id)subChannel;
- (void)setPodType:(long long)arg0;
- (void)setUseNativeMotion:(BOOL)arg0;
- (void)setIsSandbox:(BOOL)arg0;
- (void)setUniGameId:(id)arg0;
- (void)setNeedAuthorized:(BOOL)arg0;
- (void)setNeedRealNameAuth:(BOOL)arg0;
- (void)setGameOrientation:(unsigned long long)arg0;
- (void)setRemainingPlayTime:(unsigned long long)arg0;
- (void)setResolutionConfig:(id)arg0;
- (void)setAgreementConfig:(id)arg0;
- (void)setOpenClientKey:(id)arg0;
- (void)setIsArchivedGame:(BOOL)arg0;
- (id)resolutionWithArray:(id)arg0;
- (void)setSupportResolutions:(id)arg0;
- (void)setOpenInfo:(id)arg0;
- (void)setSubChannel:(id)arg0;
- (void)setHideHoverBall:(BOOL)arg0;
- (void)setHoverBallConfig:(id)arg0;
- (id)accessKeyGenWithUnixTS:(double)arg0;
- (id)enumerateExtra:(id)arg0;
- (id)xplayServiceRequestParams;
- (id)openClientKey;
- (id)lastCore;
- (void)setLastCore:(id)arg0;
- (double)initTS;
- (void)setInitTS:(double)arg0;
- (id)socketCommonParam;
- (id)emptyInst;
- (BOOL)isSandbox;
- (BOOL)shouldAutorotate;
- (id)channel;
- (id)init;
- (void).cxx_destruct;
- (void)setDateFormatter:(id)arg0;
- (void)setChannel:(id)arg0;
- (long long)preload;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (unsigned long long)playTime;
- (id)dateFormatter;
- (id)extra;
- (id)cid;
- (id)initWithCoder:(id)arg0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)encodeWithCoder:(id)arg0;
- (unsigned long long)requestId;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (long long)platformType;
- (void)setPlatformType:(long long)arg0;
- (id)accessKey;
- (void)setAccessKey:(id)arg0;
- (id)logID;
- (void)setRequestId:(unsigned long long)arg0;
- (id)itemId;
- (id)core;
- (void)setItemId:(id)arg0;
- (unsigned long long)displayHeight;
- (void)setOriginX:(long long)arg0;
- (void)setOriginY:(long long)arg0;
- (long long)originX;
- (long long)originY;
- (void)setCore:(id)arg0;
- (void)setLogID:(id)arg0;
- (BOOL)isMute;
- (void)setPreload:(long long)arg0;
- (id)currentResolution;
- (void)setCurrentResolution:(id)arg0;
- (unsigned long long)displayWidth;
- (void)setDisplayWidth:(unsigned long long)arg0;
- (void)setDisplayHeight:(unsigned long long)arg0;
- (void)setCid:(id)arg0;

@end