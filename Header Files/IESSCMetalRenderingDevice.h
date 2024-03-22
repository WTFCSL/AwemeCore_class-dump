//
//     Generated by private class-dump
//

@class IESSCMetalLibrary, IESSCMetalPipeline, IESSCMetalTextureCache;
@protocol MTLCommandQueue, MTLDevice;

@interface IESSCMetalRenderingDevice : NSObject {
    id<MTLDevice> _device;
    id<MTLCommandQueue> _commandQueue;
    IESSCMetalLibrary *_library;
    IESSCMetalPipeline *_pipeline;
    IESSCMetalTextureCache *_textureCache;
}

@property (retain, nonatomic) id<MTLDevice> device;
@property (retain, nonatomic) id<MTLCommandQueue> commandQueue;
@property (retain, nonatomic) IESSCMetalLibrary *library;
@property (retain, nonatomic) IESSCMetalPipeline *pipeline;
@property (retain, nonatomic) IESSCMetalTextureCache *textureCache;

+ (id)shared;

- (void)renderWithParams:(id)arg0;
- (void)updateDevice:(id)arg0;
- (void)configureRenderEncoderWithCommandBuffer:(id)arg0 params:(id)arg1;
- (void)submitCommandBufferWithRenderOptions:(id)arg0 encoderGeneratorBlock:(id /* block */)arg1;
- (void)renderWithMPSImageKernalParams:(id)arg0;
- (id)library;
- (id)pipeline;
- (id)init;
- (void).cxx_destruct;
- (void)setTextureCache:(id)arg0;
- (id)textureCache;
- (void)setDevice:(id)arg0;
- (void)setLibrary:(id)arg0;
- (id)commandQueue;
- (void)setCommandQueue:(id)arg0;
- (id)device;
- (void)setPipeline:(id)arg0;
- (void)copyTexture:(id)arg0 toTexture:(id)arg1;

@end
