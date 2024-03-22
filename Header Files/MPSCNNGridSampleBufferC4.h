//
//     Generated by private class-dump
//

@protocol MTLComputePipelineState;

@interface MPSCNNGridSampleBufferC4 : MPSCNNKernel {
    id<MTLComputePipelineState> m_grid_sample_buffer_c4;
}

- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })getGridSize:(id)arg0;
- (void)encode:(id)arg0 input:(id)arg1 grid:(id)arg2 output:(id)arg3 param:(id)arg4;
- (id)initWithDevice:(id)arg0 library:(id)arg1 mode:(int)arg2;
- (void).cxx_destruct;
- (id)getPipelineState;

@end
