//
//     Generated by private class-dump
//

@protocol MTLComputePipelineState;

@interface MPSCNNSescaleBufferC4 : MPSCNNKernel {
    id<MTLComputePipelineState> m_sescale;
}

- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })getGridSize:(id)arg0;
- (void)encode:(id)arg0 input0:(id)arg1 input1:(id)arg2 outputs:(id)arg3 params:(id)arg4;
- (void).cxx_destruct;
- (id)initWithDevice:(id)arg0 library:(id)arg1;
- (id)getPipelineState;

@end
