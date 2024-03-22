//
//     Generated by private class-dump
//

@class UILabel, NSString, UIView;
@protocol ACCRecorderViewContainer, ACCRecordDualService, ACCRecordUIHiddenStrategyService, ACCCameraService, ACCRecordFlowService, ACCRecordAuthService, ACCRecordPropService, ACCSideslipPropService, ACCRecordFlowControlService, ACCSideslipPropPanelService, ACCRecordFlowConfigProtocol, ACCRecordSwitchModeService, AWEVideoProgressViewProtocol, ACCVideoConfigProtocol, ACCRecordSystemLivePhotoService;

@interface ACCRecordProgressComponent : ACCFeatureComponent <ACCRecordFlowServiceSubscriber, ACCRecordConfigDurationHandler, ACCCameraLifeCircleEvent, ACCRecordSwitchModeServiceSubscriber, ACCRecorderViewContainerItemsHideShowObserver, ACCSideslipPropPanelServiceSubscriber> {
    BOOL _isShowTimeLimitInfo;
    UIView<AWEVideoProgressViewProtocol> *_studioProgressView;
    id<ACCRecorderViewContainer> _viewContainer;
    id<ACCRecordFlowService> _flowService;
    id<ACCCameraService> _cameraService;
    id<ACCRecordPropService> _propService;
    id<ACCVideoConfigProtocol> _videoConfig;
    id<ACCRecordSwitchModeService> _switchModeService;
    id<ACCRecordAuthService> _authService;
    id<ACCRecordFlowConfigProtocol> _flowConfig;
    id<ACCRecordUIHiddenStrategyService> _hiddenStrategyService;
    id<ACCRecordDualService> _dualService;
    id<ACCSideslipPropPanelService> _sideslipPropPanelService;
    id<ACCSideslipPropService> _sideslipPropService;
    id<ACCRecordFlowControlService> _flowControlService;
    id<ACCRecordSystemLivePhotoService> _systemLivePhotoService;
    UILabel *_timeLabel;
    NSString *_timeLimitInfo;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _studioProgressViewFrame;
}

@property (retain, nonatomic) UIView<AWEVideoProgressViewProtocol> *studioProgressView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } studioProgressViewFrame;
@property (weak, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCVideoConfigProtocol> videoConfig;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordAuthService> authService;
@property (retain, nonatomic) id<ACCRecordFlowConfigProtocol> flowConfig;
@property (retain, nonatomic) id<ACCRecordUIHiddenStrategyService> hiddenStrategyService;
@property (retain, nonatomic) id<ACCRecordDualService> dualService;
@property (retain, nonatomic) id<ACCSideslipPropPanelService> sideslipPropPanelService;
@property (retain, nonatomic) id<ACCSideslipPropService> sideslipPropService;
@property (retain, nonatomic) id<ACCRecordFlowControlService> flowControlService;
@property (retain, nonatomic) id<ACCRecordSystemLivePhotoService> systemLivePhotoService;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) NSString *timeLimitInfo;
@property (nonatomic) BOOL isShowTimeLimitInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)videoConfig;
- (void)setVideoConfig:(id)arg0;
- (void)updateItemsHiddenWithAnimation:(BOOL)arg0;
- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (void)componentDidMount;
- (void)componentDidAppear;
- (unsigned long long)preferredLoadPhase;
- (void)loadComponentView;
- (void)bindServices:(id)arg0;
- (id)flowService;
- (id)switchModeService;
- (void)updateStandardDurationIndicatorDisplay;
- (id)flowConfig;
- (void)updateProgressAndMarksDisplay;
- (void)flowServiceStateDidChanged:(unsigned long long)arg0 preState:(unsigned long long)arg1;
- (void)flowServiceDidUpdateDuration:(double)arg0;
- (void)flowServiceDidMarkDuration:(double)arg0;
- (void)flowServiceDidRemoveLastSegment:(BOOL)arg0;
- (void)flowServiceDidRemoveAllSegment;
- (void)flowServiceDurationHasRestored;
- (void)shouldItemsShow:(BOOL)arg0 animated:(BOOL)arg1;
- (void)viewContainerDidLayout;
- (void)switchModeServiceDidChangeMode:(id)arg0 oldMode:(id)arg1;
- (void)didSetMaxDuration:(double)arg0;
- (void)cameraService:(id)arg0 pauseRecordWithError:(id)arg1;
- (void)cameraService:(id)arg0 startRecordWithError:(id)arg1;
- (void)setFlowService:(id)arg0;
- (void)setSwitchModeService:(id)arg0;
- (void)setFlowConfig:(id)arg0;
- (id)authService;
- (void)setAuthService:(id)arg0;
- (id)flowControlService;
- (void)setFlowControlService:(id)arg0;
- (id)hiddenStrategyService;
- (void)setHiddenStrategyService:(id)arg0;
- (id)sideslipPropService;
- (id)propService;
- (void)setPropService:(id)arg0;
- (void)setSideslipPropService:(id)arg0;
- (id)sideslipPropPanelService;
- (void)setSideslipPropPanelService:(id)arg0;
- (id)systemLivePhotoService;
- (void)setSystemLivePhotoService:(id)arg0;
- (void)sideslipPropPanelService:(id)arg0 willShowTrayView:(id)arg1;
- (void)sideslipPropPanelService:(id)arg0 willDismissTrayView:(id)arg1;
- (id)dualService;
- (void)setDualService:(id)arg0;
- (id)studioProgressView;
- (void)hideProgressBar:(BOOL)arg0;
- (void)updateBlinkingMark;
- (void)hideTimeLabelIfNeed;
- (void)blinkBarIfCompleted;
- (void)updateTimeLimitInfo;
- (BOOL)shouldShowTimeLimitInfo;
- (void)setIsShowTimeLimitInfo:(BOOL)arg0;
- (void)updateDurationDisplay;
- (id)currentDurationText;
- (BOOL)isShowTimeLimitInfo;
- (id)timeLimitInfo;
- (void)setTimeLimitInfo:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })studioProgressViewFrame;
- (void)setStudioProgressView:(id)arg0;
- (void)setStudioProgressViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void).cxx_destruct;
- (void)setTimeLabel:(id)arg0;
- (id)timeLabel;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;
- (void)updateProgressBar;

@end