//
//     Generated by private class-dump
//

@class MTKTextureLoader;
@protocol MTLComputePipelineState, MTLDevice, MTLCommandBuffer, MTLLibrary, MTLTexture, MTLCommandQueue, MTLFunction;

@interface IESImgPreProcessor : NSObject {
    id<MTLTexture> _rgbaTex;
    id<MTLDevice> _device;
    MTKTextureLoader *_loader;
    id<MTLCommandQueue> _mtlQue;
    id<MTLCommandBuffer> _currentCmdBuffer;
    id<MTLLibrary> _library;
    id<MTLFunction> _kernel_copy_func;
    id<MTLComputePipelineState> _pipeline;
}

@property (retain, nonatomic) MTKTextureLoader *loader;

- (id)createTextureFromImage:(id)arg0;
- (id)createImageFromTexture:(id)arg0;
- (void)blitImg:(id)arg0 outTex:(id)arg1;
- (id)init;
- (void).cxx_destruct;
- (id)loader;
- (void)setLoader:(id)arg0;

@end
