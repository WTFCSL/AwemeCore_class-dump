//
//     Generated by private class-dump
//

@class NSString;
@protocol RxInjector, RTVFeedSessionInterface, RTVXRRoomSessionControllerInterface, RTVXRControllerInjector, RTVXRInteractionController, RTVInteractionConfigureManagerInterface, RTVSettingsManager, RTVUserProfileManagerInterface, RTVFeedConfigureManagerInterface;

@interface __RTVVoipFeedInteractionControlViewConfiguration : NSObject <RTVCompactStateMachineDelegate, RTVInteractionControlViewConfigurationController, RTVXRControllerInterface> {
    id<RxInjector> _injector;
    id<RTVXRControllerInjector> _controllerInjector;
    id<RTVInteractionConfigureManagerInterface> _interactionConfigureManager;
    id<RTVUserProfileManagerInterface> _profileManager;
    id<RTVSettingsManager> _settingsManager;
    id<RTVXRInteractionController> _interactionController;
    id<RTVFeedConfigureManagerInterface> _feedConfigureManager;
    id<RTVXRRoomSessionControllerInterface> _roomController;
    id<RTVFeedSessionInterface> _feedSession;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, nonatomic) id<RTVInteractionConfigureManagerInterface> interactionConfigureManager;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) id<RTVSettingsManager> settingsManager;
@property (readonly, weak, nonatomic) id<RTVXRInteractionController> interactionController;
@property (readonly, weak, nonatomic) id<RTVFeedConfigureManagerInterface> feedConfigureManager;
@property (readonly, weak, nonatomic) id<RTVXRRoomSessionControllerInterface> roomController;
@property (readonly, weak, nonatomic) id<RTVFeedSessionInterface> feedSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (id)controllerInjector;
- (BOOL)enableVolumeSetting;
- (void)renderBusinessHandler:(id)arg0 context:(id)arg1;
- (void)didChangeInteractionController:(id)arg0 context:(id)arg1;
- (BOOL)enableTextChat;
- (id)roomController;
- (id)feedSession;
- (id)interactionConfigureManager;
- (BOOL)needCloseButtonOnTopLeftOfInteractionType:(unsigned long long)arg0;
- (BOOL)needParticipantJoinWaitingHint;
- (BOOL)shouldShowInviteButton;
- (BOOL)noNeedRefreshContents;
- (BOOL)backButtonTypeFixedWithBackFuncAndCloseImg;
- (id)toolBarViewControllerKey;
- (id)extraInfoView;
- (id)feedConfigureManager;
- (void)__createDependencies;
- (BOOL)__needCloseButtonOnTopLeftOfInteractionType:(unsigned long long)arg0;
- (BOOL)__isSelfOwnerOfInteractionType:(unsigned long long)arg0;
- (void).cxx_destruct;
- (id)injector;
- (id)interactionController;
- (id)settingsManager;
- (id)profileManager;
- (BOOL)shouldShowShareButton;

@end
