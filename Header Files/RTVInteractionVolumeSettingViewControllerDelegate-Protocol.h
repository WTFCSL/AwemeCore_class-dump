//
//     Generated by private class-dump
//

@protocol RTVInteractionVolumeSettingViewControllerDelegate <NSObject>

- (id)currentVoiceVolume;
- (void)interactionVolumeSettingViewController:(id)arg0 interactionVolumeDidChanged:(float)arg1;
- (void)interactionVolumeSettingViewController:(id)arg0 voipVoiceVolumeDidChanged:(float)arg1;
- (id)currentInteractionVolume;

@optional

- (void)feedVolumeSettingViewControllerWillDismiss:(id)arg0;

@end