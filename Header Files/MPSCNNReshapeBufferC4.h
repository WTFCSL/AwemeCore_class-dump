//
//     Generated by private class-dump
//

@protocol MTLComputePipelineState;

@interface MPSCNNReshapeBufferC4 : MPSCNNKernel {
    id<MTLComputePipelineState> m_reshape_buffer;
}

- (id)initWithDevice:(id)arg0 library:(id)arg1 is_nchw:(BOOL)arg2;
- (void)encode:(id)arg0 input:(id)arg1 output:(id)arg2 params:(id)arg3;
- (void).cxx_destruct;
- (id)getPipelineState;

@end