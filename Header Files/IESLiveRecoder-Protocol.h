//
//     Generated by private class-dump
//

@class NSString;

@protocol IESLiveRecoder <NSObject>

@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) long long currentCameraPosition;
@property (nonatomic) long long cameraFlashMode;
@property (nonatomic) BOOL ignoreNotification;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } outputSize;
@property (readonly, nonatomic) NSString *currentSessionPreset;
@property (readonly, nonatomic) unsigned long long preferedFrameRate;
@property (readonly, nonatomic) NSString *deviceType;

- (long long)currentCameraPosition;
- (double)currentCameraZoomFactor;
- (BOOL)ignoreNotification;
- (void)setIgnoreNotification:(BOOL)arg0;
- (void)runDirtyCameraDetectAlgorithmWithCompletion:(id /* block */)arg0;
- (void)resetDirtyCameraDetectCount:(int)arg0 back:(int)arg1;
- (void)turnLensCombinedEnhanceAlgorithm:(BOOL)arg0;
- (void)setVideoProcessedBufferCallback:(id /* block */)arg0;
- (void)setPureModeReturnWithLens:(BOOL)arg0;
- (unsigned long long)preferedFrameRate;
- (void)startVideoCaptureWithPrivacyCert:(id)arg0 source:(long long)arg1;
- (void)startAudioCaptureWithPrivacyCert:(id)arg0 source:(long long)arg1;
- (void)stopVideoCaptureWithPrivacyCert:(id)arg0 source:(long long)arg1;
- (void)stopAudioCaptureWithPrivacyCert:(id)arg0 source:(long long)arg1;
- (BOOL)cameraSetZoomFactor:(double)arg0 source:(long long)arg1;
- (void)switchCameraSourceWithTrigger:(long long)arg0;
- (void)enableFrontCameraMirrored:(BOOL)arg0 source:(long long)arg1;
- (void)setTorchOn:(BOOL)arg0 source:(long long)arg1;
- (void)setPureCameraMode:(BOOL)arg0 source:(long long)arg1;
- (id)resetPreviewView:(id)arg0 source:(long long)arg1;
- (void)resetContextWithSource:(long long)arg0;
- (void)setCameraParamWithConfig:(struct { struct CGSize { double x0; double x1; } x0; unsigned long long x1; })arg0 source:(long long)arg1;
- (struct { struct CGSize { double x0; double x1; } x0; unsigned long long x1; })getCameraParamConfig;
- (void)resetPreferredFrameRate:(unsigned long long)arg0 source:(long long)arg1;
- (void)resetOutputSize:(struct CGSize { double x0; double x1; })arg0 source:(long long)arg1;
- (void)setVideoBufferCallbackWithSource:(long long)arg0 callback:(id /* block */)arg1;
- (void)resetCapturePreset:(id)arg0 source:(long long)arg1 then:(id /* block */)arg2;
- (void)setFishEyeRecoderConfigWithPreset:(id)arg0 outputSize:(struct CGSize { double x0; double x1; })arg1 source:(long long)arg2;
- (void)setNormalLiveRecoderConfigWithPreset:(id)arg0 outputSize:(struct CGSize { double x0; double x1; })arg1 source:(long long)arg2;
- (void)setCustomRecoderPreset:(id)arg0 outputSize:(struct CGSize { double x0; double x1; })arg1 source:(long long)arg2;
- (void)setPreferredBackZoomFactor:(double)arg0 source:(long long)arg1;
- (void)cameraIsolateConfigWithCameraPosition:(long long)arg0 cert:(id)arg1 cameraComplete:(id /* block */)arg2;
- (BOOL)checkConfig:(id)arg0 source:(long long)arg1;
- (void)setRecorderConfig:(id)arg0 source:(long long)arg1 cameraComplete:(id /* block */)arg2;
- (id)currentSessionPreset;
- (id)deviceType;
- (long long)status;
- (struct CGSize { double x0; double x1; })outputSize;
- (long long)cameraFlashMode;
- (void)setCameraFlashMode:(long long)arg0;

@optional

- (double)maxCameraZoomFactor;
- (double)maxExposureBias;
- (double)minExposureBias;
- (void)changeExposureBias:(double)arg0;
- (void)tapFocusAtPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)resetFocusMode:(long long)arg0 point:(struct CGPoint { double x0; double x1; })arg1;
- (void)tapExposureAtPoint:(struct CGPoint { double x0; double x1; })arg0;
- (id)supportedBaseFocalLengthArray;
- (BOOL)cameraTorchOn;
- (float)currentCameraISO;
- (void)setExposureByFaceDetectOn:(BOOL)arg0 source:(long long)arg1;
- (void)setStablizationMode:(long long)arg0 source:(long long)arg1;
- (BOOL)isCameraCapabilitySupportedZoom;
- (void)setMaxZoomFactor:(double)arg0 Source:(long long)arg1;
- (BOOL)cameraRampToZoomFactor:(double)arg0 withRate:(double)arg1 Source:(long long)arg2;
- (double)exposureBias;

@end
