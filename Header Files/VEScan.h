//
//     Generated by private class-dump
//

@class NSMutableArray, NSString, NSLock, VEAlgorithmSessionAdapter;
@protocol VEScanDelegate, VERecorderPublicProtocol;

@interface VEScan : NSObject {
    id<VERecorderPublicProtocol> _recorder;
    id<VEScanDelegate> _delegate;
    VEAlgorithmSessionAdapter *_algorithmSession;
    int _scanSource;
    int _scanType;
    BOOL _started;
    BOOL _startedCamera;
    NSLock *_startLock;
    unsigned long long _enableTypes;
    NSString *_cameraAlgoConfig;
    NSString *_imageAlgoConfig;
    NSString *_lastCodeContent;
    int _scanCodeBehavior;
    NSMutableArray *_observerArray;
    NSString *_capturePreset;
    BOOL _processIsSync;
    NSLock *_resLock;
    unsigned long long _processInterval;
    double _targetWidth;
}

+ (id)scanCode:(id)arg0 param:(id)arg1;
+ (void)scanCodeSystem:(id)arg0 completion:(id /* block */)arg1;
+ (id)scanFace:(id)arg0;
+ (id)create;
+ (void)release;

- (void)setCameraInfoBlock:(id /* block */)arg0 withCameraInfoRequirement:(unsigned long long)arg1;
- (void)setPreviewRotationMode:(unsigned long long)arg0;
- (void)setFirstRenderBlock:(id /* block */)arg0;
- (BOOL)captureIsRunning;
- (void)captureImageWithOptions:(id)arg0 handler:(id /* block */)arg1;
- (void)stopCamera;
- (void)enableTorch:(BOOL)arg0;
- (void)setForceEnigmaCallback:(BOOL)arg0;
- (void)setScanCodeBehavior:(int)arg0;
- (id)p_getCameraConfig;
- (int)setCameraPreviewView:(id)arg0 withConfig:(id)arg1;
- (BOOL)checkCameraAvailable;
- (int)setCameraPreviewView:(id)arg0 withCapturePreset:(id)arg1;
- (id)getDefaultCameraConfig;
- (int)openCamera;
- (int)openCameraWithPrivacyCert:(id)arg0;
- (void)stopCameraWithPrivacyCert:(id)arg0;
- (void)setScanZoomWithScale:(float)arg0;
- (BOOL)torchIsOn;
- (BOOL)captureIsInterruptted;
- (BOOL)enigmaAvailable;
- (void)setEnigmaParamWithConfigStr:(id)arg0 source:(int)arg1;
- (void)enableCodeTypes:(unsigned long long)arg0;
- (void)setEnigmaConfig:(id)arg0 sourceType:(int)arg1;
- (int)enableEnigmaScanSource:(int)arg0;
- (int)EnigmaSourceType;
- (void)setMultiEnigmaParamWithConfigStr:(id)arg0 source:(int)arg1;
- (void)turnEnigma:(BOOL)arg0 param:(id)arg1;
- (void)turnMultiEnigma:(BOOL)arg0 param:(id)arg1;
- (int)enableQrcodeDetect:(BOOL)arg0 withParam:(id)arg1;
- (void)turnSystemEnigma:(BOOL)arg0 param:(id)arg1;
- (void)scanImageFaceDetectAndCropSync:(id)arg0 useSlowPath:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)p_destroy;
- (void)p_createAlgorithmSession;
- (void)registerSystemNoti;
- (void)removeNotiObserver;
- (void)p_destoryAlgorithmSession;
- (void)setScanDelegate:(id)arg0;
- (void)setProcessSync:(BOOL)arg0;
- (int)scanInputImage:(id)arg0;
- (void)enableShakingDetect:(BOOL)arg0 withParam:(id)arg1;
- (void)enableDefinitionDetect:(BOOL)arg0 withParam:(id)arg1;
- (int)enableScan:(BOOL)arg0 withParam:(id)arg1;
- (id)init;
- (void)setVideoOrientation:(long long)arg0;
- (void).cxx_destruct;
- (void)stop;
- (float)maxZoomFactor;
- (int)start;
- (void)dealloc;
- (void)p_init;

@end
