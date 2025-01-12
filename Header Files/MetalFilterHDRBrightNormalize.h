//
//     Generated by private class-dump
//

@class NSString, NSArray, PixelTextureFormat;
@protocol MTLComputePipelineState, MTLBuffer, MTLTexture;

@interface MetalFilterHDRBrightNormalize : FilterBase {
    id<MTLComputePipelineState> cHDR2SDRPipelineState;
    id<MTLComputePipelineState> cHDRBnPipelineState;
    id<MTLComputePipelineState> cHDR2SDRNV12PipelineState;
    id<MTLComputePipelineState> cHDRBnNV12PipelineState;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } cHDR2SDRthreadsPerGroupSize;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } cHDRBnthreadsPerGroupSize;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } cHDR2SDRNV12threadsPerGroupSize;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } cHDRBnNV12threadsPerGroupSize;
    unsigned int curColorConversionType;
    id<MTLBuffer> yuv2rgbMatrix;
    id<MTLBuffer> yuv2rgbOffset;
    id<MTLBuffer> strengthBuffer;
    float curStrength;
    id<MTLTexture> lutTexture;
    NSString *modelPath;
    struct atomic<ProcessorFilterState> { struct __cxx_atomic_impl<ProcessorFilterState, std::__cxx_atomic_base_impl<ProcessorFilterState>> { _Atomic long long __a_value; } __a_; } pFilterState;
    int weightWidth;
    int weightHeight;
    int weightDepth;
    float thresh;
    NSArray *_steps;
    NSArray *_strengths;
    PixelTextureFormat *ptFmt10bit;
    struct ColorConversion { struct { void /* unknown type, empty encoding */ columns[3]; } matrix; void /* unknown type, empty encoding */ offset; void /* unknown type, empty encoding */ rangeMin; void /* unknown type, empty encoding */ rangeMax; } x420ColorConversion;
    struct ColorConversion { struct { void /* unknown type, empty encoding */ columns[3]; } matrix; void /* unknown type, empty encoding */ offset; void /* unknown type, empty encoding */ rangeMin; void /* unknown type, empty encoding */ rangeMax; } xf20ColorConversion;
    PixelTextureFormat *ptFmt8bit;
    BOOL isSuccessLogPrinted;
    BOOL isSupportNonUniformThreadgroupSize;
}

- (BOOL)getMTLTextureFromPixelBuffer:(id *)arg0 texture2:(id *)arg1 videoBuffer:(struct VideoFrameBuffer { void /* function */ **x0; } *)arg2;
- (int)initKernel;
- (void)makeThreadsPerGroupSize:(id)arg0 groupSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } *)arg1;
- (BOOL)checkHDRHLG:(struct __CVBuffer { } *)arg0;
- (id)createFBOTexture:(struct __CVBuffer { } *)arg0 format:(id)arg1 toSDR:(BOOL)arg2;
- (void)checkColorConversion:(unsigned int)arg0;
- (int)runKernel:(id)arg0 inUV:(id)arg1 dst:(id)arg2 toSDR:(BOOL)arg3 screenLight:(float)arg4;
- (int)runKernel:(id)arg0 dst:(id)arg1 toSDR:(BOOL)arg2 screenLight:(float)arg3;
- (int)updateStrength:(float)arg0;
- (struct VideoFrame { struct VideoFrameBuffer *x0; } *)process:(struct VideoFrame { struct VideoFrameBuffer *x0; } *)arg0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg0;

@end
