//
//     Generated by private class-dump
//

@class NSString, NSArray, VFMetalContext;
@protocol MTLComputePipelineState, MTLTexture, MTLBuffer, MTLFunction;

@interface VFImageFilter : NSObject {
    VFMetalContext *_context;
    id<MTLBuffer> _uniformBuffer;
    id<MTLComputePipelineState> _pipeline;
    NSArray *_inTextures;
    NSArray *_outTextures;
    id<MTLFunction> _kernelFunction;
    id<MTLTexture> _texture;
    NSString *_str;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _threadNum;
}

@property (retain, nonatomic) id<MTLFunction> kernelFunction;
@property (retain, nonatomic) id<MTLTexture> texture;
@property (nonatomic) NSString *str;
@property (retain, nonatomic) VFMetalContext *context;
@property (retain, nonatomic) id<MTLBuffer> uniformBuffer;
@property (retain, nonatomic) id<MTLComputePipelineState> pipeline;
@property (retain, nonatomic) NSArray *inTextures;
@property (retain, nonatomic) NSArray *outTextures;
@property (nonatomic) struct { unsigned long long width; unsigned long long height; unsigned long long depth; } threadNum;

- (id)initWithFunctionName:(id)arg0 context:(id)arg1;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })threadNum;
- (id)inTextures;
- (id)outTextures;
- (void)setStr:(id)arg0;
- (void)setInTextures:(id)arg0;
- (void)setOutTextures:(id)arg0;
- (void)setThreadNum:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })arg0;
- (void)applyFilterWithTextures:(BOOL)arg0;
- (void)applyFilterWithTextures:(BOOL)arg0 height:(int)arg1 width:(int)arg2 commandBuffer:(id)arg3 commandEncoder:(id)arg4 enh:(float)arg5;
- (void)applyFilterWithTextures:(BOOL)arg0 height:(int)arg1 width:(int)arg2 commandBuffer:(id)arg3 commandEncoder:(id)arg4;
- (void)configureArgumentTableWithCommandEncoder:(id)arg0;
- (void)applyFilterWithTextures;
- (id)uniformBuffer;
- (void)setUniformBuffer:(id)arg0;
- (id)kernelFunction;
- (void)setKernelFunction:(id)arg0;
- (void)setTexture:(id)arg0;
- (id)pipeline;
- (id)texture;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;
- (id)str;
- (void)setPipeline:(id)arg0;

@end
