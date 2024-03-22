//
//     Generated by private class-dump
//

@protocol IESECLiveVSVideoPlayerRouter <NSObject>

@property (nonatomic, getter=isMuted, setter=setMute:) BOOL muted;
@property (readonly, nonatomic, getter=getCurrentPlaybackTime) double currentPlaybackTime;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } playerFrame;
@property (nonatomic) double startLocation;

- (double)getCurrentPlaybackTime;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })playerFrame;
- (void)seekVideoWithProgress:(double)arg0 complete:(id /* block */)arg1;
- (void)stop;
- (void)play;
- (void)pause;
- (void)pause:(BOOL)arg0;
- (void)setMute:(BOOL)arg0;
- (BOOL)isMuted;
- (void)replay;
- (double)startLocation;
- (void)setStartLocation:(double)arg0;

@end
