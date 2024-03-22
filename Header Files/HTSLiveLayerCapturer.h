//
//     Generated by private class-dump
//

@class NSString, CADisplayLink, CALayer, UIView;

@interface HTSLiveLayerCapturer : NSObject <HTSLivePixelBufferCapturer> {
    BOOL _onlyCapture;
    CALayer *_captureLayer;
    UIView *_captureView;
    CADisplayLink *_displayLink;
    id /* block */ _captureBlock;
    id /* block */ _liveCoreCaptureBlock;
    struct __CVBuffer { } *_preFrame;
    struct CGSize { double width; double height; } _outputSize;
}

@property (weak, nonatomic) CALayer *captureLayer;
@property (weak, nonatomic) UIView *captureView;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (copy, nonatomic) id /* block */ captureBlock;
@property (copy, nonatomic) id /* block */ liveCoreCaptureBlock;
@property (nonatomic) struct __CVBuffer { } *preFrame;
@property (nonatomic) BOOL onlyCapture;
@property (nonatomic) struct CGSize { double width; double height; } outputSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateView:(id)arg0;
- (void)setVideoProcessedCallback:(id /* block */)arg0;
- (void)destryDisplayLink;
- (void)captureFrame:(id)arg0;
- (void)setPreFrame:(struct __CVBuffer { } *)arg0;
- (struct __CVBuffer { } *)preFrame;
- (void)setCaptureBlock:(id /* block */)arg0;
- (void)setPixelBufferProcessBlock:(id /* block */)arg0;
- (void)setCaptureLayer:(id)arg0;
- (void)captureFrame:(id)arg0 useYUV:(BOOL)arg1;
- (id)captureLayer;
- (void)setPixelBufferProcessBlockWithoutRuning:(id /* block */)arg0;
- (void)captureImmediately;
- (void)captureRGBImmediately;
- (id /* block */)liveCoreCaptureBlock;
- (void)setLiveCoreCaptureBlock:(id /* block */)arg0;
- (BOOL)onlyCapture;
- (void)setOnlyCapture:(BOOL)arg0;
- (BOOL)running;
- (id)initWithView:(id)arg0;
- (void)setDisplayLink:(id)arg0;
- (void).cxx_destruct;
- (id /* block */)captureBlock;
- (struct CGSize { double x0; double x1; })outputSize;
- (void)stopCapture;
- (void)setCaptureView:(id)arg0;
- (id)displayLink;
- (id)initWithLayer:(id)arg0;
- (id)captureView;
- (void)setupDisplayLink;
- (void)dealloc;
- (void)startCapture;
- (void)setOutputSize:(struct CGSize { double x0; double x1; })arg0;

@end
