//
//     Generated by private class-dump
//

@protocol MTLComputePipelineState;

@interface MPSCNNCrop : MPSCNNKernel {
    id<MTLComputePipelineState> m_crop;
    id<MTLComputePipelineState> m_crop_in_array;
    id<MTLComputePipelineState> m_crop_array;
}

- (void)encodeToCommandBuffer:(id)arg0 sourceImage:(id)arg1 destinationImage:(id)arg2 params:(id)arg3;
- (void).cxx_destruct;
- (id)initWithDevice:(id)arg0 library:(id)arg1;

@end
