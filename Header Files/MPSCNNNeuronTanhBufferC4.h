//
//     Generated by private class-dump
//

@protocol MTLComputePipelineState;

@interface MPSCNNNeuronTanhBufferC4 : MPSCNNKernel {
    id<MTLComputePipelineState> m_tanh;
}

- (void)encode:(id)arg0 sourceBuffer:(id)arg1 destinationBuffer:(id)arg2 inputShape:(id)arg3;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })getGridSize:(int)arg0;
- (void).cxx_destruct;
- (id)initWithDevice:(id)arg0 library:(id)arg1;
- (id)getPipelineState;

@end
