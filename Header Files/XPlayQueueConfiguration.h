//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSArray;
@protocol XPlayHoverBallConfig, XPlayCustomResolution, XPlayAgreementConfig, XPlayResolution, XPlayResolutionConfig, XPlayDataConfig;

@interface XPlayQueueConfiguration : XPlayConfiguration <XPlayConfigurationProtocol> {
    BOOL _isVipQueue;
    int _serviceId;
    int _methodId;
    int _surpass;
    unsigned long long _remainingPlayTime;
    NSString *_queue;
    NSString *_queueType;
    long long _ranking;
    long long _waitTime;
    long long _rankTotal;
    long long _expireTime;
    long long _state;
    long long _scene;
}

@property (nonatomic) unsigned long long remainingPlayTime;
@property (copy, nonatomic) NSString *queue;
@property (copy, nonatomic) NSString *queueType;
@property (nonatomic) int serviceId;
@property (nonatomic) int methodId;
@property (nonatomic) long long ranking;
@property (nonatomic) long long waitTime;
@property (nonatomic) long long rankTotal;
@property (nonatomic) long long expireTime;
@property (nonatomic) BOOL isVipQueue;
@property (nonatomic) int surpass;
@property (nonatomic) long long state;
@property (nonatomic) long long scene;
@property (copy, nonatomic) NSDictionary *openInfo;
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
@property (readonly, copy, nonatomic) NSString *core;
@property (readonly, nonatomic) unsigned long long gameOrientation;
@property (readonly, nonatomic) unsigned short gameOrientationAngle;
@property (readonly, nonatomic) unsigned long long playTime;
@property (readonly, nonatomic) unsigned long long requestId;
@property (readonly, nonatomic) BOOL useNativeMotion;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly, nonatomic) id<XPlayResolution> currentResolution;
@property (readonly, nonatomic) id<XPlayCustomResolution> currentCustomResolution;
@property (readonly, copy, nonatomic) NSArray *supportResolutions;
@property (readonly, nonatomic) long long preload;
@property (readonly, nonatomic) long long podType;
@property (readonly, nonatomic) long long platformType;
@property (readonly, nonatomic) id<XPlayResolutionConfig> resolutionConfig;
@property (readonly, nonatomic) id<XPlayDataConfig> dataConfig;
@property (readonly, nonatomic) id<XPlayAgreementConfig> agreementConfig;
@property (readonly, copy, nonatomic) NSString *debugInfo;
@property (readonly, copy, nonatomic) NSString *itemId;
@property (readonly, copy, nonatomic) NSString *uniGameId;
@property (readonly, nonatomic) BOOL isArchivedGame;
@property (readonly, nonatomic) BOOL needAuthorized;
@property (readonly, nonatomic) BOOL needRealNameAuth;
@property (readonly, nonatomic) BOOL hideHoverBall;
@property (readonly, nonatomic) id<XPlayHoverBallConfig> hoverBallConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setWaitTime:(long long)arg0;
- (long long)waitTime;
- (BOOL)configurationSetWithDictionary:(id)arg0;
- (BOOL)examineConfiguration;
- (unsigned long long)remainingPlayTime;
- (void)setMethodId:(int)arg0;
- (void)setRemainingPlayTime:(unsigned long long)arg0;
- (id)xplayServiceRequestParams;
- (int)methodId;
- (void)setSurpass:(int)arg0;
- (void)setIsVipQueue:(BOOL)arg0;
- (void)setRankTotal:(long long)arg0;
- (long long)rankTotal;
- (BOOL)isVipQueue;
- (int)surpass;
- (void)setRanking:(long long)arg0;
- (id)init;
- (void)setScene:(long long)arg0;
- (void).cxx_destruct;
- (long long)state;
- (void)setState:(long long)arg0;
- (id)debugInfo;
- (void)setServiceId:(int)arg0;
- (id)queue;
- (void)setQueue:(id)arg0;
- (int)serviceId;
- (long long)scene;
- (long long)expireTime;
- (void)setExpireTime:(long long)arg0;
- (id)queueType;
- (void)setQueueType:(id)arg0;
- (long long)ranking;

@end
