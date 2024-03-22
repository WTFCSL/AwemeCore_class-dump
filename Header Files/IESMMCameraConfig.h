//
//     Generated by private class-dump
//

@class NSArray, NSString, HTSVideoData, UIView, IESSticker, IESMMTranscoderParam;

@interface IESMMCameraConfig : NSObject <NSCopying> {
    BOOL _customSwitchAnimation;
    BOOL _landscapeDetectEnable;
    BOOL _enableExposureOptimize;
    BOOL _enableFaceuExposureOptimize;
    BOOL _enableDarkLightOptimize;
    BOOL _enableDolbyVision;
    BOOL _enablePhotoCaptureFormat;
    BOOL _enableMultiCamRecorder;
    BOOL _enableMultiCamAudioRecorder;
    BOOL _noDropFirstStartCaptureFrame;
    BOOL _forceRecordAudio;
    BOOL _enableRecordMultiAudio;
    BOOL _forceMuteAudio;
    BOOL _useAudioNewFormat;
    BOOL _useSDKGesture;
    BOOL _enableLongPressLockFocusAndExposure;
    BOOL _enableTapFocus;
    BOOL _enableTapexposure;
    BOOL _isEnigmaScene;
    BOOL _mimoMode;
    BOOL _isRecordWithWaterMark;
    BOOL _enableFaceDetectCompletely;
    BOOL _useSystemDetect;
    BOOL _photoQualityUseConfig;
    BOOL _isNeedCaptureRecordFirstFrame;
    BOOL _retryWhenStartRunningFailed;
    BOOL _startRunningWhenRuntimeError;
    BOOL _noNeedLVProcess;
    BOOL _enableMultiTrack;
    BOOL _forceCropBeforeEffect;
    BOOL _isProcessMultiInput;
    BOOL _enableStyleFilter;
    BOOL _isCaptureStopAsync;
    BOOL _enableDoubleRecord;
    BOOL _noUseSystemCapture;
    BOOL _noUsePreprocessCrop;
    BOOL _forceUseNewRecorder;
    BOOL _useAudioEffect;
    BOOL _multiCaptureKitUseParallelQueue;
    BOOL _enableDynamicRes;
    BOOL _enableCaptureKit;
    BOOL _useSharedGLContext;
    long long _previewType;
    unsigned long long _sessionMode;
    long long _previewModeType;
    long long _cameraPosition;
    NSArray *_preferredFrontCameraDeviceTypes;
    NSArray *_preferredRearCameraDeviceTypes;
    unsigned long long _preferedFrameRate;
    unsigned long long _preferedMinFrameRate;
    double _preferredFrontZoomFactor;
    double _preferredBackZoomFactor;
    unsigned long long _pixelFormatType;
    long long _preferredFrontExposureMode;
    long long _preferredRearExposureMode;
    NSString *_capturePreset;
    long long _multiCamMode;
    long long _preferredSkipBinnedFormat;
    UIView *_secondPreviewView;
    long long _dolbyVisionCameraPreferResolution;
    long long _photoCaptureCameraPreferResolution;
    long long _captureRatio;
    unsigned long long _dropFrameCount;
    unsigned long long _firstNFrame;
    unsigned long long _cameraDropFps;
    HTSVideoData *_videoData;
    HTSVideoData *_templateVideoData;
    IESSticker *_recorderSticker;
    long long _flashMode;
    long long _focusMode;
    long long _exposureMode;
    long long _whiteBalanceMode;
    long long _frontPreferredStabilizationMode;
    long long _rearPreferredStabilizationMode;
    long long _primaryConstituentDeviceSwitchingBehavior;
    unsigned long long _primaryConstituentDeviceRestrictedSwitchingBehaviorConditions;
    long long _orientation;
    NSString *_micOrientation;
    NSString *_polarPattern;
    unsigned long long _photoQuality;
    unsigned long long _maxPhotoQuality;
    unsigned long long _customAudioSessionOptions;
    unsigned long long _noNeedEffectFrameCount;
    IESMMTranscoderParam *_encodeSettings;
    unsigned long long _colorSpace;
    struct CGSize { double width; double height; } _multiCamSize;
    struct CGSize { double width; double height; } _multiCamSizeFront;
    struct CGSize { double width; double height; } _cameraFrameSize;
    struct CGSize { double width; double height; } _previewFrameSize;
    struct CGSize { double width; double height; } _outputSize;
    struct CGSize { double width; double height; } _secondaryOutputSize;
    struct CGSize { double width; double height; } _effectRenderSize;
}

@property (nonatomic) long long previewType;
@property (nonatomic) unsigned long long sessionMode;
@property (nonatomic) long long previewModeType;
@property (nonatomic) long long cameraPosition;
@property (nonatomic) BOOL customSwitchAnimation;
@property (copy, nonatomic) NSArray *preferredFrontCameraDeviceTypes;
@property (copy, nonatomic) NSArray *preferredRearCameraDeviceTypes;
@property (nonatomic) unsigned long long preferedFrameRate;
@property (nonatomic) unsigned long long preferedMinFrameRate;
@property (nonatomic) double preferredFrontZoomFactor;
@property (nonatomic) double preferredBackZoomFactor;
@property (nonatomic) unsigned long long pixelFormatType;
@property (nonatomic) BOOL landscapeDetectEnable;
@property (nonatomic) BOOL enableExposureOptimize;
@property (nonatomic) BOOL enableFaceuExposureOptimize;
@property (nonatomic) long long preferredFrontExposureMode;
@property (nonatomic) long long preferredRearExposureMode;
@property (nonatomic) BOOL enableDarkLightOptimize;
@property (retain, nonatomic) NSString *capturePreset;
@property (nonatomic) BOOL enableDolbyVision;
@property (nonatomic) BOOL enablePhotoCaptureFormat;
@property (nonatomic) long long multiCamMode;
@property (nonatomic) struct CGSize { double width; double height; } multiCamSize;
@property (nonatomic) struct CGSize { double width; double height; } multiCamSizeFront;
@property (nonatomic) long long preferredSkipBinnedFormat;
@property (retain, nonatomic) UIView *secondPreviewView;
@property (nonatomic) BOOL enableMultiCamRecorder;
@property (nonatomic) BOOL enableMultiCamAudioRecorder;
@property (nonatomic) long long dolbyVisionCameraPreferResolution;
@property (nonatomic) long long photoCaptureCameraPreferResolution;
@property (nonatomic) long long captureRatio;
@property (nonatomic) struct CGSize { double width; double height; } cameraFrameSize;
@property (nonatomic) struct CGSize { double width; double height; } previewFrameSize;
@property (nonatomic) struct CGSize { double width; double height; } outputSize;
@property (nonatomic) unsigned long long dropFrameCount;
@property (nonatomic) unsigned long long firstNFrame;
@property (nonatomic) unsigned long long cameraDropFps;
@property (nonatomic) BOOL noDropFirstStartCaptureFrame;
@property (nonatomic) BOOL forceRecordAudio;
@property (nonatomic) BOOL enableRecordMultiAudio;
@property (nonatomic) BOOL forceMuteAudio;
@property (nonatomic) BOOL useAudioNewFormat;
@property (retain, nonatomic) HTSVideoData *videoData;
@property (retain, nonatomic) HTSVideoData *templateVideoData;
@property (nonatomic) BOOL useSDKGesture;
@property (nonatomic) BOOL enableLongPressLockFocusAndExposure;
@property (nonatomic) BOOL enableTapFocus;
@property (nonatomic) BOOL enableTapexposure;
@property (nonatomic) BOOL isEnigmaScene;
@property (nonatomic) BOOL mimoMode;
@property (nonatomic) struct CGSize { double width; double height; } secondaryOutputSize;
@property (nonatomic) BOOL isRecordWithWaterMark;
@property (retain, nonatomic) IESSticker *recorderSticker;
@property (nonatomic) long long flashMode;
@property (nonatomic) long long focusMode;
@property (nonatomic) long long exposureMode;
@property (nonatomic) long long whiteBalanceMode;
@property (nonatomic) BOOL enableFaceDetectCompletely;
@property (nonatomic) BOOL useSystemDetect;
@property (nonatomic) long long cameraStabilizationMode;
@property (nonatomic) long long frontPreferredStabilizationMode;
@property (nonatomic) long long rearPreferredStabilizationMode;
@property (nonatomic) long long primaryConstituentDeviceSwitchingBehavior;
@property (nonatomic) unsigned long long primaryConstituentDeviceRestrictedSwitchingBehaviorConditions;
@property (nonatomic) long long orientation;
@property (copy, nonatomic) NSString *micOrientation;
@property (copy, nonatomic) NSString *polarPattern;
@property (nonatomic) BOOL photoQualityUseConfig;
@property (nonatomic) unsigned long long photoQuality;
@property (nonatomic) unsigned long long maxPhotoQuality;
@property (nonatomic) unsigned long long customAudioSessionOptions;
@property (nonatomic) unsigned long long noNeedEffectFrameCount;
@property (nonatomic) BOOL isNeedCaptureRecordFirstFrame;
@property (nonatomic) BOOL retryWhenStartRunningFailed;
@property (nonatomic) BOOL startRunningWhenRuntimeError;
@property (nonatomic) BOOL noNeedLVProcess;
@property (nonatomic) BOOL enableMultiTrack;
@property (nonatomic) BOOL forceCropBeforeEffect;
@property (nonatomic) BOOL isProcessMultiInput;
@property (retain, nonatomic) IESMMTranscoderParam *encodeSettings;
@property (nonatomic) BOOL enableStyleFilter;
@property (nonatomic) BOOL isCaptureStopAsync;
@property (nonatomic) BOOL enableDoubleRecord;
@property (nonatomic) BOOL noUseSystemCapture;
@property (nonatomic) BOOL noUsePreprocessCrop;
@property (nonatomic) BOOL forceUseNewRecorder;
@property (nonatomic) BOOL useAudioEffect;
@property (nonatomic) unsigned long long colorSpace;
@property (nonatomic) struct CGSize { double width; double height; } effectRenderSize;
@property (nonatomic) BOOL multiCaptureKitUseParallelQueue;
@property (nonatomic) BOOL enableDynamicRes;
@property (nonatomic) BOOL enableCaptureKit;
@property (nonatomic) BOOL useSharedGLContext;

+ (id)availableMicOrientation;
+ (id)supportedPolarPatternsForMicOrientation:(id)arg0;

- (BOOL)enableDolbyVision;
- (void)setEnableDolbyVision:(BOOL)arg0;
- (long long)dolbyVisionCameraPreferResolution;
- (BOOL)customSwitchAnimation;
- (void)setPixelFormatType:(unsigned long long)arg0;
- (double)preferredFrontZoomFactor;
- (void)setPreferredFrontZoomFactor:(double)arg0;
- (double)preferredBackZoomFactor;
- (void)setPreferredBackZoomFactor:(double)arg0;
- (long long)frontPreferredStabilizationMode;
- (void)setFrontPreferredStabilizationMode:(long long)arg0;
- (long long)rearPreferredStabilizationMode;
- (void)setRearPreferredStabilizationMode:(long long)arg0;
- (id)preferredFrontCameraDeviceTypes;
- (id)preferredRearCameraDeviceTypes;
- (BOOL)enableExposureOptimize;
- (void)setEnableExposureOptimize:(BOOL)arg0;
- (BOOL)enableDarkLightOptimize;
- (void)setEnableDarkLightOptimize:(BOOL)arg0;
- (BOOL)enableFaceDetectCompletely;
- (void)setEnableFaceDetectCompletely:(BOOL)arg0;
- (unsigned long long)dropFrameCount;
- (void)setDropFrameCount:(unsigned long long)arg0;
- (BOOL)isCaptureStopAsync;
- (BOOL)noDropFirstStartCaptureFrame;
- (void)setNoDropFirstStartCaptureFrame:(BOOL)arg0;
- (BOOL)retryWhenStartRunningFailed;
- (void)setRetryWhenStartRunningFailed:(BOOL)arg0;
- (BOOL)startRunningWhenRuntimeError;
- (void)setStartRunningWhenRuntimeError:(BOOL)arg0;
- (BOOL)useAudioNewFormat;
- (void)setUseAudioNewFormat:(BOOL)arg0;
- (BOOL)mimoMode;
- (void)setMimoMode:(BOOL)arg0;
- (struct CGSize { double x0; double x1; })secondaryOutputSize;
- (void)setSecondaryOutputSize:(struct CGSize { double x0; double x1; })arg0;
- (id)videoData;
- (void)setVideoData:(id)arg0;
- (void)setEnableTapFocus:(BOOL)arg0;
- (void)setEnableTapexposure:(BOOL)arg0;
- (void)setIsEnigmaScene:(BOOL)arg0;
- (long long)captureRatio;
- (struct CGSize { double x0; double x1; })effectRenderSize;
- (void)setEffectRenderSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setMultiCaptureKitUseParallelQueue:(BOOL)arg0;
- (void)setForceRecordAudio:(BOOL)arg0;
- (BOOL)enableTapFocus;
- (BOOL)enableTapexposure;
- (void)setPreferredRearCameraDeviceTypes:(id)arg0;
- (void)setPreferredFrontCameraDeviceTypes:(id)arg0;
- (void)setCustomSwitchAnimation:(BOOL)arg0;
- (void)setIsCaptureStopAsync:(BOOL)arg0;
- (void)setDolbyVisionCameraPreferResolution:(long long)arg0;
- (id)capturePreset;
- (void)setCapturePreset:(id)arg0;
- (BOOL)enableMultiTrack;
- (void)setEnableMultiTrack:(BOOL)arg0;
- (void)setPreferedFrameRate:(unsigned long long)arg0;
- (void)setCaptureRatio:(long long)arg0;
- (void)setUseSDKGesture:(BOOL)arg0;
- (void)setLandscapeDetectEnable:(BOOL)arg0;
- (unsigned long long)preferedFrameRate;
- (unsigned long long)preferedMinFrameRate;
- (void)setPreferedMinFrameRate:(unsigned long long)arg0;
- (BOOL)landscapeDetectEnable;
- (BOOL)enableFaceuExposureOptimize;
- (void)setEnableFaceuExposureOptimize:(BOOL)arg0;
- (struct CGSize { double x0; double x1; })previewFrameSize;
- (void)setPreviewFrameSize:(struct CGSize { double x0; double x1; })arg0;
- (BOOL)forceRecordAudio;
- (id)templateVideoData;
- (void)setTemplateVideoData:(id)arg0;
- (BOOL)useSDKGesture;
- (BOOL)useSystemDetect;
- (void)setUseSystemDetect:(BOOL)arg0;
- (long long)preferredSkipBinnedFormat;
- (void)setPreferredSkipBinnedFormat:(long long)arg0;
- (BOOL)enableMultiCamRecorder;
- (void)setEnableMultiCamRecorder:(BOOL)arg0;
- (BOOL)enableMultiCamAudioRecorder;
- (void)setEnableMultiCamAudioRecorder:(BOOL)arg0;
- (id)secondPreviewView;
- (void)setSecondPreviewView:(id)arg0;
- (id)recorderSticker;
- (void)setRecorderSticker:(id)arg0;
- (BOOL)isRecordWithWaterMark;
- (void)setIsRecordWithWaterMark:(BOOL)arg0;
- (BOOL)forceCropBeforeEffect;
- (void)setForceCropBeforeEffect:(BOOL)arg0;
- (id)encodeSettings;
- (void)setEncodeSettings:(id)arg0;
- (BOOL)enableCaptureKit;
- (void)setEnableCaptureKit:(BOOL)arg0;
- (void)setCameraStabilizationMode:(long long)arg0;
- (long long)cameraStabilizationMode;
- (long long)preferredFrontExposureMode;
- (void)setPreferredFrontExposureMode:(long long)arg0;
- (long long)preferredRearExposureMode;
- (void)setPreferredRearExposureMode:(long long)arg0;
- (struct CGSize { double x0; double x1; })cameraFrameSize;
- (void)setCameraFrameSize:(struct CGSize { double x0; double x1; })arg0;
- (unsigned long long)cameraDropFps;
- (void)setCameraDropFps:(unsigned long long)arg0;
- (BOOL)enableRecordMultiAudio;
- (void)setEnableRecordMultiAudio:(BOOL)arg0;
- (BOOL)forceMuteAudio;
- (void)setForceMuteAudio:(BOOL)arg0;
- (BOOL)enableLongPressLockFocusAndExposure;
- (void)setEnableLongPressLockFocusAndExposure:(BOOL)arg0;
- (BOOL)isEnigmaScene;
- (id)micOrientation;
- (void)setMicOrientation:(id)arg0;
- (id)polarPattern;
- (void)setPolarPattern:(id)arg0;
- (unsigned long long)customAudioSessionOptions;
- (void)setCustomAudioSessionOptions:(unsigned long long)arg0;
- (unsigned long long)noNeedEffectFrameCount;
- (void)setNoNeedEffectFrameCount:(unsigned long long)arg0;
- (BOOL)isNeedCaptureRecordFirstFrame;
- (void)setIsNeedCaptureRecordFirstFrame:(BOOL)arg0;
- (BOOL)noNeedLVProcess;
- (void)setNoNeedLVProcess:(BOOL)arg0;
- (BOOL)isProcessMultiInput;
- (void)setIsProcessMultiInput:(BOOL)arg0;
- (BOOL)enableStyleFilter;
- (void)setEnableStyleFilter:(BOOL)arg0;
- (BOOL)enableDoubleRecord;
- (void)setEnableDoubleRecord:(BOOL)arg0;
- (BOOL)noUseSystemCapture;
- (void)setNoUseSystemCapture:(BOOL)arg0;
- (BOOL)noUsePreprocessCrop;
- (void)setNoUsePreprocessCrop:(BOOL)arg0;
- (BOOL)forceUseNewRecorder;
- (void)setForceUseNewRecorder:(BOOL)arg0;
- (BOOL)useAudioEffect;
- (void)setUseAudioEffect:(BOOL)arg0;
- (BOOL)enableDynamicRes;
- (void)setEnableDynamicRes:(BOOL)arg0;
- (BOOL)useSharedGLContext;
- (void)setUseSharedGLContext:(BOOL)arg0;
- (BOOL)enablePhotoCaptureFormat;
- (void)setEnablePhotoCaptureFormat:(BOOL)arg0;
- (long long)multiCamMode;
- (void)setMultiCamMode:(long long)arg0;
- (struct CGSize { double x0; double x1; })multiCamSize;
- (void)setMultiCamSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })multiCamSizeFront;
- (void)setMultiCamSizeFront:(struct CGSize { double x0; double x1; })arg0;
- (long long)photoCaptureCameraPreferResolution;
- (void)setPhotoCaptureCameraPreferResolution:(long long)arg0;
- (void)setPrimaryConstituentDeviceSwitchingBehavior:(long long)arg0;
- (void)setPrimaryConstituentDeviceRestrictedSwitchingBehaviorConditions:(unsigned long long)arg0;
- (BOOL)photoQualityUseConfig;
- (void)setPhotoQualityUseConfig:(BOOL)arg0;
- (unsigned long long)photoQuality;
- (void)setPhotoQuality:(unsigned long long)arg0;
- (unsigned long long)maxPhotoQuality;
- (void)setMaxPhotoQuality:(unsigned long long)arg0;
- (BOOL)multiCaptureKitUseParallelQueue;
- (unsigned long long)firstNFrame;
- (void)setFirstNFrame:(unsigned long long)arg0;
- (long long)exposureMode;
- (long long)focusMode;
- (long long)flashMode;
- (long long)cameraPosition;
- (id)init;
- (unsigned long long)primaryConstituentDeviceRestrictedSwitchingBehaviorConditions;
- (void)setFlashMode:(long long)arg0;
- (void).cxx_destruct;
- (void)setColorSpace:(unsigned long long)arg0;
- (void)setFocusMode:(long long)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (struct CGSize { double x0; double x1; })outputSize;
- (long long)orientation;
- (void)setExposureMode:(long long)arg0;
- (unsigned long long)colorSpace;
- (void)setOrientation:(long long)arg0;
- (long long)whiteBalanceMode;
- (long long)primaryConstituentDeviceSwitchingBehavior;
- (void)setWhiteBalanceMode:(long long)arg0;
- (unsigned long long)pixelFormatType;
- (void)setOutputSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setCameraPosition:(long long)arg0;
- (long long)previewType;
- (void)setPreviewType:(long long)arg0;
- (unsigned long long)sessionMode;
- (void)setSessionMode:(unsigned long long)arg0;
- (long long)previewModeType;
- (void)setPreviewModeType:(long long)arg0;

@end
