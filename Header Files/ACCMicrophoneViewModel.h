//
//     Generated by private class-dump
//

@class NSString, RACSubject, RACSignal, IESEffectModel;
@protocol ACCRecordSwitchModeService, ACCRecordFlowService, ACCCameraService, ACCAudioPortService;

@interface ACCMicrophoneViewModel : ACCRecorderViewModel <ACCRecordFlowServiceSubscriber, ACCMicrophoneService> {
    BOOL _shouldOpenAEC;
    BOOL _isSupportedMode;
    IESEffectModel *_storedProp;
    id<ACCCameraService> _cameraService;
    id<ACCRecordSwitchModeService> _switchModeService;
    id<ACCRecordFlowService> _flowService;
    unsigned long long _currentMicBarState;
    id<ACCAudioPortService> _audioPortService;
    RACSubject *_micStateSubject;
}

@property (nonatomic) BOOL isSupportedMode;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (nonatomic) unsigned long long currentMicBarState;
@property (retain, nonatomic) id<ACCAudioPortService> audioPortService;
@property (retain, nonatomic) RACSubject *micStateSubject;
@property (readonly, nonatomic) BOOL shouldOpenAEC;
@property (readonly, nonatomic) IESEffectModel *storedProp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) RACSignal *micStateSignal;

- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (id)flowService;
- (id)switchModeService;
- (void)setFlowService:(id)arg0;
- (void)setSwitchModeService:(id)arg0;
- (id)micStateSignal;
- (unsigned long long)currentMicBarState;
- (void)setAudioPortService:(id)arg0;
- (id)audioPortService;
- (void)updateAcousticAlgorithmConfig;
- (BOOL)shouldShowMicroBar;
- (BOOL)duetDefaultMicrophoneIsOpen;
- (void)trackClickMicButton;
- (void)setSupportedMode:(BOOL)arg0;
- (void)setIsSupportedMode:(BOOL)arg0;
- (BOOL)isSupportedMode;
- (id)micStateSubject;
- (BOOL)hasHeadsetJoin;
- (BOOL)currentIsDuetSingIsOpen;
- (BOOL)shouldOpenAEC;
- (id)storedProp;
- (void)setCurrentMicBarState:(unsigned long long)arg0;
- (void)setMicStateSubject:(id)arg0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setUpSession;

@end
