//
//     Generated by private class-dump
//

@class NSString;
@protocol ACCCameraService, ACCRecordFlowService, ACCDRContextProtocol, ACCRecordTrackService;

@interface ACCDRRecordMessageHandler : NSObject <ACCRecorderEvent, ACCDynamicMessageHandlerProtocol> {
    id<ACCCameraService> _cameraService;
    id<ACCDRContextProtocol> _context;
    id<ACCRecordFlowService> _flowService;
    id<ACCRecordTrackService> _trackService;
}

@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCDRContextProtocol> context;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<ACCRecordTrackService> trackService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (void)bindServices:(id)arg0;
- (id)flowService;
- (id)trackService;
- (void)trackError:(id)arg0 action:(id)arg1;
- (void)trackSuccessRateWithError:(id)arg0;
- (void)onFinishExportVideoDataWithData:(id)arg0 error:(id)arg1;
- (void)setFlowService:(id)arg0;
- (void)setTrackService:(id)arg0;
- (void)startMessageHandling;
- (void)onCaptureStillImageWithImage:(id)arg0 error:(id)arg1;
- (void)onStartExportVideoDataWithData:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;

@end