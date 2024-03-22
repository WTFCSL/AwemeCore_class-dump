//
//     Generated by private class-dump
//

@class HTSEventContext, IESliveAudienceInteractPanelManager, HTSInteractionStreamAppData, HTSLiveInteractiveAPI, IESLiveComponentContext, NSString;
@protocol IESLiveInteractiveInviteService, IESLiveInteractiveAdminActions, IESLiveMultiAudioSceneControllerProtocol, IESLiveInteractionSettingsRouter, IESLiveRoomService, IESLiveInteractionLinkerService;

@interface IESLiveMultiKTVAudienceLinkmicService : NSObject <IESLiveInteractionLinkerServiceAction, HTSLiveMessageSubscriber, IESLiveMultiKTVLinkmicServiceProtocol> {
    id<IESLiveRoomService> _room;
    HTSEventContext *_trackContext;
    IESLiveComponentContext *_componentContext;
    id<IESLiveMultiAudioSceneControllerProtocol> _sceneController;
    HTSInteractionStreamAppData *_appData;
    IESliveAudienceInteractPanelManager *_panelManager;
    id<IESLiveInteractionLinkerService> _linker;
    id<IESLiveInteractiveInviteService> _inviteFriendsService;
    HTSLiveInteractiveAPI *_interactiveAPI;
    id<IESLiveInteractiveAdminActions> _adminActions;
    id<IESLiveInteractionSettingsRouter> _interactionSettings;
}

@property (retain, nonatomic) HTSInteractionStreamAppData *appData;
@property (weak, nonatomic) IESliveAudienceInteractPanelManager *panelManager;
@property (weak, nonatomic) id<IESLiveInteractionLinkerService> linker;
@property (weak, nonatomic) id<IESLiveInteractiveInviteService> inviteFriendsService;
@property (retain, nonatomic) HTSLiveInteractiveAPI *interactiveAPI;
@property (retain, nonatomic) id<IESLiveInteractiveAdminActions> adminActions;
@property (weak, nonatomic) id<IESLiveInteractionSettingsRouter> interactionSettings;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (weak, nonatomic) id<IESLiveMultiAudioSceneControllerProtocol> sceneController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)componentContext;
- (void)setComponentContext:(id)arg0;
- (void)didSetAttachingDIContext;
- (void)showInvitePanelWithView:(id)arg0 showCompletion:(id /* block */)arg1 hideCompletion:(id /* block */)arg2;
- (id)panelManager;
- (void)setPanelManager:(id)arg0;
- (id)linkmicHost;
- (BOOL)isInAnonymousPaidLinkmicWithUserID:(id)arg0;
- (BOOL)isEnlargeGuest;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })guestListViewFrame;
- (id)allSeatProviderViews;
- (id)allMembersList;
- (id)othersMembersList;
- (BOOL)userInActiveList:(id)arg0;
- (BOOL)adminModeEnable;
- (BOOL)didConnectToAnchor;
- (BOOL)isApplyingToJoinChannel;
- (void)inviteUserWithSecID:(id)arg0 userID:(id)arg1 sourcePage:(id)arg2;
- (void)stopConnectionWithUserID:(id)arg0 secUserID:(id)arg1 requestSource:(id)arg2;
- (BOOL)userInActiveOrWaitingList:(id)arg0;
- (void)setLinker:(id)arg0;
- (id)linker;
- (id)activedList;
- (id)interactiveAPI;
- (void)setInteractiveAPI:(id)arg0;
- (id)waitingList;
- (void)inviteUserWithSecID:(id)arg0 userID:(id)arg1 sourcePage:(id)arg2 params:(id)arg3;
- (void)userProfileWillAppear;
- (id)guestInfoList;
- (id)interactUserList;
- (BOOL)isAudioCaptureThisTime;
- (BOOL)isInPaidLinkmic;
- (void)muteSelf:(BOOL)arg0;
- (BOOL)adminRightEnable;
- (BOOL)isInWaitingList:(id)arg0;
- (BOOL)processingMultiAudio;
- (void)muteOrUnMuteSelf;
- (void)updateSeatInfosIfNeeded;
- (id)inviteFriendsService;
- (void)setInviteFriendsService:(id)arg0;
- (id)playModesArray;
- (void)showAdminOperationPanelForGuest:(id)arg0;
- (void)showUserPreView:(id)arg0 trackerLabel:(id)arg1;
- (void)showInviteInterestedListPanelWithSource:(id)arg0;
- (id)roleForLog;
- (void)interactionLinkerService:(id)arg0 didCloseWithContext:(id)arg1;
- (void)interactionLinkerService:(id)arg0 onAudienceReceiveSEI:(id)arg1;
- (void)audienceInteractiveRootPanel:(id)arg0 permitApplicationOfUser:(id)arg1 extraInfo:(id)arg2;
- (void)audienceInteractiveRootPanel:(id)arg0 inviteWithUserID:(id)arg1 secUserID:(id)arg2 sourcePage:(id)arg3 params:(id)arg4;
- (void)audienceInteractiveRootPanel:(id)arg0 inviteWithUserID:(id)arg1 secUserID:(id)arg2 sourcePage:(id)arg3;
- (void)audienceInteractiveRootPanelNeedToResetWaitingApplications:(id)arg0;
- (void)audienceInteractiveRootPanelAdminApply:(id)arg0;
- (BOOL)enableShowOthersPanel;
- (void)muteSelf:(BOOL)arg0 withState:(unsigned long long)arg1;
- (id)adminInteractiveRootPanel;
- (id)adminActions;
- (void)setAdminActions:(id)arg0;
- (void)p_hideinviteLinkPopupPanel;
- (void)triggerInvitationGuideIfNeeded;
- (void)pr_trackSelfClickOnSeat;
- (void)sceneController:(id)arg0 didClickSeatAtIndex:(long long)arg1 viewIndex:(long long)arg2 seatInfo:(id)arg3;
- (void)pr_trackClickOnSeat:(id)arg0;
- (void)sceneController:(id)arg0 didClickSeatAtIndex:(long long)arg1 seatInfo:(id)arg2;
- (void)sceneController:(id)arg0 didSelectGuest:(id)arg1 enableDisconnect:(BOOL)arg2;
- (void)sceneControllerDidClickAnchorProfile:(id)arg0;
- (void)sceneController:(id)arg0 muteSelf:(BOOL)arg1;
- (void)sceneController:(id)arg0 doingSwitchLayoutWithInteractionLayout:(id)arg1;
- (id)componentContextForSceneController:(id)arg0;
- (id)roomForSceneController:(id)arg0;
- (id)trackContextForSceneController:(id)arg0;
- (id)appDataForSceneController:(id)arg0;
- (id)currentStreamLayout;
- (id)adminInteractiveRootPanelViewModel;
- (void)clickSelfUserViewFrom:(id)arg0 guest:(id)arg1;
- (void)showClickEmptySeatActionSheetWithPosition:(id)arg0 sceneController:(id)arg1;
- (void)showAdminPanelWithSource:(id)arg0;
- (void)p_trackGuestConnectAction:(BOOL)arg0 muteUser:(id)arg1;
- (void)didTapSlotViewWithPosition:(id)arg0 sceneController:(id)arg1;
- (void)didSwitchLayout;
- (id)initWithRoom:(id)arg0 trackContext:(id)arg1 componentContext:(id)arg2 sceneController:(id)arg3;
- (void)applyConnectionInMode:(long long)arg0 sourcePage:(id)arg1;
- (void)applyConnectionInMode:(long long)arg0 applySource:(unsigned long long)arg1 withPosition:(id)arg2 afterFollow:(BOOL)arg3 showPaidLinkmic:(BOOL)arg4 linkPaidCount:(id)arg5 linkLimitTime:(id)arg6 reason:(id)arg7 discountInfo:(id)arg8 clickSource:(id)arg9 params:(id)arg10 eventExtra:(id)arg11;
- (id)initWithRoom:(id)arg0 trackContext:(id)arg1 componentContext:(id)arg2 sceneController:(id)arg3 diContext:(id)arg4;
- (void).cxx_destruct;
- (BOOL)isConnected;
- (unsigned long long)currentScene;
- (BOOL)isMuted;
- (id)room;
- (void)setRoom:(id)arg0;
- (void)messageReceived:(id)arg0;
- (void)setAppData:(id)arg0;
- (id)appData;
- (id)interactionSettings;
- (void)setInteractionSettings:(id)arg0;
- (id)sceneController;
- (void)setSceneController:(id)arg0;

@end
