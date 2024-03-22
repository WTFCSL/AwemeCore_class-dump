//
//     Generated by private class-dump
//

@protocol MTLComputePipelineState;

@interface MPSCNNNeuronBNBufferC4 : MPSCNNKernel {
    id<MTLComputePipelineState> m_relu;
}

- (void)encode:(id)arg0 sourceBuffer:(id)arg1 destinationBuffer:(id)arg2 gamma:(id)arg3 beta:(id)arg4 reluPara:(id)arg5;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })getGridSize:(int)arg0 outh:(int)arg1 outw:(int)arg2 outc:(int)arg3;
- (void).cxx_destruct;
- (id)initWithDevice:(id)arg0 library:(id)arg1;
- (id)getPipelineState;

@end