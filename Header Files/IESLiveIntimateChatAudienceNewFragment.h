//
//     Generated by private class-dump
//

@class IESLiveSmallAudienceRequestView, IESLiveInteractionAudienceCustomItemView, HTSInteractionStreamAppData, NSString, IESLiveAudienceInteractiveAnchorInvitePanel, IESLivePaidLinkmicExplainCard, NSMutableArray, HTSLiveInteractiveAudienceStore, IESLiveInteractionAudienceLayoutManager, NSArray, IESLiveCountTimer, IESLiveIntimateChatGuestListView, IESLiveChatRoomTrackerContext, IESLiveRightBottomMutuallyExclusiveItem, IESLiveLayoutPlaceholderView, IESLiveIntimateChatOperationRootPanel, IESLiveIntimateChatLocalLayout, HTSGroupedLiveMessageHandler, IESLiveChatRoomTracker, HTSLiveToolbarItem, IESLiveInteractiveMediaService, IESLiveAudienceInteractDistributeSettingGuidePopupView, IESLiveAudienceInteractDistributeSettingPopupView, IESLiveIntimateChatHostApplyItemView, IESLiveIntimateChatAudienceStore;
@protocol IESLiveNoticeActions, IESLiveCustomConfig, IESLiveAuthorizationService, IESLiveRealStreamingProvider, HTSLiveIntimateChatAudienceActions, IESLivePushStreamLifeCycle, IESLiveRoomService, IESLiveIntimateChatLayoutMachine, IESLivePerfSampler, HTSLiveDiggAction, IESLiveInteractiveAdminActions, HTSLiveAudienceActions, IESLiveURLSchemaHandler, IESLiveInteractiveUserService, IESLiveVerifyConfig;

@interface IESLiveIntimateChatAudienceNewFragment : IESLiveChatRoomCommon <HTSLiveMessageSubscriber, IESLiveIntimateChatAudienceRouter, IESLiveAudienceECommerceActions, IESLiveInteractAction, IESLiveRoomThemeActions, IESLiveUserActions, IESLiveSmallAudienceRequestViewDelegate, IESLiveLinkmicSettingActions, IESLiveAudienceMoreToolsTempStateAreaActions, IESLiveIntimateChatOperationRootPanelDelegate, IESLiveIntimateChatGuestListViewDelegate, IESLiveInteractiveMediaServiceDelegate, IESLiveSEIListener, IESLiveAudienceChatRoomProvider, IESLiveMediaPermissionManagerAction, IESLiveMultiInteractUserServiceDelegate, IESLiveAudienceInteractiveRootPanelDelegate, IESLiveAudiencePaidLinkMicAction, IESLiveToolbarComponentHandler, HTSLiveVSLinkedRoomAction, IESLiveRevenueInteractAction> {
    BOOL _connected;
    BOOL _onInteract;
    BOOL _enableSendGiftToHost;
    BOOL _hasRealNameVerified;
    BOOL _isGoingToRealNameVerified;
    BOOL _isConnenctToRTC;
    BOOL _hitCameraFrenquencyControl;
    BOOL _didUpdateLayout;
    BOOL _isWatcherConnect;
    BOOL _hasHostSessionCallback;
    BOOL _hasBindUser;
    BOOL _isSwitchingToPK;
    BOOL _isSwitchingFromPK;
    BOOL _showPaidLinkmicExplainCardAfterReceiveSEI;
    BOOL _hasEnterRoom;
    BOOL _enableMicDressButton;
    BOOL _hasReceiveSEI;
    BOOL _shouldUseOrientationChange;
    BOOL _iconShowFlog;
    BOOL _audienceConnectOpen;
    NSString *toastString;
    IESLiveIntimateChatGuestListView *_guestListView;
    id<IESLiveIntimateChatLayoutMachine> _layoutMachine;
    HTSLiveInteractiveAudienceStore *_store;
    IESLiveIntimateChatAudienceStore *_intimateChatAudienceStore;
    id<HTSLiveIntimateChatAudienceActions> _dispatcher;
    id<HTSLiveDiggAction> _diggDispatcher;
    IESLiveInteractionAudienceCustomItemView *_itemView;
    IESLiveInteractionAudienceCustomItemView *_moreToolsItemView;
    IESLiveIntimateChatHostApplyItemView *_hostApplyItemView;
    IESLiveAudienceInteractiveAnchorInvitePanel *_anchorInvitePanel;
    IESLiveLayoutPlaceholderView *_placeholderView;
    IESLiveSmallAudienceRequestView *_smallAudienceRequestView;
    IESLiveSmallAudienceRequestView *_switchingSmallRequestView;
    IESLiveCountTimer *_verifiedTimer;
    id<IESLiveVerifyConfig> _verifyConfig;
    id<IESLiveRealStreamingProvider> _streamProvider;
    id<IESLiveURLSchemaHandler> _schemaURLHandler;
    id<IESLiveAuthorizationService> _authorizationService;
    id<IESLiveNoticeActions> _noticeActionCreator;
    id<IESLivePushStreamLifeCycle> _pushStreamLifeCycle;
    id<IESLivePerfSampler> _perfSampler;
    HTSLiveToolbarItem *_toolbarItem;
    HTSLiveToolbarItem *_item;
    id /* block */ _serverCtrlEntranceShowBlock;
    HTSGroupedLiveMessageHandler *_messageHandler;
    NSArray *_readedApplications;
    IESLiveIntimateChatOperationRootPanel *_adminInteractiveRootPanel;
    id<IESLiveInteractiveAdminActions> _adminActions;
    id<HTSLiveAudienceActions> _roomViewActionCreator;
    id<IESLiveCustomConfig> _customConfig;
    IESLiveAudienceInteractDistributeSettingGuidePopupView *_distributeSettingGuideView;
    IESLiveAudienceInteractDistributeSettingPopupView *_distributeSettingView;
    IESLiveCountTimer *_cameraFrenquencyFirstPartTimer;
    IESLiveCountTimer *_cameraFrenquencySecondPartTimer;
    IESLiveInteractiveMediaService *_mediaService;
    IESLiveInteractiveMediaService *_switchingMediaService;
    IESLiveIntimateChatLocalLayout *_localLayout;
    HTSInteractionStreamAppData *_appData;
    NSString *_filterLinkmicID;
    IESLivePaidLinkmicExplainCard *_paidLinkmicExplainCard;
    IESLiveLayoutPlaceholderView *_paidLinkmicExplainCardPlaceHolderView;
    IESLiveRightBottomMutuallyExclusiveItem *_linkMicExplainCardItem;
    IESLiveRightBottomMutuallyExclusiveItem *_linkMicItem;
    IESLiveRightBottomMutuallyExclusiveItem *_paidGuideMicItem;
    IESLivePaidLinkmicExplainCard *_guideLinkmicCard;
    IESLiveLayoutPlaceholderView *_guideLinkmicCardPlaceHolderView;
    double _lastShowPaidGuideViewTime;
    NSMutableArray *_micDressButtonTags;
    IESLiveInteractionAudienceLayoutManager *_layoutManager;
    id<IESLiveRoomService> _roomService;
}

@property (retain, nonatomic) HTSLiveInteractiveAudienceStore *store;
@property (retain, nonatomic) IESLiveIntimateChatAudienceStore *intimateChatAudienceStore;
@property (retain, nonatomic) id<HTSLiveIntimateChatAudienceActions> dispatcher;
@property (weak, nonatomic) id<HTSLiveDiggAction> diggDispatcher;
@property (nonatomic) BOOL onInteract;
@property (retain, nonatomic) IESLiveInteractionAudienceCustomItemView *itemView;
@property (retain, nonatomic) IESLiveInteractionAudienceCustomItemView *moreToolsItemView;
@property (retain, nonatomic) IESLiveIntimateChatHostApplyItemView *hostApplyItemView;
@property (weak, nonatomic) IESLiveAudienceInteractiveAnchorInvitePanel *anchorInvitePanel;
@property (retain, nonatomic) IESLiveLayoutPlaceholderView *placeholderView;
@property (retain, nonatomic) IESLiveSmallAudienceRequestView *smallAudienceRequestView;
@property (retain, nonatomic) IESLiveSmallAudienceRequestView *switchingSmallRequestView;
@property (nonatomic) BOOL enableSendGiftToHost;
@property (nonatomic) BOOL hasRealNameVerified;
@property (nonatomic) BOOL isGoingToRealNameVerified;
@property (retain, nonatomic) IESLiveCountTimer *verifiedTimer;
@property (retain, nonatomic) id<IESLiveVerifyConfig> verifyConfig;
@property (retain, nonatomic) id<IESLiveRealStreamingProvider> streamProvider;
@property (retain, nonatomic) id<IESLiveURLSchemaHandler> schemaURLHandler;
@property (retain, nonatomic) id<IESLiveAuthorizationService> authorizationService;
@property (retain, nonatomic) id<IESLiveNoticeActions> noticeActionCreator;
@property (retain, nonatomic) id<IESLivePushStreamLifeCycle> pushStreamLifeCycle;
@property (weak, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (retain, nonatomic) HTSLiveToolbarItem *toolbarItem;
@property (retain, nonatomic) HTSLiveToolbarItem *item;
@property (copy, nonatomic) id /* block */ serverCtrlEntranceShowBlock;
@property (retain, nonatomic) HTSGroupedLiveMessageHandler *messageHandler;
@property (retain, nonatomic) NSArray *readedApplications;
@property (weak, nonatomic) IESLiveIntimateChatOperationRootPanel *adminInteractiveRootPanel;
@property (retain, nonatomic) id<IESLiveInteractiveAdminActions> adminActions;
@property (retain, nonatomic) id<HTSLiveAudienceActions> roomViewActionCreator;
@property (retain, nonatomic) id<IESLiveCustomConfig> customConfig;
@property (nonatomic) BOOL isConnenctToRTC;
@property (weak, nonatomic) IESLiveAudienceInteractDistributeSettingGuidePopupView *distributeSettingGuideView;
@property (weak, nonatomic) IESLiveAudienceInteractDistributeSettingPopupView *distributeSettingView;
@property (retain, nonatomic) IESLiveCountTimer *cameraFrenquencyFirstPartTimer;
@property (retain, nonatomic) IESLiveCountTimer *cameraFrenquencySecondPartTimer;
@property (nonatomic) BOOL hitCameraFrenquencyControl;
@property (nonatomic) BOOL didUpdateLayout;
@property (retain, nonatomic) IESLiveInteractiveMediaService *mediaService;
@property (retain, nonatomic) IESLiveInteractiveMediaService *switchingMediaService;
@property (retain, nonatomic) IESLiveIntimateChatLocalLayout *localLayout;
@property (retain, nonatomic) HTSInteractionStreamAppData *appData;
@property (nonatomic) BOOL isWatcherConnect;
@property (nonatomic) BOOL hasHostSessionCallback;
@property (nonatomic) BOOL hasBindUser;
@property (nonatomic) BOOL isSwitchingToPK;
@property (nonatomic) BOOL isSwitchingFromPK;
@property (copy, nonatomic) NSString *filterLinkmicID;
@property (retain, nonatomic) IESLivePaidLinkmicExplainCard *paidLinkmicExplainCard;
@property (retain, nonatomic) IESLiveLayoutPlaceholderView *paidLinkmicExplainCardPlaceHolderView;
@property (nonatomic) BOOL showPaidLinkmicExplainCardAfterReceiveSEI;
@property (retain, nonatomic) IESLiveRightBottomMutuallyExclusiveItem *linkMicExplainCardItem;
@property (retain, nonatomic) IESLiveRightBottomMutuallyExclusiveItem *linkMicItem;
@property (retain, nonatomic) IESLiveRightBottomMutuallyExclusiveItem *paidGuideMicItem;
@property (retain, nonatomic) IESLivePaidLinkmicExplainCard *guideLinkmicCard;
@property (retain, nonatomic) IESLiveLayoutPlaceholderView *guideLinkmicCardPlaceHolderView;
@property (nonatomic) double lastShowPaidGuideViewTime;
@property (nonatomic) BOOL hasEnterRoom;
@property (nonatomic) BOOL enableMicDressButton;
@property (retain, nonatomic) NSMutableArray *micDressButtonTags;
@property (nonatomic) BOOL hasReceiveSEI;
@property (retain, nonatomic) IESLiveInteractionAudienceLayoutManager *layoutManager;
@property (nonatomic) BOOL shouldUseOrientationChange;
@property (nonatomic) BOOL iconShowFlog;
@property (nonatomic) BOOL audienceConnectOpen;
@property (retain, nonatomic) id<IESLiveRoomService> roomService;
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

+ (BOOL)componentShouldActive:(id)arg0;

- (void)showToast:(id)arg0;
- (id)customConfig;
- (void)setCustomConfig:(id)arg0;
- (id)toastString;
- (void)setToastString:(id)arg0;
- (void)componentDidAppear;
- (void)setRoomService:(id)arg0;
- (id)roomService;
- (void)componentBindService;
- (void)componentMount;
- (void)componentUnmount;
- (void)componentOrientationChanged:(long long)arg0;
- (void)toolbarReceiveComponent:(id)arg0 completion:(id /* block */)arg1;
- (void)toolbarComponentRemovedReason:(unsigned long long)arg0 extra:(id)arg1;
- (id)perfSampler;
- (void)setPerfSampler:(id)arg0;
- (id)userService;
- (id)linkmicHost;
- (BOOL)isInAnonymousPaidLinkmicWithUserID:(id)arg0;
- (id /* block */)serverCtrlEntranceShowBlock;
- (void)setServerCtrlEntranceShowBlock:(id /* block */)arg0;
- (void)roomThemeNeedRefresh;
- (id)schemaURLHandler;
- (void)setSchemaURLHandler:(id)arg0;
- (BOOL)hasEnterRoom;
- (void)setHasEnterRoom:(BOOL)arg0;
- (BOOL)userInActiveList:(id)arg0;
- (BOOL)processingMultiVideo;
- (BOOL)adminModeEnable;
- (void)verifyRealnameSuccessed;
- (void)startRevenueInteractWithScene:(unsigned long long)arg0;
- (void)endRevenueInteractWithScene:(unsigned long long)arg0;
- (BOOL)didConnectToAnchor;
- (void)clickInteractionItem;
- (id)localLayout;
- (void)setLocalLayout:(id)arg0;
- (void)clickLinkMicEntrance;
- (void)applyConnectionWithEventExtra:(id)arg0 applySource:(unsigned long long)arg1;
- (BOOL)isApplyingToJoinChannel;
- (void)stopConnectionWithRequestSource:(id)arg0;
- (void)inviteUserWithSecID:(id)arg0 userID:(id)arg1 sourcePage:(id)arg2;
- (BOOL)userInActiveOrWaitingList:(id)arg0;
- (id)layoutMachine;
- (void)setLayoutMachine:(id)arg0;
- (BOOL)isLandscapeStream;
- (id)verifyConfig;
- (void)setVerifyConfig:(id)arg0;
- (id)noticeActionCreator;
- (id)onlineUserWrapper:(id)arg0;
- (void)stopInteractiveModeWithRequestSource:(id)arg0;
- (void)setNoticeActionCreator:(id)arg0;
- (BOOL)couldUnmountComponent;
- (void)loadMessageHandler;
- (unsigned long long)supportSeiTypes;
- (void)onParseredWithSEIResult:(id)arg0;
- (void)startInteractiveWithScene:(unsigned long long)arg0;
- (void)endInteractiveWithScene:(unsigned long long)arg0;
- (void)didJoinRTCChannelByAudienceWithScene:(unsigned long long)arg0;
- (void)setAuthorizationService:(id)arg0;
- (BOOL)isMoreToolsShowingInteractiveItem;
- (void)bindStore:(id)arg0;
- (BOOL)hasRealNameVerified;
- (void)setHasRealNameVerified:(BOOL)arg0;
- (BOOL)isGoingToRealNameVerified;
- (void)setIsGoingToRealNameVerified:(BOOL)arg0;
- (id)verifiedTimer;
- (void)setVerifiedTimer:(id)arg0;
- (void)askForLeave;
- (id)waitingList;
- (void)disableFullScreenButton;
- (void)stopInteractiveMode;
- (void)onSwitchToPK;
- (id)guestInfoList;
- (id)currentHostID;
- (BOOL)sendGiftToHostEnable;
- (void)cancelApplication;
- (id)pushStreamLifeCycle;
- (void)setPushStreamLifeCycle:(id)arg0;
- (id)interactUserList;
- (BOOL)isInPaidLinkmic;
- (BOOL)enableInteractDistribute;
- (BOOL)adminRightEnable;
- (id)guestListView;
- (void)renderWaitingApplicationNumTip:(id)arg0;
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
- (BOOL)couldSendToGuest;
- (void)setGuestListView:(id)arg0;
- (void)showNoMediaPermissionAlert:(id)arg0 settingUrl:(id)arg1;
- (void)stopInteractiveModeByForce;
- (BOOL)isLinkMicAudienceStatusWaiting;
- (void)showAdminPanel;
- (void)showAdminOperationPanelForGuest:(id)arg0;
- (void)audienceApplyExpired;
- (void)addPreRequestPage:(id)arg0;
- (void)didSwitchConnectModeOn;
- (void)switchConnectMode;
- (void)interactiveMediaServiceDidStart:(id)arg0;
- (void)interactiveMediaServiceWillEnd:(id)arg0;
- (void)interactiveMediaService:(id)arg0 receivesError:(id)arg1;
- (void)interactiveMediaService:(id)arg0 firstRemoteVideoWithLinkmicUid:(id)arg1;
- (void)interactiveMediaService:(id)arg0 didOfflineOfUid:(id)arg1 sessions:(id)arg2 reason:(unsigned long long)arg3;
- (void)interactiveMediaServiceAppResignActive;
- (void)interactiveMediaServiceAppDidActive;
- (void)interactiveMediaService:(id)arg0 videoSizeChangedOfUid:(id)arg1 size:(struct CGSize { double x0; double x1; })arg2;
- (id)interactiveMediaService:(id)arg0 reorderedInteractSessions:(id)arg1;
- (void)needFaceRecognition;
- (void)resumeLayout;
- (void)loadMediaService;
- (BOOL)isInteractionRuning;
- (void)handleInteractiveItemDidTapped;
- (id)readedApplications;
- (void)setReadedApplications:(id)arg0;
- (void)onInteractionEnded;
- (void)didClickItemView:(id)arg0;
- (void)showUserPreView:(id)arg0 trackerLabel:(id)arg1;
- (void)mediaCaptureInterruptedWithStrategy:(unsigned long long)arg0;
- (void)mediaCaptureResumeedWithStrategy:(unsigned long long)arg0;
- (id)smallAudienceRequestView;
- (BOOL)enableAudienceMediaCaptureOpt;
- (void)setOnInteract:(BOOL)arg0;
- (void)didConnectSuccess;
- (BOOL)onInteract;
- (void)stopInteractiveConnection;
- (void)clearSmallRequestView;
- (void)setSmallAudienceRequestView:(id)arg0;
- (void)startRTCInteract;
- (void)moveInteractiveConnection;
- (void)updateSmallWindowView;
- (void)moveSmallRequestView;
- (void)stopAndQuit;
- (void)updateAdminUnReadTipsView:(id)arg0;
- (BOOL)isWatcherConnect;
- (void)changeWatcherConnect:(BOOL)arg0;
- (void)removeAdminUI;
- (unsigned long long)pr_customViewStatusFromCurrentLinkMicStatus;
- (void)setIsWatcherConnect:(BOOL)arg0;
- (void)onStatusConnecting;
- (void)onStatusConnectEnd;
- (id)anchorInvitePanel;
- (void)setAnchorInvitePanel:(id)arg0;
- (void)doApplyProcess;
- (void)permissionChecked;
- (void)showOnlyApplyModeSelecter;
- (void)applyForVideoModeConnection;
- (void)applyForAudioModeConnection;
- (void)applyForVideoModeConnectionWithApplySource:(unsigned long long)arg0;
- (void)applyForAudioModeConnectionWithApplySource:(unsigned long long)arg0;
- (void)needIdentityAuthentication;
- (void)onShowUnderAgeAlert;
- (void)onShowBindMobileAlert;
- (void)tryToVerify;
- (void)hideAdminPanel;
- (void)askForStopConnectionAction:(id /* block */)arg0;
- (id)applyTitle;
- (void)didUpdateAudienceSettings:(id)arg0;
- (void)didChangedAudienceSetting:(id)arg0;
- (void)handleOrientationTransitionEnd;
- (id)linkPaidCount;
- (id)linkLimitTime;
- (void)registChatRoomStatusDispatcher:(id)arg0;
- (void)updateLayoutOfSessionViews:(id)arg0;
- (BOOL)couldSendToHost;
- (BOOL)p_enablePaidLinkmicAddPrice;
- (id)roleForLog;
- (void)onActiveListDidChangeFrom:(id)arg0 to:(id)arg1;
- (void)setEnableSendGiftToHost:(BOOL)arg0;
- (BOOL)enableSendGiftToHost;
- (void)audienceInteractiveRootPanel:(id)arg0 permitApplicationOfUser:(id)arg1 extraInfo:(id)arg2;
- (void)audienceInteractiveRootPanel:(id)arg0 inviteWithUserID:(id)arg1 secUserID:(id)arg2 sourcePage:(id)arg3;
- (void)audienceInteractiveRootPanelNeedToResetWaitingApplications:(id)arg0;
- (void)audienceInteractiveRootPanel:(id)arg0 fetchInvitableFriendsListWithCount:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)audienceInteractiveRootPanelEndInteract:(id)arg0;
- (void)audienceInteractiveRootPanelAdminApply:(id)arg0;
- (void)audienceInteractiveRootPanel:(id)arg0 willShowSettingPanel:(id)arg1;
- (void)paidLinkmicOpenStatusChanged:(BOOL)arg0;
- (void)paidLinkmicAddPriceStatusChanged:(unsigned long long)arg0 addPriceValue:(long long)arg1;
- (void)paidLinkmicDidReceiveAddPriceMessage:(id)arg0;
- (void)onShowAssistPhoneAlert;
- (void)paidLinkmicExplainCardShowWithInfo:(id)arg0;
- (void)paidLinkmicWaitingUserLeaveWithToast:(id)arg0;
- (BOOL)hasBindUser;
- (void)setHasBindUser:(BOOL)arg0;
- (BOOL)hitCameraFrenquencyControl;
- (void)didClickApplyView;
- (void)showDistributeGuideViewWithSettingModel:(id)arg0;
- (id)distributeSettingGuideView;
- (void)setDistributeSettingGuideView:(id)arg0;
- (id)distributeSettingView;
- (void)setDistributeSettingView:(id)arg0;
- (void)clickAudienceSettingBtn;
- (void)addHostEntrance;
- (void)removeHostEntrance;
- (BOOL)enableMicDressButton;
- (void)p_updateMicDressButtonStatusWithSetting:(id)arg0;
- (id)micDressButtonTags;
- (void)setMicDressButtonTags:(id)arg0;
- (void)setEnableMicDressButton:(BOOL)arg0;
- (void)p_showPaidLinkmicExplainCardWithContent:(id)arg0;
- (id)paidLinkmicExplainCard;
- (void)setPaidLinkmicExplainCard:(id)arg0;
- (void)setPaidLinkmicExplainCardPlaceHolderView:(id)arg0;
- (id)paidLinkmicExplainCardPlaceHolderView;
- (void)p_hidePaidLinkmicExplainCard;
- (void)setLinkMicExplainCardItem:(id)arg0;
- (id)linkMicExplainCardItem;
- (double)lastShowPaidGuideViewTime;
- (void)setLastShowPaidGuideViewTime:(double)arg0;
- (id)cameraFrenquencyFirstPartTimer;
- (void)setCameraFrenquencyFirstPartTimer:(id)arg0;
- (id)cameraFrenquencySecondPartTimer;
- (void)setCameraFrenquencySecondPartTimer:(id)arg0;
- (void)hitOpenCameraFrenquency;
- (void)setHitCameraFrenquencyControl:(BOOL)arg0;
- (void)startInteractiveMode;
- (BOOL)isConnenctToRTC;
- (void)setIsConnenctToRTC:(BOOL)arg0;
- (void)switchSceneFromGiftPK;
- (void)setLinkMicItem:(id)arg0;
- (id)linkMicItem;
- (void)p_showPaidLinkMicGuideMicCard;
- (void)updateLayoutOnInteraction;
- (id)guideLinkmicCard;
- (void)setGuideLinkmicCard:(id)arg0;
- (void)setGuideLinkmicCardPlaceHolderView:(id)arg0;
- (id)guideLinkmicCardPlaceHolderView;
- (void)p_hidePaidGuidemicCard;
- (void)setPaidGuideMicItem:(id)arg0;
- (id)paidGuideMicItem;
- (void)setSwitchingMediaService:(id)arg0;
- (id)switchingMediaService;
- (BOOL)audienceConnectOpen;
- (void)setAudienceConnectOpen:(BOOL)arg0;
- (void)setHasHostSessionCallback:(BOOL)arg0;
- (BOOL)hasHostSessionCallback;
- (void)intimateChatOperationRootPanel:(id)arg0 permitApply4User:(id)arg1 source:(id)arg2;
- (void)intimateChatOperationRootPanel:(id)arg0 inviteUser:(id)arg1 source:(id)arg2;
- (void)intimateChatOperationRootPanelAdminOperate:(id)arg0;
- (void)intimateChatOperationRootPanelCallOthersTogetherApply:(id)arg0;
- (BOOL)shouldRenderHostGiftIcon;
- (void)didClickFanTicketView:(id)arg0;
- (id)diggDispatcher;
- (BOOL)isInteractionInMatch;
- (id)ultimateFanTicket;
- (id)reorderedLinkedUsers;
- (BOOL)multiVideoEnable;
- (void)openIntimateChatInMSequence;
- (void)setDiggDispatcher:(id)arg0;
- (void)setIntimateChatAudienceStore:(id)arg0;
- (id)intimateChatAudienceStore;
- (void)handleKeyboardHideNoti;
- (void)setHasReceiveSEI:(BOOL)arg0;
- (BOOL)showPaidLinkmicExplainCardAfterReceiveSEI;
- (void)setShowPaidLinkmicExplainCardAfterReceiveSEI:(BOOL)arg0;
- (void)watch_setupGuestListView;
- (void)layoutOnInteraction;
- (void)bindIntimateChatStore;
- (BOOL)shouldUseOrientationChange;
- (void)onInteractionStart;
- (id)roomViewActionCreator;
- (id)filterLinkmicID;
- (void)updateFullScrrenButtonTypeWithlinkMicStatus:(long long)arg0;
- (void)fetchGuestGiftSetting;
- (void)trackIconShowByTurnOn;
- (BOOL)isSwitchingFromPK;
- (void)setIsSwitchingFromPK:(BOOL)arg0;
- (BOOL)isSwitchingToPK;
- (void)setIsSwitchingToPK:(BOOL)arg0;
- (void)showToastWhenInterationEndedOnisSelfDisconnect:(unsigned long long)arg0;
- (id)hostApplyItemView;
- (void)renderLinkMicStausOnItemViewWithStatus:(unsigned long long)arg0;
- (id)adminInteractiveRootPanel;
- (void)dealWithError:(id)arg0 needToPreApply:(BOOL)arg1;
- (void)showAnchorInvitationPanelWithNickName:(id)arg0 imageURLs:(id)arg1 isFromAdmin:(BOOL)arg2 giftMsg:(id)arg3;
- (void)authenticationNofity:(id)arg0;
- (BOOL)iconShowFlog;
- (void)setIconShowFlog:(BOOL)arg0;
- (void)trackIconShowWithRequestPage:(id)arg0;
- (void)trackIconShowWithRequestPage:(id)arg0 isInPK:(BOOL)arg1;
- (void)setShouldUseOrientationChange:(BOOL)arg0;
- (void)stopInteractiveMode:(BOOL)arg0;
- (BOOL)needShowPaidLimitPage;
- (void)showPaidViewWithDefaultMode;
- (BOOL)hostApplyEntranceEnabled;
- (void)autoLinkMicIfNeeded;
- (void)applyWithDefaultModeWithApplySource:(unsigned long long)arg0;
- (void)p_trackWatchDuration;
- (void)removeInteractiveItem;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })curSamllViewFrame;
- (void)setNeedLayoutPlayer;
- (void)doPreApply;
- (void)updateClickInteractiveEntranceTimeStamp;
- (void)opt_showControlSheet;
- (void)setupSmallWindowViewWithAudio:(BOOL)arg0;
- (void)p_updateSuccessApplidStatus;
- (BOOL)p_getSuccessApplidStatus;
- (void)showApplyPopupView;
- (BOOL)enableUserPCNewLayout;
- (BOOL)enableApplyReason;
- (id)p_currentButtonInfo;
- (void)p_clickCurrentButtonInfo;
- (void)p_trackGuestConnectSuccess:(BOOL)arg0;
- (void)p_trackGuestConnectionOver;
- (void)trackDistributionEvent:(id)arg0 extraParams:(id)arg1;
- (void)updateDistributionOption:(int)arg0;
- (id)adminActions;
- (void)setFilterLinkmicID:(id)arg0;
- (void)setSwitchingSmallRequestView:(id)arg0;
- (id)switchingSmallRequestView;
- (id)moreToolsItemView;
- (void)setAdminInteractiveRootPanel:(id)arg0;
- (void)askForStopConnectionForGuest:(id)arg0;
- (void)showControlSheet;
- (void)removeInteractiveFromMore;
- (void)removeMoreToolsItemView;
- (BOOL)hasReceiveSEI;
- (void)clickLinkMicEntranceWithDiabledAdminPanel:(BOOL)arg0 isFromSeat:(BOOL)arg1;
- (void)addItemViewInToolbar;
- (void)removeInteractiveItemFromToolbar;
- (void)setMoreToolsItemView:(id)arg0;
- (void)showNotChangeOrientationAlert;
- (void)enableFullScreenButton;
- (void)setHostApplyItemView:(id)arg0;
- (void)p_guestOperation:(long long)arg0 sourcePage:(id)arg1 fromPanel:(BOOL)arg2;
- (void)resetChatRoomTracker;
- (void)changeAudicneChatStatus:(long long)arg0;
- (void)showAlertWhenInteractionEndedWith:(id)arg0 isSelfDisconnect:(BOOL)arg1;
- (void)showModeSelecter;
- (void)p_trackLayoutShow;
- (void)p_trackLayoutWatchDuration;
- (void)loadInteractiveBtnInMore;
- (id)chatRoomFuncationType;
- (void)setAdminActions:(id)arg0;
- (void)setRoomViewActionCreator:(id)arg0;
- (BOOL)didUpdateLayout;
- (void)setDidUpdateLayout:(BOOL)arg0;
- (id)messageHandler;
- (id)layoutManager;
- (id)dispatcher;
- (id)item;
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
- (id)authorizationService;
- (void)setMessageHandler:(id)arg0;
- (id)streamProvider;
- (void)setPlaceholderView:(id)arg0;
- (void)setItem:(id)arg0;
- (void)setLayoutManager:(id)arg0;
- (id)itemView;
- (void)setItemView:(id)arg0;
- (id)toolbarItem;
- (void)messageReceived:(id)arg0;
- (BOOL)canLeave;
- (void)setAppData:(id)arg0;
- (id)appData;
- (void)setToolbarItem:(id)arg0;
- (id)mediaService;
- (void)setMediaService:(id)arg0;
- (long long)currentSessionCount;

@end
