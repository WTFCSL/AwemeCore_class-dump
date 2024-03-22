//
//     Generated by private class-dump
//

@class AWEARTextInputViewController, ACCRecordARServiceImpl, NSString;
@protocol ACCRecordFlowService, ACCRecorderViewContainer, ACCCameraService;

@interface ACCRecordARComponent : ACCFeatureComponent <ACCRecordFlowServiceSubscriber> {
    AWEARTextInputViewController *_arTextInputViewController;
    ACCRecordARServiceImpl *_arService;
    id<ACCRecorderViewContainer> _viewContainer;
    id<ACCCameraService> _cameraService;
    id<ACCRecordFlowService> _flowService;
}

@property (retain, nonatomic) AWEARTextInputViewController *arTextInputViewController;
@property (retain, nonatomic) ACCRecordARServiceImpl *arService;
@property (weak, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)rootVC;
- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (void)p_bindViewModel;
- (void)componentDidMount;
- (void)componentDidAppear;
- (void)componentWillAppear;
- (id)serviceBinding;
- (void)bindServices:(id)arg0;
- (id)flowService;
- (void)flowServiceStateDidChanged:(unsigned long long)arg0 preState:(unsigned long long)arg1;
- (void)setFlowService:(id)arg0;
- (id)arTextInputViewController;
- (void)setArTextInputViewController:(id)arg0;
- (id)arService;
- (void)setArService:(id)arg0;
- (void)dismissARTextInputViewController;
- (void)showARTextInputViewControllerWithEffectMessageModel:(id)arg0;
- (void).cxx_destruct;
- (long long)extracted;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;

@end
