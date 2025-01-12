//
//     Generated by private class-dump
//

@class HTSEventContext, IESLiveInteractionAudienceLayoutManager, NSHashTable, NSTimer, IESLiveInteractionLinkerServiceImpl, IESLiveInteractionLayoutChangePublisher, IESLiveInteractPreStreamEnterRoomService, HTSLiveLinkMicMethod, NSString, IESLiveInteractionAnchorLayoutManager, IESLiveInteractionStageManager, IESLiveInteractionLayoutCanvasManager;
@protocol IESLiveInteractionLayoutManager;

@interface IESLiveInteractionCoreImpl : NSObject <IESLiveInteractionLayoutManagerDelegate, IESLiveInteractionLayoutRouter, IESLiveInteractionLinkerServiceLayoutAction, IESLiveInteractionEmojiProvider, IESLiveSEIListener, HTSLiveRoomRemoteActions, IESLiveInteractionCoreThemeInterface, IESLiveInteractionCoreCameraPreviewInterface, IESLiveInteractionCoreSessionInterface, IESLiveInteractionCoreBusinessInterface, IESLiveInteractionLayoutCanvasManagerDataSource, IESLiveInteractionCore> {
    BOOL _isAnchor;
    BOOL _hasDealWithFirstSEI;
    BOOL _isPaidLinkmicMode;
    HTSEventContext *_eventContext;
    IESLiveInteractionLinkerServiceImpl *_linkerService;
    IESLiveInteractionLayoutChangePublisher *_layoutChangePublisher;
    IESLiveInteractionAnchorLayoutManager *_anchorLayoutManager;
    IESLiveInteractionAudienceLayoutManager *_audienceLayoutManagerFromServer;
    IESLiveInteractionAudienceLayoutManager *_audienceLayoutManagerFromSEI;
    IESLiveInteractionAudienceLayoutManager *_audienceLayoutManager;
    HTSLiveLinkMicMethod *_switchSceneMsgWhileBigPartyDisable;
    long long _audienceLinkmicStatus;
    IESLiveInteractionStageManager *_stageManager;
    NSHashTable *_stageFactory;
    IESLiveInteractionLayoutCanvasManager *_canvasManager;
    NSTimer *_anchorOneminTrackerTimer;
    IESLiveInteractPreStreamEnterRoomService *_enterRoomService;
}

@property (retain, nonatomic) HTSEventContext *eventContext;
@property (readonly, nonatomic) BOOL isInteractModeEnable;
@property (retain, nonatomic) IESLiveInteractionLinkerServiceImpl *linkerService;
@property (readonly, nonatomic) id<IESLiveInteractionLayoutManager> currentLayoutManager;
@property (readonly, nonatomic) id<IESLiveInteractionLayoutManager> layoutManagerFromServer;
@property (retain, nonatomic) IESLiveInteractionLayoutChangePublisher *layoutChangePublisher;
@property (retain, nonatomic) IESLiveInteractionAnchorLayoutManager *anchorLayoutManager;
@property (retain, nonatomic) IESLiveInteractionAudienceLayoutManager *audienceLayoutManagerFromServer;
@property (retain, nonatomic) IESLiveInteractionAudienceLayoutManager *audienceLayoutManagerFromSEI;
@property (retain, nonatomic) IESLiveInteractionAudienceLayoutManager *audienceLayoutManager;
@property (retain, nonatomic) HTSLiveLinkMicMethod *switchSceneMsgWhileBigPartyDisable;
@property (nonatomic) long long audienceLinkmicStatus;
@property (nonatomic) BOOL hasDealWithFirstSEI;
@property (retain, nonatomic) IESLiveInteractionStageManager *stageManager;
@property (retain, nonatomic) NSHashTable *stageFactory;
@property (retain, nonatomic) IESLiveInteractionLayoutCanvasManager *canvasManager;
@property (nonatomic) BOOL isPaidLinkmicMode;
@property (retain, nonatomic) NSTimer *anchorOneminTrackerTimer;
@property (retain, nonatomic) IESLiveInteractPreStreamEnterRoomService *enterRoomService;
@property (nonatomic) BOOL isAnchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)roomModel;
- (void)setIsAnchor:(BOOL)arg0;
- (void)didSetAttachingDIContext;
- (id)playType;
- (id)cameraPreview;
- (void)setEventContext:(id)arg0;
- (void)didUpdateRoom:(id)arg0 timeStamp:(id)arg1;
- (id)userService;
- (unsigned long long)currentInteractiveScene;
- (BOOL)isSwitchingLayout;
- (BOOL)isInAudienceLinkmic;
- (id)enterRoomService;
- (BOOL)hasDealWithFirstSEI;
- (id)emojiContainerForUserID:(id)arg0 isInteractiveEmoji:(BOOL)arg1;
- (void)setEnterRoomService:(id)arg0;
- (id)currentLayoutManager;
- (unsigned long long)supportSeiTypes;
- (void)onParseredWithSEIResult:(id)arg0;
- (id)linker;
- (id)canvasManager;
- (id)previousLayout;
- (id)currentLayoutFromServer;
- (void)reloadCurrentLayoutWithCompletion:(id /* block */)arg0;
- (void)switchLayout:(id)arg0 completion:(id /* block */)arg1;
- (void)switchLayout:(id)arg0 extra:(id)arg1 completion:(id /* block */)arg2;
- (void)switchLayout:(id)arg0 extra:(id)arg1 force:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)switchLayout:(id)arg0 extra:(id)arg1 source:(id)arg2 force:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)switchLayoutFrom:(id)arg0 toLayout:(id)arg1 extra:(id)arg2 source:(id)arg3 force:(BOOL)arg4 completion:(id /* block */)arg5;
- (void)interactionLinkerService:(id)arg0 didLoadUserListData:(id)arg1;
- (void)interactionLinkerService:(id)arg0 interactListDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)interactionLinkerService:(id)arg0 userDidLeaveUserList:(id)arg1;
- (void)interactionLinkerService:(id)arg0 didCreateStartContext:(id)arg1 startType:(long long)arg2;
- (void)interactionLinkerService:(id)arg0 didCloseWithContext:(id)arg1;
- (void)interactionLinkerService:(id)arg0 didJoinChannelWithContext:(id)arg1;
- (void)interactionLinkerService:(id)arg0 didDisconnectWithContext:(id)arg1;
- (void)interactionLinkerServiceInteractPrepareWillReady:(id)arg0;
- (void)interactionLinkerServiceInteractWillEnd:(id)arg0;
- (void)interactionLinkerServiceInteractDidEnd:(id)arg0;
- (void)interactionLinkerService:(id)arg0 newSessionCreated:(id)arg1 local:(BOOL)arg2;
- (void)interactionLinkerService:(id)arg0 userStateDidChangedFrom:(long long)arg1 to:(long long)arg2;
- (void)interactionLinkerService:(id)arg0 onReceivedSwitchScene:(id)arg1;
- (void)interactionLinkerService:(id)arg0 onReceivedUILayoutChanged:(id)arg1;
- (void)interactionLinkerService:(id)arg0 onParseLinkerBaseInfo:(id)arg1;
- (void)interactionLinkerService:(id)arg0 linkerOccurError:(id)arg1;
- (void)updateRoomThemeData:(id)arg0;
- (id)businessInterface;
- (id)themeInterface;
- (id)cameraPreviewInterface;
- (id)layoutRouter;
- (id)emojiProvider;
- (void)initializeLinkerIfNeeded;
- (void)initializeLayoutManagerIfNeeded;
- (void)remoteRoomReady:(id)arg0;
- (void)registerStageFactory:(id)arg0;
- (void)onCurrentLayoutDidChangedUsingBlock:(id /* block */)arg0;
- (id)currentLargeUserType;
- (BOOL)isInteractModeEnable;
- (void)setHasDealWithFirstSEI:(BOOL)arg0;
- (void)setPreviewIsKilledByPKAudienceLinkmic:(BOOL)arg0;
- (void)cleanCameraPreview;
- (void)prepareCameraPreviewIfNeeded;
- (void)onInteractSmallWindowShowWithShowTrackDic:(id)arg0 durationTrackDic:(id)arg1;
- (void)onInteractReturnRoomWithShowTrackDic:(id)arg0 durationTrackDic:(id)arg1;
- (void)resumeCameraPreview:(id)arg0;
- (void)regenerateCameraPreview;
- (void)updateBackgroundViewWithCurrentLayout;
- (id)mergeAllMembersList:(id)arg0 otherlist:(id)arg1;
- (void)handleWithLinkmicResult:(id)arg0;
- (void)handleWithNormalResult:(id)arg0;
- (void)holdSwitchSceneMsgWhileBigPartyDisable:(id)arg0;
- (BOOL)layoutManager:(id)arg0 shouldChangeLayoutFrom:(id)arg1 to:(id)arg2;
- (void)interactionLinkerService:(id)arg0 anchorDidChangeToBackupSession:(id)arg1 linkmicID:(id)arg2 backupLinkmicID:(id)arg3;
- (void)enterRoomWithPreStreamDataIfNeed;
- (void)initilizeAudioSceneLinkerIfNeeded;
- (void)initilizeVideoSceneLinkerIfNeeded;
- (void)initilizeAudioSceneLayoutManagerIfNeeded;
- (void)initilizeVideoSceneLayoutManagerIfNeeded;
- (id)anchorLayoutManager;
- (id)stageManager;
- (id)audienceLayoutManagerFromSEI;
- (id)audienceLayoutManager;
- (void)stopAnchorOneminTrackerTimer;
- (id)stageFactory;
- (id)layoutChangePublisher;
- (id)audienceLayoutManagerFromServer;
- (id)linkerService;
- (void)setSwitchSceneMsgWhileBigPartyDisable:(id)arg0;
- (long long)audienceLinkmicStatus;
- (void)setIsPaidLinkmicMode:(BOOL)arg0;
- (id)linkerConfigWithAudioScene;
- (void)createLinkerServiceWithConfig:(id)arg0;
- (void)setupLayoutManagerWithAudioScene;
- (void)setupStageManager;
- (id)linkerConfigWithVideoScene;
- (void)setupLayoutManagerWithVideoScene;
- (void)setStageManager:(id)arg0;
- (void)setStageFactory:(id)arg0;
- (void)setupAnchorLayoutManagerObserver;
- (void)setupAudienceLayoutManagerObserver;
- (void)handleServerLayoutChangedFrom:(id)arg0 to:(id)arg1;
- (void)handleSEILayoutChangedFrom:(id)arg0 to:(id)arg1;
- (void)onAudienceLayoutManagerLayoutDidChangedWithPrevLayout:(id)arg0 currentLayout:(id)arg1;
- (void)adjustHostSessionWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setAudienceLinkmicStatus:(long long)arg0;
- (void)pr_trackRoomShowWithRequestPage:(id)arg0 reportType:(long long)arg1;
- (BOOL)shouldHandleSEIResult:(id)arg0;
- (void)handleWithSEIResult:(id)arg0;
- (void)dealWithStartContext:(id)arg0 enterFrom:(id)arg1 source:(id)arg2 startType:(long long)arg3;
- (void)pr_trackRoomShowWithRequestPage:(id)arg0 exDic:(id)arg1 reportType:(long long)arg2;
- (void)dealWithCloseContext:(id)arg0;
- (void)trackGuestConnectionOverWithExtra:(id)arg0 atSwitchingLayout:(BOOL)arg1;
- (void)handleJoinChannelSuccess:(id)arg0;
- (void)pr_handleAnchorSwitchLayoutSuccessFrom:(id)arg0 to:(id)arg1 extra:(id)arg2;
- (void)updateDynamicLayoutWithUserListIfNeeded:(id)arg0;
- (void)updateLayoutWithUserList:(id)arg0;
- (id)layoutManagerFromServer;
- (void)p_trackSwitchSceneError;
- (void)handleAnchorSwitchStageFrom:(id)arg0 to:(id)arg1 completion:(id /* block */)arg2;
- (void)pr_trackGuestConnectionSuccessWithExtra:(id)arg0 atJoiningChannel:(BOOL)arg1;
- (void)pr_trackAnchorAudienceConnectionSuccessWithStartType:(long long)arg0 fromPage:(id)arg1 enterFrom:(id)arg2 source:(id)arg3 extra:(id)arg4;
- (void)startAnchorOneminTrackerTimer;
- (void)pr_trackAnchorAudienceConnectionOverWithLayout:(id)arg0 playType:(id)arg1 isSwitching:(BOOL)arg2 overPath:(id)arg3;
- (void)pr_trackConnectionLinkDataCollection:(id)arg0;
- (void)pr_trackDynamicLayoutOn:(BOOL)arg0;
- (id)switchSceneMsgWhileBigPartyDisable;
- (void)dispatchAudienceInteractModeStartedFromLayout:(id)arg0 to:(id)arg1;
- (void)dispatchAudienceInteractModeEndedFromLayout:(id)arg0 to:(id)arg1;
- (void)handleTrackingWithLayoutStyleChangedFrom:(id)arg0 to:(id)arg1;
- (void)pr_trackWatchDurationAndResetTime:(id)arg0;
- (void)pr_trackRoomShowWithRequestPage:(id)arg0;
- (void)pr_trackWatchDurationAndResetTime:(id)arg0 extra:(id)arg1;
- (void)setAnchorOneminTrackerTimer:(id)arg0;
- (id)anchorOneminTrackerTimer;
- (unsigned long long)currentMultiAudioPlayMode;
- (void)setLinkerService:(id)arg0;
- (void)switchToNormalLayoutFromSEI;
- (void)switchToPaidLinkmicMode:(BOOL)arg0;
- (void)trackGuestConnectionOver;
- (void)pr_trackAnchorAudienceConnectionSuccessWithStartType:(long long)arg0 fromPage:(id)arg1 enterFrom:(id)arg2 extra:(id)arg3;
- (void)setLayoutChangePublisher:(id)arg0;
- (void)setAnchorLayoutManager:(id)arg0;
- (void)setAudienceLayoutManagerFromServer:(id)arg0;
- (void)setAudienceLayoutManagerFromSEI:(id)arg0;
- (void)setAudienceLayoutManager:(id)arg0;
- (void)setCanvasManager:(id)arg0;
- (BOOL)isPaidLinkmicMode;
- (void)initialize;
- (id)currentLayout;
- (void)dispose;
- (id)currentBackgroundView;
- (void).cxx_destruct;
- (BOOL)isAnchor;
- (id)eventContext;
- (BOOL)isAudio;
- (id)sessionInterface;
- (void)clean;

@end
