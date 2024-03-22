//
//     Generated by private class-dump
//

@class NSString;
@protocol CECMomentCameraFlowService, AFDMomentCameraPerformanceTrackService;

@interface CECMomentCameraSwitchModeViewModel : AFDMomentCameraBaseViewModel <CECMomentCameraFlowServiceSubscriber> {
    BOOL _isMultiCameraMode;
    BOOL _isItemHidden;
    BOOL _isSwitching;
    BOOL _forbidDetectingFace;
    BOOL _forbidOtherUserInteraction;
    id<CECMomentCameraFlowService> _flowService;
    id<AFDMomentCameraPerformanceTrackService> _trackService;
}

@property (nonatomic) BOOL isMultiCameraMode;
@property (nonatomic) BOOL isItemHidden;
@property (nonatomic) BOOL isSwitching;
@property (nonatomic) BOOL forbidDetectingFace;
@property (nonatomic) BOOL forbidOtherUserInteraction;
@property (retain, nonatomic) id<CECMomentCameraFlowService> flowService;
@property (weak, nonatomic) id<AFDMomentCameraPerformanceTrackService> trackService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupViewModel;
- (id)flowService;
- (id)trackService;
- (void)setFlowService:(id)arg0;
- (void)setTrackService:(id)arg0;
- (void)flowServiceDidChangeToState:(long long)arg0 fromState:(long long)arg1;
- (void)setIsSwitching:(BOOL)arg0;
- (BOOL)forbidOtherUserInteraction;
- (BOOL)isMultiCameraMode;
- (void)setForbidDetectingFace:(BOOL)arg0;
- (BOOL)forbidDetectingFace;
- (void)finishSwitchingTask;
- (void)excuteSwitchingTask;
- (void)switchModeByAlert:(BOOL)arg0;
- (void)setIsMultiCameraMode:(BOOL)arg0;
- (void)trackSwitchMode:(BOOL)arg0;
- (void)setForbidOtherUserInteraction:(BOOL)arg0;
- (void)setIsItemHidden:(BOOL)arg0;
- (BOOL)isItemHidden;
- (void).cxx_destruct;
- (BOOL)isSwitching;

@end
