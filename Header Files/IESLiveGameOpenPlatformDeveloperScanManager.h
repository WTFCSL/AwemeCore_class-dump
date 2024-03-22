//
//     Generated by private class-dump
//

@class AVCaptureDeviceInput, AVCaptureSession, AVCaptureMetadataOutput, NSString, AVCaptureVideoPreviewLayer, NSObject;
@protocol OS_dispatch_queue, IESLiveGameOpenPlatformDeveloperScanManagerDelegate;

@interface IESLiveGameOpenPlatformDeveloperScanManager : NSObject <AVCaptureMetadataOutputObjectsDelegate> {
    BOOL _enableScan;
    id<IESLiveGameOpenPlatformDeveloperScanManagerDelegate> _delegate;
    AVCaptureSession *_session;
    AVCaptureVideoPreviewLayer *_videoPreviewLayer;
    AVCaptureDeviceInput *_deviceInput;
    AVCaptureMetadataOutput *_metadataOutput;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) AVCaptureSession *session;
@property (retain, nonatomic) AVCaptureVideoPreviewLayer *videoPreviewLayer;
@property (retain, nonatomic) AVCaptureDeviceInput *deviceInput;
@property (retain, nonatomic) AVCaptureMetadataOutput *metadataOutput;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL enableScan;
@property (weak, nonatomic) id<IESLiveGameOpenPlatformDeveloperScanManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)setEnableScan:(BOOL)arg0;
- (BOOL)enableScan;
- (void)setupSessionPreset:(id)arg0 metadataObjectTypes:(id)arg1 currentController:(id)arg2;
- (void)addVideoPreviewLayerToView:(id)arg0;
- (void)videoPreviewLayerRemoveFromSuperlayer;
- (id)videoPreviewLayer;
- (void).cxx_destruct;
- (void)setSession:(id)arg0;
- (id)session;
- (id)metadataOutput;
- (void)setVideoPreviewLayer:(id)arg0;
- (id)delegate;
- (id)queue;
- (void)setDelegate:(id)arg0;
- (void)reset;
- (void)setQueue:(id)arg0;
- (void)stopRunning;
- (void)startRunning;
- (void)captureOutput:(id)arg0 didOutputMetadataObjects:(id)arg1 fromConnection:(id)arg2;
- (id)deviceInput;
- (void)setDeviceInput:(id)arg0;
- (void)setMetadataOutput:(id)arg0;

@end
