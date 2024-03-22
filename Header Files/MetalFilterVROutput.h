//
//     Generated by private class-dump
//

@protocol MTLBuffer;

@interface MetalFilterVROutput : MetalFilterDefault {
    unsigned long long _outputTextureOrientation;
    id<MTLBuffer> _vertexBuffer;
    struct CGSize { double width; double height; } _outputTextureSize;
    struct CGSize { double width; double height; } _inputTextureSize;
    struct { void /* unknown type, empty encoding */ columns[4]; } _modelMatrix;
    BOOL _spaceOrientationOptDisable;
    float _basisZoom;
    long long _statusBarOrientation;
    struct { void /* unknown type, empty encoding */ vector; } _spaceOrientation;
}

@property (readonly, nonatomic) unsigned long long outputTextureOrientation;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ vector; } spaceOrientation;
@property (nonatomic) long long statusBarOrientation;
@property (readonly, nonatomic) float basisZoom;

+ (id)filterWithInputTextureSize:(struct CGSize { double x0; double x1; })arg0 outputTextureSize:(struct CGSize { double x0; double x1; })arg1 disableZaxis:(BOOL)arg2 spaceOrientationOptDisable:(BOOL)arg3;

- (id)getEffectPatameterStr;
- (id)getVertexShader;
- (id)createPixelTextureWithFrame:(struct VideoFrame { struct VideoFrameBuffer *x0; } *)arg0 format:(id)arg1;
- (long long)renderBefore:(id)arg0 frame:(struct MetalTextureBuffer { void /* function */ **x0; struct __CVBuffer *x1; void **x2; int *x3; id x4; id x5; id x6; int x7; id x8; id x9; id x10; int x11; int x12; int x13; int x14; int x15; void *x16; int x17; id x18; float x19; int x20; int x21; id x22; long long x23; long long x24; } *)arg1;
- (void)drawFrame:(struct MetalTextureBuffer { void /* function */ **x0; struct __CVBuffer *x1; void **x2; int *x3; id x4; id x5; id x6; int x7; id x8; id x9; id x10; int x11; int x12; int x13; int x14; int x15; void *x16; int x17; id x18; float x19; int x20; int x21; id x22; long long x23; long long x24; } *)arg0 withRenderEncoder:(id)arg1;
- (id)initWithInputTextureSize:(struct CGSize { double x0; double x1; })arg0 outputTextureSize:(struct CGSize { double x0; double x1; })arg1 disableZaxis:(BOOL)arg2 spaceOrientationOptDisable:(BOOL)arg3;
- (void)updateOutputTextureOrientation:(BOOL)arg0;
- (unsigned long long)outputTextureOrientation;
- (struct { })spaceOrientation;
- (float)basisZoom;
- (void)setStatusBarOrientation:(long long)arg0;
- (void).cxx_destruct;
- (long long)statusBarOrientation;
- (id)vertexBuffer;

@end