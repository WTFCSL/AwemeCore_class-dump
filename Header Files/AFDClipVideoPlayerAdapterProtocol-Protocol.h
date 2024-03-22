//
//     Generated by private class-dump
//

@class AWEVideoModel, UIView;
@protocol IESVideoPlayerProtocol;

@protocol AFDClipVideoPlayerAdapterProtocol <NSObject>

@property (nonatomic, retain) AWEVideoModel *video;
@property (nonatomic, readonly) UIView *playerView;
@property (nonatomic, readonly) id<IESVideoPlayerProtocol> playerController;
@property (nonatomic, weak) UIView *containerView;
@property (nonatomic) BOOL muted;
@property (nonatomic, copy) id /* block */ playerWillLoopPlayingBlock;
@property (nonatomic, copy) id /* block */ didReadyBlock;

- (id /* block */)didReadyBlock;
- (void)setDidReadyBlock:(id /* block */)arg0;
- (id /* block */)playerWillLoopPlayingBlock;
- (void)setPlayerWillLoopPlayingBlock:(id /* block */)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })updateVideoScaleModeIsInFullPage:(BOOL)arg0 albumContentMode:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })updateVideoScaleModeIsInFullPage:(BOOL)arg0 albumContentMode:(unsigned long long)arg1;
- (BOOL)muted;
- (id)playerController;
- (void)setMuted:(BOOL)arg0;
- (void)stop;
- (void)setVideo:(id)arg0;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (id)playerView;
- (id)video;
- (void)play;
- (void)pause;
- (void)seekToTime:(double)arg0;
- (void)seekToTime:(double)arg0;

@end
