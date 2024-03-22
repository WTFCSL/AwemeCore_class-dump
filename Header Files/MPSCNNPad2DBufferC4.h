//
//     Generated by private class-dump
//

@protocol MTLComputePipelineState;

@interface MPSCNNPad2DBufferC4 : MPSCNNKernel {
    id<MTLComputePipelineState> m_pad2d_buffer_c4;
}

- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })getGridSize:(id)arg0;
- (void)encode:(id)arg0 input:(id)arg1 output:(id)arg2 param:(id)arg3;
- (id)initWithDevice:(id)arg0 library:(id)arg1 padType:(int)arg2;
- (void).cxx_destruct;
- (id)getPipelineState;

@end
