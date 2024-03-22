//
//     Generated by private class-dump
//

@protocol MTLComputePipelineState;

@interface MPSCNNNeuronHWC2HWC4BufferC4 : MPSCNNKernel {
    id<MTLComputePipelineState> m_float2half_hwc4;
    id<MTLComputePipelineState> m_half2float_hwc4;
    id<MTLComputePipelineState> m_hwc2tohwc4;
    id<MTLComputePipelineState> m_hwc4tohwc;
    id<MTLComputePipelineState> m_hwcHalf2tohwc4;
    id<MTLComputePipelineState> m_hwc4tohwcHalf;
    id<MTLComputePipelineState> m_hwcTextureToHwc4Texture;
    id<MTLComputePipelineState> m_hwc4TextureToHwcTexture;
    id<MTLComputePipelineState> m_hwcTextureToHwc4Buffer;
    id<MTLComputePipelineState> m_hwc4BufferToHwcTexture;
}

- (id)getHwc2hwc4PipelineState;
- (id)getHwc42hwcPipelineState;
- (void)encodeHwc_to_hwc4:(id)arg0 sourceBuffer:(id)arg1 destinationBuffer:(id)arg2 para:(id)arg3 outh:(int)arg4 outw:(int)arg5 batch:(int)arg6;
- (void)encodeHwc_to_hwc4_tuned:(id)arg0 sourceBuffer:(id)arg1 destinationBuffer:(id)arg2 para:(id)arg3;
- (void)encodeToCommandBufferfloat2half_hwc4:(id)arg0 encoder:(id)arg1 sourceBuffer:(id)arg2 destinationBuffer:(id)arg3 para:(id)arg4 outh:(int)arg5 outw:(int)arg6 batch:(int)arg7;
- (void)encodeToCommandBufferhalf2float_hwc4:(id)arg0 encoder:(id)arg1 sourceBuffer:(id)arg2 destinationBuffer:(id)arg3 para:(id)arg4 outh:(int)arg5 outw:(int)arg6 batch:(int)arg7;
- (void)encodeToCommandBuffer:(id)arg0 encoder:(id)arg1 sourceBuffer:(id)arg2 destinationBuffer:(id)arg3 para:(id)arg4 outh:(int)arg5 outw:(int)arg6 batch:(int)arg7;
- (void)encodeHwc2Hwc4:(id)arg0 sourceBuffer:(id)arg1 destinationBuffer:(id)arg2 params:(id)arg3 threads:(struct pair<MTLSize, MTLSize> { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })arg4 dispatchThreads:(BOOL)arg5;
- (void)encodeHwcHalf2Hwc4:(id)arg0 sourceBuffer:(id)arg1 destinationBuffer:(id)arg2 params:(id)arg3 threads:(struct pair<MTLSize, MTLSize> { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })arg4 dispatchThreads:(BOOL)arg5;
- (void)encodeToCommandBufferfloat2half_hwc4:(id)arg0 sourceBuffer:(id)arg1 destinationBuffer:(id)arg2 para:(id)arg3 outh:(int)arg4 outw:(int)arg5 batch:(int)arg6;
- (void)encodeToCommandBufferhalf2float_hwc4:(id)arg0 sourceBuffer:(id)arg1 destinationBuffer:(id)arg2 para:(id)arg3 outh:(int)arg4 outw:(int)arg5 batch:(int)arg6;
- (void)encodeToCommandBuffer:(id)arg0 sourceBuffer:(id)arg1 destinationBuffer:(id)arg2 para:(id)arg3 outh:(int)arg4 outw:(int)arg5 batch:(int)arg6;
- (void)encodeToCommandBufferhwc_to_hwc4:(id)arg0 sourceBuffer:(id)arg1 destinationBuffer:(id)arg2 para:(id)arg3 outh:(int)arg4 outw:(int)arg5 batch:(int)arg6;
- (void)encodeToCommandBufferhwc_to_hwc4:(id)arg0 encoder:(id)arg1 sourceBuffer:(id)arg2 destinationBuffer:(id)arg3 para:(id)arg4 outh:(int)arg5 outw:(int)arg6 batch:(int)arg7;
- (void)encodeToCommandBufferhwc4_buffer_to_hwc_texture:(id)arg0 encoder:(id)arg1 sourceBuffer:(id)arg2 destinationTexture:(id)arg3 para:(id)arg4 outh:(int)arg5 outw:(int)arg6 batch:(int)arg7;
- (void)encodeToCommandBufferhwc_texture_to_hwc4_texture:(id)arg0 encoder:(id)arg1 sourceBuffer:(id)arg2 destinationBuffer:(id)arg3 para:(id)arg4 outh:(int)arg5 outw:(int)arg6 batch:(int)arg7;
- (void)encodeToCommandBufferhwc_texture_to_hwc4_buffer:(id)arg0 encoder:(id)arg1 sourceTexture:(id)arg2 destinationBuffer:(id)arg3 para:(id)arg4 outh:(int)arg5 outw:(int)arg6 batch:(int)arg7;
- (void).cxx_destruct;
- (id)initWithDevice:(id)arg0 library:(id)arg1;

@end