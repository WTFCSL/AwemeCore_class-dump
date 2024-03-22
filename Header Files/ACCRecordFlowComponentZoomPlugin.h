//
//     Generated by private class-dump
//

@class NSString, ACCRecordFlowComponent;
@protocol ACCFeatureComponent, ACCRecorderViewContainer, ACCRecordFlowService, ACCCameraService, ACCShootSourceService, ACCRecordSwitchModeService, ACCRecordPropService;

@interface ACCRecordFlowComponentZoomPlugin : ACCFeatureComponent <ACCRecordAnimationViewTouchesPlugin, ACCRecordFlowServiceSubscriber, ACCShootSourceServiceSubscriber, ACCPanelViewDelegate, ACCFeatureComponentPlugin> {
    BOOL _isZooming;
    BOOL _isCountdowning;
    id<ACCFeatureComponent> _component;
    id<ACCCameraService> _cameraService;
    id<ACCRecorderViewContainer> _viewContainer;
    id<ACCRecordFlowService> _flowService;
    id<ACCShootSourceService> _shootSourceService;
    id<ACCRecordSwitchModeService> _switchModeService;
    id<ACCRecordPropService> _propService;
    double _cameraZoomFactor;
    double _oldZoomFactor;
    struct CGPoint { double x; double y; } _lastTouchPoint;
}

@property (class, readonly, nonatomic) id hostIdentifier;

@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<ACCShootSourceService> shootSourceService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (weak, nonatomic) id<ACCRecordPropService> propService;
@property (readonly, weak, nonatomic) ACCRecordFlowComponent *hostComponent;
@property (nonatomic) double cameraZoomFactor;
@property (nonatomic) struct CGPoint { double x; double y; } lastTouchPoint;
@property (nonatomic) double oldZoomFactor;
@property (nonatomic) BOOL isZooming;
@property (nonatomic) BOOL isCountdowning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCFeatureComponent> component;

+ (id)hostIdentifier;

- (void)touchBegin;
- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (void)componentDidMount;
- (void)bindServices:(id)arg0;
- (id)hostComponent;
- (id)flowService;
- (id)switchModeService;
- (void)flowServiceStateDidChanged:(unsigned long long)arg0 preState:(unsigned long long)arg1;
- (void)panelViewController:(id)arg0 willShowPanelView:(id)arg1;
- (void)panelViewController:(id)arg0 didDismissPanelView:(id)arg1;
- (void)setFlowService:(id)arg0;
- (void)setSwitchModeService:(id)arg0;
- (id)propService;
- (void)setPropService:(id)arg0;
- (id)shootSourceService;
- (void)shootSourceServiceStartTouch:(id)arg0;
- (void)shootSourceServiceMoveTouch:(id)arg0;
- (void)setShootSourceService:(id)arg0;
- (void)animationView:(id)arg0 touchesBegan:(id)arg1 withEvent:(id)arg2;
- (BOOL)isCountdowning;
- (void)animationView:(id)arg0 touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)setIsCountdowning:(BOOL)arg0;
- (double)oldZoomFactor;
- (void)touchMoved:(struct CGPoint { double x0; double x1; })arg0;
- (void)showZoomInfoIfNeededForScale:(double)arg0;
- (void)setOldZoomFactor:(double)arg0;
- (void)showZoomScaleHitBeforePause;
- (void).cxx_destruct;
- (id)component;
- (void)setCameraZoomFactor:(double)arg0;
- (double)cameraZoomFactor;
- (BOOL)isZooming;
- (void)setComponent:(id)arg0;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;
- (void)setIsZooming:(BOOL)arg0;
- (struct CGPoint { double x0; double x1; })lastTouchPoint;
- (void)setLastTouchPoint:(struct CGPoint { double x0; double x1; })arg0;

@end