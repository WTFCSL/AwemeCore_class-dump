//
//     Generated by private class-dump
//

@interface IESGLesPixelBuffRenderer : IESGLesBaseMvpRenderer {
    struct __CVBuffer { } *_lumaTexture;
    struct __CVBuffer { } *_chromaTexture;
    struct __CVBuffer { } *_rgbaTexture;
    const float *_preferredConversion;
    long long _doTransType;
    long long _expectTargetType;
    BOOL _isPassThrough;
    long long _colorPrimariesType;
    long long _colorSpaceTransType;
}

- (void)deInit;
- (void)render:(struct __CVBuffer { } *)arg0 outSize:(struct CGSize { double x0; double x1; })arg1;
- (void)loadData:(struct __CVBuffer { } *)arg0 frameWidth:(int)arg1 frameHeight:(int)arg2 planeCount:(unsigned long long)arg3;
- (void)innerRender:(unsigned long long)arg0;
- (void)cleanUpTextures;
- (void)colorConversion:(struct __CVBuffer { } *)arg0;
- (void)selectYCbCrPipeline;
- (void)mappingTexture:(unsigned int)arg0 imageBuffer:(struct __CVBuffer { } *)arg1 textureFormat:(int)arg2 width:(int)arg3 height:(int)arg4 planeIndex:(unsigned long long)arg5;
- (void)selectRGBAPipeline;
- (void)mapRBGA4PixelBuffer:(struct __CVBuffer { } *)arg0;
- (void)renderYuv;
- (void)renderRgba;
- (void)render:(id)arg0 config:(id)arg1;
- (id)initWithContext:(id)arg0;
- (void)dealloc;
- (void)doInit;

@end
