//
//     Generated by private class-dump
//

@protocol MTLComputePipelineState;

@interface MPSCNNInstanceNorm : MPSCNNKernel {
    id<MTLComputePipelineState> m_func;
    id<MTLComputePipelineState> m_funcArray;
}

- (void)encodeToCommandBuffer:(id)arg0 sourceImage:(id)arg1 meanImage:(id)arg2 varImage:(id)arg3 destinationImage:(id)arg4 affine:(id)arg5 eps:(id)arg6 gamma:(id)arg7 beta:(id)arg8;
- (void).cxx_destruct;
- (id)initWithDevice:(id)arg0 library:(id)arg1;

@end