//
//     Generated by private class-dump
//

@class IESLiveMultiKTVStore, HTSLiveKTVUserSingingHotMessage, NSArray, NSString, IESLiveMultiKTVAudioStageViewUser, IESLiveKTVCommonStore, IESLiveInteractiveLinkService, IESLiveKTVChallengeModel, NSNumber;
@protocol IESLiveMultiKTVStageControllerProtocol, IESLiveCompoundSubscription, IESLiveInteractUserModel;

@interface IESLiveMultiKTVStageDirector : NSObject <IESLiveInteractiveLinkServiceDelegate, HTSLiveMessageSubscriber, IESLiveMultiKTVStageProvider> {
    BOOL _playing;
    BOOL _isFirstSEIArrived;
    BOOL _cpuOptimizationEnable;
    NSArray *_userList;
    id<IESLiveInteractUserModel> _anchorInfo;
    IESLiveKTVCommonStore *_ktvStore;
    id<IESLiveMultiKTVStageControllerProtocol> _stageController;
    IESLiveMultiKTVStore *_multiKTVStore;
    NSNumber *_currentPlayingMusicID;
    NSNumber *_currentPlayingUserID;
    id<IESLiveCompoundSubscription> _userDisposable;
    IESLiveMultiKTVAudioStageViewUser *_currentSinger;
    unsigned long long _currentDuration;
    IESLiveInteractiveLinkService *_linkService;
    NSArray *_playModeList;
    double _remotePlayingTime;
    double _playStart;
    double _playDuration;
    IESLiveKTVChallengeModel *_challengeModel;
    HTSLiveKTVUserSingingHotMessage *_currentHotMessage;
}

@property (weak, nonatomic) IESLiveKTVCommonStore *ktvStore;
@property (weak, nonatomic) id<IESLiveMultiKTVStageControllerProtocol> stageController;
@property (weak, nonatomic) IESLiveMultiKTVStore *multiKTVStore;
@property (retain, nonatomic) NSNumber *currentPlayingMusicID;
@property (retain, nonatomic) NSNumber *currentPlayingUserID;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> userDisposable;
@property (nonatomic) BOOL playing;
@property (retain, nonatomic) IESLiveMultiKTVAudioStageViewUser *currentSinger;
@property (nonatomic) unsigned long long currentDuration;
@property (retain, nonatomic) IESLiveInteractiveLinkService *linkService;
@property (retain, nonatomic) NSArray *playModeList;
@property (nonatomic) double remotePlayingTime;
@property (nonatomic) BOOL isFirstSEIArrived;
@property (nonatomic) double playStart;
@property (nonatomic) double playDuration;
@property (weak, nonatomic) IESLiveKTVChallengeModel *challengeModel;
@property (retain, nonatomic) HTSLiveKTVUserSingingHotMessage *currentHotMessage;
@property (nonatomic) BOOL cpuOptimizationEnable;
@property (copy, nonatomic) NSArray *userList;
@property (retain, nonatomic) id<IESLiveInteractUserModel> anchorInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)anchorInfo;
- (id)trackContext;
- (double)currentPlayingTime;
- (id)componentContext;
- (void)didSetAttachingDIContext;
- (id)videoInfoDict;
- (double)leftTime;
- (void)setPlayDuration:(double)arg0;
- (void)setUserList:(id)arg0;
- (void)setAnchorInfo:(id)arg0;
- (id)challengeModel;
- (void)setChallengeModel:(id)arg0;
- (id)currentMusic;
- (id)linkService;
- (void)setLinkService:(id)arg0;
- (void)onMessageReceivedFromPrestream:(id)arg0 withDict:(id)arg1;
- (unsigned long long)currentMusicDuration;
- (id)currentPlayingMusic;
- (id)musicManager;
- (void)updateRoomSettings:(id)arg0;
- (id)orderList;
- (void)didUpdateRoom:(id)arg0;
- (id)currentSinger;
- (BOOL)isSinging;
- (void)onReceivedPermitAudienceMessage:(id)arg0;
- (void)onReceivedReplyAudienceMessage:(id)arg0;
- (void)onReceivedLinkUpdateUserMessage:(id)arg0;
- (void)didUpdateAnchorSettings:(id)arg0;
- (void)updateListenerPlayingTime:(double)arg0;
- (id)defaultVideoInfo;
- (id)currentSingUser;
- (unsigned long long)currentStageState;
- (BOOL)isSingingInRemote;
- (BOOL)isMultiAudioKTV;
- (BOOL)isNewAudioKTV;
- (BOOL)isSomeoneSinging;
- (id)pendingOrderNumber;
- (id)remotePlayingMusicID;
- (id)remoteOrderInfo;
- (id)currentPlayModeList;
- (id)hotMessage;
- (id)midiStore;
- (BOOL)isFirstSEIArrived;
- (void)showLynxSingRankList;
- (id)playModeList;
- (id)currentPlayingMusicID;
- (id)currentPlayingUserID;
- (void)updatePlayingUser:(id)arg0 musicID:(id)arg1;
- (void)resetSingerStatus;
- (void)setCurrentPlayingMusicID:(id)arg0;
- (void)setCurrentPlayingUserID:(id)arg0;
- (void)setPlayModeList:(id)arg0;
- (void)willStartPlayMusicWithMusicID:(id)arg0 afterTime:(long long)arg1;
- (void)didStartPlayMusicWithMusicID:(id)arg0;
- (void)didStopPlayMusicWithMusicID:(id)arg0 finished:(BOOL)arg1;
- (id)userDisposable;
- (void)setUserDisposable:(id)arg0;
- (void)setKtvStore:(id)arg0;
- (void)setStageController:(id)arg0;
- (id)stageController;
- (id)ktvStore;
- (id)initWithCommonKTVStore:(id)arg0;
- (void)bindKTVStageController:(id)arg0;
- (void)bindMultiKTVStore:(id)arg0;
- (void)updateDraggedContainerHeightWithScale:(double)arg0;
- (void)updateDraggedContainerInteractionEnabled:(BOOL)arg0;
- (void)updateSingerPlaying:(BOOL)arg0;
- (void)updateSingerPlayingTime:(double)arg0;
- (void)updateKTVStageState:(unsigned long long)arg0;
- (void)updateRemotePlayingMusicID:(id)arg0;
- (void)updateRemoteMusicPlayingStatus:(long long)arg0;
- (void)handleMultiKTVSEIModel:(id)arg0;
- (void)updateKTVMVInfo:(id)arg0;
- (void)setCpuOptimizationEnable:(BOOL)arg0;
- (BOOL)cpuOptimizationEnable;
- (id)multiKTVStore;
- (void)setMultiKTVStore:(id)arg0;
- (void)loadLinkService;
- (void)handleMultiKTVStart:(BOOL)arg0;
- (void)setCurrentHotMessage:(id)arg0;
- (void)setPlayStart:(double)arg0;
- (void)setRemotePlayingTime:(double)arg0;
- (void)setCurrentSinger:(id)arg0;
- (void)setIsFirstSEIArrived:(BOOL)arg0;
- (void)p_updateRemotePlayingTime:(id)arg0;
- (double)remotePlayingTime;
- (id)currentHotMessage;
- (void)setupObservers;
- (BOOL)isStarted;
- (void).cxx_destruct;
- (BOOL)playing;
- (BOOL)isPlaying;
- (void)setPlaying:(BOOL)arg0;
- (id)userList;
- (void)messageReceived:(id)arg0;
- (unsigned long long)currentDuration;
- (void)setCurrentDuration:(unsigned long long)arg0;
- (double)playStart;
- (double)playDuration;

@end
