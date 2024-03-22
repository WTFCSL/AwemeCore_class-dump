//
//     Generated by private class-dump
//

@class NSString, AVCaptureSession, AVCaptureDevice;

@interface BDCTBaseCameraViewController : UIViewController <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureAudioDataOutputSampleBufferDelegate> {
    BOOL _isFirstAppear;
    BOOL _isCameraSessionConfiguring;
    long long _requirePermission;
    AVCaptureSession *_cameraSession;
    AVCaptureDevice *_videoDevice;
}

@property (retain, nonatomic) AVCaptureSession *cameraSession;
@property (readonly, nonatomic) long long requirePermission;
@property (nonatomic) BOOL isCameraSessionConfiguring;
@property (retain, nonatomic) AVCaptureDevice *videoDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateUIWhenCaptureSessionStateChange:(id)arg0;
- (void)cameraSessionDidStartRunning:(id)arg0;
- (void)checkCameraPermission;
- (void)requestCameraPermissionIfNeeded;
- (void)p_cameraPermissionDidReady;
- (void)requestAudioPermissionIfNeeded;
- (void)p_didTapExitForPermissionError:(long long)arg0;
- (void)setCameraSession:(id)arg0;
- (void)setIsCameraSessionConfiguring:(BOOL)arg0;
- (void)stopCameraIfNeeded;
- (void)startCameraIfNeededAfterApplicationBecomeActive;
- (void)showToastAlertWithMessage:(id)arg0;
- (BOOL)isCameraSessionConfiguring;
- (id)cameraSession;
- (long long)requirePermission;
- (void)deviceOrientationDidChange;
- (void)didTapNavBackButton;
- (void)didTapExitForPermissionError:(long long)arg0;
- (BOOL)shouldAutorotate;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (long long)preferredStatusBarStyle;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)applicationWillResignActive;
- (id)videoDevice;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)applicationDidBecomeActive;
- (void)setupCameraSession;
- (void)setVideoDevice:(id)arg0;

@end
