//
//     Generated by private class-dump
//

@protocol MTLComputePipelineState;

@interface MPSCNNDepth2SpaceBufferC4 : MPSCNNKernel {
    id<MTLComputePipelineState> m_depth2space;
}

- (void)encode:(id)arg0 input:(id)arg1 output:(id)arg2 param:(id)arg3 threads:(struct pair<MTLSize, MTLSize> { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })arg4 dispatchThreads:(BOOL)arg5;
- (id)initWithDevice:(id)arg0 library:(id)arg1 type:(int)arg2;
- (void).cxx_destruct;
- (id)getPipelineState;

@end