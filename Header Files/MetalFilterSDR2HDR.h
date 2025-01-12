//
//     Generated by private class-dump
//

@protocol MTLBuffer;

@interface MetalFilterSDR2HDR : MetalFilterDefault {
    id<MTLBuffer> uCMSmatrixBuffer;
    unsigned int curColorConversionType;
    id<MTLBuffer> curColorConversionBuffer;
    long long curYCbCrMatrixType;
}

- (id)getFragmentShader;
- (unsigned long long)getOutputBits:(struct MetalTextureBuffer { void /* function */ **x0; struct __CVBuffer *x1; void **x2; int *x3; id x4; id x5; id x6; int x7; id x8; id x9; id x10; int x11; int x12; int x13; int x14; int x15; void *x16; int x17; id x18; float x19; int x20; int x21; id x22; long long x23; long long x24; } *)arg0;
- (id)createPixelTextureWithFrame:(struct VideoFrame { struct VideoFrameBuffer *x0; } *)arg0 format:(id)arg1;
- (long long)renderBefore:(id)arg0 frame:(struct MetalTextureBuffer { void /* function */ **x0; struct __CVBuffer *x1; void **x2; int *x3; id x4; id x5; id x6; int x7; id x8; id x9; id x10; int x11; int x12; int x13; int x14; int x15; void *x16; int x17; id x18; float x19; int x20; int x21; id x22; long long x23; long long x24; } *)arg1;
- (void)checkColorConversion:(unsigned int)arg0 YCbCrMatrixAttachment:(void *)arg1;
- (id)init;
- (void).cxx_destruct;

@end
