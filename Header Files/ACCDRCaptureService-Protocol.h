//
//     Generated by private class-dump
//

@protocol ACCDRCaptureService <ACCServiceBindable>

- (void)openCamera;
- (void)openCameraWithAudioCert:(id)arg0 videoCert:(id)arg1;
- (void)openCameraVideoAndAudioCapture;
- (void)closeCameraWithAudioCert:(id)arg0 videoCert:(id)arg1;
- (void)switchCameraPosition;
- (void)takeCameraPictureComplete:(id /* block */)arg0;
- (void)exitRecorderCloseCameraWithAudioCert:(id)arg0 videoCert:(id)arg1;

@end