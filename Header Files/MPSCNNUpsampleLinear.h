//
//     Generated by private class-dump
//

@protocol MTLComputePipelineState, MTLBuffer;

@interface MPSCNNUpsampleLinear : MPSCNNKernel {
    id<MTLComputePipelineState> m_upsampleBilinear;
    id<MTLComputePipelineState> m_upsampleBilinearArray;
    id<MTLBuffer> m_halfPixel;
}

- (id)initWithDevice:(id)arg0 library:(id)arg1 resizeType:(int)arg2 alignCorner:(BOOL)arg3 halfPixel:(BOOL)arg4;
- (void)encodeToCommandBufferx:(id)arg0 sourceImage:(id)arg1 destinationImage:(id)arg2;
- (void).cxx_destruct;

@end
