//
//     Generated by private class-dump
//

@protocol MTLComputePipelineState;

@interface MPSCNNOnnxop1BufferC4 : MPSCNNKernel {
    id<MTLComputePipelineState> m_onnxop1_buffer;
}

- (void)encode:(id)arg0 input0:(id)arg1 output:(id)arg2 params:(id)arg3;
- (id)initWithDevice:(id)arg0 library:(id)arg1 optype:(int)arg2;
- (void).cxx_destruct;
- (id)getPipelineState;

@end
