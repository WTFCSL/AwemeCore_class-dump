//
//     Generated by private class-dump
//

@class AVCaptureSession, AVCaptureVideoPreviewLayer, AVCaptureStillImageOutput, NSString, NSObject, AVCaptureDevice, AVCaptureVideoDataOutput;
@protocol DTFCameraServiceDelegate, OS_dispatch_queue;

@interface DTFCameraService : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate> {
    NSObject<OS_dispatch_queue> *cameraProcessingQueue;
    AVCaptureVideoPreviewLayer *_previewLayer;
    id<DTFCameraServiceDelegate> _delegate;
    AVCaptureDevice *_device;
    AVCaptureSession *_session;
    AVCaptureStillImageOutput *_stillImageOutput;
    AVCaptureVideoDataOutput *_videoDataOutput;
    struct camera_configuration_t { struct CGPoint { double x; double y; } focusPointOfInterest; } _configuration;
}

@property (weak, nonatomic) id<DTFCameraServiceDelegate> delegate;
@property (retain, nonatomic) AVCaptureDevice *device;
@property (retain, nonatomic) AVCaptureSession *session;
@property (retain, nonatomic) AVCaptureStillImageOutput *stillImageOutput;
@property (nonatomic) struct camera_configuration_t { struct CGPoint { double x; double y; } focusPointOfInterest; } configuration;
@property (retain, nonatomic) AVCaptureVideoDataOutput *videoDataOutput;
@property (retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } videoOutputSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopCamera;
- (void)startCameraCompletion:(id /* block */)arg0;
- (id)getCaptureDeviceWithPosition:(long long)arg0 error:(id *)arg1;
- (BOOL)setupSessionWithPreset:(id)arg0 error:(id *)arg1 withOrientation:(long long)arg2;
- (BOOL)addCaptureDeviceAsInput:(id)arg0 toSession:(id)arg1 error:(id *)arg2;
- (id)addStillImageOutputToSession:(id)arg0 withOrientation:(long long)arg1 error:(id *)arg2;
- (id)addVideoDataOutputToSession:(id)arg0 withOrientation:(long long)arg1 error:(id *)arg2;
- (BOOL)setFocusPOI:(struct CGPoint { double x0; double x1; })arg0;
- (BOOL)changeConfiguration:(id)arg0 desiredValue:(id)arg1;
- (void)takePicture:(id /* block */)arg0;
- (void)flashOn;
- (void)flashOff;
- (void).cxx_destruct;
- (void)setSession:(id)arg0;
- (id)session;
- (BOOL)setExposureMode:(long long)arg0;
- (id)delegate;
- (struct camera_configuration_t { struct CGPoint { double x0; double x1; } x0; })configuration;
- (id)stillImageOutput;
- (void)setDevice:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)captureOutput:(id)arg0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)arg1 fromConnection:(id)arg2;
- (BOOL)setWhiteBalanceMode:(long long)arg0;
- (void)setConfiguration:(struct camera_configuration_t { struct CGPoint { double x0; double x1; } x0; })arg0;
- (id)device;
- (void)setStillImageOutput:(id)arg0;
- (struct CGSize { double x0; double x1; })videoOutputSize;
- (id)previewLayer;
- (void)setPreviewLayer:(id)arg0;
- (id)videoDataOutput;
- (void)setVideoDataOutput:(id)arg0;
- (id)initWithConfig:(id)arg0 error:(id *)arg1;

@end
