//
//     Generated by private class-dump
//

@class NSDate, NSString, UIImage, NSDictionary, CMMotionManager, NSMutableArray, NSObject, DTFCameraService, AVAudioPlayer;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface APBToygerCherryDetectTask : APBToygerBaseTask <APBToygerDataCenterDelegate, DTFCameraServiceDelegate, DTFFaceViewDelegate, ToygerServiceInstanceDelegate> {
    struct apbtoyger_tip_evaluator_t { BOOL pose_end; BOOL has_face; BOOL did_blink; BOOL pos_okay; BOOL quality_okay; BOOL under_exposure; BOOL face_width_too_small; BOOL face_width_too_big; BOOL integrity_fail; BOOL yaw_fail; BOOL pitch_fail; BOOL tremble_fail; BOOL did_checkSeven; int tip_timer_wait_cnt; BOOL tip_show_switch; int tip_message; } tipEvaluator;
    BOOL _currentDarkFrame;
    NSObject<OS_dispatch_semaphore> *_monitorFrameLock;
    NSObject<OS_dispatch_semaphore> *_frameLock;
    NSObject<OS_dispatch_semaphore> *_resultLock;
    UIImage *_currentResult;
    NSString *_fileName;
    struct CGSize { double width; double height; } _outputSize;
    BOOL _photinusFlags;
    BOOL _isBrightnessAnimated;
    BOOL _isTaskPause;
    BOOL _isUploading;
    BOOL _currentLight;
    BOOL _isVideoRecording;
    BOOL _isSensorEnable;
    BOOL _livenessBlinkCheckDone;
    BOOL _isPlay;
    BOOL _isSuitable;
    DTFCameraService *_cameraService;
    id _instance;
    NSString *_currentTip;
    double _brightness;
    double _poseFirst;
    CMMotionManager *_motionService;
    NSDate *_startTime;
    NSDictionary *_currentFaceSlice;
    NSDictionary *_currentFaceSliceDetail;
    unsigned long long _serviceType;
    NSMutableArray *_sampleBufferRefArray;
    unsigned long long _suffixFrame;
    AVAudioPlayer *_audioPlayer;
    long long _toygerMessage;
    NSMutableArray *_downloadingArray;
    NSMutableArray *_downloadErrorArray;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

@property (copy, nonatomic) NSString *currentTip;
@property (nonatomic) BOOL isBrightnessAnimated;
@property (nonatomic) BOOL isTaskPause;
@property (nonatomic) BOOL isUploading;
@property (nonatomic) double brightness;
@property (nonatomic) double poseFirst;
@property (retain, nonatomic) CMMotionManager *motionService;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDictionary *currentFaceSlice;
@property (retain, nonatomic) NSDictionary *currentFaceSliceDetail;
@property (nonatomic) BOOL currentLight;
@property (nonatomic) BOOL isVideoRecording;
@property (nonatomic) BOOL isSensorEnable;
@property (nonatomic) unsigned long long serviceType;
@property (retain, nonatomic) NSMutableArray *sampleBufferRefArray;
@property (nonatomic) BOOL livenessBlinkCheckDone;
@property (nonatomic) unsigned long long suffixFrame;
@property (retain, nonatomic) AVAudioPlayer *audioPlayer;
@property (nonatomic) long long toygerMessage;
@property (nonatomic) BOOL isPlay;
@property (nonatomic) BOOL isSuitable;
@property (retain, nonatomic) NSMutableArray *downloadingArray;
@property (retain, nonatomic) NSMutableArray *downloadErrorArray;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (nonatomic) BOOL photinusFlags;
@property (retain, nonatomic) DTFCameraService *cameraService;
@property (retain, nonatomic) id instance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsPlay:(BOOL)arg0;
- (BOOL)isPlay;
- (void)setIsUploading:(BOOL)arg0;
- (void)_resetFlags;
- (BOOL)photinusFlags;
- (void)stopRecode;
- (id)motionService;
- (void)setIsTaskPause:(BOOL)arg0;
- (void)invokeWithPipeInfo:(id)arg0;
- (void)_prepareScreenBrightness;
- (void)_popLoadAlgorithmFail;
- (void)_addMonitorBy:(id)arg0 byParam:(id)arg1;
- (void)_prepareAlgorithm;
- (void)removeWorkingPhotinusDirectory;
- (void)removeWorkingDirectory;
- (void)setSampleBufferRefArray:(id)arg0;
- (BOOL)postCameraPresentwithCamera;
- (void)_prepareCameraFaceService:(id)arg0;
- (void)_prepareTimers;
- (void)_prepareBackwardCommand;
- (void)statusBarOrientationDidChange:(id)arg0;
- (void)setIsSuitable:(BOOL)arg0;
- (id)cameraService;
- (id)workingPhotinusDirectory;
- (id)sampleBufferRefArray;
- (void)createWorkingDirectory;
- (id)createDataNameWithIndex:(unsigned long long)arg0;
- (BOOL)isIphoneXDevice;
- (struct __CVBuffer { } *)pixelBufferFromCGImage:(struct CGImage { } *)arg0 size:(struct CGSize { double x0; double x1; })arg1;
- (void)pauseTimerAndServices;
- (id)logType:(long long)arg0;
- (void)_uploadBehaviorLogByInvokeType:(id)arg0;
- (void)_resetScreenBrightness;
- (id)_alertParamBy:(long long)arg0;
- (void)_showAlertViewBy:(id)arg0;
- (void)setIsBrightnessAnimated:(BOOL)arg0;
- (id)generateBehavTask;
- (void)exitWithResultUsesUper:(int)arg0 failReason:(id)arg1 retCodeSub:(id)arg2 retMessageSub:(id)arg3;
- (void)CompressionSession:(id /* block */)arg0;
- (void)exitWithResult:(int)arg0 failReason:(id)arg1 retCodeSub:(id)arg2 retMessageSub:(id)arg3;
- (BOOL)isSensorEnable;
- (void)_updateMotionServicebyInterval;
- (BOOL)livenessBlinkCheckDone;
- (void)updateSampleBufferRef:(id)arg0;
- (unsigned long long)suffixFrame;
- (void)setSuffixFrame:(unsigned long long)arg0;
- (void)onButtonCancel;
- (void)audioPlayerStop;
- (id)_reachMaxRetryCntParam;
- (void)setCameraService:(id)arg0;
- (id)pipeInfoObjectForKey:(id)arg0;
- (void)adjustScreenBrightness;
- (void)setMotionService:(id)arg0;
- (void)adjustScreenBrightnessWithAnimated;
- (BOOL)isBrightnessAnimated;
- (void)setPipeInfoObject:(id)arg0 forKey:(id)arg1;
- (void)_prepareMotionService;
- (void)setLivenessBlinkCheckDone:(BOOL)arg0;
- (void)setCurrentFaceSliceDetail:(id)arg0;
- (id)txtFrom:(long long)arg0;
- (BOOL)isSuitable;
- (long long)toygerMessage;
- (id)filePathWithState:(long long)arg0;
- (void)audioPlayWithFilePath:(id)arg0;
- (void)setToygerMessage:(long long)arg0;
- (void)cacheCurrentFaceSliceData:(id)arg0;
- (id)downloadingArray;
- (id)downloadErrorArray;
- (void)addObject:(id)arg0 array:(id)arg1;
- (void)removeObject:(id)arg0 array:(id)arg1;
- (BOOL)checkIfModelValidWithURL:(id)arg0 md5:(id)arg1;
- (void)audioPlayerPlay:(id)arg0;
- (void)setCurrentFaceSlice:(id)arg0;
- (id)currentFaceSlice;
- (id)currentFaceSliceDetail;
- (BOOL)isTaskPause;
- (void)didFinishUploadWithSuccess:(BOOL)arg0 retCode:(id)arg1 retMessage:(id)arg2 extInfo:(id)arg3;
- (void)cameraControllerCaptureOutput:(id)arg0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)arg1 fromConnection:(id)arg2;
- (void)viewExit:(id)arg0;
- (void)playBtn:(id)arg0;
- (void)toygerService:(id)arg0 frameDidUpdate:(id)arg1;
- (void)toygerService:(id)arg0 triggerEvent:(id)arg1;
- (void)toygerService:(id)arg0 triggerMonitor:(id)arg1;
- (void)toygerService:(id)arg0 captureDidComplete:(id)arg1;
- (void)toygerService:(id)arg0 didGetHighQualityImage:(id)arg1;
- (void)processEvent:(id)arg0 withCompletionCallback:(id /* block */)arg1;
- (void)faceDetectCompletion;
- (void)resumeTimerAndService;
- (int)currentEncoder;
- (void)_popCameraInitFailed;
- (id)timerBySelector:(SEL)arg0;
- (id)timerBySelector:(SEL)arg0 withTimeInterval:(double)arg1;
- (id)_failNoRetryParam:(id)arg0;
- (void)setPhotinusFlags:(BOOL)arg0;
- (double)poseFirst;
- (void)setPoseFirst:(double)arg0;
- (BOOL)currentLight;
- (void)setCurrentLight:(BOOL)arg0;
- (BOOL)isVideoRecording;
- (void)setIsVideoRecording:(BOOL)arg0;
- (void)setIsSensorEnable:(BOOL)arg0;
- (void)setDownloadingArray:(id)arg0;
- (void)setDownloadErrorArray:(id)arg0;
- (id)syncQueue;
- (id)init;
- (void)setStartTime:(id)arg0;
- (void)fire:(id /* block */)arg0;
- (double)brightness;
- (void).cxx_destruct;
- (void)setBrightness:(double)arg0;
- (id)audioPlayer;
- (id)instance;
- (unsigned long long)serviceType;
- (void)setServiceType:(unsigned long long)arg0;
- (id)workingDirectory;
- (void)setSyncQueue:(id)arg0;
- (id)startTime;
- (void)setAudioPlayer:(id)arg0;
- (void)reset;
- (void)setInstance:(id)arg0;
- (id).cxx_construct;
- (BOOL)isUploading;
- (void)_cacheResult:(id)arg0;
- (id)currentTip;
- (void)setCurrentTip:(id)arg0;

@end
