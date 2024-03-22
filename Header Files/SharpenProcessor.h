//
//     Generated by private class-dump
//

@class MTKView;
@protocol MTLDevice, MTLLibrary, MTLBuffer, MTLRenderPipelineState;

@interface SharpenProcessor : NSObject {
    float _width;
    float _height;
    float _sharpness;
    float _brightness;
    float _contrast;
    id<MTLDevice> _device;
    id<MTLLibrary> _mtlLibrary;
    MTKView *_mtkView;
    id<MTLBuffer> _vertexBuffer;
    id<MTLRenderPipelineState> _pipelineState;
    id<MTLBuffer> _paramBuffer;
}

@property (retain, nonatomic) id<MTLDevice> device;
@property (retain, nonatomic) id<MTLLibrary> mtlLibrary;
@property (retain, nonatomic) MTKView *mtkView;
@property (retain, nonatomic) id<MTLBuffer> vertexBuffer;
@property (nonatomic) float width;
@property (nonatomic) float height;
@property (nonatomic) float sharpness;
@property (nonatomic) float brightness;
@property (nonatomic) float contrast;
@property (retain, nonatomic) id<MTLRenderPipelineState> pipelineState;
@property (retain, nonatomic) id<MTLBuffer> paramBuffer;

- (id)initWithDevice:(id)arg0 mtlLibrary:(id)arg1 mtkView:(id)arg2 vertexBuffer:(id)arg3 width:(float)arg4 height:(float)arg5 sharpness:(float)arg6 brightness:(float)arg7 contrast:(float)arg8;
- (id)encodeWithTexture:(id)arg0 rotation:(long long)arg1 commandBuffer:(id)arg2;
- (void)setMtlLibrary:(id)arg0;
- (void)setPipelineState:(id)arg0;
- (void)setParamBuffer:(id)arg0;
- (id)paramBuffer;
- (void)setContrast:(float)arg0;
- (float)sharpness;
- (float)brightness;
- (void).cxx_destruct;
- (float)height;
- (void)setBrightness:(float)arg0;
- (float)contrast;
- (void)setWidth:(float)arg0;
- (void)setDevice:(id)arg0;
- (void)setHeight:(float)arg0;
- (float)width;
- (id)device;
- (id)vertexBuffer;
- (void)setVertexBuffer:(id)arg0;
- (void)setSharpness:(float)arg0;
- (id)mtkView;
- (void)setMtkView:(id)arg0;
- (id)mtlLibrary;
- (id)pipelineState;

@end