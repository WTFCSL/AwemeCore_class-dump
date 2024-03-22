//
//     Generated by private class-dump
//

@protocol MTLComputePipelineState;

@interface MPSCNNUpsample : MPSCNNKernel {
    id<MTLComputePipelineState> m_upsample_nearest;
    id<MTLComputePipelineState> m_upsample_nearest_array;
}

- (void)encodeToCommandBuffer:(id)arg0 sourceImage:(id)arg1 destinationImage:(id)arg2 params:(id)arg3;
- (void).cxx_destruct;
- (id)initWithDevice:(id)arg0 library:(id)arg1;

@end