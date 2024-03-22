//
//     Generated by private class-dump
//

@class IESLiveMultiAudioChatGuestListController, HTSEventContext, HTSGroupedLiveMessageHandler, NSArray, HTSEventForwardingView, IESLiveInteractSeatAnimationManager, IESLiveChatRoomSelfGuideManager, NSString, IESLiveInteractionLayout, IESLiveComponentContext;
@protocol IESLiveInteractiveInviteService, IESLiveMultiAudioSceneControllerDataSource, IESLiveInteractUserModel, IESLiveMultiAudioSceneControllerDelegate, IESLiveRoomService, IESLiveInteractionLinkerService;

@interface IESLiveMultiAudioChatSceneController : NSObject <HTSActiveUserListFragmentDelegate, IESLiveInteractSeatAnimationManagerDelegate, IESLiveMessageInteractionModuleCommentAction, IESLiveChatRoomSelfGuideManagerDataSource, HTSLiveMessageSubscriber, IESLiveLinkmicPreloadPushActions, IESLiveChatRoomSelfGuideManagerDelegate, IESLiveInteractionLinkerServiceAction, IESLiveSocialInteractAction, IESLiveMultiAudioSceneControllerProtocol, IESLiveGuestBattleUIAdaptor, IESLiveTeamFightDelegate> {
    BOOL _isAudioThemeEnabled;
    HTSEventContext *_trackContext;
    HTSGroupedLiveMessageHandler *_messageHandler;
    HTSEventForwardingView *_containerView;
    IESLiveComponentContext *_componentContext;
    IESLiveMultiAudioChatGuestListController *_guestListView;
    id<IESLiveRoomService> _room;
    id<IESLiveMultiAudioSceneControllerDataSource> _dataSource;
    id<IESLiveMultiAudioSceneControllerDelegate> _delegate;
    NSArray *_guestList;
    id<IESLiveInteractiveInviteService> _inviteFriendsService;
    IESLiveInteractSeatAnimationManager *_seatAnimationManager;
    IESLiveChatRoomSelfGuideManager *_selfGuideManager;
    NSArray *_lockedSeats;
    long long _startTime;
    id<IESLiveInteractUserModel> _enlargeUser;
    id<IESLiveInteractionLinkerService> _linker;
    IESLiveInteractionLayout *_layout;
}

@property (nonatomic) BOOL isAudioThemeEnabled;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) HTSGroupedLiveMessageHandler *messageHandler;
@property (retain, nonatomic) HTSEventForwardingView *containerView;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) IESLiveMultiAudioChatGuestListController *guestListView;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (weak, nonatomic) id<IESLiveMultiAudioSceneControllerDataSource> dataSource;
@property (weak, nonatomic) id<IESLiveMultiAudioSceneControllerDelegate> delegate;
@property (copy, nonatomic) NSArray *guestList;
@property (retain, nonatomic) id<IESLiveInteractiveInviteService> inviteFriendsService;
@property (retain, nonatomic) IESLiveInteractSeatAnimationManager *seatAnimationManager;
@property (retain, nonatomic) IESLiveChatRoomSelfGuideManager *selfGuideManager;
@property (copy, nonatomic) NSArray *lockedSeats;
@property (nonatomic) long long startTime;
@property (retain, nonatomic) id<IESLiveInteractUserModel> enlargeUser;
@property (weak, nonatomic) id<IESLiveInteractionLinkerService> linker;
@property (retain, nonatomic) IESLiveInteractionLayout *layout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)componentContext;
- (void)setComponentContext:(id)arg0;
- (void)updateWithTheme:(id)arg0;
- (id)allSeatProviderViews;
- (id)emojiContainerForUserID:(id)arg0 isInteractiveEmoji:(BOOL)arg1;
- (void)currentLayoutDidChangedFrom:(id)arg0 to:(id)arg1;
- (BOOL)isAudioThemeEnabled;
- (void)setLinker:(id)arg0;
- (id)linker;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfSlotView;
- (id)guestBattleUIAdaptor;
- (id)teamFightDelegate;
- (id)guestListView;
- (id)inviteFriendsService;
- (void)setInviteFriendsService:(id)arg0;
- (void)setGuestListView:(id)arg0;
- (id)emojiContainerForUserID:(id)arg0;
- (void)receiveLinkmicPreloadInfo:(unsigned long long)arg0 playModes:(id)arg1 userLists:(id)arg2;
- (id)userModelWrapperConfig;
- (void)onGuestBattleFinish;
- (void)prepareTeamFight;
- (void)startTeamFight;
- (void)punishTeamFight;
- (void)finishTeamFight;
- (void)didUpdateTeamFightInfo;
- (void)soundAnimationDidChangeWithStartURLs:(id)arg0 loopURLs:(id)arg1;
- (void)soundAnimationDidChangeWithSpeakingImageList:(id)arg0;
- (void)joinIconDidChangeWithURLs:(id)arg0;
- (void)onActiveListDidChangeFrom:(id)arg0 to:(id)arg1;
- (void)activeListChange;
- (void)interactionLinkerService:(id)arg0 serverUserListDidChangeFrom:(id)arg1 to:(id)arg2;
- (id)guestBattleScoreViewMap;
- (id)guestBattleInfoViewMap;
- (void)updateSeatName;
- (void)onGuestBattleStart;
- (void)onGuestBattleSettle;
- (void)willLoad;
- (void)willUnLoad;
- (id)lockedSeats;
- (id)emojiSeatAnimationViewsForUserID:(id)arg0;
- (void)triggerInvitationGuideAnimation;
- (void)setSeatAnimationManager:(id)arg0;
- (id)seatAnimationManager;
- (void)trackGuestFanticketAreaClickedWithUser:(id)arg0;
- (id)fanTicketViewMap;
- (id)guestInfoViewMap;
- (void)setLockedSeats:(id)arg0;
- (unsigned long long)maxCountUserForGuide:(id)arg0;
- (id)lockedSeatsForGuide:(id)arg0;
- (id)anchorUserModelForGuide:(id)arg0;
- (void)setGuestList:(id)arg0;
- (id)guestList;
- (void)updateAnchorInfo:(id)arg0;
- (void)setEnlargeUser:(id)arg0;
- (id)enlargeUser;
- (void)stopInteractiveMode:(BOOL)arg0;
- (void)updateWithSeatInfos:(id)arg0;
- (void)guestCanAcceptGiftAuthorityDidChange:(BOOL)arg0;
- (void)sceneWillUnload;
- (void)updateRootPanelViewModel:(id)arg0;
- (void)startGuideAnimationWithEndBlock:(id /* block */)arg0 threshold:(long long)arg1 animationData:(id)arg2;
- (void)sceneControllerInit;
- (void)updateWithAudienceLinkMicStatus:(long long)arg0;
- (void)updateGuestListWithAppData:(id)arg0;
- (void)liveDidPause:(BOOL)arg0;
- (BOOL)couldChangePosition;
- (void)didClickTopRightBtn;
- (BOOL)hasEmptySeat;
- (void)sceneWillLoad;
- (void)updateGuestList:(id)arg0;
- (void)p_trackAudioShow;
- (id)slotLayout;
- (void)sceneControllerDidClickAnchorProfile;
- (void)fragment:(id)arg0 didClickUserView:(id)arg1;
- (void)fragmentDidClickGuideBubble:(id)arg0;
- (void)fragmentDidShowGuideBubble:(id)arg0;
- (void)p_trackAudioStart;
- (void)setupSelfGuide;
- (void)preloadGuestList;
- (id)selfGuideManager;
- (BOOL)hasActivedList;
- (void)setSelfGuideManager:(id)arg0;
- (void)switchUIWithInteractionLayout:(id)arg0 needAnimation:(BOOL)arg1;
- (void)fragmentRequestsLayout:(id)arg0 animated:(BOOL)arg1;
- (id)activedUserListInFragment:(id)arg0;
- (void)showLayoutChangedAlertWithTitle:(id)arg0 confirmHandler:(id /* block */)arg1;
- (void)setIsAudioThemeEnabled:(BOOL)arg0;
- (void)setupManager;
- (id)messageHandler;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void)setLayout:(id)arg0;
- (void)setStartTime:(long long)arg0;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (id)delegate;
- (long long)startTime;
- (void)keyboardWillHide;
- (void)setMessageHandler:(id)arg0;
- (id)containerView;
- (void)keyboardWillShow;
- (id)layout;
- (void)setDelegate:(id)arg0;
- (void)setupViews;
- (id)room;
- (void)setRoom:(id)arg0;
- (void)messageReceived:(id)arg0;
- (id)initWithDataSource:(id)arg0 delegate:(id)arg1;

@end