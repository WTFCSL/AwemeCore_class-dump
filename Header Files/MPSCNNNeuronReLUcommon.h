//
//     Generated by private class-dump
//

@protocol MTLComputePipelineState;

@interface MPSCNNNeuronReLUcommon : MPSCNNKernel {
    id<MTLComputePipelineState> m_commonrelu;
    id<MTLComputePipelineState> m_commonrelu_array;
}

- (void)encodeToCommandBuffer:(id)arg0 sourceImage:(id)arg1 destinationImage:(id)arg2 reluType:(id)arg3 reluMax:(id)arg4 reluSlope:(id)arg5;
- (void).cxx_destruct;
- (id)initWithDevice:(id)arg0 library:(id)arg1;

@end
