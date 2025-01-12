//
//     Generated by private class-dump
//

@class NSString, RTVInteractionVolumeSettingViewController;
@protocol RTVSystemVolumeNotificationDispatcherProtocol, RTVXREngine, RTVXRRoomSessionControllerInterface, RTVXRControllerInjector, RTVStorageArea, RTVEffectGameContentBEFWrapper, RTVInteractionConfigureManagerInterface, RTVVoipContextManagerInterface;

@interface RTVEffectGameVolumeSettingController : NSObject <RTVInteractionVolumeSettingViewControllerDelegate, RTVXRRoomSessionControllerObserver, RTVSystemVolumeChangeObserver, RTVEffectGameVolumeSettingControllerInterface> {
    id<RTVXRControllerInjector> _controllerInjector;
    id<RTVEffectGameContentBEFWrapper> _befWrapper;
    id<RTVXREngine> _xrEngine;
    id<RTVStorageArea> _storageArea;
    id<RTVInteractionConfigureManagerInterface> _interactionConfigureManager;
    RTVInteractionVolumeSettingViewController *_volumeSettingViewController;
    id<RTVXRRoomSessionControllerInterface> _roomController;
    id<RTVSystemVolumeNotificationDispatcherProtocol> _volumeNotificationDispatcher;
    id<RTVVoipContextManagerInterface> _contextManager;
}

@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) id<RTVEffectGameContentBEFWrapper> befWrapper;
@property (readonly, weak, nonatomic) id<RTVXREngine> xrEngine;
@property (readonly, nonatomic) id<RTVStorageArea> storageArea;
@property (readonly, nonatomic) id<RTVInteractionConfigureManagerInterface> interactionConfigureManager;
@property (retain, nonatomic) RTVInteractionVolumeSettingViewController *volumeSettingViewController;
@property (readonly, weak, nonatomic) id<RTVXRRoomSessionControllerInterface> roomController;
@property (readonly, nonatomic) id<RTVSystemVolumeNotificationDispatcherProtocol> volumeNotificationDispatcher;
@property (readonly, nonatomic) id<RTVVoipContextManagerInterface> contextManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (id)controllerInjector;
- (void)renderBusinessHandler:(id)arg0 context:(id)arg1;
- (id)storageArea;
- (id)roomController;
- (id)currentVoiceVolume;
- (id)interactionConfigureManager;
- (void)rtvSession:(id)arg0 stateMachineDidChangeTo:(long long)arg1 fromState:(long long)arg2;
- (void)systemVolumeChangeFrom:(double)arg0 toValue:(double)arg1;
- (id)xrEngine;
- (void)showVolumeAdjustmentPanelOnVC:(id)arg0;
- (id)currentGameVolume;
- (id)befWrapper;
- (id)volumeSettingViewController;
- (void)__showVolumeAdjustTipIfNeeded;
- (BOOL)__todayHasShownVolumeSettingTip;
- (void)__postShowBubbleTipsNotification;
- (void)interactionVolumeSettingViewController:(id)arg0 interactionVolumeDidChanged:(float)arg1;
- (void)interactionVolumeSettingViewController:(id)arg0 voipVoiceVolumeDidChanged:(float)arg1;
- (id)currentInteractionVolume;
- (void)setVolumeSettingViewController:(id)arg0;
- (id)volumeNotificationDispatcher;
- (void).cxx_destruct;
- (id)contextManager;

@end
