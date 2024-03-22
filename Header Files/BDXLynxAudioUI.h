//
//     Generated by private class-dump
//

@class AVAudioPlayer, NSString, BDXAudioService, NSObject, AVPlayer;
@protocol OS_dispatch_queue;

@interface BDXLynxAudioUI : LynxUI <BDXAudioServiceDelegate, BDXAudioViewLifeCycleDelegate, AVAudioPlayerDelegate> {
    BOOL _autoPlay;
    BOOL _avPlayerDidInvokePlay;
    BOOL _avPlayerInPlaying;
    BOOL _srcFinished;
    BOOL _srcFinishedNeedPlay;
    BOOL _stopAutoPlay;
    BOOL _enableEvent;
    BDXAudioService *_audioService;
    unsigned long long _loopMode;
    NSString *_lastAudioId;
    unsigned long long _playerType;
    unsigned long long _playerCategory;
    AVPlayer *_avPlayer;
    AVAudioPlayer *_avAudioPlayer;
    long long _avPlayerStatus;
    double _playableTime;
    NSObject<OS_dispatch_queue> *_playQueue;
    NSString *_src;
}

@property (retain, nonatomic) BDXAudioService *audioService;
@property (nonatomic) unsigned long long loopMode;
@property (copy, nonatomic) NSString *lastAudioId;
@property (nonatomic) unsigned long long playerType;
@property (nonatomic) unsigned long long playerCategory;
@property (retain, nonatomic) AVPlayer *avPlayer;
@property (retain, nonatomic) AVAudioPlayer *avAudioPlayer;
@property (nonatomic) long long avPlayerStatus;
@property (nonatomic) BOOL avPlayerDidInvokePlay;
@property (nonatomic) BOOL avPlayerInPlaying;
@property (nonatomic) BOOL srcFinished;
@property (nonatomic) BOOL srcFinishedNeedPlay;
@property (nonatomic) double playableTime;
@property (nonatomic) BOOL stopAutoPlay;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *playQueue;
@property (copy, nonatomic) NSString *src;
@property (nonatomic) BOOL enableEvent;
@property (nonatomic) BOOL autoPlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__1201;
+ (id)__lynx_prop_config__1302;
+ (id)__lynx_prop_config__1583;
+ (id)__lynx_prop_config__1874;
+ (id)__lynx_prop_config__1995;
+ (id)__lynx_prop_config__2156;
+ (id)__lynx_prop_config__2447;
+ (id)__lynx_ui_method_config__2628;
+ (id)__lynx_ui_method_config__3179;
+ (id)__lynx_ui_method_config__33710;
+ (id)__lynx_ui_method_config__35811;
+ (id)__lynx_ui_method_config__36812;
+ (id)__lynx_ui_method_config__37713;
+ (id)__lynx_ui_method_config__38714;
+ (id)__lynx_ui_method_config__39615;
+ (id)__lynx_ui_method_config__40516;
+ (id)__lynx_ui_method_config__41417;

- (void)play:(id)arg0 withResult:(id /* block */)arg1;
- (void)pause:(id)arg0 withResult:(id /* block */)arg1;
- (void)stop:(id)arg0 withResult:(id /* block */)arg1;
- (void)autoplay:(BOOL)arg0 requestReset:(BOOL)arg1;
- (id)reportCommonParams;
- (void)setPlayerType:(unsigned long long)arg0;
- (void)setLoopMode:(unsigned long long)arg0;
- (unsigned long long)loopMode;
- (void)seek:(id)arg0 withResult:(id /* block */)arg1;
- (void)didSeek:(double)arg0;
- (void)src:(id)arg0 requestReset:(BOOL)arg1;
- (void)loop:(id)arg0 requestReset:(BOOL)arg1;
- (void)audioService:(id)arg0 didFinishedWithError:(id)arg1;
- (void)audioService:(id)arg0 playStatusChanged:(long long)arg1;
- (void)audioServiceReadyToPlay:(id)arg0;
- (void)audioServiceDidPlay:(id)arg0;
- (void)audioServiceDidPause:(id)arg0 pauseType:(long long)arg1;
- (void)audioServiceDidStop:(id)arg0;
- (void)audioServiceDidSeek:(id)arg0;
- (void)audioServiceInPlaying:(id)arg0;
- (void)audioServiceAudioChanged:(id)arg0;
- (void)audioServicePeriodicTimeObserverForInterval:(id)arg0;
- (double)playableTime;
- (id)audioService;
- (void)setAudioService:(id)arg0;
- (void)setPlayQueue:(id)arg0;
- (id)playQueue;
- (BOOL)stopAutoPlay;
- (void)reportErrorCode:(long long)arg0 message:(id)arg1;
- (id)_resolveSrcAsJSON:(id)arg0;
- (void)playerType:(id)arg0 requestReset:(BOOL)arg1;
- (BOOL)enableEvent;
- (void)setEnableEvent:(BOOL)arg0;
- (void)audioViewWillAppear:(id)arg0;
- (void)audioViewDidDisappear:(id)arg0;
- (void)didTimeUpdate;
- (void)setAvPlayerInPlaying:(BOOL)arg0;
- (id)avAudioPlayer;
- (void)setAvAudioPlayer:(id)arg0;
- (void)reportALogMessage:(id)arg0 detail:(id)arg1;
- (void)_handleSrc:(id)arg0;
- (void)_initAudioServiceIfNeeded;
- (id)_resolveListAsJSON:(id)arg0;
- (void)listDidChanged;
- (void)setSrcFinishedNeedPlay:(BOOL)arg0;
- (void)_srcFinished;
- (unsigned long long)_realPlayType;
- (BOOL)srcFinished;
- (void)_cleanPlayer;
- (void)setPlayerCategory:(unsigned long long)arg0;
- (void)setStopAutoPlay:(BOOL)arg0;
- (BOOL)avPlayerInPlaying;
- (void)setAvPlayerDidInvokePlay:(BOOL)arg0;
- (id)statusStringWithStatus:(long long)arg0;
- (id)lastAudioId;
- (void)setLastAudioId:(id)arg0;
- (void)sourceDidChanged;
- (void)didStatusChanged;
- (void)setPlayableTime:(double)arg0;
- (void)didCacheTimeUpdate;
- (void)setSrcFinished:(BOOL)arg0;
- (void)_createPlayer:(unsigned long long)arg0 model:(id)arg1 baseUrl:(id)arg2 context:(id)arg3;
- (void)avPlayerFinished:(id)arg0;
- (BOOL)srcFinishedNeedPlay;
- (BOOL)avPlayerDidInvokePlay;
- (unsigned long long)playerCategory;
- (void)didErrorReport:(id)arg0;
- (void)list:(id)arg0 requestReset:(BOOL)arg1;
- (void)nativeplugins:(id)arg0 requestReset:(BOOL)arg1;
- (void)playmode:(id)arg0 requestReset:(BOOL)arg1;
- (void)duration:(id)arg0 withResult:(id /* block */)arg1;
- (void)status:(id)arg0 withResult:(id /* block */)arg1;
- (void)currentSrcID:(id)arg0 withResult:(id /* block */)arg1;
- (void)playBitrate:(id)arg0 withResult:(id /* block */)arg1;
- (void)currentTime:(id)arg0 withResult:(id /* block */)arg1;
- (void)cacheTime:(id)arg0 withResult:(id /* block */)arg1;
- (long long)avPlayerStatus;
- (void)setAvPlayerStatus:(long long)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)didEnd;
- (void)dealloc;
- (void)play;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;
- (id)src;
- (void)setSrc:(id)arg0;
- (void)audioPlayerDidFinishPlaying:(id)arg0 successfully:(BOOL)arg1;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg0 error:(id)arg1;
- (id)avPlayer;
- (void)setAvPlayer:(id)arg0;
- (unsigned long long)playerType;
- (void)didError;
- (BOOL)autoPlay;
- (void)setAutoPlay:(BOOL)arg0;
- (id)createView;
- (void)didPause;
- (void)didPlay;

@end