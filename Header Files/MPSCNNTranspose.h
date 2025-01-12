//
//     Generated by private class-dump
//

@protocol MTLComputePipelineState;

@interface MPSCNNTranspose : MPSCNNKernel {
    id<MTLComputePipelineState> m_transpose;
    id<MTLComputePipelineState> m_image_to_buffer;
    id<MTLComputePipelineState> m_buffer_to_image;
    id<MTLComputePipelineState> m_image_to_buffer_array;
    id<MTLComputePipelineState> m_buffer_to_image_array;
}

- (void)encodeToCommandBuffer:(id)arg0 input:(id)arg1 output:(id)arg2 transposeIn:(id)arg3 transposeOut:(id)arg4 params:(id)arg5 transposeGlobalSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })arg6;
- (void).cxx_destruct;
- (id)initWithDevice:(id)arg0 library:(id)arg1;

@end
