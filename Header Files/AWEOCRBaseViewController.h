//
//     Generated by private class-dump
//

@class NSTimer, AVCaptureVideoPreviewLayer, NSString, AWECardOCRScanView, AVCaptureSession, NSObject, AVCaptureDevice, AWECardOCRPageParams, AVCaptureVideoDataOutput, AWECardOCRConfig;
@protocol OS_dispatch_queue;

@interface AWEOCRBaseViewController : UIViewController <AVCaptureVideoDataOutputSampleBufferDelegate> {
    BOOL _recognizeEnable;
    BOOL _forceFetchingframe;
    BOOL _haveFinishedCallback;
    BOOL _hasShownNotDeterminedAlert;
    BOOL _hasShownOCRPage;
    id /* block */ _completionBlock;
    AVCaptureDevice *_currentCaptureDevice;
    AWECardOCRScanView *_ocrScanView;
    NSTimer *_alertTimer;
    AWECardOCRPageParams *_params;
    AWECardOCRConfig *_cardOCRConfig;
    AVCaptureSession *_session;
    AVCaptureVideoDataOutput *_videoDataOutput;
    AVCaptureVideoPreviewLayer *_previewLayer;
    NSObject<OS_dispatch_queue> *_videoDataOutputQueue;
    NSObject<OS_dispatch_queue> *_sessionControlQueue;
    NSTimer *_samplingTimer;
    NSTimer *_serverBackupTimer;
    long long _alertLeftTime;
}

@property (retain, nonatomic) AVCaptureSession *session;
@property (retain, nonatomic) AVCaptureVideoDataOutput *videoDataOutput;
@property (retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *videoDataOutputQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sessionControlQueue;
@property (retain, nonatomic) NSTimer *samplingTimer;
@property (retain, nonatomic) NSTimer *serverBackupTimer;
@property (nonatomic) long long alertLeftTime;
@property (nonatomic) BOOL haveFinishedCallback;
@property (nonatomic) BOOL hasShownNotDeterminedAlert;
@property (nonatomic) BOOL hasShownOCRPage;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) AVCaptureDevice *currentCaptureDevice;
@property (retain, nonatomic) AWECardOCRScanView *ocrScanView;
@property (nonatomic) BOOL recognizeEnable;
@property (nonatomic) BOOL forceFetchingframe;
@property (retain, nonatomic) NSTimer *alertTimer;
@property (retain, nonatomic) AWECardOCRPageParams *params;
@property (retain, nonatomic) AWECardOCRConfig *cardOCRConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)itemConfig;
- (void)p_initConfig;
- (BOOL)hasCameraPermission;
- (id)ocrScanView;
- (id)portraitLandscapeWithParams;
- (void)setForceFetchingframe:(BOOL)arg0;
- (void)backEmptyWithStatus:(unsigned long long)arg0;
- (BOOL)hasAlbumPermission;
- (void)startSessionAndScan:(BOOL)arg0;
- (id)cardOCRConfig;
- (BOOL)forceFetchingframe;
- (BOOL)recognizeEnable;
- (void)resetAlertTimer;
- (void)setRecognizeEnable:(BOOL)arg0;
- (void)completionCallBackWithResult:(id)arg0;
- (void)alertTimeOut;
- (void)p_addMask;
- (BOOL)isInPadMultiWindowState;
- (void)p_configSession;
- (void)setHaveFinishedCallback:(BOOL)arg0;
- (void)p_configOrientationListen;
- (void)p_stopAllTimers;
- (void)setCardOCRConfig:(id)arg0;
- (void)setAlertLeftTime:(long long)arg0;
- (void)p_handleDeviceOrientationDidChange;
- (long long)alertLeftTime;
- (void)p_driveToFocus:(long long)arg0;
- (void)p_runSession;
- (void)notDeterminedAction;
- (id)sessionControlQueue;
- (void)restartAllTimers;
- (BOOL)hasShownOCRPage;
- (void)setHasShownOCRPage:(BOOL)arg0;
- (id)samplingTimer;
- (id)serverBackupTimer;
- (void)setSamplingTimer:(id)arg0;
- (void)setServerBackupTimer:(id)arg0;
- (BOOL)haveFinishedCallback;
- (id)videoDataOutputQueue;
- (void)p_alertTimerRun;
- (void)p_sampleTimerRun;
- (void)setCurrentCaptureDevice:(id)arg0;
- (void)setOcrScanView:(id)arg0;
- (void)setVideoDataOutputQueue:(id)arg0;
- (void)setSessionControlQueue:(id)arg0;
- (BOOL)hasShownNotDeterminedAlert;
- (void)setHasShownNotDeterminedAlert:(BOOL)arg0;
- (id)currentCaptureDevice;
- (long long)videoOrientation;
- (void).cxx_destruct;
- (void)setSession:(id)arg0;
- (id)session;
- (id /* block */)completionBlock;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)setCompletionBlock:(id /* block */)arg0;
- (void)startSession;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)stopSession;
- (id)params;
- (id)initWithParams:(id)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (void)viewDidLoad;
- (void)captureOutput:(id)arg0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)arg1 fromConnection:(id)arg2;
- (void)setupUI;
- (void)setParams:(id)arg0;
- (id)previewLayer;
- (void)setPreviewLayer:(id)arg0;
- (id)videoDataOutput;
- (void)setVideoDataOutput:(id)arg0;
- (id)alertTimer;
- (void)setAlertTimer:(id)arg0;
- (void)back;

@end
