//
//     Generated by private class-dump
//

@class NSDictionary, NSString;

@interface IESLiveVideoPlayerElement : LynxUI <IESLiveVideoPreviewStreamPlayerDelegate, IESLiveVideoPreviewStreamPaidDelegate> {
    BOOL _isAutoPlay;
    BOOL _needSyncVideoProgress;
    BOOL _pausedForScreenLock;
    BOOL _disableResolutionAutoDemotion;
    BOOL _mute;
    BOOL _repeat;
    double _startPosition;
    NSDictionary *_logExtra;
    NSString *_fitMode;
}

@property (nonatomic) BOOL isAutoPlay;
@property (nonatomic) double startPosition;
@property (nonatomic) BOOL needSyncVideoProgress;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (nonatomic, getter=isPausedForScreenLock) BOOL pausedForScreenLock;
@property (nonatomic) BOOL disableResolutionAutoDemotion;
@property (nonatomic, getter=isMute) BOOL mute;
@property (nonatomic, getter=isRepeat) BOOL repeat;
@property (copy, nonatomic) NSString *fitMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)__lynx_prop_config__1070;
+ (id)__lynx_prop_config__1111;
+ (id)__lynx_prop_config__1332;
+ (id)__lynx_prop_config__1403;
+ (id)__lynx_prop_config__1504;
+ (id)__lynx_prop_config__1605;
+ (id)__lynx_prop_config__1666;
+ (id)__lynx_prop_config__1747;
+ (id)__lynx_prop_config__1788;
+ (id)__lynx_prop_config__1859;
+ (id)__lynx_ui_method_config__19310;
+ (id)__lynx_ui_method_config__21011;
+ (id)__lynx_ui_method_config__21412;
+ (id)__lynx_ui_method_config__21813;
+ (id)__lynx_ui_method_config__22314;
+ (void)load;

- (id)logExtra;
- (void)setLogExtra:(id)arg0;
- (void)setMuted:(BOOL)arg0 requestReset:(BOOL)arg1;
- (id)fitMode;
- (void)setFitMode:(id)arg0;
- (void)play:(id)arg0 withResult:(id /* block */)arg1;
- (void)pause:(id)arg0 withResult:(id /* block */)arg1;
- (void)stop:(id)arg0 withResult:(id /* block */)arg1;
- (void)autoplay:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)playerPlayTime:(double)arg0 canPlayTime:(double)arg1 totalTime:(double)arg2;
- (void)logExtra:(id)arg0 requestReset:(BOOL)arg1;
- (void)poster:(id)arg0 requestReset:(BOOL)arg1;
- (void)fitMode:(id)arg0 requestReset:(BOOL)arg1;
- (void)enterRoom:(id)arg0 withResult:(id /* block */)arg1;
- (void)setNeedSyncVideoProgress:(BOOL)arg0;
- (BOOL)needSyncVideoProgress;
- (void)didPlayError:(id)arg0;
- (void)didStartStall;
- (void)enterRoomAction;
- (void)setLynxEnterRoomEnable:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)playerController:(id)arg0 currentPlayTime:(double)arg1 playableTime:(double)arg2 duration:(double)arg3;
- (void)playerController:(id)arg0 playStateDidChange:(long long)arg1;
- (void)playerController:(id)arg0 playError:(id)arg1;
- (void)playerControllerPlayFinished:(id)arg0;
- (void)onStalledStart:(id)arg0 actionType:(long long)arg1 reason:(unsigned long long)arg2;
- (void)viewStatusDidChange:(long long)arg0;
- (void)updateCountDownForSecond:(long long)arg0;
- (void)startposition:(long long)arg0 requestReset:(BOOL)arg1;
- (void)enterRoom;
- (void)setDisableResolutionAutoDemotion:(BOOL)arg0;
- (void)resetPlayerFitMode:(id)arg0;
- (BOOL)disableResolutionAutoDemotion;
- (void)didEnded;
- (void)episode:(id)arg0 requestReset:(BOOL)arg1;
- (void)setRepeat:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)disableResolutionAutoDemotion:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)mute:(id)arg0 withResult:(id /* block */)arg1;
- (BOOL)isPausedForScreenLock;
- (void)setPausedForScreenLock:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)play;
- (void)setMute:(BOOL)arg0;
- (double)startPosition;
- (void)setStartPosition:(double)arg0;
- (void)didStart;
- (id)createView;
- (void)setIsAutoPlay:(BOOL)arg0;
- (BOOL)isAutoPlay;
- (void)resetPlayer;
- (void)didStop;
- (BOOL)isMute;
- (void)didPause;
- (BOOL)isRepeat;
- (void)setRepeat:(BOOL)arg0;

@end
