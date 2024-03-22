//
//     Generated by private class-dump
//

@class EAGLContext, CAEAGLLayer;

@interface VEImagePreview : UIView {
    unsigned int displayRenderbuffer;
    unsigned int displayFramebuffer;
    CAEAGLLayer *_eaglLayer;
    EAGLContext *_context;
    struct CGSize { double width; double height; } _sizeInPixels;
    BOOL _enabled;
    unsigned long long _fillMode;
    id /* block */ _frameUpdateBlock;
    id /* block */ _firstRenderCallback;
    unsigned long long _aspectRatio;
    struct CGSize { double width; double height; } _scaleSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _viewBounds;
}

@property (nonatomic) unsigned long long aspectRatio;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } viewBounds;
@property (nonatomic) unsigned long long fillMode;
@property (copy, nonatomic) id /* block */ frameUpdateBlock;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } sizeInPixels;
@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) EAGLContext *context;
@property (copy, nonatomic) id /* block */ firstRenderCallback;
@property (readonly, nonatomic) struct CGSize { double width; double height; } scaleSize;

+ (Class)layerClass;

- (void)endProcessing;
- (struct CGSize { double x0; double x1; })maximumOutputSize;
- (BOOL)shouldIgnoreUpdatesToThisTarget;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0 atIndex:(long long)arg1 exceptionBlock:(id /* block */)arg2;
- (BOOL)wantsMonochromeInput;
- (void)useAsCurrentContext;
- (void)createDisplayFramebuffer;
- (void)setDisplayFramebuffer;
- (void)presentFramebuffer;
- (void)destroyDisplayFramebuffer;
- (void)recalculateViewGeometry;
- (id /* block */)firstRenderCallback;
- (id /* block */)frameUpdateBlock;
- (void)setFrameUpdateBlock:(id /* block */)arg0;
- (void)setFirstRenderCallback:(id /* block */)arg0;
- (void)setAspectRatio:(unsigned long long)arg0;
- (struct CGSize { double x0; double x1; })sizeInPixels;
- (id)initWithContext:(id)arg0;
- (void)setFillMode:(unsigned long long)arg0;
- (BOOL)enabled;
- (unsigned long long)fillMode;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (unsigned long long)aspectRatio;
- (id)context;
- (id)initWithCoder:(id)arg0;
- (void)setEnabled:(BOOL)arg0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)dealloc;
- (void)clearBackground;
- (struct CGSize { double x0; double x1; })scaleSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewBounds;
- (void)setViewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;

@end