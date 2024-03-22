//
//     Generated by private class-dump
//

@protocol MTLComputePipelineState;

@interface MPSCNNReshape : MPSCNNKernel {
    id<MTLComputePipelineState> m_reshape;
    id<MTLComputePipelineState> m_reshape_array;
    id<MTLComputePipelineState> m_reshape_out_array;
    id<MTLComputePipelineState> m_reshape_in_array;
}

- (void)encodeToCommandBuffer:(id)arg0 input:(id)arg1 output:(id)arg2 channels:(id)arg3;
- (void).cxx_destruct;
- (id)initWithDevice:(id)arg0 library:(id)arg1;

@end