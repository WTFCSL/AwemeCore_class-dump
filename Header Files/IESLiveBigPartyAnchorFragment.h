//
//     Generated by private class-dump
//

@class RACDisposable, NSArray, IESliveAudienceInteractPanelManager, NSString, IESLiveBigPartyAnchorStore, IESLiveAudienceInteractFinishPopupView, IESLiveBigPartyTransferRouterImpl, IESLiveInteractionConfirmPanel, IESLiveBigPartyAnchorMuteView, IESLiveBigPartyMSequenceAnchorManager;
@protocol IESLiveInteractionLinkerService, IESLiveBigPartyAnchorAction, IESLiveCompoundSubscription, IESLiveInteractionSettingsRouter, IESLiveShareService, IESLivePerfSampler;

@interface IESLiveBigPartyAnchorFragment : IESLiveRoomComponent <IESLiveBigPartyAnchorRouter, IESLiveBigPartyAnchorReaction, IESLiveComponentLifeCycleNotifier, HTSLiveAnchorActions, IESLiveAudienceInteractiveRootPanelDelegate, IESLiveBigPartyProvider, IESLiveBigPartyActions, IESLiveInteractiveBigEventActions, IESLiveAnchorPaidLinkMicAction, IESLiveKTVModeSwitchAction, IESLiveMultiKTVStageActions, IESLiveInteractionEmojiProvider, IESLiveInteractVideoCaptureAction, IESLiveBigPartyTransferRouterDataSource, IESLiveInteractionPlaymodeActions, IESLiveInteractionLinkerServiceAction, IESLiveTeamFightAction, IESLiveSocialInteractAction, IESLiveAnchorRoomStatusChangeEvents> {
    BOOL _didLayout;
    BOOL _invitationGuideHasShown;
    BOOL _hasStartedLive;
    BOOL _needResumeChatroom;
    BOOL _directStartChatRoom;
    BOOL _previousChangeToFullInteractOnlySelf;
    BOOL _isClosingLiveRoom;
    BOOL _isEnterBackground;
    IESLiveBigPartyAnchorStore *_store;
    id<IESLiveCompoundSubscription> _disposable;
    RACDisposable *_videoCaptureLevelDisposable;
    IESLiveAudienceInteractFinishPopupView *_finishPopupView;
    NSArray *_readedApplications;
    id<IESLiveBigPartyAnchorAction> _actionCreator;
    id<IESLiveShareService> _shareService;
    IESLiveInteractionConfirmPanel *_confirmPanel;
    id<IESLivePerfSampler> _perfSampler;
    IESLiveBigPartyAnchorMuteView *_anchorMuteView;
    IESLiveBigPartyTransferRouterImpl *_bigPartyTransferRouter;
    IESLiveBigPartyMSequenceAnchorManager *_mSeqManager;
    IESliveAudienceInteractPanelManager *_panelManager;
    id<IESLiveInteractionSettingsRouter> _interactionSettings;
    id<IESLiveInteractionLinkerService> _linker;
}

@property (retain, nonatomic) IESLiveBigPartyAnchorStore *store;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (weak, nonatomic) RACDisposable *videoCaptureLevelDisposable;
@property (weak, nonatomic) IESLiveAudienceInteractFinishPopupView *finishPopupView;
@property (retain, nonatomic) NSArray *readedApplications;
@property (nonatomic) BOOL didLayout;
@property (retain, nonatomic) id<IESLiveBigPartyAnchorAction> actionCreator;
@property (retain, nonatomic) id<IESLiveShareService> shareService;
@property (nonatomic) BOOL invitationGuideHasShown;
@property (nonatomic) BOOL hasStartedLive;
@property (nonatomic) BOOL needResumeChatroom;
@property (nonatomic) BOOL directStartChatRoom;
@property (nonatomic) BOOL previousChangeToFullInteractOnlySelf;
@property (retain, nonatomic) IESLiveInteractionConfirmPanel *confirmPanel;
@property (weak, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (nonatomic) BOOL isClosingLiveRoom;
@property (retain, nonatomic) IESLiveBigPartyAnchorMuteView *anchorMuteView;
@property (nonatomic) BOOL isEnterBackground;
@property (retain, nonatomic) IESLiveBigPartyTransferRouterImpl *bigPartyTransferRouter;
@property (retain, nonatomic) IESLiveBigPartyMSequenceAnchorManager *mSeqManager;
@property (retain, nonatomic) IESliveAudienceInteractPanelManager *panelManager;
@property (weak, nonatomic) id<IESLiveInteractionSettingsRouter> interactionSettings;
@property (retain, nonatomic) id<IESLiveInteractionLinkerService> linker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cameraPreview;
- (BOOL)isEnterBackground;
- (void)setIsEnterBackground:(BOOL)arg0;
- (unsigned long long)previousScene;
- (id)shareService;
- (void)setDisposable:(id)arg0;
- (id)disposable;
- (void)componentDidAppear;
- (void)componentDidDisappear;
- (void)cleanDataSource;
- (id)panelManager;
- (void)setPanelManager:(id)arg0;
- (void)setConfirmPanel:(id)arg0;
- (id)confirmPanel;
- (void)pauseLive;
- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)startLive;
- (void)componentOrientationChanged:(long long)arg0;
- (id)perfSampler;
- (void)setPerfSampler:(id)arg0;
- (void)setShareService:(id)arg0;
- (void)prepareForLive;
- (void)willStopLive;
- (void)prepareAnchorLive;
- (void)pauseAnchorLiveWithType:(unsigned long long)arg0;
- (void)willStopAnchorLive;
- (id)linkmicHost;
- (void)showAdminInteractivePanel;
- (BOOL)isInAnonymousPaidLinkmicWithUserID:(id)arg0;
- (BOOL)isInAudienceLinkmic;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })guestListViewFrame;
- (id)allSeatProviderViews;
- (BOOL)userInActiveList:(id)arg0;
- (BOOL)bigPartyAdminModeEnable;
- (void)mountDidFinishForLevel:(long long)arg0;
- (BOOL)hasDealWithFirstSEI;
- (BOOL)didConnectToAnchor;
- (BOOL)isApplyingToJoinChannel;
- (id)emojiContainerForUserID:(id)arg0 isInteractiveEmoji:(BOOL)arg1;
- (BOOL)userInActiveOrWaitingList:(id)arg0;
- (id)bizView;
- (void)setDidLayout:(BOOL)arg0;
- (id)actionCreator;
- (void)setActionCreator:(id)arg0;
- (id)onlineUserWrapper:(id)arg0;
- (BOOL)couldUnmountComponent;
- (void)currentLayoutUIDidUpdateFrom:(id)arg0 to:(id)arg1;
- (BOOL)isEnlargeGuestLayoutStyle;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })anchorContainerFrame;
- (void)setLinker:(id)arg0;
- (id)linker;
- (id)activedList;
- (int)uilayout;
- (id)waitingList;
- (void)handlePauseAction;
- (void)inviteWithUserID:(id)arg0 secUserID:(id)arg1 sourcePage:(id)arg2;
- (void)userProfileWillAppear;
- (id)guestInfoList;
- (unsigned long long)tryToShowInvitePanelWithJSBModel:(id)arg0;
- (unsigned long long)tryToStartApplyProcessingWithJSBModel:(id)arg0;
- (id)interactUserList;
- (id)allInteractUserList;
- (BOOL)bigPartyModeEnable;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })playerFrameWithOriginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)bigPartyAdminRightEnable;
- (BOOL)isAudioCaptureThisTime;
- (BOOL)isInvitingUser:(id)arg0;
- (double)offsetYOfAnchorInteractiveEmojiEndPointAnimationContainer;
- (BOOL)playerBeInBigPartyLayoutStyle;
- (BOOL)isInPaidLinkmic;
- (BOOL)isInPaidLinkmicNormal;
- (void)applyConnectionWithParams:(id)arg0;
- (void)onClickInteractEntranceItem;
- (void)showBigPartyPanelWithSeatIndex:(id)arg0;
- (void)showLinkPanel:(long long)arg0 source:(id)arg1;
- (void)showThemeCompetitionPanelWithSource:(id)arg0;
- (void)showAnchorOperationPanelForGuest:(id)arg0;
- (void)showAnchorOperationPanelForGuest:(id)arg0 requestPage:(id)arg1;
- (void)trackSeatClickedEventWithExtra:(id)arg0 seatIndex:(long long)arg1;
- (void)trackSeatHeadClickedWithUser:(id)arg0;
- (void)acceptStrongReminderRequestWithUser:(id)arg0 requestPage:(id)arg1;
- (id)guestBattleUIAdaptor;
- (BOOL)enableCameraRemoteControl;
- (void)openPaidLimitLinkTimeSettingPanelWithGuest:(id)arg0;
- (void)acceptConnnectionWithUserID:(id)arg0 requestPage:(id)arg1;
- (void)muteSelf:(BOOL)arg0;
- (void)muteSelfDirectly:(BOOL)arg0;
- (void)muteSelfForKTVSing:(BOOL)arg0;
- (void)stopBigPartyInteract;
- (void)startAudienceLinkmic:(id)arg0;
- (void)closeBigPartyWithSourceType:(long long)arg0 confirmAction:(id /* block */)arg1;
- (double)giftOffsetHeight;
- (id)readedApplications;
- (void)setReadedApplications:(id)arg0;
- (void)p_trackFeedbackViewShow;
- (void)showUserPreView:(id)arg0 trackerLabel:(id)arg1;
- (void)updateWithLiveCoreExtInfo:(id)arg0 rtcExtInfo:(id)arg1;
- (BOOL)enableAudienceLinkMic;
- (void)interactionPlaymodeDidStart:(int)arg0;
- (void)interactionPlaymodeDidEnd:(int)arg0;
- (id)topRightItem;
- (void)interactionLinkerService:(id)arg0 muteStateDidChange:(BOOL)arg1 reason:(id)arg2;
- (void)interactionLinkerServiceAppDidActive:(id)arg0;
- (void)interactionLinkerServiceAppResignActive:(id)arg0;
- (void)interactionLinkerService:(id)arg0 onSwitchMixTypeResult:(long long)arg1 isMixOnClient:(BOOL)arg2;
- (void)interactionLinkerService:(id)arg0 interactListDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)interactionLinkerService:(id)arg0 didCloseWithContext:(id)arg1;
- (void)interactionLinkerServiceInteractPrepareWillReady:(id)arg0;
- (void)interactionLinkerServiceInteractWillStart:(id)arg0;
- (void)interactionLinkerServiceInteractDidStart:(id)arg0;
- (void)interactionLinkerServiceInteractDidEnd:(id)arg0;
- (void)interactionLinkerService:(id)arg0 localSmallWindowSessionCreated:(id)arg1;
- (void)interactionLinkerService:(id)arg0 linkerOccurError:(id)arg1;
- (void)audienceInteractiveRootPanel:(id)arg0 shareWithClickScene:(id)arg1 shareScene:(id)arg2;
- (void)audienceInteractiveRootPanelOnGuestAutoLinkMic:(id)arg0 completion:(id /* block */)arg1;
- (void)audienceInteractiveRootPanel:(id)arg0 permitApplicationOfUser:(id)arg1 extraInfo:(id)arg2;
- (void)audienceInteractiveRootPanel:(id)arg0 inviteWithUserID:(id)arg1 secUserID:(id)arg2 sourcePage:(id)arg3 params:(id)arg4;
- (void)audienceInteractiveRootPanel:(id)arg0 inviteWithUserID:(id)arg1 secUserID:(id)arg2 sourcePage:(id)arg3;
- (void)audienceInteractiveRootPanelNeedToResetWaitingApplications:(id)arg0;
- (void)audienceInteractiveRootPanel:(id)arg0 onTabShowWithType:(id)arg1;
- (void)audienceInteractiveRootPanel:(id)arg0 fetchInvitableFriendsListWithCount:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)audienceInteractiveRootPanelEndInteract:(id)arg0;
- (void)paidLinkmicOpenStatusChanged:(BOOL)arg0;
- (void)paidLinkmicDidReceiveAddPriceMessage:(id)arg0;
- (id)guestsListView;
- (id)rootPanelTopRightItemWithPosition:(long long)arg0;
- (id)targetGuestListView;
- (void)onAnchorClickSelf:(id)arg0;
- (void)directStartWithLayout:(id)arg0;
- (void)directStopWithLayout:(id)arg0;
- (void)directSwitchToLayout:(id)arg0;
- (void)didStartKTVWithPlayMode:(int)arg0;
- (void)didEndKTVWithPlayMode:(int)arg0;
- (void)didCreateTreamFight:(id)arg0;
- (void)willFinishedTreamFight:(long long)arg0;
- (void)setBigPartyTransferRouter:(id)arg0;
- (id)bigPartyTransferRouter;
- (void)setMSeqManager:(id)arg0;
- (id)bigPartyPanel;
- (void)p_addLinkSettingToolBarItem;
- (void)directStartIfNeeded;
- (BOOL)startByAutoOpen;
- (void)setDirectStartChatRoom:(BOOL)arg0;
- (void)setNeedResumeChatroom:(BOOL)arg0;
- (BOOL)hasStartedLive;
- (BOOL)needResumeChatroom;
- (void)setHasStartedLive:(BOOL)arg0;
- (BOOL)directStartChatRoom;
- (void)setIsClosingLiveRoom:(BOOL)arg0;
- (BOOL)shouldSendBackgroundSignalWhenComponentDidDisappear;
- (void)p_showAnchorMuteView;
- (void)p_hideAnchorMuteView;
- (void)bigPartyDidEnd;
- (void)setPreviousChangeToFullInteractOnlySelf:(BOOL)arg0;
- (unsigned long long)p_normalizeSocialScene:(unsigned long long)arg0;
- (BOOL)shouldSendBackgroundSignalWhenAppActiveStateChange;
- (void)showBigPartyPanelWithSeatIndex:(id)arg0 enterFrom:(id)arg1;
- (id)bigPartyPanelViewModel;
- (unsigned long long)correctCurrentScene;
- (void)p_triggerInvitationGuideIfNeeded;
- (void)p_showSettingGuidePanel;
- (id)videoCaptureLevelDisposable;
- (BOOL)previousChangeToFullInteractOnlySelf;
- (void)p_resumeBigPartyLayout;
- (BOOL)isLiveViewVisiable;
- (BOOL)isMiniAppScreenCastRunning;
- (BOOL)invitationGuideHasShown;
- (void)setInvitationGuideHasShown:(BOOL)arg0;
- (void)p_trackAnchorNewConnectionPanelShow;
- (id)anchorMuteView;
- (void)p_showAnchorOperationActionSheetForOtherLinkerGuest:(id)arg0;
- (id)convertActivedToGuest:(id)arg0;
- (id)interactiveEmojiEndPointAnimationContainerForUserID:(id)arg0;
- (id)ownEmojiContainerForUserID:(id)arg0;
- (void)p_trackAdminLinkSettingChangeSuccess;
- (void)p_trackAdminLinkSettingChangeShow;
- (id)finishPopupView;
- (void)p_trackFeedbackUploaded;
- (void)p_trackFeedbackConfirmClick;
- (void)setFinishPopupView:(id)arg0;
- (void)shareLiveRoomWithScene:(id)arg0;
- (void)bigPartyLayoutDidStarted:(id)arg0;
- (void)bigPartyLayoutDidChangeFrom:(id)arg0 to:(id)arg1;
- (id)pkAudienceLinkmicMediaService;
- (void)didStartRoomBattle;
- (void)p_trackGuestConnectAction:(BOOL)arg0;
- (BOOL)enableEditSeatName;
- (BOOL)isEnlargeGuestLayout;
- (BOOL)isEqualStyle;
- (BOOL)p_enabledPaidLinkmicAddPrice;
- (void)setVideoCaptureLevelDisposable:(id)arg0;
- (BOOL)isClosingLiveRoom;
- (void)setAnchorMuteView:(id)arg0;
- (id)mSeqManager;
- (BOOL)isDynamic;
- (void).cxx_destruct;
- (id)store;
- (unsigned long long)currentScene;
- (BOOL)didLayout;
- (void)setStore:(id)arg0;
- (id)interactionSettings;
- (void)setInteractionSettings:(id)arg0;
- (BOOL)isMute;

@end
