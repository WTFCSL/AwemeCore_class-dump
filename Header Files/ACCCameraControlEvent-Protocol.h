//
//     Generated by private class-dump
//

@protocol ACCCameraControlEvent <NSObject>

@optional

- (void)currentCameraPositionChanged:(long long)arg0;
- (void)onWillManuallyAdjustFocusPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)onDidManuallyAdjustFocusPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)onWillManuallyAdjustExposurePoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)onDidManuallyAdjustExposurePoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)onWillManuallyAdjustFocusAndExposurePoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)onDidManuallyAdjustFocusAndExposurePoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)onWillManuallyAdjustExposureBiasWithRatio:(float)arg0 exposureRatio:(float)arg1;
- (void)onDidManuallyAdjustExposureBiasWithRatio:(float)arg0 exposureRatio:(float)arg1;
- (void)onWillSwitchToCameraPosition:(long long)arg0;
- (void)onDidSwitchToCameraPosition:(long long)arg0;
- (void)onDidInitAudioCapture;
- (void)onWillReleaseAudioCapture;
- (void)onDidReleaseAudioCapture;
- (void)onDidStopVideoCapture:(BOOL)arg0;
- (void)flashModeChanged:(unsigned long long)arg0;
- (void)isTorchEnableChanged:(BOOL)arg0;
- (void)torchModeChanged:(unsigned long long)arg0;
- (void)isFlashEnableChanged:(BOOL)arg0;

@end
