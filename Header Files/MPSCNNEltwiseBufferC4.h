//
//     Generated by private class-dump
//

@protocol MTLComputePipelineState;

@interface MPSCNNEltwiseBufferC4 : MPSCNNKernel {
    id<MTLComputePipelineState> m_eltwise;
}

- (void)encode:(id)arg0 input0:(id)arg1 input1:(id)arg2 outputs:(id)arg3 params:(id)arg4 threads:(struct pair<MTLSize, MTLSize> { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })arg5 dispatchThreads:(BOOL)arg6;
- (void).cxx_destruct;
- (id)initWithDevice:(id)arg0 library:(id)arg1;
- (id)getPipelineState;

@end
