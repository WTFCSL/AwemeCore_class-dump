//
//     Generated by private class-dump
//

@protocol MTLComputePipelineState;

@interface MPSCNNNeuronConvC4common : MPSCNNKernel {
    id<MTLComputePipelineState> m_commonconv;
}

- (void)encodeToCommandBuffer:(id)arg0 sourceImage:(id)arg1 weightImage:(id)arg2 biasmage:(id)arg3 destinationImage:(id)arg4 reluFlag:(id)arg5 reluType:(id)arg6 reluMax:(id)arg7 reluSlope:(id)arg8 inHeight:(id)arg9 inWidth:(id)arg10 inChannelBlocks:(id)arg11 outHeight:(id)arg12 outWidth:(id)arg13 kernelH:(id)arg14 kernelW:(id)arg15 strideH:(id)arg16 strideW:(id)arg17 padT:(id)arg18 padL:(id)arg19 dilationH:(id)arg20 dilationW:(id)arg21 biasFlag:(id)arg22 widthBlocks:(id)arg23 conv_outh:(int)arg24 conv_outw:(int)arg25 conv_outc:(int)arg26;
- (void).cxx_destruct;
- (id)initWithDevice:(id)arg0 library:(id)arg1;

@end
