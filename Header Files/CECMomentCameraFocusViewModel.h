//
//     Generated by private class-dump
//

@class NSString;
@protocol CECMomentCameraFlowService, CECMomentCameraService;

@interface CECMomentCameraFocusViewModel : AFDMomentCameraBaseViewModel <CECMomentCameraFlowServiceSubscriber> {
    BOOL _hidden;
    BOOL _interactionViewHidden;
    id<CECMomentCameraFlowService> _flowService;
    id<CECMomentCameraService> _cameraService;
    struct CGPoint { double x; double y; } _focusPoint;
}

@property (nonatomic) struct CGPoint { double x; double y; } focusPoint;
@property (nonatomic) BOOL hidden;
@property (nonatomic) BOOL interactionViewHidden;
@property (weak, nonatomic) id<CECMomentCameraFlowService> flowService;
@property (weak, nonatomic) id<CECMomentCameraService> cameraService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupViewModel;
- (void)tapFocusAtPoint:(struct CGPoint { double x0; double x1; })arg0;
- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (id)flowService;
- (void)setFlowService:(id)arg0;
- (void)flowServiceDidChangeToState:(long long)arg0 fromState:(long long)arg1;
- (void)setInteractionViewHidden:(BOOL)arg0;
- (BOOL)interactionViewHidden;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })focusPoint;
- (void)setHidden:(BOOL)arg0;
- (BOOL)hidden;
- (void)setFocusPoint:(struct CGPoint { double x0; double x1; })arg0;

@end
