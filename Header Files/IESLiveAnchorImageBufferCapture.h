//
//     Generated by private class-dump
//

@class UIImage, CADisplayLink, UIView;
@protocol IESLiveVideoEffectProcessing;

@interface IESLiveAnchorImageBufferCapture : NSObject {
    BOOL _isPushing;
    BOOL _shouldReleasePreBuffer;
    id /* block */ _captureHandlerBlock;
    UIImage *_image;
    UIView *_captureView;
    CADisplayLink *_displayLink;
    struct __CVBuffer { } *_preFrame;
    id<IESLiveVideoEffectProcessing> _videoEffectProcessing;
    struct CGSize { double width; double height; } _outputSize;
}

@property (nonatomic) BOOL isPushing;
@property (retain, nonatomic) UIImage *image;
@property (weak, nonatomic) UIView *captureView;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) struct __CVBuffer { } *preFrame;
@property (retain, nonatomic) id<IESLiveVideoEffectProcessing> videoEffectProcessing;
@property (nonatomic) BOOL shouldReleasePreBuffer;
@property (copy, nonatomic) id /* block */ captureHandlerBlock;
@property (nonatomic) struct CGSize { double width; double height; } outputSize;
@property (readonly, nonatomic, getter=isRunning) BOOL running;

- (void)captureFrame:(id)arg0;
- (void)startDisplayLink;
- (void)setPreFrame:(struct __CVBuffer { } *)arg0;
- (struct __CVBuffer { } *)preFrame;
- (void)setCaptureHandlerBlock:(id /* block */)arg0;
- (void)startPushImage;
- (void)stopPushImage;
- (id)videoEffectProcessing;
- (id /* block */)captureHandlerBlock;
- (void)setIsPushing:(BOOL)arg0;
- (void)setVideoEffectProcessing:(id)arg0;
- (BOOL)shouldReleasePreBuffer;
- (void)setShouldReleasePreBuffer:(BOOL)arg0;
- (id)initWithView:(id)arg0;
- (BOOL)isRunning;
- (void)setDisplayLink:(id)arg0;
- (id)initWithImage:(id)arg0;
- (void).cxx_destruct;
- (id)image;
- (BOOL)isPushing;
- (struct CGSize { double x0; double x1; })outputSize;
- (void)setCaptureView:(id)arg0;
- (void)setImage:(id)arg0;
- (void)stopDisplayLink;
- (id)displayLink;
- (id)captureView;
- (void)dealloc;
- (void)setOutputSize:(struct CGSize { double x0; double x1; })arg0;

@end