//
//     Generated by private class-dump
//

@class IESMMARConfigurablePropertySet, IESMMCameraConfig, NSString, NSArray, UIView, HTSGLFilterGroup;
@protocol IESMMCameraWhiteBalanceProtocol, IESMMEffectGroupProtocol;

@protocol VECameraProtocol <NSObject>

+ (BOOL)isMultiCamSupported;

@property (nonatomic, retain) IESMMCameraConfig *config;
@property (nonatomic) long long status;
@property (nonatomic) void *cameraContext;
@property (nonatomic, readonly) long long cameraType;
@property (nonatomic) long long preferredCameraType;
@property (nonatomic, copy) id /* block */ onCameraTypeDidChangeBlock;
@property (nonatomic) long long previewModeType;
@property (nonatomic, readonly) UIView *previewContainer;
@property (nonatomic, readonly) UIView *previewView;
@property (nonatomic) unsigned long long outputRotationMode;
@property (nonatomic) unsigned long long previewRotationMode;
@property (nonatomic) BOOL isSpecialTreatPresetPhoto;
@property (nonatomic, readonly) long long captureRatio;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } captureSize;
@property (nonatomic) struct CGSize { double x0; double x1; } outputSize;
@property (nonatomic) struct CGSize { double x0; double x1; } effectRenderSize;
@property (nonatomic) BOOL enableMultiCaptureRatioResolutionAlign;
@property (nonatomic) struct CGSize { double x0; double x1; } multiCaptureRatioAlignmenResolution;
@property (nonatomic, copy) id /* block */ firstEffectRenderBlock;
@property (nonatomic, copy) id /* block */ firstRenderBlock;
@property (nonatomic, copy) id /* block */ multiCamFirstRenderBlock;
@property (nonatomic, copy) id /* block */ musicPlayDidEndBlock;
@property (nonatomic) BOOL ignoreNotification;
@property (nonatomic, copy) id /* block */ IESCameraActionBlock;
@property (nonatomic, copy) id /* block */ IESCameraActionBlock;
@property (nonatomic) BOOL enableMonitor;
@property (nonatomic, copy) id /* block */ monitorUpdateBlock;
@property (nonatomic, readonly) NSString *deviceType;
@property (nonatomic, readonly) long long currentCameraPosition;
@property (nonatomic) long long orientation;
@property (nonatomic) BOOL torchOn;
@property (nonatomic, readonly) BOOL captureIsRunning;
@property (nonatomic, readonly) BOOL isCaptureInterruptted;
@property (nonatomic) long long cameraFlashMode;
@property (nonatomic) long long cameraStablizationMode;
@property (nonatomic) long long frontPreferredStabilizationMode;
@property (nonatomic) long long rearPreferredStabilizationMode;
@property (nonatomic, readonly) float ISO;
@property (nonatomic, readonly) float ISO;
@property (nonatomic, readonly) float minISO;
@property (nonatomic, readonly) float maxISO;
@property (nonatomic, copy) id /* block */ ISOChangeBlock;
@property (nonatomic, copy) id /* block */ ISOChangeBlock;
@property (nonatomic) BOOL disableFaceDetectReferCamera;
@property (nonatomic) BOOL autoZoomWithAlgorithm;
@property (nonatomic, readonly) double videoZoomFactorUpscaleThreshold;
@property (nonatomic, readonly) NSArray *virtualDeviceSwitchOverVideoZoomFactors;
@property (nonatomic, readonly) double minAvailableVideoZoomFactor;
@property (nonatomic, readonly) double maxAvailableVideoZoomFactor;
@property (nonatomic, readonly) id<IESMMCameraWhiteBalanceProtocol> wbObj;
@property (nonatomic) int pictureNum;
@property (nonatomic) BOOL useEffectRecognize;
@property (nonatomic) BOOL effectNodeInAudioChainIsOn;
@property (nonatomic, readonly) HTSGLFilterGroup<IESMMEffectGroupProtocol> *effectFilter;
@property (nonatomic, copy) id /* block */ messageHandler;
@property (nonatomic, copy) id /* block */ effectBitmapRequestBlock;
@property (nonatomic) BOOL notNeedAutoStartAudioCapture;
@property (nonatomic) long long cameraMode;
@property (nonatomic, retain) IESMMARConfigurablePropertySet *propertySet;

- (void)releaseAudioCapture;
- (void)pauseCameraCapture;
- (void)resumeCameraCapture;
- (long long)currentCameraPosition;
- (void)switchCameraFormatToDolbyVision:(BOOL)arg0;
- (void)switchCameraFormatToDolbyVision:(BOOL)arg0;
- (id)currentDeviceFormats;
- (void)setDeviceFormat:(id)arg0 then:(id /* block */)arg1;
- (double)maxExposureBias;
- (double)minExposureBias;
- (void)changeExposureBias:(double)arg0;
- (long long)frontPreferredStabilizationMode;
- (void)setFrontPreferredStabilizationMode:(long long)arg0;
- (long long)rearPreferredStabilizationMode;
- (void)setRearPreferredStabilizationMode:(long long)arg0;
- (BOOL)effectNodeInAudioChainIsOn;
- (void)setEffectNodeInAudioChainIsOn:(BOOL)arg0;
- (id)effectFilter;
- (id /* block */)effectBitmapRequestBlock;
- (void)setEffectBitmapRequestBlock:(id /* block */)arg0;
- (void)switchCameraSource;
- (void)setAutoZoomWithAlgorithm:(BOOL)arg0;
- (void)setCameraInfoBlock:(id /* block */)arg0 withCameraInfoRequirement:(unsigned long long)arg1;
- (void)setIESCameraActionBlock:(id /* block */)arg0;
- (void)setIESCameraActionBlock:(id /* block */)arg0;
- (void *)cameraContext;
- (void)setCameraContext:(void *)arg0;
- (long long)preferredCameraType;
- (void)setPreferredCameraType:(long long)arg0;
- (id /* block */)onCameraTypeDidChangeBlock;
- (void)setOnCameraTypeDidChangeBlock:(id /* block */)arg0;
- (unsigned long long)outputRotationMode;
- (void)setOutputRotationMode:(unsigned long long)arg0;
- (unsigned long long)previewRotationMode;
- (void)setPreviewRotationMode:(unsigned long long)arg0;
- (BOOL)isSpecialTreatPresetPhoto;
- (void)setIsSpecialTreatPresetPhoto:(BOOL)arg0;
- (long long)captureRatio;
- (struct CGSize { double x0; double x1; })captureSize;
- (struct CGSize { double x0; double x1; })effectRenderSize;
- (void)setEffectRenderSize:(struct CGSize { double x0; double x1; })arg0;
- (BOOL)enableMultiCaptureRatioResolutionAlign;
- (void)setEnableMultiCaptureRatioResolutionAlign:(BOOL)arg0;
- (struct CGSize { double x0; double x1; })multiCaptureRatioAlignmenResolution;
- (void)setMultiCaptureRatioAlignmenResolution:(struct CGSize { double x0; double x1; })arg0;
- (id /* block */)firstEffectRenderBlock;
- (void)setFirstEffectRenderBlock:(id /* block */)arg0;
- (id /* block */)firstRenderBlock;
- (void)setFirstRenderBlock:(id /* block */)arg0;
- (id /* block */)multiCamFirstRenderBlock;
- (void)setMultiCamFirstRenderBlock:(id /* block */)arg0;
- (id /* block */)musicPlayDidEndBlock;
- (void)setMusicPlayDidEndBlock:(id /* block */)arg0;
- (BOOL)ignoreNotification;
- (void)setIgnoreNotification:(BOOL)arg0;
- (id /* block */)IESCameraActionBlock;
- (id /* block */)IESCameraActionBlock;
- (BOOL)enableMonitor;
- (void)setEnableMonitor:(BOOL)arg0;
- (id /* block */)monitorUpdateBlock;
- (void)setMonitorUpdateBlock:(id /* block */)arg0;
- (BOOL)captureIsRunning;
- (BOOL)isCaptureInterruptted;
- (BOOL)isSupportFlashMode:(long long)arg0;
- (BOOL)isSupportFlashMode:(long long)arg0;
- (long long)cameraStablizationMode;
- (void)setCameraStablizationMode:(long long)arg0;
- (id /* block */)ISOChangeBlock;
- (id /* block */)ISOChangeBlock;
- (void)setISOChangeBlock:(id /* block */)arg0;
- (void)setISOChangeBlock:(id /* block */)arg0;
- (BOOL)disableFaceDetectReferCamera;
- (void)setDisableFaceDetectReferCamera:(BOOL)arg0;
- (BOOL)autoZoomWithAlgorithm;
- (id)wbObj;
- (int)pictureNum;
- (void)setPictureNum:(int)arg0;
- (BOOL)useEffectRecognize;
- (void)setUseEffectRecognize:(BOOL)arg0;
- (BOOL)notNeedAutoStartAudioCapture;
- (void)setNotNeedAutoStartAudioCapture:(BOOL)arg0;
- (id)getRealTimeCaptureFrameRate;
- (id)initWithView:(id)arg0 config:(id)arg1 cameraComplete:(id /* block */)arg2;
- (void)switchCameraWithView:(id)arg0 config:(id)arg1 cameraComplete:(id /* block */)arg2;
- (void)switchCameraWithView:(id)arg0 config:(id)arg1 cameraComplete:(id /* block */)arg2;
- (void)initAudioCapture:(id /* block */)arg0;
- (void)initAudioCaptureAndSetupAudioSession:(id /* block */)arg0;
- (BOOL)startAudioCapture:(id /* block */)arg0;
- (BOOL)startAudioCaptureSync;
- (void)startVideoCaptureWithCompletionHandler:(id /* block */)arg0;
- (void)startVideoCaptureWithCompletionHandler:(id /* block */)arg0;
- (BOOL)startVideoCaptureWithAppStatusCheck;
- (void)stopVideoCaptureWithCompletionHandler:(id /* block */)arg0;
- (void)stopVideoCaptureWithCompletionHandler:(id /* block */)arg0;
- (void)switchCameraFormatToPhotoCapture:(BOOL)arg0;
- (void)switchCameraFormatToPhotoCapture:(BOOL)arg0;
- (void)resetDropFrameCount:(int)arg0;
- (void)setPureCameraMode:(BOOL)arg0;
- (void)switchCameraModeWithEffectOrNot:(BOOL)arg0;
- (void)switchCameraModeWithEffectOrNot:(BOOL)arg0;
- (BOOL)setUseEffectAudioRecognize:(BOOL)arg0;
- (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })getAudioCaptureFormat;
- (void)runDirtyCameraDetectAlgorithmWithCompletion:(id /* block */)arg0;
- (void)runDirtyCameraDetectAlgorithmWithCompletion:(id /* block */)arg0;
- (void)resetDirtyCameraDetectCount:(int)arg0 back:(int)arg1;
- (void)getFaceResult:(id /* block */)arg0;
- (void)turnLensSharpen:(BOOL)arg0;
- (struct __CVBuffer { } *)processByLensSharpenWith:(struct __CVBuffer { } *)arg0;
- (struct __CVBuffer { } *)processByLensSharpenWith:(struct __CVBuffer { } *)arg0;
- (void)turnLensCombinedEnhanceAlgorithm:(BOOL)arg0;
- (void)switchCameraSource:(id /* block */)arg0;
- (void)resetPreferredResolution:(struct CGSize { double x0; double x1; })arg0;
- (void)resetPreferredFrameRate:(unsigned long long)arg0;
- (void)resetPreferredFrameRateWithMinimum:(unsigned long long)arg0 maxmum:(unsigned long long)arg1;
- (void)resetPreferredFrameRateWithMinimum:(unsigned long long)arg0 maxmum:(unsigned long long)arg1;
- (void)tapFocusAtPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)tapFocusAtPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)resetFocusMode:(long long)arg0;
- (void)resetFocusMode:(long long)arg0 point:(struct CGPoint { double x0; double x1; })arg1;
- (void)resetFocusModeWithTransform:(long long)arg0 point:(struct CGPoint { double x0; double x1; })arg1;
- (void)resetFocusModeWithTransform:(long long)arg0 point:(struct CGPoint { double x0; double x1; })arg1;
- (struct CGPoint { double x0; double x1; })exposurePoint;
- (void)tapExposureAtPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)tapExposureAtPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)resetExposureMode:(long long)arg0;
- (void)resetExposureMode:(long long)arg0 point:(struct CGPoint { double x0; double x1; })arg1;
- (void)resetExposureModeWithTransform:(long long)arg0 point:(struct CGPoint { double x0; double x1; })arg1;
- (void)resetExposureModeWithTransform:(long long)arg0 point:(struct CGPoint { double x0; double x1; })arg1;
- (void)enableFrontCameraMirrored:(BOOL)arg0;
- (void)enablePreviewMirrored:(BOOL)arg0;
- (BOOL)isCameraCapabilitySupported:(unsigned long long)arg0;
- (id)currentSystemPressureState;
- (void)getCurrentDeviceFormatsSafty:(id /* block */)arg0;
- (id)resetPreviewView:(id)arg0;
- (void)resetPreviewType:(long long)arg0;
- (void)removeHTSGLPreview;
- (void)resumeHTSGLPreview:(id)arg0;
- (void)setNormalizedPreviewColorRed:(float)arg0 green:(float)arg1 blue:(float)arg2 alpha:(float)arg3;
- (void)clearDisplay:(float)arg0 green:(float)arg1 blue:(float)arg2 alpha:(float)arg3;
- (void)resetOutputSize:(struct CGSize { double x0; double x1; })arg0;
- (void)resetCapturePreset:(id)arg0 then:(id /* block */)arg1;
- (void)resetCaptureRatio:(long long)arg0 then:(id /* block */)arg1;
- (void)resetCaptureRatio:(long long)arg0 preferredSize:(struct CGSize { double x0; double x1; })arg1 then:(id /* block */)arg2;
- (void)resetCaptureRatio:(long long)arg0 preferredPreset:(id)arg1 then:(id /* block */)arg2;
- (void)resetCaptureRatio:(long long)arg0 preferredPreset:(id)arg1 previewHeight:(double)arg2 outputHeight:(double)arg3 then:(id /* block */)arg4;
- (void)resetCaptureRatio:(long long)arg0 preferredPreset:(id)arg1 previewSize:(struct CGSize { double x0; double x1; })arg2 outputSize:(struct CGSize { double x0; double x1; })arg3 then:(id /* block */)arg4;
- (void)enableEffectCompatibilityMode;
- (void)disableEffectCompatibilityMode;
- (void)setVideoAttachmentsCallback:(id /* block */)arg0;
- (void)setVideoBufferCallback:(id /* block */)arg0;
- (void)setVideoBufferAndInfoCallback:(id /* block */)arg0;
- (void)setVideoProcessedBufferCallback:(id /* block */)arg0;
- (void)setProcessedVideoBufferBlk:(id /* block */)arg0 withSize:(struct CGSize { double x0; double x1; })arg1;
- (void)setProcessedVideoBufferBlk:(id /* block */)arg0 withSize:(struct CGSize { double x0; double x1; })arg1;
- (void)setAudioStartRecordInfoCallback:(id /* block */)arg0;
- (void)resetCameraInfoRequirement:(unsigned long long)arg0;
- (unsigned long long)getCurrentCameraInfoRequirement;
- (void)enableImageReplaceVideoRawData:(id)arg0;
- (void)disableImageReplaceVideoRawData;
- (void)forceVEPermanceRunOnceNow:(BOOL)arg0;
- (void)setVEPerformanceResultCallback:(id /* block */)arg0;
- (void)changeRenderSize:(struct CGSize { double x0; double x1; })arg0;
- (id /* block */)messageHandler;
- (float)ISO;
- (float)ISO;
- (id)activeFormat;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })exposureDuration;
- (void)addObserver:(id)arg0 forKeyPath:(id)arg1 options:(unsigned long long)arg2 context:(void *)arg3;
- (void)removeObserver:(id)arg0 forKeyPath:(id)arg1;
- (void)removeObserver:(id)arg0 forKeyPath:(id)arg1 context:(void *)arg2;
- (unsigned long long)primaryConstituentDeviceRestrictedSwitchingBehaviorConditions;
- (long long)cameraType;
- (void)setConfig:(id)arg0;
- (id)deviceType;
- (id)virtualDeviceSwitchOverVideoZoomFactors;
- (struct CGPoint { double x0; double x1; })focusPoint;
- (double)exposureBias;
- (long long)status;
- (id)config;
- (struct CGSize { double x0; double x1; })outputSize;
- (long long)orientation;
- (struct CGSize { double x0; double x1; })renderSize;
- (void)registerObserver:(id)arg0;
- (void)stopAudioCapture;
- (double)maxAvailableVideoZoomFactor;
- (id)previewContainer;
- (void)setStatus:(long long)arg0;
- (id)fallbackPrimaryConstituentDevices;
- (BOOL)startAudioCapture;
- (void)setMessageHandler:(id /* block */)arg0;
- (id)activePrimaryConstituentDevice;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })activeVideoMaxFrameDuration;
- (BOOL)setPrimaryConstituentDeviceSwitchingBehavior:(long long)arg0 restrictedSwitchingBehaviorConditions:(unsigned long long)arg1;
- (void)setOrientation:(long long)arg0;
- (id)previewView;
- (id)supportedFallbackPrimaryConstituentDevices;
- (long long)primaryConstituentDeviceSwitchingBehavior;
- (float)maxISO;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })activeVideoMinFrameDuration;
- (double)minAvailableVideoZoomFactor;
- (void)removeObserver:(id)arg0;
- (float)minISO;
- (void)startVideoCapture;
- (void)stopVideoCapture;
- (long long)cameraFlashMode;
- (void)setCameraFlashMode:(long long)arg0;
- (void)setOutputSize:(struct CGSize { double x0; double x1; })arg0;
- (double)videoZoomFactorUpscaleThreshold;
- (BOOL)isVirtualDevice;
- (id)constituentDevices;
- (void)setAudioBufferCallback:(id /* block */)arg0;
- (void)setTorchOn:(BOOL)arg0;
- (BOOL)torchOn;
- (long long)previewModeType;
- (void)setPreviewModeType:(long long)arg0;
- (long long)cameraMode;
- (void)setCameraMode:(long long)arg0;

@optional

- (void)setActiveColorSpace:(unsigned long long)arg0 completionHandler:(id /* block */)arg1;
- (void)setPropertySet:(id)arg0;
- (void)setArCameraDelegate:(id)arg0;
- (id)arCameraDelegate;
- (void)setProcessSyncFlag:(BOOL)arg0;
- (void)turnBachFaceDetect:(BOOL)arg0;
- (void)turnRhythmicMotion:(BOOL)arg0;
- (int)currentProcessType;
- (void)updateCameraProcessParams:(id)arg0 complete:(id /* block */)arg1;
- (void)turnShakingDetect:(BOOL)arg0 param:(id)arg1 withResult:(id /* block */)arg2;
- (void)turnImageDefinitionDetect:(BOOL)arg0 param:(id)arg1 withResult:(id /* block */)arg2;
- (void)turnQrcodeDetect:(BOOL)arg0 param:(id)arg1 completeResult:(id /* block */)arg2 zoomFactor:(id /* block */)arg3 needSelect:(id /* block */)arg4;
- (void)qrcodeDetectResetZoomFactor:(float)arg0 byUser:(BOOL)arg1;
- (void)turnSystemEnigma:(BOOL)arg0 param:(id)arg1 completeResult:(id /* block */)arg2;
- (void)turnEnigma:(BOOL)arg0 param:(id)arg1 completeResult:(id /* block */)arg2;
- (void)turnMultiEnigma:(BOOL)arg0 param:(id)arg1 completeResults:(id /* block */)arg2;
- (void)turnScan:(BOOL)arg0 param:(id)arg1 completeResult:(id /* block */)arg2;
- (void)switchMultiCam:(long long)arg0;
- (void)setMultiCaptureKitUseParallelQueue:(BOOL)arg0;
- (BOOL)createCameraKitWithComplete:(id /* block */)arg0;
- (BOOL)createCameraKitWithComplete:(id /* block */)arg0;
- (void)allowDestoryEffect:(id /* block */)arg0;
- (void)setNeedBlendSecond:(BOOL)arg0 pixelbuffer:(struct __CVBuffer { } *)arg1 mix:(float)arg2;
- (unsigned long long)activeColorSpace;
- (BOOL)isMultiCamSession;
- (id)propertySet;

@end
