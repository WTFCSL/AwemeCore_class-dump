//
//     Generated by private class-dump
//

@class NSString;
@protocol ACCDRRecordService, ACCCameraService, ACCRecordFlowService, ACCDRContextProtocol, ACCDRCaptureService, ACCVideoConfigProtocol;

@interface ACCDRAppStateMessageHandler : NSObject <ACCDynamicMessageHandlerProtocol, ACCViewControllerEventProtocol> {
    id<ACCDRContextProtocol> _context;
    id<ACCRecordFlowService> _flowService;
    id<ACCCameraService> _cameraService;
    id<ACCDRRecordService> _recordService;
    id<ACCDRCaptureService> _captureService;
    id<ACCVideoConfigProtocol> _configService;
}

@property (retain, nonatomic) id<ACCDRContextProtocol> context;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCDRRecordService> recordService;
@property (retain, nonatomic) id<ACCDRCaptureService> captureService;
@property (retain, nonatomic) id<ACCVideoConfigProtocol> configService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (void)bindServices:(id)arg0;
- (id)flowService;
- (void)setFlowService:(id)arg0;
- (void)handleAppBecomeActiveNotification;
- (void)handleAppResignActiveNotification;
- (id)configService;
- (void)setConfigService:(id)arg0;
- (id)recordService;
- (void)setRecordService:(id)arg0;
- (id)captureService;
- (void)setCaptureService:(id)arg0;
- (BOOL)p_viewControllerCondition;
- (BOOL)shouldManageCaptureState;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;

@end