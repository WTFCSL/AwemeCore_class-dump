//
//     Generated by private class-dump
//

@class NSString;
@protocol ACCCameraService, ACCDRContextProtocol;

@interface ACCDRInitialCaptureMessageHandler : NSObject <ACCDynamicMessageHandlerProtocol, ACCViewControllerEventProtocol> {
    BOOL _isFirstAppear;
    id<ACCDRContextProtocol> _context;
    id<ACCCameraService> _cameraService;
}

@property (nonatomic) BOOL isFirstAppear;
@property (retain, nonatomic) id<ACCDRContextProtocol> context;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsFirstAppear:(BOOL)arg0;
- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (void)bindServices:(id)arg0;
- (void)startVideoCaptureIfCheckAPPState:(BOOL)arg0 token:(id)arg1;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)startAudioCapture;
- (id)context;
- (void)viewWillAppear:(BOOL)arg0;
- (void)viewDidLoad;
- (BOOL)isFirstAppear;

@end
