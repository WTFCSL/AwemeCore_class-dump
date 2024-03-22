//
//     Generated by private class-dump
//

@protocol MTLComputePipelineState;

@interface MPSCNNPoolingBufferC4 : MPSCNNKernel {
    id<MTLComputePipelineState> m_pooling_buffer_max;
    id<MTLComputePipelineState> m_pooling_buffer_avg;
    id<MTLComputePipelineState> m_pooling_buffer_global_max;
    id<MTLComputePipelineState> m_pooling_buffer_global_avg;
}

- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })getGridSize:(id)arg0;
- (id)getPipelineState:(int)arg0 global:(BOOL)arg1;
- (struct pair<MTLSize, MTLSize> { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })getGridSizeGlobal:(id)arg0;
- (void)encode:(id)arg0 state:(id)arg1 input:(id)arg2 output:(id)arg3 param:(id)arg4;
- (void).cxx_destruct;
- (id)initWithDevice:(id)arg0 library:(id)arg1;

@end
