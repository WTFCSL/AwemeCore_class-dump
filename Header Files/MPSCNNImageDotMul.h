//
//     Generated by private class-dump
//

@protocol MTLComputePipelineState;

@interface MPSCNNImageDotMul : MPSCNNKernel {
    id<MTLComputePipelineState> m_imageDotMul;
    id<MTLComputePipelineState> m_imageDotMulArray;
}

- (void).cxx_destruct;
- (void)encodeToCommandBuffer:(id)arg0 sourceImage:(id)arg1 destinationImage:(id)arg2;
- (id)initWithDevice:(id)arg0 library:(id)arg1;

@end
