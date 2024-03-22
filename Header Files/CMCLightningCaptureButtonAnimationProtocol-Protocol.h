//
//     Generated by private class-dump
//

@protocol CMCCaptureButtonAnimationViewDelegate;

@protocol CMCLightningCaptureButtonAnimationProtocol <CMCCaptureButtonAnimationProtocol>

@property (weak, nonatomic) id<CMCCaptureButtonAnimationViewDelegate> delegate;

- (void)updateAnimatedRecordButtonCenter:(struct CGPoint { double x0; double x1; })arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@optional

- (void)executeTouchesBeganTask;
- (void)executeTouchesEndTask;

@end
