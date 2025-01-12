//
//     Generated by private class-dump
//

@class MTLRenderPipelineReflection, IESSCMetalRenderBuffer, IESSCMetalImage, IESSCMetalShaderUniformSettings;
@protocol MTLRenderPipelineState;

@interface IESSCMetalTransformFilter : IESSCMetalFilter {
    IESSCMetalImage *_inputImage;
    id<MTLRenderPipelineState> _pipelineState;
    MTLRenderPipelineReflection *_reflection;
    IESSCMetalShaderUniformSettings *_uniformSettings;
    IESSCMetalRenderBuffer *_textureCoordinateBuffer;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _transform;
}

@property (retain, nonatomic) id<MTLRenderPipelineState> pipelineState;
@property (retain, nonatomic) MTLRenderPipelineReflection *reflection;
@property (retain, nonatomic) IESSCMetalShaderUniformSettings *uniformSettings;
@property (retain, nonatomic) IESSCMetalRenderBuffer *textureCoordinateBuffer;
@property (retain, nonatomic) IESSCMetalImage *inputImage;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;

- (void)setPipelineState:(id)arg0;
- (id)initWithRenderingDevice:(id)arg0 blendEnable:(BOOL)arg1;
- (id)uniformSettings;
- (void)renderWithParams:(id)arg0;
- (void)setUniformSettings:(id)arg0;
- (id)textureCoordinateBuffer;
- (void)setTextureCoordinateBuffer:(id)arg0;
- (struct { void /* unknown type, empty encoding */ x0[4]; })simdMatrixWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })arg0 renderSize:(struct CGSize { double x0; double x1; })arg1;
- (void).cxx_destruct;
- (id)inputImage;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform;
- (void)setInputImage:(id)arg0;
- (void)setTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })arg0;
- (id)pipelineState;
- (id)reflection;
- (void)setReflection:(id)arg0;

@end
