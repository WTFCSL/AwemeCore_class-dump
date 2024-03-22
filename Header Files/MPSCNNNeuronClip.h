//
//     Generated by private class-dump
//

@protocol MTLComputePipelineState;

@interface MPSCNNNeuronClip : MPSCNNKernel {
    id<MTLComputePipelineState> m_clip;
    id<MTLComputePipelineState> m_clip_array;
}

- (void)encodeToCommandBuffer:(id)arg0 sourceImage:(id)arg1 destinationImage:(id)arg2 clipParam:(id)arg3;
- (void).cxx_destruct;
- (id)initWithDevice:(id)arg0 library:(id)arg1;

@end
