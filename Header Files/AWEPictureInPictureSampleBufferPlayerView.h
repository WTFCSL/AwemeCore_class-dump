//
//     Generated by private class-dump
//

@class NSString, AVSampleBufferDisplayLayer, AVPictureInPictureController;
@protocol AWEPictureInPicturePlayerViewDelegate;

@interface AWEPictureInPictureSampleBufferPlayerView : UIView <AWEPictureInPicturePlayerView, AVPictureInPictureSampleBufferPlaybackDelegate> {
    BOOL _stalled;
    double _rate;
    id<AWEPictureInPicturePlayerViewDelegate> _delegate;
    AVSampleBufferDisplayLayer *_playerLayer;
    double _duration;
    AVPictureInPictureController *_pipController;
    struct CGSize { double width; double height; } _size;
}

@property (retain, nonatomic) AVSampleBufferDisplayLayer *playerLayer;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double duration;
@property (weak, nonatomic) AVPictureInPictureController *pipController;
@property (nonatomic) double rate;
@property (nonatomic) BOOL stalled;
@property (weak, nonatomic) id<AWEPictureInPicturePlayerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layerClass;

- (void)notifyError:(id)arg0;
- (void)invalidatePlayback;
- (id)makePipController;
- (id)initWithSize:(struct CGSize { double x0; double x1; })arg0 duration:(double)arg1;
- (void)resetDuration:(double)arg0 size:(struct CGSize { double x0; double x1; })arg1 completion:(id /* block */)arg2;
- (void)drawOneFrame;
- (struct opaqueCMSampleBuffer { } *)makeSampleBuffer;
- (void)notifyFailed:(id)arg0;
- (struct opaqueCMSampleBuffer { } *)sampleBufferFromPixelBuffer:(struct __CVBuffer { } *)arg0;
- (void)prepareBeforeStartWithRate:(double)arg0;
- (id)pipController;
- (id)playerLayer;
- (void).cxx_destruct;
- (void)setPipController:(id)arg0;
- (double)duration;
- (void)setRate:(double)arg0;
- (id)delegate;
- (double)rate;
- (struct CGSize { double x0; double x1; })size;
- (double)currentTime;
- (void)setSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setPlayerLayer:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)seekToTime:(double)arg0;
- (void)setDuration:(double)arg0;
- (void)prepareToPlay;
- (BOOL)stalled;
- (void)syncProgress;
- (void)setStalled:(BOOL)arg0;
- (void)pictureInPictureController:(id)arg0 setPlaying:(BOOL)arg1;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })pictureInPictureControllerTimeRangeForPlayback:(id)arg0;
- (BOOL)pictureInPictureControllerIsPlaybackPaused:(id)arg0;
- (void)pictureInPictureController:(id)arg0 didTransitionToRenderSize:(struct { int x0; int x1; })arg1;
- (void)pictureInPictureController:(id)arg0 skipByInterval:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg1 completionHandler:(id /* block */)arg2;

@end