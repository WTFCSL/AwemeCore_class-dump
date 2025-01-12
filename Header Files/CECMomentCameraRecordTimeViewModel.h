//
//     Generated by private class-dump
//

@class NSString, CECMomentCameraSwitchModeViewModel;
@protocol CECMomentCameraFlowService, CECMomentCameraSwitchTabService, AFDMomentCameraPerformanceTrackService;

@interface CECMomentCameraRecordTimeViewModel : AFDMomentCameraBaseViewModel <CECMomentCameraTimerLabelAnimationViewDelegate> {
    BOOL _isShowMidTime;
    BOOL _isShowRecordTime;
    id<CECMomentCameraFlowService> _flowService;
    id<CECMomentCameraSwitchTabService> _switchTabService;
    CECMomentCameraSwitchModeViewModel *_switchModeViewModel;
    id<AFDMomentCameraPerformanceTrackService> _trackService;
}

@property (retain, nonatomic) id<CECMomentCameraFlowService> flowService;
@property (retain, nonatomic) id<CECMomentCameraSwitchTabService> switchTabService;
@property (weak, nonatomic) CECMomentCameraSwitchModeViewModel *switchModeViewModel;
@property (retain, nonatomic) id<AFDMomentCameraPerformanceTrackService> trackService;
@property (nonatomic) BOOL isShowMidTime;
@property (nonatomic) BOOL isShowRecordTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)flowService;
- (id)trackService;
- (void)animationDidEnd:(id)arg0;
- (void)setFlowService:(id)arg0;
- (void)setTrackService:(id)arg0;
- (id)switchModeViewModel;
- (void)setSwitchModeViewModel:(id)arg0;
- (id)switchTabService;
- (void)setSwitchTabService:(id)arg0;
- (void)setIsShowRecordTime:(BOOL)arg0;
- (void)setIsShowMidTime:(BOOL)arg0;
- (BOOL)isShowMidTime;
- (BOOL)isShowRecordTime;
- (void).cxx_destruct;

@end
