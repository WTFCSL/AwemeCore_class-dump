//
//     Generated by private class-dump
//

@class NSArray, NSNumber;
@protocol IESLivePlayerProtocol;

@protocol HTSLiveStreamPlayerProviderAdapter <NSObject>

@property (readonly, nonatomic) id<IESLivePlayerProtocol> player;
@property (readonly, nonatomic) double currentWatchTime;
@property (readonly, nonatomic) double latestLiveTime;
@property (readonly, nonatomic) double liveStartTime;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentViewFrame;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } mediaSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } renderViewFrame;
@property (copy, nonatomic) NSArray *multiLinkerGridRatioFrames;
@property (nonatomic) BOOL isNeedUpdateMultiLinkerLayoutParam;
@property (nonatomic) BOOL enableVideoRenderInAudioRoom;
@property (readonly, nonatomic) unsigned long long alignMode;
@property (readonly, nonatomic) long long scaleType;
@property (retain, nonatomic) NSNumber *doubleInterationDistance;
@property (readonly, nonatomic) BOOL isVerticalStream;
@property (readonly, nonatomic) unsigned long long playbackState;
@property (readonly, nonatomic) BOOL shouldHasViceView;
@property (readonly, nonatomic) BOOL isGameViceViewExist;

@optional

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })videoAreaFrame;
- (long long)currentAudioStreamDecibel;
- (BOOL)isPause;
- (unsigned long long)alignMode;
- (double)liveStartTime;
- (double)currentWatchTime;
- (void)playWithCallTrace:(id)arg0;
- (void)pauseWithCallTrace:(id)arg0;
- (void)stopWithCallTrace:(id)arg0;
- (void)closeWithCallTrace:(id)arg0;
- (void)startVideoRenderingWithCallTrace:(id)arg0;
- (void)stopVideoRenderingWithCallTrace:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })renderViewFrame;
- (id)previewViewWithCallTrace:(id)arg0;
- (id)playerViewWithCallTrace:(id)arg0;
- (void)resetFrameWithCallTrace:(id)arg0;
- (void)stopAndClearCurrentMediaWithCallTrace:(id)arg0;
- (void)pauseCurrentMediaWithCallTrace:(id)arg0;
- (void)resumeCurrentMediaWithCallTrace:(id)arg0;
- (void)resumePreviousMediaWithCallTrace:(id)arg0;
- (void)setMute:(BOOL)arg0 callTrace:(id)arg1;
- (void)layoutWithType:(unsigned long long)arg0 callTrace:(id)arg1;
- (void)setPlayerViewHidden:(BOOL)arg0 callTrace:(id)arg1;
- (void)scalePlayerByRightPanelResetFrame:(BOOL)arg0 callTrace:(id)arg1;
- (BOOL)isInWindowPlayerView;
- (BOOL)liveEnableRenderVideoOptimize;
- (unsigned long long)streamLayoutType;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentPlayerFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentPlayerFrameWithLayoutType:(unsigned long long)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })playViewFrameWithLayoutType:(unsigned long long)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })streamFrameInView:(id)arg0;
- (struct __CVBuffer { } *)copyInstantPixelBuffer;
- (double)getCurrentDuration;
- (double)getWatchedDuration;
- (void)seekStreamProgress:(double)arg0 callTrace:(id)arg1 complete:(id /* block */)arg2;
- (void)updateCurrentTime:(double)arg0 callTrace:(id)arg1;
- (id)getSeiMetaInfo;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })vsLandscapePlayerFrame;
- (double)bottomOffsetForPlayerCalculate;
- (void)changeCameraTo:(id)arg0 callTrace:(id)arg1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getUsedSpecifyRatioFrame;
- (id)doubleInterationDistance;
- (void)setDoubleInterationDistance:(id)arg0;
- (id)multiLinkerGridRatioFrames;
- (BOOL)isNeedUpdateMultiLinkerLayoutParam;
- (void)setIsNeedUpdateMultiLinkerLayoutParam:(BOOL)arg0;
- (BOOL)enableVideoRenderInAudioRoom;
- (void)setEnableVideoRenderInAudioRoom:(BOOL)arg0;
- (BOOL)disableMuteOperation;
- (void)setDisableMuteOperation:(BOOL)arg0;
- (BOOL)shouldHasViceView;
- (BOOL)isGameViceViewExist;
- (double)latestLiveTime;
- (BOOL)isVerticalStream;
- (void)setMultiLinkerGridRatioFrames:(id)arg0;
- (unsigned long long)playbackState;
- (BOOL)isPlaying;
- (id)player;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentViewFrame;
- (struct CGSize { double x0; double x1; })mediaSize;
- (long long)scaleType;
- (BOOL)isMute;

@end
