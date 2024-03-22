//
//     Generated by private class-dump
//

@class NSDictionary, MTLTextureDescriptor, MTKTextureLoader, CIContext;
@protocol MTLBuffer, MTLDevice, MTLLibrary, MTLTexture, MTLComputePipelineState, MTLCommandQueue;

@interface IESMLMetalMgr : NSObject {
    unsigned long long _maxWidth;
    unsigned long long _maxHeight;
    id<MTLDevice> _device;
    id<MTLComputePipelineState> _preProcessingPSO;
    id<MTLComputePipelineState> _postProcessingPSO;
    id<MTLCommandQueue> _mCommandQueue;
    id<MTLBuffer> _inputBuffer;
    id<MTLBuffer> _resultBuffer;
    MTKTextureLoader *_loader;
    id<MTLLibrary> _defaultLibrary;
    id<MTLTexture> _outputTexture;
    id<MTLTexture> _inputTexture;
    MTLTextureDescriptor *_textureDescriptor;
    NSDictionary *_textureOptions;
    NSDictionary *_imageOptions;
    CIContext *_ciContext;
    struct CGColorSpace { } *_colorSpace;
    unsigned long long _lastTextureWidth;
    unsigned long long _lastTextureHeight;
    long long _metalInitState;
    unsigned int *_pointerMaxWidth;
    unsigned int *_processPointerMaxWidth;
    unsigned long long _originImageWidth;
    unsigned long long _originImageHeight;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _outputGroupSize;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _outputThreadgroupsPerGrid;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _inputThreadgroupsPerGrid;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _inputGroupSize;
    struct { struct { unsigned long long x; unsigned long long y; unsigned long long z; } origin; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } size; } _inputRegion;
}

@property (retain, nonatomic) id<MTLDevice> device;
@property (retain, nonatomic) id<MTLComputePipelineState> preProcessingPSO;
@property (retain, nonatomic) id<MTLComputePipelineState> postProcessingPSO;
@property (retain, nonatomic) id<MTLCommandQueue> mCommandQueue;
@property (retain, nonatomic) id<MTLBuffer> inputBuffer;
@property (retain, nonatomic) id<MTLBuffer> resultBuffer;
@property (retain, nonatomic) MTKTextureLoader *loader;
@property (retain, nonatomic) id<MTLLibrary> defaultLibrary;
@property (retain, nonatomic) id<MTLTexture> outputTexture;
@property (retain, nonatomic) id<MTLTexture> inputTexture;
@property (retain, nonatomic) MTLTextureDescriptor *textureDescriptor;
@property (retain, nonatomic) NSDictionary *textureOptions;
@property (retain, nonatomic) NSDictionary *imageOptions;
@property (retain, nonatomic) CIContext *ciContext;
@property (nonatomic) struct CGColorSpace { } *colorSpace;
@property (nonatomic) struct { unsigned long long width; unsigned long long height; unsigned long long depth; } outputGroupSize;
@property (nonatomic) struct { unsigned long long width; unsigned long long height; unsigned long long depth; } outputThreadgroupsPerGrid;
@property (nonatomic) struct { unsigned long long width; unsigned long long height; unsigned long long depth; } inputThreadgroupsPerGrid;
@property (nonatomic) struct { unsigned long long width; unsigned long long height; unsigned long long depth; } inputGroupSize;
@property (nonatomic) unsigned long long lastTextureWidth;
@property (nonatomic) unsigned long long lastTextureHeight;
@property (nonatomic) struct { struct { unsigned long long x; unsigned long long y; unsigned long long z; } origin; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } size; } inputRegion;
@property (nonatomic) long long metalInitState;
@property (nonatomic) unsigned int *pointerMaxWidth;
@property (nonatomic) unsigned int *processPointerMaxWidth;
@property (nonatomic) unsigned long long originImageWidth;
@property (nonatomic) unsigned long long originImageHeight;
@property (nonatomic) unsigned long long maxWidth;
@property (nonatomic) unsigned long long maxHeight;

+ (id)shareManager;

- (void)setMetalInitState:(long long)arg0;
- (void)setDefaultMatrix;
- (long long)metalInitState;
- (BOOL)prepareInner;
- (void)setupVar;
- (void)setInputGroupSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })arg0;
- (void)setTextureOptions:(id)arg0;
- (id)textureOptions;
- (void)setOriginImageWidth:(unsigned long long)arg0;
- (void)setOriginImageHeight:(unsigned long long)arg0;
- (id)resultBuffer;
- (void)setResultBuffer:(id)arg0;
- (void)setInputThreadgroupsPerGridWithTexture:(id)arg0;
- (unsigned int *)pointerMaxWidth;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })inputThreadgroupsPerGrid;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })inputGroupSize;
- (unsigned int *)processPointerMaxWidth;
- (void)setProcessPointerMaxWidth:(unsigned int *)arg0;
- (unsigned long long)originImageWidth;
- (unsigned long long)originImageHeight;
- (id)textureDescriptor;
- (void)setTextureDescriptor:(id)arg0;
- (void)setOutputThreadgroupsPerGrid:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })arg0;
- (id)postProcessingPSO;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })outputThreadgroupsPerGrid;
- (void)setCiContext:(id)arg0;
- (void)setPointerMaxWidth:(unsigned int *)arg0;
- (unsigned long long)lastTextureWidth;
- (unsigned long long)lastTextureHeight;
- (void)setInputThreadgroupsPerGrid:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })arg0;
- (void)setLastTextureWidth:(unsigned long long)arg0;
- (void)setLastTextureHeight:(unsigned long long)arg0;
- (void)setPreProcessingPSO:(id)arg0;
- (void)setPostProcessingPSO:(id)arg0;
- (void)setMCommandQueue:(id)arg0;
- (void)setDefaultLibrary:(id)arg0;
- (id)getPSOWithFuncName:(id)arg0;
- (id)imageFromData:(float *)arg0 len:(unsigned long long)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3;
- (id)preProcessingPSO;
- (id)mCommandQueue;
- (void)setInputRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })arg0;
- (void)setOutputGroupSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })arg0;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })outputGroupSize;
- (id)init;
- (void).cxx_destruct;
- (void)setColorSpace:(struct CGColorSpace { } *)arg0;
- (void)setMaxWidth:(unsigned long long)arg0;
- (id)imageOptions;
- (unsigned long long)maxWidth;
- (void)releaseResource;
- (void)setMaxHeight:(unsigned long long)arg0;
- (struct CGColorSpace { } *)colorSpace;
- (BOOL)prepare;
- (id)ciContext;
- (void)setDevice:(id)arg0;
- (unsigned long long)maxHeight;
- (BOOL)prepareIfNeeded;
- (id)device;
- (id)inputBuffer;
- (struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })inputRegion;
- (id)outputTexture;
- (void)setOutputTexture:(id)arg0;
- (id)inputTexture;
- (void)setInputTexture:(id)arg0;
- (id)loader;
- (void)setLoader:(id)arg0;
- (void)setImageOptions:(id)arg0;
- (float *)dataFromImage:(id)arg0;
- (id)defaultLibrary;
- (void)setInputBuffer:(id)arg0;

@end