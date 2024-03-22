//
//     Generated by private class-dump
//

@class AFDMomentCameraPreviewViewModel, AFDMomentCameraScaleViewModel, NSString;
@protocol AFDMomentCameraFlowService, AFDMomentCameraService;

@interface AFDMomentCameraFlipViewModel : AFDMomentCameraBaseViewModel <AFDMomentCameraLifeCircleEvent, AFDMomentCameraFlowServiceSubscriber> {
    BOOL _shouldShowFlipButton;
    BOOL _isDisabled;
    BOOL _userInteractionEnabled;
    long long _cameraPosition;
    id /* block */ _didSwitchDeviceBlock;
    id<AFDMomentCameraService> _cameraService;
    id<AFDMomentCameraFlowService> _flowService;
}

@property (nonatomic) BOOL shouldShowFlipButton;
@property (nonatomic) long long cameraPosition;
@property (nonatomic) BOOL isDisabled;
@property (nonatomic) BOOL userInteractionEnabled;
@property (readonly, weak, nonatomic) AFDMomentCameraScaleViewModel *scaleViewModel;
@property (readonly, weak, nonatomic) AFDMomentCameraPreviewViewModel *previewViewModel;
@property (copy, nonatomic) id /* block */ didSwitchDeviceBlock;
@property (weak, nonatomic) id<AFDMomentCameraService> cameraService;
@property (weak, nonatomic) id<AFDMomentCameraFlowService> flowService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupViewModel;
- (void)switchCamera;
- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (id)previewViewModel;
- (id)flowService;
- (void)setFlowService:(id)arg0;
- (void)cameraService:(id)arg0 didTakeAction:(long long)arg1 error:(id)arg2 data:(id)arg3;
- (void)flowServiceDidChangeToState:(long long)arg0 fromState:(long long)arg1;
- (BOOL)shouldShowFlipButton;
- (id)scaleViewModel;
- (void)setDidSwitchDeviceBlock:(id /* block */)arg0;
- (id /* block */)didSwitchDeviceBlock;
- (void)setShouldShowFlipButton:(BOOL)arg0;
- (void)setIsDisabled:(BOOL)arg0;
- (long long)cameraPosition;
- (void).cxx_destruct;
- (void)setUserInteractionEnabled:(BOOL)arg0;
- (BOOL)isDisabled;
- (BOOL)userInteractionEnabled;
- (void)setCameraPosition:(long long)arg0;

@end