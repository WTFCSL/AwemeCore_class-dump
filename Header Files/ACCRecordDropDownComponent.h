//
//     Generated by private class-dump
//

@class NSString, UIPanGestureRecognizer;
@protocol ACCRecorderViewContainer, ACCRecordFlowService, ACCRecordGestureService, ACCFocusService, ACCCameraService;

@interface ACCRecordDropDownComponent : ACCFeatureComponent <ACCRecordGestureServiceSubscriber, ACCRecordFlowServiceSubscriber, UIGestureRecognizerDelegate, AFDHalfScreenDelegate> {
    id<ACCRecorderViewContainer> _viewContainer;
    id<ACCRecordFlowService> _flowService;
    id<ACCRecordGestureService> _gestureService;
    id<ACCFocusService> _focusService;
    id<ACCCameraService> _cameraService;
    UIPanGestureRecognizer *_pullDownGestureRecognizer;
}

@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<ACCRecordGestureService> gestureService;
@property (retain, nonatomic) id<ACCFocusService> focusService;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) UIPanGestureRecognizer *pullDownGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (void)componentDidMount;
- (id)gesturesWillAdded;
- (void)gesturesWillEnable;
- (void)bindServices:(id)arg0;
- (id)flowService;
- (void)flowServiceStateDidChanged:(unsigned long long)arg0 preState:(unsigned long long)arg1;
- (void)flowServiceDidRemoveLastSegment:(BOOL)arg0;
- (void)flowServiceDidRemoveAllSegment;
- (void)setFlowService:(id)arg0;
- (void)halfScreenPresentationWillBegin;
- (void)halfScreenDismissalDidEnd;
- (void)setupPullDownGesture;
- (id)focusService;
- (id)pullDownGestureRecognizer;
- (id)gestureService;
- (void)setGestureService:(id)arg0;
- (void)setFocusService:(id)arg0;
- (void)setPullDownGestureRecognizer:(id)arg0;
- (void).cxx_destruct;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;

@end