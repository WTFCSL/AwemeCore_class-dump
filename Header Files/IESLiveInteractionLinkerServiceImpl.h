//
//     Generated by private class-dump
//

@class NSDictionary, IESLiveInteractionLinkerUserServiceUpdateContent, IESLiveInteractAudienceParamsEntity, IESLiveInterativeTimeOutManager, IESLiveInteractionLinkSessionImpl, IESLiveInteractionLinkerServiceConfig, NSMutableArray, NSString, IESLiveLinkmicLinkerBase, IESLiveInteractUserListData, IESLiveInteractionLinkerUserServiceMsgDispatcher, IESLiveInteractAnchorParamsEntity, HTSEventContext, NSArray, IESLiveMultiKTVStreamLayout, IESLiveCountTimer, IESLiveInteractiveSpatialAudioServiceImpl, IESLiveInteractiveLinkService, IESLiveInteractMuteStateMachine, IESLiveInteractionLinkerServiceUserServiceAdapter, IESLiveLinkmicMediaService, IESLiveBigPartyStreamLayout, IESLiveFrequencyController, IESLiveInteractiveMediaServiceConfig, IESLiveMultiInteractUserService, IESLiveMultiAudioStreamLayout, HTSLiveInteractiveAPI, IESLiveWaitingListService, IESLiveInteractSubtitleServiceImpl;
@protocol IESLiveMultiUserScenarioMonitor, IESLiveInteractionLinkerMediaService, IESLiveInteractUserModel, IESLiveRoomService, IESLiveInteractionLinkSession, IESLiveInteractionLinkerServiceUserManager, IESLiveInteractionLinkerUserService, IESLiveAudienceInteractiveRootPanelUserService, IESLiveCompoundSubscription, IESLiveInteractionLinkerLinkService, IESLiveInteractiveStreamLayout;

@interface IESLiveInteractionLinkerServiceImpl : NSObject <IESLiveInteractiveMediaServiceDelegate, IESLiveInteractMuteStateMachineDelegate, IESLiveMultiInteractUserServiceDataSource, IESLiveMultiInteractUserServiceDelegate, IESLiveInteractionLinkerServiceUserManagerDelegate, IESLiveInteractiveLinkServiceDelegate, IESLiveLinkmicLinkerDelegate, IESLiveLinkmicLinkerDataSource, IESLiveSEIListener, IESLiveInteractiveSpatialAudioServiceDelegate, IESLiveInteractSubtitleServiceDelegate, IESLiveInteractiveBigPartyStreamLayoutDelegate, IESLiveInteractionLinkerLayoutReaction, IESLiveInteractionLinkerService, IESLiveInteractionLinkerMediaService, IESLiveInteractionLinkerUserService, IESLiveInteractionLinkerLinkService> {
    BOOL _isInBackground;
    BOOL _isChangingPosition;
    BOOL _isInteractModeEnable;
    BOOL _useBackupStreamWhenJoinRTC;
    BOOL _isMute;
    BOOL _isProcessingApply;
    BOOL _isQuitRoom;
    BOOL _isSuspending;
    long long _connectedPCU;
    double _talkDurationTime;
    id<IESLiveAudienceInteractiveRootPanelUserService> _rootPanelUserService;
    id<IESLiveInteractionLinkerMediaService> _mediaManager;
    id<IESLiveInteractionLinkerUserService> _usersManager;
    id<IESLiveInteractionLinkerLinkService> _linkManager;
    id<IESLiveInteractionLinkSession> _linkSession;
    id<IESLiveRoomService> _room;
    IESLiveInteractionLinkerServiceConfig *_config;
    HTSEventContext *_trackContext;
    long long _userState;
    IESLiveLinkmicLinkerBase *_linkmicLinker;
    IESLiveInteractionLinkSessionImpl *_linkSessionImpl;
    HTSLiveInteractiveAPI *_interactiveAPI;
    IESLiveInteractiveMediaServiceConfig *_mediaConfig;
    NSDictionary *_vpassSDKParams;
    NSDictionary *_rtcExtInfo;
    NSDictionary *_liveCoreExtInfo;
    NSMutableArray *_pendingSynchronizeLinkMicIDs;
    id<IESLiveInteractiveStreamLayout> _streamLayout;
    IESLiveMultiAudioStreamLayout *_multiAudioStreamLayout;
    IESLiveMultiKTVStreamLayout *_multiKTVStreamLayout;
    IESLiveBigPartyStreamLayout *_bigPartyStreamLayout;
    NSArray *_currentGrids;
    IESLiveInteractionLinkerServiceUserServiceAdapter *_userServiceAdapter;
    IESLiveMultiInteractUserService *_userService;
    IESLiveInteractionLinkerUserServiceUpdateContent *_userServiceUpdateContent;
    IESLiveInteractionLinkerUserServiceMsgDispatcher *_userServiceMsgDispatcher;
    id<IESLiveInteractionLinkerServiceUserManager> _linkerUserManager;
    IESLiveInteractiveLinkService *_linkService;
    IESLiveLinkmicMediaService *_linkmicMediaService;
    IESLiveInteractMuteStateMachine *_muteStateMachine;
    IESLiveFrequencyController *_controlGuestCameraFrequencyController;
    id<IESLiveMultiUserScenarioMonitor> _monitor;
    NSString *_joinToken;
    IESLiveInteractAnchorParamsEntity *_anchorParamsEntity;
    IESLiveInteractAudienceParamsEntity *_audienceParamsEntity;
    id /* block */ _toastBlock;
    id<IESLiveCompoundSubscription> _msgDisposable;
    IESLiveInterativeTimeOutManager *_inviteTimeOutManager;
    id<IESLiveInteractUserModel> _me;
    id<IESLiveInteractUserModel> _anchor;
    NSArray *_waitingList;
    IESLiveWaitingListService *_waitingListService;
    NSArray *_serverLinkedUsersList;
    NSArray *_serverAllUsersList;
    NSArray *_interactLinkedUsersList;
    NSArray *_interactAllUsersList;
    NSDictionary *_othersMembersList;
    IESLiveInteractUserListData *_userListData;
    IESLiveCountTimer *_checkAudienceLinkersStatusTmer;
    IESLiveInteractiveSpatialAudioServiceImpl *_spatialService;
    IESLiveInteractSubtitleServiceImpl *_subtitleService;
    long long _startType;
}

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) IESLiveInteractionLinkerServiceConfig *config;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (nonatomic) BOOL isInBackground;
@property (nonatomic) BOOL isChangingPosition;
@property (nonatomic) BOOL isInteractModeEnable;
@property (nonatomic) long long userState;
@property (retain, nonatomic) IESLiveLinkmicLinkerBase *linkmicLinker;
@property (retain, nonatomic) IESLiveInteractionLinkSessionImpl *linkSessionImpl;
@property (retain, nonatomic) HTSLiveInteractiveAPI *interactiveAPI;
@property (retain, nonatomic) IESLiveInteractiveMediaServiceConfig *mediaConfig;
@property (copy, nonatomic) NSDictionary *vpassSDKParams;
@property (copy, nonatomic) NSDictionary *rtcExtInfo;
@property (copy, nonatomic) NSDictionary *liveCoreExtInfo;
@property (retain, nonatomic) NSMutableArray *pendingSynchronizeLinkMicIDs;
@property (nonatomic) BOOL useBackupStreamWhenJoinRTC;
@property (retain, nonatomic) id<IESLiveInteractiveStreamLayout> streamLayout;
@property (retain, nonatomic) IESLiveMultiAudioStreamLayout *multiAudioStreamLayout;
@property (retain, nonatomic) IESLiveMultiKTVStreamLayout *multiKTVStreamLayout;
@property (retain, nonatomic) IESLiveBigPartyStreamLayout *bigPartyStreamLayout;
@property (copy, nonatomic) NSArray *currentGrids;
@property (retain, nonatomic) IESLiveInteractionLinkerServiceUserServiceAdapter *userServiceAdapter;
@property (retain, nonatomic) IESLiveMultiInteractUserService *userService;
@property (retain, nonatomic) IESLiveInteractionLinkerUserServiceUpdateContent *userServiceUpdateContent;
@property (retain, nonatomic) IESLiveInteractionLinkerUserServiceMsgDispatcher *userServiceMsgDispatcher;
@property (retain, nonatomic) id<IESLiveInteractionLinkerServiceUserManager> linkerUserManager;
@property (retain, nonatomic) IESLiveInteractiveLinkService *linkService;
@property (weak, nonatomic) IESLiveLinkmicMediaService *linkmicMediaService;
@property (retain, nonatomic) IESLiveInteractMuteStateMachine *muteStateMachine;
@property (readonly, nonatomic) BOOL isMute;
@property (retain, nonatomic) IESLiveFrequencyController *controlGuestCameraFrequencyController;
@property (retain, nonatomic) id<IESLiveMultiUserScenarioMonitor> monitor;
@property (copy, nonatomic) NSString *joinToken;
@property (retain, nonatomic) IESLiveInteractAnchorParamsEntity *anchorParamsEntity;
@property (retain, nonatomic) IESLiveInteractAudienceParamsEntity *audienceParamsEntity;
@property (copy, nonatomic) id /* block */ toastBlock;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> msgDisposable;
@property (retain, nonatomic) IESLiveInterativeTimeOutManager *inviteTimeOutManager;
@property (nonatomic) BOOL isProcessingApply;
@property (nonatomic) BOOL isQuitRoom;
@property (retain, nonatomic) id<IESLiveInteractUserModel> me;
@property (retain, nonatomic) id<IESLiveInteractUserModel> anchor;
@property (copy, nonatomic) NSArray *waitingList;
@property (retain, nonatomic) IESLiveWaitingListService *waitingListService;
@property (copy, nonatomic) NSArray *serverLinkedUsersList;
@property (copy, nonatomic) NSArray *serverAllUsersList;
@property (copy, nonatomic) NSArray *interactLinkedUsersList;
@property (copy, nonatomic) NSArray *interactAllUsersList;
@property (copy, nonatomic) NSDictionary *othersMembersList;
@property (retain, nonatomic) IESLiveInteractUserListData *userListData;
@property (retain, nonatomic) IESLiveCountTimer *checkAudienceLinkersStatusTmer;
@property (retain, nonatomic) IESLiveInteractiveSpatialAudioServiceImpl *spatialService;
@property (retain, nonatomic) IESLiveInteractSubtitleServiceImpl *subtitleService;
@property (nonatomic) long long startType;
@property (nonatomic) BOOL isSuspending;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<IESLiveInteractionLinkerMediaService> mediaManager;
@property (readonly, nonatomic) id<IESLiveInteractionLinkerUserService> usersManager;
@property (readonly, nonatomic) id<IESLiveInteractionLinkerLinkService> linkManager;
@property (readonly, nonatomic) id<IESLiveInteractionLinkSession> linkSession;
@property (nonatomic) long long connectedPCU;
@property (nonatomic) double talkDurationTime;
@property (retain, nonatomic) id<IESLiveAudienceInteractiveRootPanelUserService> rootPanelUserService;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (void)showToast:(id)arg0;
- (void)setIsInBackground:(BOOL)arg0;
- (void)didSetAttachingDIContext;
- (id)streamLayout;
- (void)setStreamLayout:(id)arg0;
- (void)setUserState:(long long)arg0;
- (id)linkSession;
- (BOOL)isVideoMode;
- (id)rtcExtInfo;
- (id)userService;
- (void)setUserService:(id)arg0;
- (id)othersMembersList;
- (id)linkService;
- (void)setLinkService:(id)arg0;
- (BOOL)supportOpenCamera;
- (BOOL)isSuspending;
- (void)setIsSuspending:(BOOL)arg0;
- (id /* block */)toastBlock;
- (void)setToastBlock:(id /* block */)arg0;
- (void)setRtcExtInfo:(id)arg0;
- (long long)startType;
- (void)setStartType:(long long)arg0;
- (id)onlineUserWrapper:(id)arg0;
- (unsigned long long)supportSeiTypes;
- (void)onParseredWithSEIResult:(id)arg0;
- (int)startSubtitle;
- (int)stopSubtitle;
- (void)muteStateDidChange:(int)arg0 reason:(id)arg1;
- (void)muteAllRemoteAudioStreams:(BOOL)arg0 reason:(id)arg1;
- (void)switchMixType:(long long)arg0;
- (void)removeRemotePositionWithLinkMicId:(id)arg0;
- (void)removeAllRemotePosition;
- (void)updateRenderFilterLayout;
- (void)destoryRenderFilter;
- (void)stopLiveLinkPreMixer;
- (void)updatePreMixerCompositingLayout;
- (void)pushPreMixerBuffer:(struct __CVBuffer { } *)arg0 layerId:(int)arg1 withCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg2;
- (void)startSmallWindowSession;
- (void)stopSmallWindowSession;
- (id)userServiceWithLinker:(id)arg0;
- (id)linkServiceWithLinker:(id)arg0;
- (id)mediaServiceWithLinker:(id)arg0;
- (id)liveCoreExtInfoWithLinker:(id)arg0;
- (id)rtcExtInfoWithLinker:(id)arg0;
- (id)monitorExtraParams;
- (void)cancelApplyWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)onWillStartInteractChannelWithLinker:(id)arg0;
- (void)onDidStartInteractChannelWithLinker:(id)arg0;
- (void)onWillStartInteractStreamingWithLinker:(id)arg0;
- (void)onDidStartInteractStreamingWithLinker:(id)arg0;
- (void)onWillEndInteractStreamingWithLinker:(id)arg0;
- (void)linkmicLinkerAppResignActiveWithLinker:(id)arg0;
- (void)linkmicLinkerAppDidActiveWithLinker:(id)arg0;
- (void)linkmicLinker:(id)arg0 audioSessionInterrupt:(unsigned long long)arg1;
- (void)linkmicLinker:(id)arg0 videoSizeChangedOfUid:(id)arg1 size:(struct CGSize { double x0; double x1; })arg2;
- (void)linkmicLinker:(id)arg0 didUpdatedSessionsLocalLayoutWithLinkmicUIDs:(id)arg1;
- (struct CGSize { double x0; double x1; })linkmicLinker:(id)arg0 captureSizeWithOutputSize:(struct CGSize { double x0; double x1; })arg1;
- (void)linkmicLinker:(id)arg0 onSwitchMixTypeResult:(long long)arg1 isMixOnClient:(BOOL)arg2;
- (void)linkmicLinker:(id)arg0 onUserDidJoined:(id)arg1;
- (void)linkmicLinker:(id)arg0 onUserDidLeave:(id)arg1;
- (void)linkmicLinker:(id)arg0 firstRemoteVideoWithLinkmicUid:(id)arg1;
- (void)linkmicLinker:(id)arg0 onWillLayoutWithLinkmicID:(id)arg1;
- (void)linkmicLinker:(id)arg0 newSessionCreated:(id)arg1 local:(BOOL)arg2;
- (void)linkmicLinker:(id)arg0 anchorDidChangeToBackupSession:(id)arg1 linkmicID:(id)arg2 backupLinkmicID:(id)arg3;
- (void)linkmicLinker:(id)arg0 localSmallWindowSessionCreated:(id)arg1;
- (void)linkmicLinker:(id)arg0 didVideoMuted:(BOOL)arg1 byUid:(id)arg2;
- (void)linkmicLinker:(id)arg0 startPlayPublicStreamResult:(BOOL)arg1 needVideoCanvas:(BOOL)arg2;
- (void)linkmicLinker:(id)arg0 stopPlayPublicStreamResult:(BOOL)arg1;
- (void)linkmicLinker:(id)arg0 userStateDidChangedFrom:(long long)arg1 to:(long long)arg2;
- (void)linkmicLinker:(id)arg0 onReceivedCreate:(id)arg1;
- (void)linkmicLinker:(id)arg0 onReceivedClose:(id)arg1;
- (void)linkmicLinker:(id)arg0 onReceivedInvite:(id)arg1 extraData:(id)arg2;
- (void)linkmicLinker:(id)arg0 onReceivedReply:(id)arg1 isAgreed:(BOOL)arg2;
- (BOOL)linkmicLinker:(id)arg0 onReceivedPermit:(id)arg1 isAgreed:(BOOL)arg2;
- (BOOL)shouldReplyWithlinkmicLinker:(id)arg0;
- (void)linkmicLinker:(id)arg0 onReceivedKickout:(id)arg1;
- (void)linkmicLinker:(id)arg0 didJoinChannel:(id)arg1;
- (void)linkmicLinker:(id)arg0 joinChannelError:(id)arg1;
- (void)linkmicLinker:(id)arg0 onQuitWithError:(id)arg1;
- (void)linkmicLinker:(id)arg0 receivesError:(id)arg1;
- (void)onSubtitleStateChanged:(id)arg0;
- (void)onSubtitleMessageReceived:(id)arg0;
- (id)mediaConfig;
- (BOOL)muteRemoteAudioStreamWithLinkmicID:(id)arg0 mute:(BOOL)arg1 reason:(id)arg2;
- (void)setMediaConfig:(id)arg0;
- (id)userByLinkmicId:(id)arg0;
- (id)userByUserId:(id)arg0;
- (id)userBySecUserId:(id)arg0;
- (id)subtitleService;
- (void)setSubtitleService:(id)arg0;
- (id)interactiveAPI;
- (void)setInteractiveAPI:(id)arg0;
- (id)waitingList;
- (void)onReceiveAutoJoinApplicationMessage:(id)arg0;
- (void)onAdminAgreeFirstInviteMessage:(id)arg0;
- (void)onReceivedSwitchSceneMessage:(id)arg0;
- (void)onReceiveAudienceCameraOpenReply:(id)arg0;
- (void)onReceivePositionLockMessage:(id)arg0;
- (void)onReceivedSwitchStreamMessage:(id)arg0;
- (void)onReceivedPaidLinkmicLowBalanceMessage:(id)arg0;
- (void)onReceivedEnlargeGuestInviteMessage:(id)arg0;
- (void)onReceivedEnlargeGuestReplyMessage:(id)arg0;
- (void)onReceivedAudiencePreapplyMessage:(id)arg0;
- (void)onReceivedAudienceCancelPreapplyMessage:(id)arg0;
- (void)onReceivedAudiencePreReplyMessage:(id)arg0;
- (void)onReceivedAnchorPreInviteMessage:(id)arg0;
- (void)onReceivedAudienceConFirmUnsilenceMessage:(id)arg0;
- (void)onReceivedEnlargeGuestInviteAnchorMessage:(id)arg0;
- (void)onReceivedMediaInfoChangedMessage:(id)arg0;
- (void)onReceivedUILayoutChangedMessage:(id)arg0;
- (void)onReceivedMicVerifyMessage:(id)arg0;
- (void)onReceivedMicListChangeMessage:(id)arg0;
- (void)onReceiveApplyResumeMessage:(id)arg0;
- (void)onReceiveRemoveWaitingUserMessage:(id)arg0;
- (BOOL)shouldDispatchMessage:(id)arg0 linkService:(id)arg1;
- (void)onParseLinkerBaseInfo:(id)arg0 fromMessage:(id)arg1;
- (id)allInteractUserList;
- (BOOL)isInvitingUser:(id)arg0;
- (BOOL)isFirstInit;
- (id)liveCoreExtInfo;
- (void)onGuestMute:(BOOL)arg0;
- (id)userByBackupLinkmicId:(id)arg0;
- (id)userByRole:(int)arg0;
- (long long)getUserUIPositionWihtID:(id)arg0;
- (long long)getUserAudioKTVPositionWithID:(id)arg0;
- (BOOL)muteRemoteVideoStreamWithLinkmicID:(id)arg0 mute:(BOOL)arg1;
- (void)setupUserService;
- (void)setLiveCoreExtInfo:(id)arg0;
- (void)reportJoinRTCSucceed;
- (id)vpassSDKParams;
- (void)setVpassSDKParams:(id)arg0;
- (void)setWaitingList:(id)arg0;
- (BOOL)isProcessingApply;
- (void)setIsProcessingApply:(BOOL)arg0;
- (void)setJoinToken:(id)arg0;
- (id)joinToken;
- (double)talkDurationTime;
- (void)onReceiveSelfSilenceStatus:(int)arg0;
- (void)setTalkDurationTime:(double)arg0;
- (id)waitingListService;
- (void)setWaitingListService:(id)arg0;
- (void)muteSelfWithResume:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)unMuteSelfWithEnforced:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)muteStateMachineShowToast:(id)arg0;
- (id)alogDescFromInteractUserList:(id)arg0;
- (BOOL)selfIsEnlarge;
- (BOOL)enableAudioCaptureInBackground;
- (void)muteOtherRoomRTCStream:(BOOL)arg0;
- (BOOL)startRenderPublicStream:(id)arg0;
- (BOOL)shouldMuteOtherRoomRTCStream;
- (void)enableKTV:(BOOL)arg0;
- (void)startLiveLinkPreMixerStreamLayout:(id)arg0;
- (id)playModes;
- (void)inviteWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)replyWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)applyWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)permitWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)kickoutWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)setupMediaService;
- (id)roleForLog;
- (BOOL)statusEnableCheckLinker;
- (id)currentRtcExtInfo;
- (void)onAllMembersDidChangeFrom:(id)arg0 to:(id)arg1;
- (void)onGuestConnect:(id)arg0;
- (void)onGuestDisconnect:(id)arg0;
- (void)onReceiveMuteMessage;
- (void)onUserPositionChanged;
- (void)onUserWithUserID:(id)arg0 speakStateChange:(BOOL)arg1;
- (void)onListV2ReceiveResponse:(id)arg0;
- (void)didLoadUserListData:(id)arg0;
- (void)onReceiveCrossRoomLinkerUpdated:(id)arg0;
- (void)onSelfLinkTypeChanged:(int)arg0;
- (id)rootPanelUserService;
- (void)setRootPanelUserService:(id)arg0;
- (id)usersManager;
- (id)removeAnchorWithUserList:(id)arg0;
- (id)linkManager;
- (BOOL)isMuteLocally;
- (void)notifyOthersEnterForeground;
- (void)muteSelf:(BOOL)arg0 withState:(unsigned long long)arg1;
- (void)quitRoomWithReason:(unsigned long long)arg0 notifyServer:(BOOL)arg1;
- (void)quickStartJoinChannel;
- (void)startInteractDirectly;
- (void)notifyOthersEnterBackground;
- (void)updateCustomPlayMode:(long long)arg0;
- (id)serverLinkedUsersList;
- (void)fetchUserListWithRequestSource:(id)arg0 completion:(id /* block */)arg1;
- (id)serverAllUsersList;
- (id)interactAllUsersList;
- (id)interactLinkedUsersList;
- (void)muteLocalAudioDirectly;
- (void)unMuteLocalAudioDirectly;
- (void)stopInteractDirectly;
- (void)switchRtcExtInfo:(id)arg0 liveCoreExtInfo:(id)arg1 needToHoldInfo:(BOOL)arg2 source:(id)arg3;
- (id)suspendInteractionLinker:(BOOL)arg0;
- (void)resumeInteractionLinker:(id)arg0 needLinkmic:(BOOL)arg1;
- (void)startInteractWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)resumeWithResumeResponse:(id)arg0 autoPushStream:(BOOL)arg1;
- (void)stopInteractWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)muteUserWithUserID:(id)arg0 completion:(id /* block */)arg1;
- (void)unMuteUserWithUserID:(id)arg0 completion:(id /* block */)arg1;
- (void)muteOtherRoomWithRoomID:(id)arg0 completion:(id /* block */)arg1;
- (void)unMuteOtherRoomWithRoomID:(id)arg0 completion:(id /* block */)arg1;
- (void)openCameraWithUserID:(id)arg0 completion:(id /* block */)arg1;
- (void)closeCameraWithUserID:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)isInteractModeEnable;
- (BOOL)isSelfAudience;
- (void)updateUserVideoMode:(BOOL)arg0 linkmicID:(id)arg1;
- (void)muteLocalVideoDirectly:(BOOL)arg0;
- (void)resetTalkDurationTime;
- (void)leaveInteractWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)setUseBackupStreamWhenJoinRTC:(BOOL)arg0;
- (void)forceChangeToWaitingStatusWithLinkmicID:(id)arg0;
- (void)didStartWithRoom:(id)arg0;
- (BOOL)isHeadphonesPluggedIn;
- (BOOL)useBackupStreamWhenJoinRTC;
- (id)currentEnlargeUser;
- (int)currentUILayout;
- (id)otherUserByLinkmicID:(id)arg0;
- (void)setOthersMembersList:(id)arg0;
- (void)bigPartyStreamLayout:(id)arg0 gridsDidChange:(id)arg1;
- (BOOL)isAudioMode;
- (long long)connectedPCU;
- (void)updateMediaLocalLayout:(id)arg0;
- (id)userListData;
- (void)changeMySeatPosition:(id)arg0 completion:(id /* block */)arg1;
- (void)handleSwitchSceneResponse:(id)arg0;
- (void)didSwitchLayoutFrom:(id)arg0 to:(id)arg1;
- (void)interactionLinkerServiceUserManager:(id)arg0 listDidChange:(id)arg1;
- (void)logWithDescription:(id)arg0 info:(id)arg1;
- (void)stopCheckAudienceLinkersStatus;
- (void)setSpatialService:(id)arg0;
- (void)setMuteStateMachine:(id)arg0;
- (void)setLinkmicMediaService:(id)arg0;
- (void)setLinkerUserManager:(id)arg0;
- (void)cleanParamsEntity;
- (void)cleanStreamLayout;
- (void)setCurrentGrids:(id)arg0;
- (id)userServiceUpdateContent;
- (void)cleanLocalLayout;
- (void)setupLinkmicLinker;
- (void)setupAPI;
- (void)setupLinkService;
- (void)setupSEI;
- (void)setupLinkSession;
- (void)setupExtra;
- (void)setLinkmicLinker:(id)arg0;
- (void)setUserServiceMsgDispatcher:(id)arg0;
- (id)userServiceMsgDispatcher;
- (void)setUserServiceAdapter:(id)arg0;
- (void)bindUserService;
- (id)linkerUserManager;
- (void)setupMuteStateMachine;
- (void)notifyInteractPrepareWillReady;
- (void)loadPushStreamProviderWith:(unsigned long long)arg0;
- (id)spatialService;
- (id)muteStateMachine;
- (void)setLinkSessionImpl:(id)arg0;
- (id)linkSessionImpl;
- (void)setInviteTimeOutManager:(id)arg0;
- (id)userServiceAdapter;
- (id)linkmicMediaService;
- (id)linkmicLinker;
- (void)compositingLayoutOfPublisherWithSource:(id)arg0;
- (id)paramsEntity;
- (void)resumeInteractionLinkerBeforeStart;
- (id)checkApiContecxtClassWithImpl:(id)arg0 class:(Class)arg1 method:(id)arg2;
- (void)handleLinkerError:(id)arg0;
- (void)setIsInteractModeEnable:(BOOL)arg0;
- (void)notifyDidCloseWithContext:(id)arg0;
- (BOOL)isQuitRoom;
- (id)linkerErrorWithCode:(long long)arg0 extraInfo:(id)arg1;
- (void)handleStartContext:(id)arg0;
- (void)notifyDidCreateStartContext:(id)arg0 startType:(long long)arg1;
- (void)notifyDidDisconnectWithContext:(id)arg0;
- (void)setupLinkerUserManager;
- (id)inviteTimeOutManager;
- (void)changeLinkTypeWithUserID:(id)arg0 linkType:(int)arg1 completion:(id /* block */)arg2;
- (BOOL)changeCamerafrenquency;
- (void)onUserDisconnected;
- (void)startMonitorTaskWhileVideoAudioOff:(id)arg0;
- (BOOL)currentStateCouldApply;
- (id)audienceParamsEntity;
- (void)logWithDescription:(id)arg0 info:(id)arg1 isError:(BOOL)arg2;
- (void)updateConnectType;
- (void)refreshUserListIfNeed:(id)arg0;
- (void)createSpatialService;
- (id)multiAudioStreamLayout;
- (void)startMonitorTaskWhileAudioOff:(id)arg0;
- (void)setIsMute:(BOOL)arg0 reason:(id)arg1;
- (void)refreshWaitingAndLinkingListWithType:(unsigned long long)arg0 requestSource:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)isChangingPosition;
- (void)setIsChangingPosition:(BOOL)arg0;
- (void)updateInviteSourceWithContext:(id)arg0;
- (void)notifyDidJoinChannelWithContext:(id)arg0;
- (void)onUserLinked;
- (void)startCheckAudienceLinkersStatus;
- (void)createSubtitleService;
- (BOOL)enableRTCMCU;
- (void)setVolumeBalanceAutomatically;
- (void)disableVolumeBalance;
- (void)disableNoiseSupression;
- (void)cleanUpPushStreamProvider;
- (void)notifyInteractDidEnd;
- (id)multiKTVStreamLayout;
- (void)notifyNewSessionCreated:(id)arg0 local:(BOOL)arg1;
- (void)notifyAnchorDidChangeToBackupSession:(id)arg0 linkmicID:(id)arg1 backupLinkmicID:(id)arg2;
- (id)pendingSynchronizeLinkMicIDs;
- (void)setUserListData:(id)arg0;
- (void)setInteractAllUsersList:(id)arg0;
- (void)setInteractLinkedUsersList:(id)arg0;
- (void)logWithDescription:(id)arg0 info:(id)arg1 onlyAlog:(BOOL)arg2;
- (void)notifyInteractListDidChangeFrom:(id)arg0 to:(id)arg1;
- (id)anchorParamsEntity;
- (id)bigPartyStreamLayout;
- (void)notifyReceivedSwitchScene:(id)arg0;
- (void)notifyReceivedUILayoutChanged:(id)arg0;
- (void)startCheckAudienceLinkersStatusCountDownTimerWithTimeInterval:(double)arg0;
- (void)logWithDescription:(id)arg0 info:(id)arg1 isError:(BOOL)arg2 onlyAlog:(BOOL)arg3;
- (id)currentGrids;
- (BOOL)resynchronizeStateForNeedToCompositingLayout;
- (id)controlGuestCameraFrequencyController;
- (void)notifyUserStateDidChangedFrom:(long long)arg0 to:(long long)arg1;
- (void)updateSpatialAudioPositionInfo:(id)arg0 linkMicId:(id)arg1 enable:(BOOL)arg2;
- (void)compositingLayout;
- (void)updateAudioStreamLayoutAnchorSessionFull:(BOOL)arg0;
- (struct CGSize { double x0; double x1; })liveCoreCameraOutputSize;
- (void)fetchUserListInStatus:(int)arg0 withType:(unsigned long long)arg1 requestSource:(id)arg2 completion:(id /* block */)arg3;
- (void)changeMySeatPosition:(id)arg0;
- (void)setConnectedPCU:(long long)arg0;
- (void)quickStartWithInitResponse:(id)arg0 autoJoinChannel:(BOOL)arg1;
- (void)handleMuteStateDiffWithLocal:(BOOL)arg0 remote:(BOOL)arg1;
- (BOOL)needCompositingLayoutWhileListChange:(id)arg0;
- (id)myUserPostion;
- (void)setPendingSynchronizeLinkMicIDs:(id)arg0;
- (void)setMultiAudioStreamLayout:(id)arg0;
- (void)setMultiKTVStreamLayout:(id)arg0;
- (void)setBigPartyStreamLayout:(id)arg0;
- (void)setUserServiceUpdateContent:(id)arg0;
- (void)setControlGuestCameraFrequencyController:(id)arg0;
- (void)setAnchorParamsEntity:(id)arg0;
- (void)setAudienceParamsEntity:(id)arg0;
- (id)msgDisposable;
- (void)setMsgDisposable:(id)arg0;
- (void)setIsQuitRoom:(BOOL)arg0;
- (void)setServerLinkedUsersList:(id)arg0;
- (void)setServerAllUsersList:(id)arg0;
- (id)checkAudienceLinkersStatusTmer;
- (void)setCheckAudienceLinkersStatusTmer:(id)arg0;
- (void)setAnchor:(id)arg0;
- (id)anchor;
- (void)setMe:(id)arg0;
- (id)currentLayout;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)monitor;
- (id)me;
- (id)config;
- (void)setMonitor:(id)arg0;
- (unsigned long long)currentScene;
- (void)setup;
- (BOOL)isInteracting;
- (id)initWithConfig:(id)arg0;
- (BOOL)isInBackground;
- (void)dealloc;
- (BOOL)isBackground;
- (id)room;
- (void)setRoom:(id)arg0;
- (long long)userState;
- (BOOL)isMute;
- (void)clean;
- (id)mediaManager;

@end