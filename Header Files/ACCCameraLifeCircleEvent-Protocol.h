//
//     Generated by private class-dump
//

@protocol ACCCameraLifeCircleEvent <NSObject>

@optional

- (void)cameraService:(id)arg0 didRecordReadyWithError:(id)arg1;
- (void)cameraService:(id)arg0 startVideoCaptureWithError:(id)arg1;
- (void)cameraService:(id)arg0 stopVideoCaptureWithError:(id)arg1;
- (void)cameraService:(id)arg0 didChangeDuration:(double)arg1 totalDuration:(double)arg2;
- (void)onCreateCameraCompleteWithCamera:(id)arg0;
- (void)cameraService:(id)arg0 pauseRecordWithError:(id)arg1;
- (void)cameraService:(id)arg0 startRecordWithError:(id)arg1;
- (void)cameraService:(id)arg0 didReachMaxTimeVideoRecordWithError:(id)arg1;
- (void)onCameraFirstFrameDidRender:(id)arg0;
- (void)onCameraDidStartRender:(id)arg0;
- (void)cameraService:(id)arg0 didTakeAction:(long long)arg1 error:(id)arg2 data:(id)arg3;
- (void)cameraService:(id)arg0 didChangeBGMProgress:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg1;

@end
