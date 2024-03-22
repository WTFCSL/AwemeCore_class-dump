//
//     Generated by private class-dump
//

@protocol MTLComputePipelineState;

@interface MPSCNNReduce : MPSCNNKernel {
    id<MTLComputePipelineState> m_reduce;
    id<MTLComputePipelineState> m_reduce_in_array;
    int m_array_size;
    int m_reduceType;
}

- (id)initWithDevice:(id)arg0 library:(id)arg1 reduce_type:(int)arg2 channel_type:(int)arg3 array_size:(int)arg4;
- (void)encodeToCommandBuffer:(id)arg0 sourceImage:(id)arg1 destinationImage:(id)arg2 channel_type:(int)arg3 param:(id)arg4;
- (void).cxx_destruct;

@end
