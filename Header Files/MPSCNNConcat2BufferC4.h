//
//     Generated by private class-dump
//

@protocol MTLComputePipelineState;

@interface MPSCNNConcat2BufferC4 : MPSCNNKernel {
    id<MTLComputePipelineState> m_concat2_buffer;
}

- (id)initWithDevice:(id)arg0 library:(id)arg1 concat_type:(int)arg2 concat_num:(int)arg3;
- (void)encode:(id)arg0 input0:(id)arg1 input1:(id)arg2 output:(id)arg3 params:(id)arg4 threads:(struct pair<MTLSize, MTLSize> { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })arg5 dispatchThreads:(BOOL)arg6;
- (void)encode:(id)arg0 input0:(id)arg1 input1:(id)arg2 input2:(id)arg3 output:(id)arg4 params:(id)arg5 threads:(struct pair<MTLSize, MTLSize> { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })arg6 dispatchThreads:(BOOL)arg7;
- (void).cxx_destruct;
- (id)getPipelineState;

@end
