//
//     Generated by private class-dump
//

@class UIView, IESLivePKGuestMuteStateManager, NSString, IESLiveCountTimer, IESLivePKChatGuestListView, IESLivePKGuestOperatePanelView, IESLivePKGuestTrackerContext, IESLiveInteractiveMediaService, IESLivePKEventTransparentView;
@protocol IESLiveSmallAudienceRequestViewAdapter, IESLiveRealStreamingProviderAdapter, IESLivePushStreamLifeCycle, IESLivePKGuestAudienceBuilderService;

@interface IESLivePKGuestAudienceInstance : NSObject <IESLiveInteractiveMediaServiceDelegate, IESLivePKChatGuestListViewDelegate, IESLivePKGuestOperatePanelViewModelDelegate, IESLiveInteractiveUserServiceDelegate, IESLiveSocialInteractAction, IESLiveSmallAudienceRequestViewDelegate, IESLiveMediaPermissionManagerAction> {
    BOOL _onInteract;
    BOOL _inBeautyProcess;
    BOOL _hasMutedOnJoinChannel;
    IESLiveInteractiveMediaService *_mediaService;
    UIView<IESLiveSmallAudienceRequestViewAdapter> *_smallAudienceRequestView;
    id<IESLivePushStreamLifeCycle> _pushStreamLifeCycle;
    id<IESLiveRealStreamingProviderAdapter> _streamProvider;
    IESLivePKGuestMuteStateManager *_muteStateManager;
    IESLivePKChatGuestListView *_pkGuestListView;
    IESLivePKEventTransparentView *_anchorEmojiContainer;
    IESLivePKGuestOperatePanelView *_panelView;
    UIView *_beautyView;
    id<IESLivePKGuestAudienceBuilderService> _interactStore;
    IESLivePKGuestTrackerContext *_guestTrackerContext;
    id /* block */ _beautyStartBlock;
    id /* block */ _beautyCancelBlock;
    IESLiveCountTimer *_checkLinkerStatusTmer;
}

@property (retain, nonatomic) id<IESLivePushStreamLifeCycle> pushStreamLifeCycle;
@property (retain, nonatomic) id<IESLiveRealStreamingProviderAdapter> streamProvider;
@property (retain, nonatomic) IESLivePKGuestMuteStateManager *muteStateManager;
@property (retain, nonatomic) IESLivePKChatGuestListView *pkGuestListView;
@property (retain, nonatomic) IESLivePKEventTransparentView *anchorEmojiContainer;
@property (weak, nonatomic) IESLivePKGuestOperatePanelView *panelView;
@property (weak, nonatomic) UIView *beautyView;
@property (retain, nonatomic) id<IESLivePKGuestAudienceBuilderService> interactStore;
@property (retain, nonatomic) IESLivePKGuestTrackerContext *guestTrackerContext;
@property (copy, nonatomic) id /* block */ beautyStartBlock;
@property (copy, nonatomic) id /* block */ beautyCancelBlock;
@property (retain, nonatomic) IESLiveCountTimer *checkLinkerStatusTmer;
@property (nonatomic) BOOL hasMutedOnJoinChannel;
@property (nonatomic) BOOL onInteract;
@property (nonatomic) BOOL inBeautyProcess;
@property (retain, nonatomic) IESLiveInteractiveMediaService *mediaService;
@property (retain, nonatomic) UIView<IESLiveSmallAudienceRequestViewAdapter> *smallAudienceRequestView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)currentCameraPosition;
- (void)showToast:(id)arg0;
- (id)roomModel;
- (void)didSetAttachingDIContext;
- (id)panelView;
- (void)setPanelView:(id)arg0;
- (id)userService;
- (void)overturnCamera;
- (void)turnOnCameraByOther:(BOOL)arg0;
- (void)turnOnCameraBySelf:(BOOL)arg0;
- (BOOL)isCameraOpen;
- (void)openBeautySettingPanelBeforeVideoInteractionWithStartBlock:(id /* block */)arg0 cancelBlock:(id /* block */)arg1;
- (void)switchSceneFromBigPartyWithMediaService:(id)arg0 cameraPreview:(id)arg1;
- (id)emojiContainerForUserID:(id)arg0 isInteractiveEmoji:(BOOL)arg1;
- (void)onBusinessPrepare;
- (id)beautyView;
- (void)muteStateDidChange:(BOOL)arg0 reason:(id)arg1;
- (void)setBeautyView:(id)arg0;
- (void)setCheckLinkerStatusTmer:(id)arg0;
- (id)checkLinkerStatusTmer;
- (id)initWithDiContext:(id)arg0;
- (void)stopInteractiveMode;
- (id)pushStreamLifeCycle;
- (void)setPushStreamLifeCycle:(id)arg0;
- (void)muteSelf:(BOOL)arg0;
- (BOOL)isAudioModeOn;
- (void)didSwitchConnectModeOn;
- (void)switchConnectMode;
- (void)onGuestMute:(BOOL)arg0;
- (void)interactiveMediaServiceDidStart:(id)arg0;
- (void)interactiveMediaServiceWillEnd:(id)arg0;
- (void)interactiveMediaService:(id)arg0 receivesError:(id)arg1;
- (void)interactiveMediaService:(id)arg0 firstRemoteVideoWithLinkmicUid:(id)arg1;
- (void)interactiveMediaService:(id)arg0 didUpdatedSessionsLocalLayout:(id)arg1;
- (void)interactiveMediaService:(id)arg0 firstFrameRenderCallback:(id)arg1;
- (void)interactiveMediaService:(id)arg0 didOfflineOfUid:(id)arg1 sessions:(id)arg2 reason:(unsigned long long)arg3;
- (void)interactiveMediaServiceAppResignActive;
- (void)interactiveMediaServiceAppDidActive;
- (void)loadMediaService;
- (void)onPKCloseWithGuest;
- (id)guestTrackerContext;
- (void)setGuestTrackerContext:(id)arg0;
- (void)updateSessionsLocalLayout:(id)arg0;
- (void)clearGuestView;
- (void)onInteractionEnded;
- (void)didClickEmptyView:(long long)arg0;
- (void)didClickItemView:(id)arg0;
- (void)didOwnPreViewAddToList;
- (void)didUpdateOppositeRoomSilence;
- (void)updateLayoutWithAppData:(id)arg0;
- (void)showPanelWithConfig:(id)arg0 requestPage:(id)arg1;
- (id)anchorEmojiContainer;
- (void)openBeautySettingPanelDuringVideoInteraction:(BOOL)arg0;
- (BOOL)muteStateForUser:(id)arg0;
- (BOOL)isUserConnected:(id)arg0;
- (void)muteOthers:(id)arg0 mute:(BOOL)arg1;
- (void)stopConnectedWithUserID:(id)arg0;
- (void)setAnchorEmojiContainer:(id)arg0;
- (void)p_stopCheckLinkerStatus;
- (void)mediaCaptureInterruptedWithStrategy:(unsigned long long)arg0;
- (void)mediaCaptureResumeedWithStrategy:(unsigned long long)arg0;
- (void)didUpdateServerLinkTypeSucceed:(int)arg0 actively:(BOOL)arg1;
- (void)setMuteStateManager:(id)arg0;
- (id)smallAudienceRequestView;
- (id)interactStore;
- (void)setupSmallWindowViewWithAudio:(BOOL)arg0 cameraPreview:(id)arg1;
- (unsigned long long)currentSceneForGuest;
- (void)renderToolBarApplyStatus:(unsigned long long)arg0;
- (id)currentLayoutForGuest;
- (void)p_removeGuestListView;
- (void)trackGuestConnectSuccess;
- (void)p_startCheckLinkerStatus;
- (id)pkGuestListView;
- (void)setPkGuestListView:(id)arg0;
- (BOOL)hasMutedOnJoinChannel;
- (void)setHasMutedOnJoinChannel:(BOOL)arg0;
- (id)muteStateManager;
- (BOOL)enableAudienceMediaCaptureOpt;
- (void)setOnInteract:(BOOL)arg0;
- (void)didConnectSuccess;
- (void)p_muteOnJoinChannelIfNeeded;
- (BOOL)onInteract;
- (void)p_trackGuestConnectionOver:(BOOL)arg0;
- (void)stopInteractiveConnection;
- (void)setupGuestListView:(BOOL)arg0;
- (BOOL)inBeautyProcess;
- (void)showGuestBeautyPopupViewDuringVideoInteraction;
- (void)setupGuestListView:(BOOL)arg0 height:(double)arg1;
- (void)showControlPanelForSelf;
- (void)setInBeautyProcess:(BOOL)arg0;
- (void)setBeautyStartBlock:(id /* block */)arg0;
- (void)setBeautyCancelBlock:(id /* block */)arg0;
- (void)showGuestBeautyPopupViewBeforeVideoInteraction;
- (void)showGuestBeautyPopupViewDuringVideo:(BOOL)arg0;
- (id /* block */)beautyStartBlock;
- (id /* block */)beautyCancelBlock;
- (void)showGuestBeautyPopupViewWithType:(unsigned long long)arg0 startBlock:(id /* block */)arg1 cancelBlock:(id /* block */)arg2;
- (void)clearSmallRequestView;
- (void)setSmallAudienceRequestView:(id)arg0;
- (void)p_startCheckLinkerStatusCountDownTimerWithTimeInterval:(double)arg0;
- (void)startRTCInteract;
- (void)moveInteractiveConnection;
- (void)updateSmallWindowView;
- (void)moveSmallRequestView;
- (void)updateGuestListViewPosition;
- (void)stopAndQuit;
- (void)setInteractStore:(id)arg0;
- (void)setStreamProvider:(id)arg0;
- (void).cxx_destruct;
- (void)stopConnection;
- (id)streamProvider;
- (void)dealloc;
- (id)mediaService;
- (void)setMediaService:(id)arg0;

@end
