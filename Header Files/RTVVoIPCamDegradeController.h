//
//     Generated by private class-dump
//

@class NSMutableDictionary, RxScheduler, NSString, RTVVoipSession, NSNumber;
@protocol RTVVoipContextManagerInterface, RTVXRSettingsInterface, RTVXREngine, RTVXRControllerInjector, RTVVoipSettingManagerInterface, RTVComposerBeautyPannelWrapperInterface;

@interface RTVVoIPCamDegradeController : NSObject <RTVVoIPCamDegradeControllerProtocol, RTVVoipObserver, RTVXRControllerInterface> {
    NSNumber *_degradeStrategy;
    NSNumber *_enableDegrade;
    id<RTVXRControllerInjector> _controllerInjector;
    RTVVoipSession *_session;
    id<RTVComposerBeautyPannelWrapperInterface> _beautyPanel;
    id<RTVVoipContextManagerInterface> _contextManager;
    id<RTVVoipSettingManagerInterface> _settingManager;
    id<RTVXRSettingsInterface> _xrSettings;
    RxScheduler *_scheduler;
    NSMutableDictionary *_muteMap;
}

@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) RTVVoipSession *session;
@property (readonly, weak, nonatomic) id<RTVXREngine> engine;
@property (readonly, weak, nonatomic) id<RTVComposerBeautyPannelWrapperInterface> beautyPanel;
@property (readonly, nonatomic) id<RTVVoipContextManagerInterface> contextManager;
@property (readonly, nonatomic) id<RTVVoipSettingManagerInterface> settingManager;
@property (readonly, nonatomic) id<RTVXRSettingsInterface> xrSettings;
@property (readonly, nonatomic) RxScheduler *scheduler;
@property (readonly, nonatomic) NSMutableDictionary *muteMap;
@property (readonly, nonatomic) unsigned long long degradeStrategy;
@property (readonly, nonatomic) BOOL enableDegrade;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (void)voipService:(id)arg0 voip:(id)arg1 switchNarrow:(BOOL)arg2;
- (id)controllerInjector;
- (void)renderBusinessHandler:(id)arg0 context:(id)arg1;
- (id)xrSettings;
- (unsigned long long)degradeStrategy;
- (id)beautyPanel;
- (BOOL)shouldToggleCameraOffWhenFold;
- (void)renderBeautyPanel:(id)arg0;
- (void)displayUserIdentifier:(id)arg0;
- (BOOL)enableDegrade;
- (unsigned long long)__degradeStrategy;
- (unsigned long long)__degradeStrategyForPad;
- (unsigned long long)__degradeStrategyForPhone;
- (void)__updateCaptureSessionPreset:(id)arg0;
- (void)__updateRTCExtInfo;
- (id)muteMap;
- (void)__degrade;
- (void)__upgrade;
- (void).cxx_destruct;
- (id)session;
- (id)scheduler;
- (id)engine;
- (id)settingManager;
- (id)contextManager;

@end
