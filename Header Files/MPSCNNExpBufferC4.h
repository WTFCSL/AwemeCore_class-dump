//
//     Generated by private class-dump
//

@protocol MTLComputePipelineState;

@interface MPSCNNExpBufferC4 : MPSCNNKernel {
    id<MTLComputePipelineState> m_exp_buffer;
}

- (void)encode:(id)arg0 input0:(id)arg1 output:(id)arg2 params:(id)arg3;
- (void).cxx_destruct;
- (id)initWithDevice:(id)arg0 library:(id)arg1;
- (id)getPipelineState;

@end
