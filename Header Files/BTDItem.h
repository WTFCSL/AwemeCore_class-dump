//
//     Generated by private class-dump
//

@class XPlayTrackHelper, NSString, XPlayTimeRecorder, XPlayGameTopView, XPlayQualityStatsModel, XPlayBlockRateProcesser, BTDCloudPlayer, NSMutableDictionary, BTDPreloadTask, UIViewController, XPlayConfiguration, TTAirPlayNetStatusDetector;
@protocol XPlayPermissionDelegate, XPlayScreenRecordProtocol, XPlayUserInfoProtocol, XPlayKeyboardProtocol, XPlayItemDelegate, XPlayItemBusinessDelegate;

@interface BTDItem : XPlayItem <BTDCloudPlayerDelegate, BTDCloudPlayerVideoSinkDelegate, BTDCloudPlayerAudioFrameDelegate, XPlayItemProtocol> {
    BOOL _needResumeWhenBecomeActive;
    id<XPlayItemDelegate> delegate;
    id<XPlayKeyboardProtocol> keyboard;
    BTDCloudPlayer *_player;
    BTDPreloadTask *_preloadTask;
    TTAirPlayNetStatusDetector *_netStatusDetector;
}

@property (retain, nonatomic) BTDPreloadTask *preloadTask;
@property (nonatomic) BOOL needResumeWhenBecomeActive;
@property (retain, nonatomic) TTAirPlayNetStatusDetector *netStatusDetector;
@property (retain, nonatomic) BTDCloudPlayer *player;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<XPlayItemDelegate> delegate;
@property (weak, nonatomic) id<XPlayItemBusinessDelegate> businessDelegate;
@property (weak, nonatomic) id<XPlayPermissionDelegate> permissionDelegate;
@property (readonly, copy, nonatomic) NSString *core;
@property (readonly, copy, nonatomic) NSString *itemId;
@property (retain, nonatomic) XPlayConfiguration *configuration;
@property (retain, nonatomic) id<XPlayUserInfoProtocol> userSession;
@property (retain, nonatomic) UIViewController *controller;
@property (retain, nonatomic) XPlayGameTopView *view;
@property (retain, nonatomic) XPlayTrackHelper *trackHelper;
@property (retain, nonatomic) XPlayTimeRecorder *recorder;
@property (nonatomic) unsigned long long status;
@property (copy, nonatomic) XPlayQualityStatsModel *qualityStats;
@property (retain, nonatomic) XPlayBlockRateProcesser *blockProcesser;
@property (retain, nonatomic) id<XPlayScreenRecordProtocol> screenRecorder;
@property (retain, nonatomic) id<XPlayKeyboardProtocol> keyboard;
@property (retain, nonatomic) NSMutableDictionary *pluggins;
@property (readonly, nonatomic) BOOL useCustomKbps;

+ (id)itemWithConfiguration:(id)arg0;

- (void)setAudioMute:(BOOL)arg0;
- (void)switchResolution:(id)arg0;
- (long long)startNetworkDetection;
- (void)setNetStatusDetector:(id)arg0;
- (void)handleStreamingParameterSetResult:(id)arg0;
- (void)handleResolutionResult:(id)arg0;
- (void)_handleStreamingParameterSetResult:(id)arg0;
- (void)_handleResolutionResult:(id)arg0;
- (id)preloadTask;
- (void)setPreloadTask:(id)arg0;
- (void)btd_playerStatusDidUpdated:(unsigned long long)arg0 info:(id)arg1;
- (void)switchResolution:(id)arg0 callback:(id /* block */)arg1;
- (void)switchCustomResolution:(id)arg0 callback:(id /* block */)arg1;
- (void)stopGame;
- (void)stopWithoutDismiss;
- (void)stopNetworkDetection;
- (void)setNeedResumeWhenBecomeActive:(BOOL)arg0;
- (void)pauseAtBeginIfNeeded;
- (void)btd_videoQualityChange:(long long)arg0 result:(BOOL)arg1;
- (BOOL)needResumeWhenBecomeActive;
- (void)btd_onNetworkDetectionWithQuality:(unsigned long long)arg0 rtt:(int)arg1 lostRate:(double)arg2 bitrate:(int)arg3 jitter:(int)arg4;
- (void)btd_onNetworkDetectionStopped:(unsigned long long)arg0;
- (void)btd_onRemoteVideoStateChangeWith:(long long)arg0 withVideoStateReason:(long long)arg1;
- (void)btd_systemFailedWith:(unsigned long long)arg0 info:(id)arg1;
- (void)btd_requestRecordPermissionWithCompletion:(id /* block */)arg0;
- (void)btd_videoRotationChanged:(long long)arg0;
- (void)btd_renderPixelBuffer:(struct __CVBuffer { } *)arg0 rotation:(long long)arg1 contentType:(long long)arg2 extendedData:(id)arg3 pts:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg4;
- (void)btd_pushAudioFrame:(id)arg0;
- (id)netStatusDetector;
- (void)bindView;
- (void)sendMessage:(id)arg0 callback:(id /* block */)arg1;
- (id)keyboard;
- (void)_applicationWillResignActive:(id)arg0;
- (void)_applicationWillTerminate;
- (void)resume;
- (void).cxx_destruct;
- (void)_applicationDidBecomeActive:(id)arg0;
- (void)preload;
- (void)stop;
- (id)initWithConfiguration:(id)arg0;
- (void)stopAudioCapture;
- (void)setPlayer:(id)arg0;
- (id)delegate;
- (void)startAudioCapture;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)play;
- (void)pause;
- (id)player;
- (void)setKeyboard:(id)arg0;
- (id)screenRecorder;
- (void)captureLastFrame;

@end
