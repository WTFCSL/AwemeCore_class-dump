//
//     Generated by private class-dump
//

@class MTLRenderPipelineReflection, IESSCMetalRenderBuffer, IESSCMetalImage, IESSCMetalShaderUniformSettings;
@protocol MTLRenderPipelineState;

@interface IESSCMetalConcatFilter : IESSCMetalFilter {
    IESSCMetalImage *_firstTexture;
    IESSCMetalImage *_secondTexture;
    double _clipWidth;
    id<MTLRenderPipelineState> _pipelineState;
    MTLRenderPipelineReflection *_reflection;
    IESSCMetalShaderUniformSettings *_uniformSettings;
    IESSCMetalRenderBuffer *_firstTextureCoordinateBuffer;
    IESSCMetalRenderBuffer *_secondTextureCoordinateBuffer;
}

@property (retain, nonatomic) id<MTLRenderPipelineState> pipelineState;
@property (retain, nonatomic) MTLRenderPipelineReflection *reflection;
@property (retain, nonatomic) IESSCMetalShaderUniformSettings *uniformSettings;
@property (retain, nonatomic) IESSCMetalRenderBuffer *firstTextureCoordinateBuffer;
@property (retain, nonatomic) IESSCMetalRenderBuffer *secondTextureCoordinateBuffer;
@property (retain, nonatomic) IESSCMetalImage *firstTexture;
@property (retain, nonatomic) IESSCMetalImage *secondTexture;
@property (nonatomic) double clipWidth;

- (void)setPipelineState:(id)arg0;
- (id)initWithRenderingDevice:(id)arg0 blendEnable:(BOOL)arg1;
- (id)uniformSettings;
- (void)renderWithParams:(id)arg0;
- (void)setUniformSettings:(id)arg0;
- (id)firstTextureCoordinateBuffer;
- (id)secondTextureCoordinateBuffer;
- (id)secondTexture;
- (double)clipWidth;
- (void)setFirstTexture:(id)arg0;
- (void)setSecondTexture:(id)arg0;
- (void)setClipWidth:(double)arg0;
- (void)setFirstTextureCoordinateBuffer:(id)arg0;
- (void)setSecondTextureCoordinateBuffer:(id)arg0;
- (void).cxx_destruct;
- (id)pipelineState;
- (id)reflection;
- (void)setReflection:(id)arg0;
- (id)firstTexture;

@end
