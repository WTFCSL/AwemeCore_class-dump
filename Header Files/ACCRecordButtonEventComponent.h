//
//     Generated by private class-dump
//

@class UIButton, ACCLightningRecordAnimationView, NSString;
@protocol ACCRecordDualService, ACCRecorderViewContainer, ACCRecordFlowService, ACCRecordButtonService;

@interface ACCRecordButtonEventComponent : ACCFeatureComponent <ACCRecordButtonServiceSubscriber, ACCRecordFlowServiceSubscriber, ACCRecordAnimationViewTouchesPlugin, ACCLightningRecordAnimationViewNewTouchDispatchDelegate> {
    id<ACCRecorderViewContainer> _viewContainer;
    id<ACCRecordButtonService> _buttonService;
    id<ACCRecordFlowService> _flowService;
    id<ACCRecordDualService> _dualService;
    ACCLightningRecordAnimationView *_recordAnimationView;
    UIButton *_recordButton;
}

@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCRecordButtonService> buttonService;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<ACCRecordDualService> dualService;
@property (weak, nonatomic) ACCLightningRecordAnimationView *recordAnimationView;
@property (weak, nonatomic) UIButton *recordButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)bindServices:(id)arg0;
- (id)flowService;
- (void)updateRecordButtonWithCurrentDuration:(double)arg0;
- (id)recordAnimationView;
- (void)stopRecordButtonAnimationWithIgnoreProgress:(BOOL)arg0;
- (void)updateProgressAndMarksDisplay;
- (void)flowServiceDidUpdateDuration:(double)arg0;
- (void)setRecordAnimationView:(id)arg0;
- (void)setFlowService:(id)arg0;
- (id)dualService;
- (void)setDualService:(id)arg0;
- (void)recordButtonServiceStateDidChange;
- (void)recordButtonServiceMixSubTypeDidChange;
- (void)animationView:(id)arg0 touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)animationView:(id)arg0 touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)animationView:(id)arg0 touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)animationView:(id)arg0 touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (BOOL)enableNewTouchEventDispatch;
- (id)buttonService;
- (void)setButtonService:(id)arg0;
- (void).cxx_destruct;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;
- (id)recordButton;
- (void)setRecordButton:(id)arg0;

@end