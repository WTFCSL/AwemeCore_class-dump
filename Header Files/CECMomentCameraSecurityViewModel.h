//
//     Generated by private class-dump
//

@class NSString, CECMomentCameraTextViewModel;
@protocol CECMomentCameraFlowService, CECMomentCameraService, AFDMCEditService;

@interface CECMomentCameraSecurityViewModel : AFDMomentCameraBaseViewModel <CECMomentCameraLifeCircleEvent, CECMomentCameraFlowServiceSubscriber> {
    CECMomentCameraTextViewModel *_textViewModel;
    id<CECMomentCameraService> _cameraService;
    id<CECMomentCameraFlowService> _flowService;
    id<AFDMCEditService> _editService;
}

@property (weak, nonatomic) CECMomentCameraTextViewModel *textViewModel;
@property (weak, nonatomic) id<CECMomentCameraService> cameraService;
@property (retain, nonatomic) id<CECMomentCameraFlowService> flowService;
@property (weak, nonatomic) id<AFDMCEditService> editService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupViewModel;
- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (id)editService;
- (void)setEditService:(id)arg0;
- (id)flowService;
- (void)setFlowService:(id)arg0;
- (id)textsArray;
- (id)textViewModel;
- (void)setTextViewModel:(id)arg0;
- (void)flowServiceDidChangeToState:(long long)arg0 fromState:(long long)arg1;
- (id)textsArrayInString;
- (BOOL)shouldUploadSamplingFrames;
- (BOOL)shouldUploadText;
- (BOOL)shouldUploadLivePhoto;
- (void).cxx_destruct;

@end