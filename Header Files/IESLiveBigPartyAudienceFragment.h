//
//     Generated by private class-dump
//

@class IESLiveBigPartyMSequenceAudienceManager, IESLiveBigPartyAudienceStore, IESLiveAudienceInteractGuestConnectionTracker, IESLiveBigPartyTransferRouterImpl, IESLiveCountTimer, IESLiveInteractionConfirmPanel, IESliveAudienceInteractPanelManager, RACDisposable, UIView, NSString, IESLiveInteractionInvitationPanel, IESLiveAudienceInteractDistributeSettingGuidePopupView, IESLiveAudienceInteractiveInviteInterestedListPanel, IESLiveLinkMicResultPanelView, IESLiveFollowGuidePopupView, NSArray, IESLiveAudienceInteractDistributeSettingPopupView, NSNumber, IESLiveInteractiveEditSeatPanelViewModel, IESLiveAudienceInteractFinishPopupView;
@protocol IESLiveInteractionSettingsRouter, IESLiveRealStreamingProvider, IESLiveBigPartyAudienceAction, IESLiveBigPartyAudienceSceneConfigProviderRegistry, IESLiveInteractionLayoutRouter, IESLiveSocialInteractAction, IESLiveInteractionLinkerService, IESLivePerfSampler, IESLiveRoomService, IESLiveInteractiveInviteService, IESLivePushStreamLifeCycle;

@interface IESLiveBigPartyAudienceFragment : IESLiveRoomComponent <IESLiveBigPartyAudienceReaction, IESLiveInteractiveMediaServiceDelegate, IESLiveBigPartyAudienceRouter, IESLiveAudienceInteractiveRootPanelDelegate, IESLiveBigPartyProvider, IESLiveBigPartyActions, IESLiveFastMatchActions, IESLiveComponentLifeCycleNotifier, HTSLiveAudienceActions, HTSLiveMessageSubscriber, IESLiveAudiencePaidLinkMicAction, IESLiveSEIListener, IESLiveBigPartyAudienceStoreReaction, IESLiveMultiKTVStageActions, IESLiveInteractVideoCaptureAction, IESLiveBigPartyTransferRouterDataSource, IESLiveAudienceLinkmicAudiencePreApplyManagerDelegate, IESLiveMediaPermissionManagerAction, IESLiveAudienceInteractionEntranceReaction, IESLiveInteractionLinkerServiceAction, IESLiveSocialInteractAction> {
    BOOL _didLayout;
    BOOL _isInBackground;
    BOOL _isInProfileView;
    BOOL _isInBeautyConfig;
    BOOL _invitationGuideHasShown;
    BOOL _hasDealWithFirstSEI;
    BOOL _hasReportForStart;
    BOOL _needToChangeWaitingStatus;
    BOOL _isNextDurationFromSmallWin;
    IESLiveBigPartyAudienceStore *_store;
    IESLiveInteractionInvitationPanel *_invitationPanel;
    IESLiveAudienceInteractFinishPopupView *_finishPopupView;
    IESLiveLinkMicResultPanelView *_resultPannelView;
    IESLiveFollowGuidePopupView *_followGuideView;
    NSString *_clickSource;
    NSArray *_readedApplications;
    IESLiveAudienceInteractiveInviteInterestedListPanel *_inviteInterestedListPanel;
    id<IESLiveRealStreamingProvider> _streamProvider;
    id<IESLiveBigPartyAudienceAction> _bigPartyActionCreator;
    id<IESLivePushStreamLifeCycle> _pushStreamLifeCycle;
    id<IESLivePerfSampler> _perfSampler;
    id<IESLiveSocialInteractAction> _interactiveActionsCreater;
    id<IESLiveInteractiveInviteService> _inviteFriendsService;
    id<IESLiveInteractionSettingsRouter> _interactionSettings;
    IESLiveAudienceInteractDistributeSettingGuidePopupView *_distributeSettingGuideView;
    IESLiveAudienceInteractDistributeSettingPopupView *_distributeSettingView;
    IESLiveInteractionConfirmPanel *_confirmPanel;
    IESLiveCountTimer *_invitationGuideTimer;
    UIView *_beautyView;
    id<IESLiveBigPartyAudienceSceneConfigProviderRegistry> _configProviderRegistry;
    NSNumber *_clickPosition;
    RACDisposable *_fetchSettingBeforeFastMatchApplyDisposable;
    IESLiveAudienceInteractGuestConnectionTracker *_guestConnectionTracker;
    IESLiveInteractiveEditSeatPanelViewModel *_adminEidtmodel;
    IESLiveBigPartyTransferRouterImpl *_bigPartyTransFerRouter;
    NSString *_linkmicIDForChangingWaitingStatus;
    IESLiveBigPartyMSequenceAudienceManager *_mSeqManager;
    IESliveAudienceInteractPanelManager *_panelManager;
    id<IESLiveInteractionLinkerService> _linker;
    id<IESLiveInteractionLayoutRouter> _layoutRouter;
    id<IESLiveRoomService> _roomService;
}

@property (retain, nonatomic) IESLiveBigPartyAudienceStore *store;
@property (weak, nonatomic) IESLiveInteractionInvitationPanel *invitationPanel;
@property (weak, nonatomic) IESLiveAudienceInteractFinishPopupView *finishPopupView;
@property (weak, nonatomic) IESLiveLinkMicResultPanelView *resultPannelView;
@property (retain, nonatomic) IESLiveFollowGuidePopupView *followGuideView;
@property (nonatomic) BOOL didLayout;
@property (copy, nonatomic) NSString *clickSource;
@property (nonatomic) BOOL isInBackground;
@property (nonatomic) BOOL isInProfileView;
@property (nonatomic) BOOL isInBeautyConfig;
@property (retain, nonatomic) NSArray *readedApplications;
@property (weak, nonatomic) IESLiveAudienceInteractiveInviteInterestedListPanel *inviteInterestedListPanel;
@property (retain, nonatomic) id<IESLiveRealStreamingProvider> streamProvider;
@property (retain, nonatomic) id<IESLiveBigPartyAudienceAction> bigPartyActionCreator;
@property (retain, nonatomic) id<IESLivePushStreamLifeCycle> pushStreamLifeCycle;
@property (retain, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (retain, nonatomic) id<IESLiveSocialInteractAction> interactiveActionsCreater;
@property (retain, nonatomic) id<IESLiveInteractiveInviteService> inviteFriendsService;
@property (weak, nonatomic) id<IESLiveInteractionSettingsRouter> interactionSettings;
@property (weak, nonatomic) IESLiveAudienceInteractDistributeSettingGuidePopupView *distributeSettingGuideView;
@property (weak, nonatomic) IESLiveAudienceInteractDistributeSettingPopupView *distributeSettingView;
@property (retain, nonatomic) IESLiveInteractionConfirmPanel *confirmPanel;
@property (retain, nonatomic) IESLiveCountTimer *invitationGuideTimer;
@property (nonatomic) BOOL invitationGuideHasShown;
@property (weak, nonatomic) UIView *beautyView;
@property (retain, nonatomic) id<IESLiveBigPartyAudienceSceneConfigProviderRegistry> configProviderRegistry;
@property (retain, nonatomic) NSNumber *clickPosition;
@property (retain, nonatomic) RACDisposable *fetchSettingBeforeFastMatchApplyDisposable;
@property (retain, nonatomic) IESLiveAudienceInteractGuestConnectionTracker *guestConnectionTracker;
@property (nonatomic) BOOL hasDealWithFirstSEI;
@property (nonatomic) BOOL hasReportForStart;
@property (retain, nonatomic) IESLiveInteractiveEditSeatPanelViewModel *adminEidtmodel;
@property (retain, nonatomic) IESLiveBigPartyTransferRouterImpl *bigPartyTransFerRouter;
@property (nonatomic) BOOL needToChangeWaitingStatus;
@property (copy, nonatomic) NSString *linkmicIDForChangingWaitingStatus;
@property (retain, nonatomic) IESLiveBigPartyMSequenceAudienceManager *mSeqManager;
@property (retain, nonatomic) IESliveAudienceInteractPanelManager *panelManager;
@property (nonatomic) BOOL isNextDurationFromSmallWin;
@property (weak, nonatomic) id<IESLiveInteractionLinkerService> linker;
@property (weak, nonatomic) id<IESLiveInteractionLayoutRouter> layoutRouter;
@property (retain, nonatomic) id<IESLiveRoomService> roomService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)arg0;

- (long long)currentCameraPosition;
- (void)setIsInBackground:(BOOL)arg0;
- (void)setClickPosition:(id)arg0;
- (void)onAppDidEnterBackground;
- (unsigned long long)previousScene;
- (void)componentDidAppear;
- (void)componentWillAppear;
- (id)clickPosition;
- (void)cleanDataSource;
- (id)panelManager;
- (void)setPanelManager:(id)arg0;
- (void)setConfirmPanel:(id)arg0;
- (id)confirmPanel;
- (void)setRoomService:(id)arg0;
- (id)roomService;
- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)remoteRoomDataReady:(id)arg0;
- (void)componentOrientationChanged:(long long)arg0;
- (void)liveWillEndWithReason:(unsigned long long)arg0;
- (id)perfSampler;
- (void)setPerfSampler:(id)arg0;
- (id)linkmicHost;
- (BOOL)isInAnonymousPaidLinkmicWithUserID:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })guestListViewFrame;
- (id)allSeatProviderViews;
- (id)requestPage:(long long)arg0;
- (BOOL)userInActiveList:(id)arg0;
- (BOOL)bigPartyAdminModeEnable;
- (void)mountDidFinishForLevel:(long long)arg0;
- (BOOL)hasDealWithFirstSEI;
- (id)baseTrackParams;
- (BOOL)didConnectToAnchor;
- (BOOL)supportOpenCamera;
- (void)overturnCamera;
- (BOOL)shouldIgnoreCameraRemoteControl;
- (void)openBeautySettingPanelBeforeVideoInteractionWithStartBlock:(id /* block */)arg0 cancelBlock:(id /* block */)arg1;
- (BOOL)isApplyingToJoinChannel;
- (void)stopConnectionWithRequestSource:(id)arg0;
- (BOOL)userInActiveOrWaitingList:(id)arg0;
- (void)setDidLayout:(BOOL)arg0;
- (void)componentOrientationTransitionBegin:(long long)arg0;
- (id)beautyView;
- (id)onlineUserWrapper:(id)arg0;
- (void)checkAuthorizationPermission:(id /* block */)arg0;
- (BOOL)couldUnmountComponent;
- (unsigned long long)supportSeiTypes;
- (void)onParseredWithSEIResult:(id)arg0;
- (void)createDidFinishForLevel:(long long)arg0;
- (void)currentLayoutDidChangedFrom:(id)arg0 to:(id)arg1;
- (void)currentLayoutUIDidUpdateFrom:(id)arg0 to:(id)arg1;
- (void)interactionModeEndedWithLayout:(id)arg0;
- (BOOL)isEnlargeGuestLayoutStyle;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })anchorContainerFrame;
- (void)setBeautyView:(id)arg0;
- (void)setLinker:(id)arg0;
- (id)linker;
- (void)askForLeave;
- (id)activedList;
- (int)uilayout;
- (id)waitingList;
- (void)inviteWithUserID:(id)arg0 secUserID:(id)arg1 sourcePage:(id)arg2;
- (void)stopConnectionWithRequestSource:(id)arg0 extra:(id)arg1 completion:(id /* block */)arg2;
- (void)userProfileWillAppear;
- (void)prepareForWaitingOffset;
- (void)changeToWaitingStatusWithLinkmicID:(id)arg0;
- (id)guestInfoList;
- (void)cancelApplication;
- (id)pushStreamLifeCycle;
- (void)setPushStreamLifeCycle:(id)arg0;
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
- (void)trackSeatClickedEventWithExtra:(id)arg0 seatIndex:(long long)arg1;
- (void)trackSeatHeadClickedWithUser:(id)arg0;
- (id)guestBattleUIAdaptor;
- (void)muteSelf:(BOOL)arg0;
- (void)muteSelfDirectly:(BOOL)arg0;
- (void)muteSelfForKTVSing:(BOOL)arg0;
- (void)showInviteActionSheetWithPostion:(id)arg0 requestPage:(id)arg1;
- (void)askForDisConnect;
- (void)leave:(id)arg0 directly:(BOOL)arg1 completed:(id /* block */)arg2;
- (void)showUserPreView:(id)arg0;
- (void)setShouldIgnoreLinkMicInvitation:(BOOL)arg0;
- (void)setShouldIgnoreCameraRemoteControl:(BOOL)arg0;
- (void)showLinkMicUserPanel:(id)arg0 from:(long long)arg1;
- (void)showLinkMicUserPanel:(id)arg0 customRequestPage:(id)arg1;
- (void)preApplyWithSourcePage:(id)arg0;
- (void)dealWithOpenCamera:(BOOL)arg0;
- (id)cameraOptionTrackParams;
- (BOOL)enableInteractDistribute;
- (void)openBeautySettingPanelBeforeInteractionWithStartBlock:(id /* block */)arg0 otherBlock:(id /* block */)arg1 cancelBlock:(id /* block */)arg2 isInvite:(BOOL)arg3;
- (void)openBeautySettingPanelDuringVideoInteraction:(BOOL)arg0 from:(id)arg1;
- (id)disconnectTrackExtraParams;
- (void)adminAcceptConnnectionWithUserID:(id)arg0 requestPage:(id)arg1;
- (void)switchWaitingStatusBeforeBigPartyStartWithLinkmicID:(id)arg0;
- (id)clickSource;
- (void)setClickSource:(id)arg0;
- (id)bigPartyActionCreator;
- (void)setBigPartyActionCreator:(id)arg0;
- (id)inviteFriendsService;
- (void)setInviteFriendsService:(id)arg0;
- (double)giftOffsetHeight;
- (id)readedApplications;
- (void)setReadedApplications:(id)arg0;
- (void)p_trackFeedbackViewShow;
- (void)mediaCaptureLiveWillAppear;
- (void)mediaCaptureLiveWillDisappear;
- (void)updateWithLiveCoreExtInfo:(id)arg0 rtcExtInfo:(id)arg1;
- (void)removeAdminUI;
- (void)preapplyManagerDidSucceedInPreapplying:(id)arg0;
- (void)preapplyManager:(id)arg0 didFailToPreapplyWithError:(id)arg1;
- (void)preapplyManagerDidSucceedInCancellingPreapply:(id)arg0;
- (BOOL)enableAudienceLinkMic;
- (void)onAppDidEnterForeground;
- (id)linkPaidCount;
- (id)linkLimitTime;
- (void)setGuestConnectionTracker:(id)arg0;
- (id)guestConnectionTracker;
- (void)interactionLinkerService:(id)arg0 muteStateDidChange:(BOOL)arg1 reason:(id)arg2;
- (void)interactionLinkerServiceAppDidActive:(id)arg0;
- (void)interactionLinkerServiceAppResignActive:(id)arg0;
- (void)interactionLinkerService:(id)arg0 interactListDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)interactionLinkerServiceInteractPrepareWillReady:(id)arg0;
- (void)interactionLinkerServiceInteractWillEnd:(id)arg0;
- (void)interactionLinkerServiceInteractDidEnd:(id)arg0;
- (void)interactionLinkerService:(id)arg0 userStateDidChangedFrom:(long long)arg1 to:(long long)arg2;
- (void)interactionLinkerService:(id)arg0 interactReceiveError:(id)arg1;
- (void)didClickAudienceInteractionEntranceInPosition:(long long)arg0;
- (void)audienceInteractiveRootPanel:(id)arg0 permitApplicationOfUser:(id)arg1 extraInfo:(id)arg2;
- (void)audienceInteractiveRootPanel:(id)arg0 inviteWithUserID:(id)arg1 secUserID:(id)arg2 sourcePage:(id)arg3 params:(id)arg4;
- (void)audienceInteractiveRootPanel:(id)arg0 inviteWithUserID:(id)arg1 secUserID:(id)arg2 sourcePage:(id)arg3;
- (void)audienceInteractiveRootPanelNeedToResetWaitingApplications:(id)arg0;
- (void)audienceInteractiveRootPanelAdminApply:(id)arg0;
- (void)paidLinkmicOpenStatusChanged:(BOOL)arg0;
- (void)paidLinkmicDidReceiveAddPriceMessage:(id)arg0;
- (void)didDisconnectWithContext:(id)arg0;
- (void)showReceivePanelWith:(id)arg0 imageURLs:(id)arg1 isFromAdmin:(BOOL)arg2 context:(id)arg3;
- (void)showReceivePreInvitePanelWithLinkMessage:(id)arg0;
- (void)userProfileWillDisappear;
- (void)showFollowGuideView:(id /* block */)arg0;
- (void)showPaidGuideViewWithExtra:(id)arg0;
- (void)resetApplyStatus;
- (void)onBigPartyAudienceEntranceTapped:(BOOL)arg0;
- (void)paidLinkmicExplainCardClick;
- (void)paidLinkmicWaitingUserLeaveWithToast:(id)arg0;
- (id)targetGuestListView;
- (void)didStartKTVWithPlayMode:(int)arg0;
- (void)didEndKTVWithPlayMode:(int)arg0;
- (void)setMSeqManager:(id)arg0;
- (unsigned long long)correctCurrentScene;
- (BOOL)invitationGuideHasShown;
- (void)setInvitationGuideHasShown:(BOOL)arg0;
- (id)layoutRouter;
- (id)convertActivedToGuest:(id)arg0;
- (id)finishPopupView;
- (void)p_trackFeedbackUploaded;
- (void)p_trackFeedbackConfirmClick;
- (void)setFinishPopupView:(id)arg0;
- (id)pkAudienceLinkmicMediaService;
- (id)guestPreviewView;
- (id)mSeqManager;
- (void)p_trackKTVSingAppResignActive;
- (void)replyWithFromSecUid:(id)arg0;
- (void)prepareForStartWithSource:(id)arg0 shouldApply:(BOOL)arg1 mute:(id)arg2 shouldBanVideo:(BOOL)arg3;
- (void)setConfigProviderRegistry:(id)arg0;
- (id)configProviderRegistry;
- (void)setBigPartyTransFerRouter:(id)arg0;
- (id)bigPartyTransFerRouter;
- (void)cancelActionWithSource:(id)arg0;
- (void)updateUnreadTipsUIWith:(id)arg0;
- (void)showCancelApplyActionSheetWithTitle:(id)arg0;
- (void)showDistributeGuideViewWithSettingModel:(id)arg0;
- (id)interactiveActionsCreater;
- (id)adminBigPartyPanelViewModel;
- (BOOL)isInProfileView;
- (void)pr_trackWatchDuration;
- (id)fetchSettingBeforeFastMatchApplyDisposable;
- (void)setHasDealWithFirstSEI:(BOOL)arg0;
- (void)p_checkIntimateChatAndClose;
- (BOOL)needToChangeWaitingStatus;
- (id)linkmicIDForChangingWaitingStatus;
- (void)setNeedToChangeWaitingStatus:(BOOL)arg0;
- (void)setLinkmicIDForChangingWaitingStatus:(id)arg0;
- (void)p_endBigPartyLayoutWithReason:(long long)arg0;
- (id)followGuideView;
- (void)hideAdminBigPartyPanel;
- (void)pr_trackClickFansLinkGuide;
- (id)pr_buildTrackFollow;
- (void)pr_trackShowFansLinkGuide;
- (void)setFollowGuideView:(id)arg0;
- (void)pr_trackReject:(BOOL)arg0 context:(id)arg1;
- (void)showReceivePanelWithModel:(id)arg0 trackParams:(id)arg1 didClickLeftButton:(id /* block */)arg2 didClickRightButton:(id /* block */)arg3 didHide:(id /* block */)arg4;
- (void)pr_trackInvitePanelShow:(id)arg0;
- (id)invitationPanel;
- (void)setInvitationPanel:(id)arg0;
- (id)distributeSettingGuideView;
- (void)pr_trackDistributionEvent:(id)arg0 extraParams:(id)arg1;
- (void)setDistributeSettingGuideView:(id)arg0;
- (void)setIsInProfileView:(BOOL)arg0;
- (void)p_didClickInteractionEntranceForPreApply;
- (void)applyActionWithPosition:(id)arg0 interactiveMode:(long long)arg1 requestPage:(id)arg2 applySource:(unsigned long long)arg3 muteState:(id)arg4 extraParams:(id)arg5;
- (void)setFetchSettingBeforeFastMatchApplyDisposable:(id)arg0;
- (BOOL)isInPaidLiveUnpay;
- (void)askForCancel;
- (void)applyActionWithPosition:(id)arg0 requestPage:(id)arg1 extraParams:(id)arg2;
- (void)p_guestOperationFromAdminPanel:(BOOL)arg0 fromLinkmicExplainCard:(BOOL)arg1 extraParams:(id)arg2;
- (id)adminBigPartyPanel;
- (void)showGuestBeautyPopupViewWithType:(unsigned long long)arg0 startTitle:(id)arg1 startBlock:(id /* block */)arg2 otherTitle:(id)arg3 otherBlock:(id /* block */)arg4 cancelBlock:(id /* block */)arg5 source:(id)arg6;
- (void)showGuestBeautyPopupViewWithType:(unsigned long long)arg0 startBlock:(id /* block */)arg1 cancelBlock:(id /* block */)arg2 source:(id)arg3;
- (void)pr_trackBeautyIconClickFrom:(id)arg0;
- (id)distributeSettingView;
- (void)setDistributeSettingView:(id)arg0;
- (void)showAdminBigPartyPanelWithSource:(id)arg0;
- (void)showInviteInterestedListPanelFrom:(id)arg0;
- (void)showInviteInterestedListPanel;
- (void)applyActionWithPosition:(id)arg0 requestPage:(id)arg1 applySource:(unsigned long long)arg2 extraParams:(id)arg3;
- (void)recheckLinkTypeBeforeApplyWithApplyMode:(long long)arg0;
- (void)reallyApplyConnectionWithParams:(id)arg0;
- (void)popupFeedbackView:(BOOL)arg0 confirmAction:(id /* block */)arg1;
- (id)resultPannelView;
- (void)p_trackGuestConnectionEndpageShowWithContext:(id)arg0 isEmpty:(BOOL)arg1;
- (void)setResultPannelView:(id)arg0;
- (void)onResultPannelViewClick;
- (BOOL)isEnabledAnonymous;
- (void)showLinkPanelForOtherLinkerGuest:(id)arg0;
- (id)inviteInterestedListPanel;
- (void)setInviteInterestedListPanel:(id)arg0;
- (struct CGSize { double x0; double x1; })getCameraSize;
- (struct CGSize { double x0; double x1; })getCameraOutSize;
- (void)pr_trackBeautyPopupViewClickStartWithType:(unsigned long long)arg0 buttonName:(id)arg1;
- (void)pr_trackBeautyPopupViewEndWithType:(unsigned long long)arg0 buttonName:(id)arg1;
- (void)setIsInBeautyConfig:(BOOL)arg0;
- (void)pr_trackBeautyPopupViewShowWithType:(unsigned long long)arg0;
- (BOOL)dynamic1V6HorizontalLinkmicDisabledForApply;
- (BOOL)disabledForPreApply;
- (BOOL)isInOptimizePaidLimit;
- (void)p_guestOperationFromAdminPanel:(BOOL)arg0;
- (BOOL)p_isInMseqRoom;
- (id)inGameBeautyParams;
- (void)p_trackGuestConnectAction:(BOOL)arg0 isEnlarge:(BOOL)arg1;
- (void)setAdminEidtmodel:(id)arg0;
- (id)adminEidtmodel;
- (void)p_showUserReportLiveAlertWithUser:(id)arg0;
- (BOOL)isInBeautyConfig;
- (void)applyAvatar;
- (void)p_trackThemeDurationForAudience:(id)arg0 endType:(id)arg1;
- (void)startBigPartyActualScene;
- (void)onBigPartyEndWithReason:(long long)arg0;
- (void)onBigPartyDidStartWithScene:(unsigned long long)arg0;
- (BOOL)isBigPartyRoom:(id)arg0;
- (void)clickAudienceSettingBtn;
- (id)currentLayoutForUserManager:(id)arg0;
- (void)setInteractiveActionsCreater:(id)arg0;
- (id)invitationGuideTimer;
- (void)setInvitationGuideTimer:(id)arg0;
- (BOOL)hasReportForStart;
- (void)setHasReportForStart:(BOOL)arg0;
- (BOOL)isNextDurationFromSmallWin;
- (void)setIsNextDurationFromSmallWin:(BOOL)arg0;
- (void)setLayoutRouter:(id)arg0;
- (BOOL)isDynamic;
- (void)setStreamProvider:(id)arg0;
- (void).cxx_destruct;
- (id)store;
- (unsigned long long)currentScene;
- (BOOL)didLayout;
- (void)setStore:(id)arg0;
- (BOOL)isInBackground;
- (id)streamProvider;
- (void)dealloc;
- (BOOL)isOnline;
- (void)messageReceived:(id)arg0;
- (id)interactionSettings;
- (void)setInteractionSettings:(id)arg0;
- (BOOL)isMute;
- (id)cameraPreviewView;

@end