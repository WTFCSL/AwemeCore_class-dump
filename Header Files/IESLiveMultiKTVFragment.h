//
//     Generated by private class-dump
//

@class IESLiveMultiKTVStore, IESLiveMultiKTVVirtualInteractStage, RACCompoundDisposable, IESLiveMultiKTVStageDirector, NSString, IESLiveFollowGuidePopupView, NSDictionary, IESLiveMultiKTVSingModeSwitch, IESLiveMultiAudioKTVContainerView, IESLiveMultiKTVAudioStageController;
@protocol IESLiveKTVFullLinkMonitor, IESLiveMultiKTVLinkmicServiceProtocol, IESLiveMultiAudioSceneControllerProtocol, IESLiveInteractionLinkerService;

@interface IESLiveMultiKTVFragment : IESLiveRoomComponent <IESLiveSocialInteractAction, IESLiveMultiKTVRouter, IESLiveMultiAudioAction, IESLiveMultiKTVReaction, IESLiveInteractionStageFactory, IESLiveMultiKTVVirtualInteractStageDelegate, IESLiveInteractionLinkerServiceAction, IESLiveInteractSmallWindowActions> {
    BOOL _fastStartProtect;
    BOOL _isFetchingMixKTVApi;
    BOOL _isCPUOptimize;
    float _savedStreamVolume;
    IESLiveMultiKTVStore *_store;
    IESLiveFollowGuidePopupView *_followGuideView;
    double _originalSwitchTimeInterval;
    id<IESLiveKTVFullLinkMonitor> _ktvMonitor;
    RACCompoundDisposable *_runningDisposable;
    double _lastClickPauseBtnTime;
    id /* block */ _afterEnterAction;
    IESLiveMultiKTVStageDirector *_stageDirector;
    IESLiveMultiKTVAudioStageController *_audioStageController;
    NSDictionary *_trackExtra;
    IESLiveMultiKTVSingModeSwitch *_singModeSwitch;
    id<IESLiveMultiAudioSceneControllerProtocol> _sceneController;
    id<IESLiveInteractionLinkerService> _linker;
    id<IESLiveMultiKTVLinkmicServiceProtocol> _ktvLinkmicService;
    IESLiveMultiKTVVirtualInteractStage *_virtualStage;
    IESLiveMultiAudioKTVContainerView *_previewContainer;
}

@property (retain, nonatomic) IESLiveMultiKTVStore *store;
@property (retain, nonatomic) IESLiveFollowGuidePopupView *followGuideView;
@property (nonatomic) float savedStreamVolume;
@property (nonatomic) double originalSwitchTimeInterval;
@property (retain, nonatomic) id<IESLiveKTVFullLinkMonitor> ktvMonitor;
@property (retain, nonatomic) RACCompoundDisposable *runningDisposable;
@property (nonatomic) double lastClickPauseBtnTime;
@property (copy, nonatomic) id /* block */ afterEnterAction;
@property (retain, nonatomic) IESLiveMultiKTVStageDirector *stageDirector;
@property (retain, nonatomic) IESLiveMultiKTVAudioStageController *audioStageController;
@property (retain, nonatomic) NSDictionary *trackExtra;
@property (retain, nonatomic) IESLiveMultiKTVSingModeSwitch *singModeSwitch;
@property (nonatomic) BOOL fastStartProtect;
@property (nonatomic) BOOL isFetchingMixKTVApi;
@property (retain, nonatomic) id<IESLiveMultiAudioSceneControllerProtocol> sceneController;
@property (weak, nonatomic) id<IESLiveInteractionLinkerService> linker;
@property (retain, nonatomic) id<IESLiveMultiKTVLinkmicServiceProtocol> ktvLinkmicService;
@property (retain, nonatomic) IESLiveMultiKTVVirtualInteractStage *virtualStage;
@property (weak, nonatomic) IESLiveMultiAudioKTVContainerView *previewContainer;
@property (nonatomic) BOOL isCPUOptimize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)arg0;

- (id)videoInfoDict;
- (id)trackExtra;
- (void)setTrackExtra:(id)arg0;
- (void)setPreviewContainer:(id)arg0;
- (id)orderButton;
- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })guestListViewFrame;
- (id)allSeatProviderViews;
- (BOOL)supportOpenCamera;
- (BOOL)isApplyingToJoinChannel;
- (id)emojiContainerForUserID:(id)arg0 isInteractiveEmoji:(BOOL)arg1;
- (void)currentLayoutDidChangedFrom:(id)arg0 to:(id)arg1;
- (void)duckStreamPlayerVolumeIfNeeded;
- (void)resumeStreamPlayerVolumeIfNeeded;
- (void)setLinker:(id)arg0;
- (id)linker;
- (void)fastStartSelectedOrderTabWithParams:(id)arg0;
- (void)showSelectedOrderTabWithParams:(id)arg0;
- (void)trackRequestSongSuccessWithMusicModel:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfSlotView;
- (void)dealWithOpenCamera:(BOOL)arg0;
- (void)sceneControllerWillUnloadWithEndLinkmicLayout:(BOOL)arg0;
- (void)updateLinkMicFanticketViewEnable:(BOOL)arg0;
- (void)showBreathGudiAnimation;
- (id)rootPanelDelegateInstance;
- (id)currentKtvVoteInfo;
- (BOOL)enableCameraCapture;
- (void)changeCaptureInputType:(long long)arg0;
- (void)setIsCPUOptimize:(BOOL)arg0;
- (BOOL)isCPUOptimize;
- (void)interactionLinkerService:(id)arg0 didCloseWithContext:(id)arg1;
- (void)interactionLinkerServiceInteractWillEnd:(id)arg0;
- (void)interactionLinkerService:(id)arg0 interactReceiveError:(id)arg1;
- (id)multiKTVAudioStageView;
- (int)currentUserSingMode;
- (int)currentUserSingModeWillChangeTo;
- (int)remoteUserSingMode;
- (unsigned long long)singStatusWithUserID:(id)arg0;
- (double)multiKTVAudioStageViewHeight;
- (void)ktvOpenPreProcessWithCompletion:(id /* block */)arg0;
- (BOOL)enableMultiKTVMode;
- (BOOL)supportVideoChorus;
- (void)exitMultiKTVMode;
- (void)showSingModePicker;
- (void)startCaptureAsAvatarResourceReady;
- (void)updateUser:(long long)arg0 isHost:(BOOL)arg1 comletion:(id /* block */)arg2;
- (void)showVideoSelectPanelWithSource:(id)arg0;
- (void)draggedContainerDidMoved:(double)arg0;
- (void)trackKTVSingAppResignActiveWithExtra:(id)arg0;
- (id)defaultVideoInfo;
- (BOOL)hasJoinChannel;
- (id)emojiSeatAnimationViewsForUserID:(id)arg0;
- (id)stageWithLayout:(id)arg0;
- (id)followGuideView;
- (void)setFollowGuideView:(id)arg0;
- (void)onInteractReturnRoomWithShowTrackDic:(id)arg0 durationTrackDic:(id)arg1;
- (id)ktvMonitor;
- (void)setKtvMonitor:(id)arg0;
- (id)stageSnapshotImage;
- (id)singModeSwitch;
- (void)setSingModeSwitch:(id)arg0;
- (id)commonStore;
- (void)startMultiKTV;
- (double)lastClickPauseBtnTime;
- (void)setLastClickPauseBtnTime:(double)arg0;
- (double)originalSwitchTimeInterval;
- (void)setOriginalSwitchTimeInterval:(double)arg0;
- (id /* block */)afterEnterAction;
- (void)setAfterEnterAction:(id /* block */)arg0;
- (BOOL)fastStartProtect;
- (void)setFastStartProtect:(BOOL)arg0;
- (void)restoreCustomLayout;
- (void)startLinkMicLayout;
- (BOOL)enableSmoothEnterRoom;
- (void)virtualStage:(id)arg0 didLoadWithLayout:(id)arg1;
- (void)virtualStage:(id)arg0 didUnloadWithLayout:(id)arg1;
- (void)loadAudioStageDirector;
- (void)unloadAudioStageDirector;
- (void)setKtvLinkmicService:(id)arg0;
- (void)sceneControllerWillLoadWithStartLinkmicLayout:(BOOL)arg0 layout:(id)arg1;
- (void)setStageDirector:(id)arg0;
- (void)setAudioStageController:(id)arg0;
- (id)audioStageController;
- (id)stageDirector;
- (id)runningDisposable;
- (void)setRunningDisposable:(id)arg0;
- (float)savedStreamVolume;
- (void)setSavedStreamVolume:(float)arg0;
- (BOOL)ktvSmoothSmallWindowFit;
- (id)ktvLinkmicService;
- (void)setVirtualStage:(id)arg0;
- (void)pr_changeRoomKSongSuccessEventWithMusicModel:(id)arg0 isFromChangeRoom:(BOOL)arg1 index:(long long)arg2;
- (BOOL)avatarSingModeEnabled;
- (BOOL)isCurrentSinging;
- (BOOL)isFetchingMixKTVApi;
- (void)setIsFetchingMixKTVApi:(BOOL)arg0;
- (id)virtualStage;
- (BOOL)isStarted;
- (void).cxx_destruct;
- (id)store;
- (unsigned long long)currentScene;
- (void)setStore:(id)arg0;
- (id)previewContainer;
- (id)sceneController;
- (void)setSceneController:(id)arg0;

@end