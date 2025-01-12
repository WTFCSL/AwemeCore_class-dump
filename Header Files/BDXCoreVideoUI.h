//
//     Generated by private class-dump
//

@class NSString, NSDictionary, BDXVideoPlayerVideoModel, NSNumber;

@interface BDXCoreVideoUI : BDXHybridUI <BDXVideoPlayerDelegate> {
    BOOL _needReplay;
    BOOL _autoPlay;
    BOOL _mute;
    BOOL _isLoop;
    BOOL _useSinglePlayer;
    BOOL _needPreload;
    BOOL _autoLifecycle;
    BOOL _listenDeviceChange;
    double _seekTime;
    NSNumber *_startTime;
    NSNumber *_volume;
    NSNumber *_rate;
    NSString *_posterURL;
    NSString *_fitMode;
    NSString *_control;
    NSDictionary *_paramsDict;
    BDXVideoPlayerVideoModel *_videoModel;
}

@property (retain, nonatomic) NSDictionary *paramsDict;
@property (retain, nonatomic) BDXVideoPlayerVideoModel *videoModel;
@property (nonatomic) double seekTime;
@property (nonatomic) BOOL needReplay;
@property (nonatomic) BOOL autoPlay;
@property (nonatomic) BOOL mute;
@property (nonatomic) BOOL isLoop;
@property (nonatomic) BOOL useSinglePlayer;
@property (nonatomic) BOOL needPreload;
@property (nonatomic) BOOL autoLifecycle;
@property (nonatomic) BOOL listenDeviceChange;
@property (retain, nonatomic) NSNumber *startTime;
@property (retain, nonatomic) NSNumber *volume;
@property (retain, nonatomic) NSNumber *rate;
@property (copy, nonatomic) NSString *posterURL;
@property (copy, nonatomic) NSString *fitMode;
@property (copy, nonatomic) NSString *control;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tagName;

- (id)fitMode;
- (void)setFitMode:(id)arg0;
- (id)videoModel;
- (void)setVideoModel:(id)arg0;
- (BOOL)needPreload;
- (void)setNeedPreload:(BOOL)arg0;
- (id)paramsDict;
- (void)setIsLoop:(BOOL)arg0;
- (id)posterURL;
- (void)setPosterURL:(id)arg0;
- (void)didBufferChange;
- (void)didBufferChangeWithInfo:(id)arg0;
- (void)didDeviceChange:(id)arg0;
- (BOOL)autoLifecycle;
- (void)setAutoLifecycle:(BOOL)arg0;
- (void)setParamsDict:(id)arg0;
- (void)__setupVideoModel:(id)arg0;
- (id)__resolveSrcAsJSON:(id)arg0;
- (id)__resolveSrcAsSchema:(id)arg0;
- (void)__controlPlayerWithCommand:(id)arg0;
- (void)didFullscreenChange;
- (void)didSeek;
- (BOOL)needReplay;
- (void)setNeedReplay:(BOOL)arg0;
- (BOOL)useSinglePlayer;
- (void)setUseSinglePlayer:(BOOL)arg0;
- (BOOL)listenDeviceChange;
- (void)setListenDeviceChange:(BOOL)arg0;
- (void)bdx_src:(id)arg0 requestReset:(BOOL)arg1;
- (void)bdx_autoplay:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)bdx_poster:(id)arg0 requestReset:(BOOL)arg1;
- (void)bdx_preload:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)bdx_inittime:(id)arg0 requestReset:(BOOL)arg1;
- (void)bdx_repeat:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)bdx_muted:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)bdx_volume:(id)arg0 requestReset:(BOOL)arg1;
- (void)bdx_rate:(id)arg0 requestReset:(BOOL)arg1;
- (void)bdx_autolifecycle:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)bdx_objectfit:(id)arg0 requestReset:(BOOL)arg1;
- (void)bdx_singleplayer:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)bdx_devicechangeaware:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)bdx___control:(id)arg0 requestReset:(BOOL)arg1;
- (void)didTimeUpdate;
- (BOOL)mute;
- (void)setStartTime:(id)arg0;
- (void).cxx_destruct;
- (void)setSeekTime:(double)arg0;
- (id)volume;
- (BOOL)isLoop;
- (void)setRate:(id)arg0;
- (void)didEnd;
- (id)startTime;
- (id)rate;
- (void)setVolume:(id)arg0;
- (double)seekTime;
- (void)setMute:(BOOL)arg0;
- (id)control;
- (void)setControl:(id)arg0;
- (void)didError;
- (BOOL)autoPlay;
- (void)setAutoPlay:(BOOL)arg0;
- (id)createView;
- (void)didPause;
- (void)didPlay;

@end
