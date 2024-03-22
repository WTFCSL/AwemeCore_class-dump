//
//     Generated by private class-dump
//

@protocol MTLComputePipelineState;

@interface MPSCNNUpsampleBufferC4 : MPSCNNKernel {
    id<MTLComputePipelineState> m_upsample;
}

- (id)initWithDevice:(id)arg0 library:(id)arg1 resizeType:(int)arg2;
- (void)encode:(id)arg0 sourceBuffer:(id)arg1 destinationBuffer:(id)arg2 params:(id)arg3 threads:(struct pair<MTLSize, MTLSize> { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })arg4 dispatchThreads:(BOOL)arg5;
- (void).cxx_destruct;
- (id)getPipelineState;

@end