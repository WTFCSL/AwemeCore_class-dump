//
//     Generated by private class-dump
//

@protocol MTLComputePipelineState;

@interface MPSCNNMatrixMulBufferC4 : MPSCNNKernel {
    id<MTLComputePipelineState> m_matrix_mul_buffer_c4;
    id<MTLComputePipelineState> m_transpose_buffer_c4;
}

- (void)encodeToCommandBuffer:(id)arg0 input0:(id)arg1 input1:(id)arg2 output:(id)arg3 param:(id)arg4;
- (void)encodeToCommandBuffer:(id)arg0 input:(id)arg1 output:(id)arg2 param:(id)arg3;
- (void)encode:(id)arg0 input0:(id)arg1 input1:(id)arg2 output:(id)arg3 param:(id)arg4;
- (void)encode:(id)arg0 input:(id)arg1 output:(id)arg2 param:(id)arg3;
- (void).cxx_destruct;
- (id)initWithDevice:(id)arg0 library:(id)arg1;

@end
