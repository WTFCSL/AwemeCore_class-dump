//
//     Generated by private class-dump
//

@class NSString, _TtC9CameraKit16CameraSessionKey;
@protocol _TtP9CameraKit28CameraSessionManagerProtocol_, ACCRecordSwitchModeService, ACCRecorderViewContainer, ACCRecordUIHiddenStrategyService, CECMomentCameraService, CECMomentCameraCaptureService, AFDMomentCameraPerformanceTrackService, CECMomentCameraFlowService;

@interface CECSwitchCameraToMultiCamComponent : AFDMomentCameraBaseComponent <CECMomentCameraLifeCircleEvent, CECMomentCameraFlowServiceSubscriber, CameraKit.CameraSessionSwitchSubscription> {
    BOOL _hasPostConfigCamera;
    id<CECMomentCameraFlowService> _flowService;
    id<AFDMomentCameraPerformanceTrackService> _trackService;
    id<CECMomentCameraService> _cameraService;
    id<ACCRecorderViewContainer> _viewContainer;
    long long _currentState;
    id<CECMomentCameraCaptureService> _captureService;
    id<_TtP9CameraKit28CameraSessionManagerProtocol_> _cameraSessionManager;
    _TtC9CameraKit16CameraSessionKey *_momentCameraSessionKey;
    id<ACCRecordUIHiddenStrategyService> _hiddenStrategyService;
    id<ACCRecordSwitchModeService> _switchModeService;
}

@property (retain, nonatomic) id<CECMomentCameraFlowService> flowService;
@property (retain, nonatomic) id<AFDMomentCameraPerformanceTrackService> trackService;
@property (retain, nonatomic) id<CECMomentCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (nonatomic) long long currentState;
@property (retain, nonatomic) id<CECMomentCameraCaptureService> captureService;
@property (retain, nonatomic) id<_TtP9CameraKit28CameraSessionManagerProtocol_> cameraSessionManager;
@property (retain, nonatomic) _TtC9CameraKit16CameraSessionKey *momentCameraSessionKey;
@property (retain, nonatomic) id<ACCRecordUIHiddenStrategyService> hiddenStrategyService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (nonatomic) BOOL hasPostConfigCamera;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)preloadCameraInstanceAvailable:(id)arg0 forSessionKey:(id)arg1;
- (void)cameraInstanceWillCreatedFor:(id)arg0;
- (void)cameraInstanceDidCreated:(id)arg0 cameraSessionKey:(id)arg1;
- (void)didSwitchCameraSessionFrom:(id)arg0 to:(id)arg1;
- (void)willSwitchCameraSessionFrom:(id)arg0 to:(id)arg1;
- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (void)componentDidLoad;
- (id)flowService;
- (id)switchModeService;
- (id)trackService;
- (void)setFlowService:(id)arg0;
- (void)setTrackService:(id)arg0;
- (void)setSwitchModeService:(id)arg0;
- (void)onCameraFirstFrameDidRender:(id)arg0;
- (void)flowServiceDidChangeToState:(long long)arg0 fromState:(long long)arg1;
- (id)hiddenStrategyService;
- (void)setHiddenStrategyService:(id)arg0;
- (id)captureService;
- (void)setCaptureService:(id)arg0;
- (id)cameraSessionManager;
- (void)switchCameraToMultiCamera;
- (void)switchCameraWithoutUseCameraSession;
- (void)switchCameraWithUseCameraSession;
- (id)momentCameraSessionKey;
- (void)setMomentCameraSessionKey:(id)arg0;
- (void)p_configCameraAfterCameraCreated:(id)arg0;
- (BOOL)hasPostConfigCamera;
- (void)setHasPostConfigCamera:(BOOL)arg0;
- (void)setCameraSessionManager:(id)arg0;
- (void)didBecomeActive;
- (void)setCurrentState:(long long)arg0;
- (void).cxx_destruct;
- (long long)currentState;
- (void)dealloc;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;

@end