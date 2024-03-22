//
//     Generated by private class-dump
//

@class IESLiveLayoutPlaceholderView, IESLiveRightBottomMutuallyExclusiveItem, IESLiveIntimateChatStreamLayout, IESLivePaidLinkmicExplainCard, IESLiveChatRoomTrackerContext, IESLiveIntimateChatLocalLayout, NSString, IESLiveAudienceInteractiveRootPanel, IESLiveIntimateChatOperationRootPanel, HTSLiveInteractiveAnchorStore, NSArray, HTSGroupedLiveMessageHandler, IESLiveInteractiveMediaService, IESLiveIntimateChatGuestListView, IESLiveChatRoomTracker;
@protocol IESLiveGiftModule, IESLiveInteractUserModel, IESLiveInteractiveUserService, HTSLiveIntimateChatAnchorActions, HTSLiveDiggAction, IESLiveShareService, IESLiveIntimateChatLayoutMachine, IESLiveRealStreamingProvider;

@interface IESLiveIntimateChatAnchorNewFragment : IESLiveChatRoomCommon <HTSLiveMessageSubscriber, IESLiveIntimateChatAnchorRouter, IESLiveAudienceChatRoomProvider, IESLiveInteractAction, IESLiveIntimateChatOperationRootPanelDelegate, IESLiveInteractiveMediaServiceDelegate, IESLiveIntimateChatGuestListViewDelegate, IESLiveAudienceInteractiveRootPanelDelegate, IESLiveAnchorPaidLinkMicAction, IESLiveRevenueInteractAction> {
    BOOL _connected;
    BOOL _isConnenctToRTC;
    BOOL _autoOpenInvitePanel;
    BOOL _enableSendGiftToHost;
    BOOL _openInMSequence;
    BOOL _hasHostSessionCallback;
    BOOL _audienceConnectOpen;
    NSString *toastString;
    id<IESLiveInteractiveUserService> userService;
    long long mode;
    IESLiveIntimateChatGuestListView *_guestListView;
    id<IESLiveIntimateChatLayoutMachine> _layoutMachine;
    id<HTSLiveIntimateChatAnchorActions> _dispatcher;
    IESLiveLayoutPlaceholderView *_placeholderView;
    IESLiveRightBottomMutuallyExclusiveItem *_strongReminderItem;
    IESLiveLayoutPlaceholderView *_strongReminderPlaceholderView;
    id<IESLiveInteractUserModel> _tapedUserModel;
    id<IESLiveGiftModule> _giftModule;
    id<IESLiveRealStreamingProvider> _streamProvider;
    id<HTSLiveDiggAction> _diggDispatcher;
    HTSGroupedLiveMessageHandler *_messageHandler;
    IESLiveAudienceInteractiveRootPanel *_bigPartyPanel;
    NSArray *_readedApplications;
    IESLiveIntimateChatOperationRootPanel *_audienceInteractiveRootPanel;
    HTSLiveInteractiveAnchorStore *_store;
    id<IESLiveShareService> _shareService;
    long long _openInteractRequestType;
    id /* block */ _interactiveOpenNotifyBlock;
    id /* block */ _interactiveCloseNotifyBlock;
    IESLiveInteractiveMediaService *_mediaService;
    IESLiveInteractiveMediaService *_switchingMediaService;
    IESLiveIntimateChatLocalLayout *_localLayout;
    IESLiveIntimateChatStreamLayout *_streamLayout;
    double _delayTimeInterval;
    IESLiveRightBottomMutuallyExclusiveItem *_linkMicItem;
    IESLiveRightBottomMutuallyExclusiveItem *_paidGuideMicItem;
    IESLivePaidLinkmicExplainCard *_guideLinkmicCard;
    IESLiveLayoutPlaceholderView *_guideLinkmicCardPlaceHolderView;
    NSArray *_lastFilterSessionsUIDList;
}

@property (retain, nonatomic) id<HTSLiveIntimateChatAnchorActions> dispatcher;
@property (retain, nonatomic) IESLiveLayoutPlaceholderView *placeholderView;
@property (retain, nonatomic) IESLiveRightBottomMutuallyExclusiveItem *strongReminderItem;
@property (retain, nonatomic) IESLiveLayoutPlaceholderView *strongReminderPlaceholderView;
@property (retain, nonatomic) id<IESLiveInteractUserModel> tapedUserModel;
@property (retain, nonatomic) id<IESLiveGiftModule> giftModule;
@property (weak, nonatomic) id<IESLiveRealStreamingProvider> streamProvider;
@property (weak, nonatomic) id<HTSLiveDiggAction> diggDispatcher;
@property (retain, nonatomic) HTSGroupedLiveMessageHandler *messageHandler;
@property (weak, nonatomic) IESLiveAudienceInteractiveRootPanel *bigPartyPanel;
@property (retain, nonatomic) NSArray *readedApplications;
@property (nonatomic) BOOL isConnenctToRTC;
@property (weak, nonatomic) IESLiveIntimateChatOperationRootPanel *audienceInteractiveRootPanel;
@property (retain, nonatomic) HTSLiveInteractiveAnchorStore *store;
@property (nonatomic) BOOL autoOpenInvitePanel;
@property (retain, nonatomic) id<IESLiveShareService> shareService;
@property (nonatomic) long long openInteractRequestType;
@property (copy, nonatomic) id /* block */ interactiveOpenNotifyBlock;
@property (copy, nonatomic) id /* block */ interactiveCloseNotifyBlock;
@property (nonatomic) BOOL enableSendGiftToHost;
@property (nonatomic) BOOL openInMSequence;
@property (retain, nonatomic) IESLiveInteractiveMediaService *mediaService;
@property (retain, nonatomic) IESLiveInteractiveMediaService *switchingMediaService;
@property (retain, nonatomic) IESLiveIntimateChatLocalLayout *localLayout;
@property (retain, nonatomic) IESLiveIntimateChatStreamLayout *streamLayout;
@property (nonatomic) BOOL hasHostSessionCallback;
@property (nonatomic) double delayTimeInterval;
@property (retain, nonatomic) IESLiveRightBottomMutuallyExclusiveItem *linkMicItem;
@property (retain, nonatomic) IESLiveRightBottomMutuallyExclusiveItem *paidGuideMicItem;
@property (retain, nonatomic) IESLivePaidLinkmicExplainCard *guideLinkmicCard;
@property (retain, nonatomic) IESLiveLayoutPlaceholderView *guideLinkmicCardPlaceHolderView;
@property (copy, nonatomic) NSArray *lastFilterSessionsUIDList;
@property (nonatomic) BOOL audienceConnectOpen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long mode;
@property (nonatomic) BOOL connected;
@property (retain, nonatomic) IESLiveIntimateChatGuestListView *guestListView;
@property (retain, nonatomic) id<IESLiveIntimateChatLayoutMachine> layoutMachine;
@property (retain, nonatomic) NSString *toastString;
@property (readonly, nonatomic) id<IESLiveInteractiveUserService> userService;
@property (retain, nonatomic) IESLiveChatRoomTracker *chatRoomTracker;
@property (retain, nonatomic) IESLiveChatRoomTrackerContext *chatRoomTrackerContext;

- (void)showToast:(id)arg0;
- (id)streamLayout;
- (void)setStreamLayout:(id)arg0;
- (id)shareService;
- (id)toastString;
- (void)setToastString:(id)arg0;
- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)setShareService:(id)arg0;
- (id)userService;
- (id)linkmicHost;
- (BOOL)isInAnonymousPaidLinkmicWithUserID:(id)arg0;
- (BOOL)userInActiveList:(id)arg0;
- (BOOL)processingMultiVideo;
- (BOOL)adminModeEnable;
- (void)endRevenueInteractWithScene:(unsigned long long)arg0;
- (BOOL)didConnectToAnchor;
- (void)clickInteractionItem;
- (id)localLayout;
- (void)setLocalLayout:(id)arg0;
- (BOOL)isApplyingToJoinChannel;
- (void)inviteUserWithSecID:(id)arg0 userID:(id)arg1 sourcePage:(id)arg2;
- (BOOL)userInActiveOrWaitingList:(id)arg0;
- (id)layoutMachine;
- (void)setLayoutMachine:(id)arg0;
- (id)onlineUserWrapper:(id)arg0;
- (void)stopInteractiveModeWithRequestSource:(id)arg0;
- (id)giftModule;
- (void)setGiftModule:(id)arg0;
- (void)loadMessageHandler;
- (void)startInteractiveWithScene:(unsigned long long)arg0;
- (BOOL)isMoreToolsShowingInteractiveItem;
- (void)bindStore;
- (id)waitingList;
- (void)stopInteractiveMode;
- (void)onSwitchToPK;
- (id)guestInfoList;
- (id)currentHostID;
- (BOOL)sendGiftToHostEnable;
- (id)interactUserList;
- (BOOL)isInPaidLinkmic;
- (BOOL)adminRightEnable;
- (id)guestListView;
- (void)renderWaitingApplicationNumTip:(id)arg0;
- (long long)linkedUserCount;
- (BOOL)isIntimateChatEnabled;
- (void)closeLinkMicWithAudienceByForce;
- (BOOL)isMatchingInteractionEvent;
- (void)stopInteractiveModeWithRequestSource:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)isInteractStreaming;
- (void)applyConnectionForAudioModeWithApplySource:(unsigned long long)arg0 paidCount:(id)arg1 limitedTime:(id)arg2 reason:(id)arg3 discountInfo:(id)arg4 extraParams:(id)arg5;
- (id)paidApplyReasonRequired;
- (id)paidApplyDefaultReason;
- (id)paidApplyPresetReason;
- (BOOL)isUnifyIntimateChat;
- (void)onIntimateChatLayoutSuspendByPKStart;
- (void)onIntimateChatLayoutResumeByPKEnd;
- (id)commonParamsForConnectTrack;
- (void)addCommonParamsForConnectTrack:(id)arg0;
- (BOOL)isVideoConnection;
- (BOOL)isInteractWithGuest;
- (void)filterSessionBeforeSwitchToPK:(id)arg0;
- (void)switchApplyStateFromGiftPKWithLinkMicID:(id)arg0 interactiveMode:(long long)arg1;
- (void)renderToolBarItemStatus:(unsigned long long)arg0;
- (void)switchSceneFromGiftPKWithMediaService:(id)arg0;
- (void)switchSceneFromGiftPKWithMediaService:(id)arg0 smallAudienceRequestView:(id)arg1;
- (void)openIntimateChatAutomatically:(BOOL)arg0 showPanel:(BOOL)arg1 requestType:(long long)arg2 completion:(id /* block */)arg3;
- (BOOL)couldSendToGuest;
- (void)acceptConnectionWithUserID:(id)arg0 requestPage:(id)arg1;
- (void)showPaidSettingPanel:(id)arg0;
- (void)syncNormalPaidlLinkmicSource:(id)arg0;
- (BOOL)hasWaitingUsers;
- (void)setGuestListView:(id)arg0;
- (void)interactiveMediaServiceDidStart:(id)arg0;
- (void)interactiveMediaService:(id)arg0 receivesError:(id)arg1;
- (void)interactiveMeidaServiceLostConnection:(id)arg0;
- (void)interactiveMediaService:(id)arg0 firstRemoteAudioFrameWithLinkmicUid:(id)arg1;
- (void)interactiveMediaService:(id)arg0 didOfflineOfUid:(id)arg1 sessions:(id)arg2 reason:(unsigned long long)arg3;
- (void)interactiveMediaServiceAppResignActive;
- (void)interactiveMediaServiceAppDidActive;
- (void)resumeLayout;
- (void)onInteractionStarted;
- (BOOL)isInteractionRuning;
- (id)readedApplications;
- (void)setReadedApplications:(id)arg0;
- (void)onInteractionEnded;
- (void)didClickItemView:(id)arg0;
- (id)p_createGuestListView;
- (void)showOrHideIntimateChatEntranceWithApplicationsCount:(long long)arg0;
- (void)showUserPreView:(id)arg0 trackerLabel:(id)arg1;
- (void)p_removeGuestListView;
- (void)stopAndQuit;
- (void)askForStopConnectionAction:(id /* block */)arg0;
- (void)updateLayoutOfSessionViews:(id)arg0;
- (BOOL)couldSendToHost;
- (BOOL)p_enablePaidLinkmicAddPrice;
- (void)setEnableSendGiftToHost:(BOOL)arg0;
- (BOOL)enableSendGiftToHost;
- (void)audienceInteractiveRootPanel:(id)arg0 permitApplicationOfUser:(id)arg1 extraInfo:(id)arg2;
- (void)audienceInteractiveRootPanel:(id)arg0 inviteWithUserID:(id)arg1 secUserID:(id)arg2 sourcePage:(id)arg3;
- (void)audienceInteractiveRootPanelNeedToResetWaitingApplications:(id)arg0;
- (void)audienceInteractiveRootPanel:(id)arg0 fetchInvitableFriendsListWithCount:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)audienceInteractiveRootPanelEndInteract:(id)arg0;
- (void)audienceInteractiveRootPanel:(id)arg0 willShowSettingPanel:(id)arg1;
- (void)paidLinkmicOpenStatusChanged:(BOOL)arg0;
- (void)paidLinkmicDidReceiveAddPriceMessage:(id)arg0;
- (void)setDelayTimeInterval:(double)arg0;
- (double)delayTimeInterval;
- (id)bigPartyPanel;
- (BOOL)p_enabledPaidLinkmicAddPrice;
- (void)p_showPaidLinkmicAlertWithContent:(id)arg0;
- (void)closeInteractive;
- (void)trackInteractModeOpenSuccess;
- (void)startInteractiveMode;
- (BOOL)isConnenctToRTC;
- (void)setIsConnenctToRTC:(BOOL)arg0;
- (void)startMediaServiceInteract;
- (void)closeRTCStream;
- (void)swithToPKWithGuest;
- (void)switchSceneFromGiftPK;
- (id)lastFilterSessionsUIDList;
- (void)loadMediaServiceNew;
- (void)trackInteractModeOver;
- (id)audienceInteractiveRootPanel;
- (void)setAudienceInteractiveRootPanel:(id)arg0;
- (id /* block */)interactiveOpenNotifyBlock;
- (void)setInteractiveOpenNotifyBlock:(id /* block */)arg0;
- (void)showInteractItemRedDot:(BOOL)arg0;
- (id /* block */)interactiveCloseNotifyBlock;
- (void)setInteractiveCloseNotifyBlock:(id /* block */)arg0;
- (void)setLinkMicItem:(id)arg0;
- (id)linkMicItem;
- (id)strongReminderPlaceholderView;
- (void)setStrongReminderPlaceholderView:(id)arg0;
- (void)setStrongReminderItem:(id)arg0;
- (id)strongReminderItem;
- (void)p_showPaidLinkMicGuideMicCard;
- (void)updateLayoutOnInteraction;
- (BOOL)isMediaServiceMutualExclusion;
- (id)tapedUserModel;
- (void)setAutoOpenInvitePanel:(BOOL)arg0;
- (void)setOpenInteractRequestType:(long long)arg0;
- (id)guideLinkmicCard;
- (void)setGuideLinkmicCard:(id)arg0;
- (void)setGuideLinkmicCardPlaceHolderView:(id)arg0;
- (id)guideLinkmicCardPlaceHolderView;
- (void)p_hidePaidGuidemicCard;
- (void)setPaidGuideMicItem:(id)arg0;
- (id)paidGuideMicItem;
- (void)p_showPaidLinkmicPlatform;
- (BOOL)autoOpenInvitePanel;
- (void)showInteractiveRootPanel:(BOOL)arg0;
- (void)setOpenInMSequence:(BOOL)arg0;
- (void)setSwitchingMediaService:(id)arg0;
- (id)switchingMediaService;
- (void)onMultiNormalLayoutEnd;
- (BOOL)audienceConnectOpen;
- (void)trackInteractModeOverWithState:(BOOL)arg0;
- (void)setAudienceConnectOpen:(BOOL)arg0;
- (void)trackInteractModeOpenSuccessWithScene:(unsigned long long)arg0;
- (long long)openInteractRequestType;
- (id)trackStrFromOpenRequestType:(long long)arg0;
- (void)setHasHostSessionCallback:(BOOL)arg0;
- (BOOL)hasHostSessionCallback;
- (void)setLastFilterSessionsUIDList:(id)arg0;
- (void)setTapedUserModel:(id)arg0;
- (void)displayLinkmicDurationPageWithParams:(id)arg0;
- (BOOL)p_isPaidGuidemicDisabled;
- (void)intimateChatOperationRootPanel:(id)arg0 permitApply4User:(id)arg1 source:(id)arg2;
- (void)intimateChatOperationRootPanel:(id)arg0 inviteUser:(id)arg1 source:(id)arg2;
- (void)intimateChatOperationRootPanelCallOthersTogetherApply:(id)arg0;
- (BOOL)shouldRenderHostGiftIcon;
- (void)didClickFanTicketView:(id)arg0;
- (void)didClickStrongRemindPremitBtn:(id)arg0;
- (void)needClearGuestListView;
- (id)diggDispatcher;
- (id)mediaServiceReorderedInteractSessionsWithOriginalSessions:(id)arg0;
- (void)fetchNormalVideoSettingWithCompletion:(id /* block */)arg0;
- (void)openPlaceHolderLayout;
- (void)closePlaceHolderlayout;
- (void)updateActiveListView;
- (BOOL)isInteractionInMatch;
- (BOOL)isInteractSteaming;
- (id)ultimateFanTicket;
- (void)showInteractionItemTip:(id)arg0;
- (BOOL)intimateChatEnable;
- (id)reorderedLinkedUsers;
- (BOOL)multiVideoEnable;
- (void)openIntimateChatInMSequence;
- (void)sceneDidChangeFrom:(unsigned long long)arg0 to:(unsigned long long)arg1;
- (void)setDiggDispatcher:(id)arg0;
- (void)setBigPartyPanel:(id)arg0;
- (BOOL)openInMSequence;
- (id)messageHandler;
- (id)dispatcher;
- (void)setDispatcher:(id)arg0;
- (id)placeholderView;
- (void)setStreamProvider:(id)arg0;
- (void)setConnected:(BOOL)arg0;
- (long long)currentStatus;
- (void).cxx_destruct;
- (BOOL)connected;
- (long long)mode;
- (id)store;
- (void)setStore:(id)arg0;
- (void)setMessageHandler:(id)arg0;
- (id)streamProvider;
- (void)setPlaceholderView:(id)arg0;
- (void)messageReceived:(id)arg0;
- (id)mediaService;
- (void)setMediaService:(id)arg0;
- (long long)currentSessionCount;

@end
