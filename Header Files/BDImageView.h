//
//     Generated by private class-dump
//

@class NSMutableDictionary, BDAnimatedImagePlayer, NSString, BDAnimatedPreferredFrameRateRange, BDImage;

@interface BDImageView : UIImageView <BDAnimatedImagePlayerDelegate> {
    BOOL _waterLevelDurationSet;
    BOOL _enableWaterLevel;
    BOOL _settingImageByApp;
    BOOL _infinityLoop;
    BOOL _animateEnable;
    BOOL _frameCacheAutomatically;
    BOOL _cacheAllFrame;
    BOOL _autoPlayAnimatedImage;
    BOOL _hightAnimationControl;
    BOOL _moveToWindowAnimationControl;
    BOOL _bd_isOpenDownsample_delay;
    NSString *_animateRunLoopMode;
    double _waterLevelDuration;
    NSMutableDictionary *_bdSetImageDelay;
    unsigned long long _customLoop;
    id /* block */ _loopCompletionBlock;
    id /* block */ _customLoopCompletionBlock;
    id /* block */ _firstFramePlayBlock;
    id /* block */ _delayFramePlayBlock;
    BDImage *_animateImage;
    BDAnimatedPreferredFrameRateRange *_animatedPreferredFrameRateRange;
    unsigned long long _animationType;
    unsigned long long _animationDelayType;
    unsigned long long _animationDelayState;
    BDAnimatedImagePlayer *_player;
}

@property (retain, nonatomic) BDAnimatedImagePlayer *player;
@property (retain, nonatomic) BDImage *animateImage;
@property (readonly, nonatomic, getter=isSettingImageByApp) BOOL settingImageByApp;
@property (retain, nonatomic) NSMutableDictionary *bdSetImageDelay;
@property (nonatomic) BOOL infinityLoop;
@property (nonatomic) unsigned long long customLoop;
@property (nonatomic, getter=isAnimateEnable) BOOL animateEnable;
@property (nonatomic) BOOL frameCacheAutomatically;
@property (nonatomic) BOOL cacheAllFrame;
@property (nonatomic) unsigned long long currentAnimatedImageIndex;
@property (nonatomic) BOOL autoPlayAnimatedImage;
@property (nonatomic) BOOL hightAnimationControl;
@property (nonatomic) BOOL moveToWindowAnimationControl;
@property (copy, nonatomic) id /* block */ loopCompletionBlock;
@property (copy, nonatomic) id /* block */ customLoopCompletionBlock;
@property (copy, nonatomic) id /* block */ firstFramePlayBlock;
@property (copy, nonatomic) id /* block */ delayFramePlayBlock;
@property (retain, nonatomic) NSString *animateRunLoopMode;
@property (retain, nonatomic) BDAnimatedPreferredFrameRateRange *animatedPreferredFrameRateRange;
@property (nonatomic) unsigned long long animationType;
@property (nonatomic) BOOL enableWaterLevel;
@property (nonatomic) double waterLevelDuration;
@property (nonatomic) BOOL bd_isOpenDownsample_delay;
@property (nonatomic) unsigned long long animationDelayType;
@property (nonatomic) unsigned long long animationDelayState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterStaticLoad_animation_detector;
+ (id)awe_lvideoDefaultPlaceholderImage;
+ (id)layerClass;

- (id)bd_setImageWithURL:(id)arg0 alternativeURLs:(id)arg1 placeholder:(id)arg2 options:(long long)arg3 config:(id)arg4 blocks:(id)arg5;
- (void)setInfinityLoop:(BOOL)arg0;
- (void)setAutoPlayAnimatedImage:(BOOL)arg0;
- (void)setAnimateEnable:(BOOL)arg0;
- (void)setCustomLoop:(unsigned long long)arg0;
- (void)setCustomLoopCompletionBlock:(id /* block */)arg0;
- (void)setFirstFramePlayBlock:(id /* block */)arg0;
- (id)animateRunLoopMode;
- (void)imagePlayerStartPlay:(id)arg0;
- (id)animatedPreferredFrameRateRange;
- (void)imagePlayerDidReachEnd:(id)arg0;
- (void)imagePlayerDelayPlay:(id)arg0 index:(unsigned long long)arg1 animationDelayType:(unsigned long long)arg2 animationDelayState:(unsigned long long)arg3;
- (void)imagePlayerDidReachAllLoopEnd:(id)arg0;
- (void)imagePlayer:(id)arg0 didUpdateImage:(id)arg1 index:(unsigned long long)arg2;
- (void)setWaterLevelDuration:(double)arg0;
- (void)clearImageBuffer;
- (double)waterLevelDuration;
- (BOOL)frameCacheAutomatically;
- (void)setFrameCacheAutomatically:(BOOL)arg0;
- (BOOL)cacheAllFrame;
- (void)setCacheAllFrame:(BOOL)arg0;
- (void)setAnimateRunLoopMode:(id)arg0;
- (void)setAnimatedPreferredFrameRateRange:(id)arg0;
- (BOOL)enableWaterLevel;
- (void)setEnableWaterLevel:(BOOL)arg0;
- (void)setAnimateImage:(id)arg0;
- (id)animateImage;
- (void)_tryPlayAnimateImage;
- (void)setImage:(id)arg0 new:(BOOL)arg1;
- (BOOL)bd_isOpenDownsample_delay;
- (BOOL)moveToWindowAnimationControl;
- (BOOL)hightAnimationControl;
- (id /* block */)firstFramePlayBlock;
- (id /* block */)loopCompletionBlock;
- (id /* block */)delayFramePlayBlock;
- (id /* block */)customLoopCompletionBlock;
- (unsigned long long)currentAnimatedImageIndex;
- (void)setCurrentAnimatedImageIndex:(unsigned long long)arg0;
- (id)bdSetImageDelay;
- (void)setBdSetImageDelay:(id)arg0;
- (BOOL)infinityLoop;
- (unsigned long long)customLoop;
- (BOOL)isAnimateEnable;
- (BOOL)autoPlayAnimatedImage;
- (void)setHightAnimationControl:(BOOL)arg0;
- (void)setMoveToWindowAnimationControl:(BOOL)arg0;
- (void)setLoopCompletionBlock:(id /* block */)arg0;
- (void)setDelayFramePlayBlock:(id /* block */)arg0;
- (void)setBd_isOpenDownsample_delay:(BOOL)arg0;
- (unsigned long long)animationDelayType;
- (void)setAnimationDelayType:(unsigned long long)arg0;
- (unsigned long long)animationDelayState;
- (void)setAnimationDelayState:(unsigned long long)arg0;
- (BOOL)isSettingImageByApp;
- (id)bd_baseImage;
- (void)longvideo_setImageWithURLArray:(id)arg0 placeholder:(id)arg1 trackerParams:(id)arg2;
- (void)longvideo_setImageWithURLArray:(id)arg0 trackerParams:(id)arg1;
- (void)longvideo_setImageWithURLArray:(id)arg0 trackerParams:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)longvideo_setImageWithURLArray:(id)arg0 placeholder:(id)arg1 trackerParams:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)longvideo_setImageWithURLArray:(id)arg0 placeholder:(id)arg1 options:(unsigned long long)arg2 trackerParams:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)longvideo_setImageWithURLArray:(id)arg0 placeholder:(id)arg1 cacheName:(id)arg2 options:(unsigned long long)arg3 trackerParams:(id)arg4 progressBlock:(id /* block */)arg5 completionBlock:(id /* block */)arg6;
- (void)awemeMonitor_setImageWithURLArray:(id)arg0 scene:(id)arg1 placeholder:(id)arg2 trackerParams:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)awemeMonitor_setImageWithURLArray:(id)arg0 scene:(id)arg1 placeholder:(id)arg2 trackerParams:(id)arg3;
- (void)awemeMonitor_setImageWithURLArray:(id)arg0 scene:(id)arg1 trackerParams:(id)arg2;
- (void)awemeMonitor_setImageWithURLArray:(id)arg0 scene:(id)arg1 trackerParams:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)awemeMonitor_setImageWithURLArray:(id)arg0 scene:(id)arg1 placeholder:(id)arg2 options:(unsigned long long)arg3 trackerParams:(id)arg4 completionBlock:(id /* block */)arg5;
- (void)awemeMonitor_setImageWithURLArray:(id)arg0 scene:(id)arg1 placeholder:(id)arg2 cacheName:(id)arg3 options:(unsigned long long)arg4 trackerParams:(id)arg5 progressBlock:(id /* block */)arg6 completionBlock:(id /* block */)arg7;
- (void)awemeMonitor_setImageWithURLArray:(id)arg0 scene:(id)arg1;
- (void)animation_detector_setHidden:(BOOL)arg0;
- (void)animation_detector_setAlpha:(double)arg0;
- (void)animation_detector_imagePlayerStartPlay:(id)arg0;
- (void)animation_detector_didMoveToWindow;
- (id)animation_detector_initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setPlayingBeforeHidden:(BOOL)arg0;
- (BOOL)playingBeforeHidden;
- (void)setPlayingBeforeMoveToWindow:(BOOL)arg0;
- (BOOL)playingBeforeMoveToWindow;
- (id)awe_belongVC;
- (void)setAwe_belongVC:(id)arg0;
- (void)sceneDidSwitch:(id)arg0;
- (BOOL)playingBeforeSceneSwitch;
- (void)setPlayingBeforeSceneSwitch:(BOOL)arg0;
- (void)setupBelongVC;
- (void)perf_analysis_imagePlayerStartPlay:(id)arg0 didUpdateImage:(id)arg1 index:(unsigned long long)arg2;
- (double)lastCheckHiddenTime;
- (void)setLastCheckHiddenTime:(double)arg0;
- (double)lastCheckInScreenTime;
- (void)setLastCheckInScreenTime:(double)arg0;
- (void)p_baseLoadGif:(id)arg0;
- (void)p_baseLoadGifWithURL:(id)arg0;
- (void)cj_loadGifAndOnceLoop:(id)arg0 duration:(double)arg1;
- (void)cj_loadGifAndOnceLoopWithURL:(id)arg0 duration:(double)arg1;
- (void)cj_loadGifAndInfinityLoop:(id)arg0 duration:(double)arg1;
- (void)cj_loadGifAndInfinityLoopWithURL:(id)arg0 duration:(double)arg1;
- (void)stopAnimating;
- (void)startAnimating;
- (void).cxx_destruct;
- (id)image;
- (void)pauseAnimation;
- (void)setAnimationType:(unsigned long long)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setPlayer:(id)arg0;
- (void)didMoveToWindow;
- (void)setImage:(id)arg0;
- (id)initWithCoder:(id)arg0;
- (id)description;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)arg0;
- (unsigned long long)animationType;
- (void)dealloc;
- (void)startAnimation;
- (id)player;
- (void)stopAnimation;

@end
