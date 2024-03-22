//
//     Generated by private class-dump
//

@protocol MTLComputePipelineState;

@interface MPSCNNEltwise : MPSCNNKernel {
    id<MTLComputePipelineState> m_eltwise;
    id<MTLComputePipelineState> m_eltwiseRelu;
    id<MTLComputePipelineState> m_eltwiseArray;
    id<MTLComputePipelineState> m_eltwiseArrayRelu;
    BOOL m_relu;
}

- (id)initWithDevice:(id)arg0 library:(id)arg1 relu:(BOOL)arg2;
- (void)encodeToCommandBuffer:(id)arg0 sourceImage:(id)arg1 sourceImage2:(id)arg2 destinationImage:(id)arg3;
- (void).cxx_destruct;

@end
