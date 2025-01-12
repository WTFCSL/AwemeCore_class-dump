//
//     Generated by private class-dump
//

@class HTSEventContext, IESLiveActionSheetViewController, NSArray, IESLiveKtvSongStruct, IESLiveAVAudioPlayer, NSString, IESLiveGCDTimer, IESLiveKRCSentenceTimeSource, RACTwoTuple, IESLiveKTVTuningStore, NSNumber, IESLiveComponentContext;
@protocol IESLiveMixKTVRouter, IESLiveDebugKTVInterface, IESLiveKTVStreaming, IESLiveRoomService, IESLiveMultiKTVChallengeRouter, IESLiveKTVChorusProvider, IESLiveKTVDecorateService, IESLiveRealStreamingProvider;

@interface IESLiveKTVPlayer : NSObject <IESLiveMultiAudioAction, HTSLiveIntimateChatAudienceActions, IESLiveSocialInteractAction, HTSLiveMessageSubscriber, IESLiveAudioPlayerDelegate, IESLiveTuningStorePlayerProtocol> {
    BOOL _isScoreMode;
    BOOL _isShowLyric;
    BOOL _enabledSaveSongPlayingType;
    BOOL _enabled;
    BOOL _isSuspend;
    BOOL _enableBackgroundMode;
    BOOL _enableBackgroundPlay;
    BOOL _isLocalPlay;
    BOOL _enableEarReturnMode;
    BOOL _headphonesMonitoringEnabled;
    BOOL _playing;
    BOOL _canSwitchSongPlayingType;
    BOOL _hasTurnedOnEarphoneFeedback;
    BOOL _isInChorus;
    BOOL _pauseWhenBackground;
    BOOL _hasShowEnterRoomAudioDeviceChooseSheetVC;
    BOOL _isInteractRuning;
    BOOL _isKTVLyricSyncOptEnable;
    BOOL _isCPUOptimize;
    BOOL _enableDecorate;
    BOOL _enableMidiMigration;
    BOOL _disableSendLyricSei;
    BOOL _enableUGC;
    int _ktvPlayMode;
    unsigned long long currentSongPlayingType;
    unsigned long long _savedSongPlayingType;
    NSArray *_headsetOperations;
    IESLiveKTVTuningStore *_tuningStore;
    IESLiveKtvSongStruct *_currentPlayKTVMusic;
    id /* block */ _sendPingAction;
    double _singerDraggedScale;
    id<IESLiveRoomService> _room;
    HTSEventContext *_trackContext;
    IESLiveComponentContext *_componentContext;
    id /* block */ _foregroundPlayAction;
    NSNumber *_ktvPlayTimerInterval;
    IESLiveGCDTimer *_pingTiemr;
    IESLiveGCDTimer *_playingTiemr;
    IESLiveKRCSentenceTimeSource *_krcSentenceTimeSource;
    id<IESLiveRealStreamingProvider> _streamProvider;
    id<IESLiveKTVStreaming> _ktv;
    id<IESLiveDebugKTVInterface> _ktvDebugService;
    IESLiveActionSheetViewController *_audioDeviceChooseSheetVC;
    long long _lastSendKtvSeiTimestamp;
    RACTwoTuple *_lastNSParams;
    IESLiveAVAudioPlayer *_audioPlayer;
    double _audioPlayerPlayStartTime;
    NSNumber *_currentUserId;
    id<IESLiveKTVChorusProvider> _chorusProvider;
    id<IESLiveKTVDecorateService> _decorateService;
    id<IESLiveMixKTVRouter> _mixKTVRouter;
    id<IESLiveMultiKTVChallengeRouter> _challengeRouter;
}

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (nonatomic) BOOL pauseWhenBackground;
@property (copy, nonatomic) id /* block */ foregroundPlayAction;
@property (nonatomic) BOOL headphonesMonitoringEnabled;
@property (nonatomic, getter=isPlaying) BOOL playing;
@property (retain, nonatomic) NSNumber *ktvPlayTimerInterval;
@property (retain, nonatomic) IESLiveGCDTimer *pingTiemr;
@property (retain, nonatomic) IESLiveGCDTimer *playingTiemr;
@property (retain, nonatomic) IESLiveKRCSentenceTimeSource *krcSentenceTimeSource;
@property (retain, nonatomic) id<IESLiveRealStreamingProvider> streamProvider;
@property (retain, nonatomic) id<IESLiveKTVStreaming> ktv;
@property (retain, nonatomic) id<IESLiveDebugKTVInterface> ktvDebugService;
@property (weak, nonatomic) IESLiveActionSheetViewController *audioDeviceChooseSheetVC;
@property (nonatomic) BOOL hasShowEnterRoomAudioDeviceChooseSheetVC;
@property (nonatomic) long long lastSendKtvSeiTimestamp;
@property (nonatomic) BOOL isInteractRuning;
@property (retain, nonatomic) RACTwoTuple *lastNSParams;
@property (retain, nonatomic) IESLiveAVAudioPlayer *audioPlayer;
@property (nonatomic) double audioPlayerPlayStartTime;
@property (nonatomic) BOOL isKTVLyricSyncOptEnable;
@property (retain, nonatomic) NSNumber *currentUserId;
@property (weak, nonatomic) id<IESLiveKTVChorusProvider> chorusProvider;
@property (nonatomic) BOOL isCPUOptimize;
@property (nonatomic) BOOL enableDecorate;
@property (weak, nonatomic) id<IESLiveKTVDecorateService> decorateService;
@property (weak, nonatomic) id<IESLiveMixKTVRouter> mixKTVRouter;
@property (nonatomic) BOOL enableMidiMigration;
@property (weak, nonatomic) id<IESLiveMultiKTVChallengeRouter> challengeRouter;
@property (nonatomic) BOOL disableSendLyricSei;
@property (nonatomic) BOOL enableUGC;
@property (nonatomic) BOOL isScoreMode;
@property (nonatomic) BOOL isShowLyric;
@property (nonatomic) int ktvPlayMode;
@property (nonatomic) BOOL enabledSaveSongPlayingType;
@property (nonatomic) unsigned long long savedSongPlayingType;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL isSuspend;
@property (nonatomic) BOOL enableBackgroundMode;
@property (nonatomic) BOOL enableBackgroundPlay;
@property (nonatomic) BOOL isLocalPlay;
@property (nonatomic) BOOL enableEarReturnMode;
@property (copy, nonatomic) NSArray *headsetOperations;
@property (retain, nonatomic) IESLiveKTVTuningStore *tuningStore;
@property (retain, nonatomic) IESLiveKtvSongStruct *currentPlayKTVMusic;
@property (nonatomic) BOOL canSwitchSongPlayingType;
@property (nonatomic) BOOL hasTurnedOnEarphoneFeedback;
@property (copy, nonatomic) id /* block */ sendPingAction;
@property (nonatomic) BOOL isInChorus;
@property (nonatomic) double singerDraggedScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long currentSongPlayingType;

- (void)setMusicVolume:(float)arg0;
- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (double)currentPlayTime;
- (id)componentContext;
- (void)setupObserver;
- (void)setReverberationEnabled:(BOOL)arg0;
- (BOOL)ktvAllowed;
- (void)playBgMusicWithConfig:(id)arg0 createPlayerCompletion:(id /* block */)arg1 completionBlock:(id /* block */)arg2;
- (void)setEnableExternalSoundCard:(BOOL)arg0;
- (void)setHeadphonesMonitoringEnabled:(BOOL)arg0;
- (void)setComponentContext:(id)arg0;
- (void)didSetAttachingDIContext;
- (id)currentUserId;
- (BOOL)isSuspend;
- (void)setIsSuspend:(BOOL)arg0;
- (void)switchKtvEffectWithSourcePath:(id)arg0;
- (void)startEffect;
- (void)stopEffect;
- (void)startScore;
- (void)stopScore;
- (BOOL)enableBackgroundMode;
- (void)setEnableNoiseSuppression:(BOOL)arg0;
- (void)setEnableBackgroundMode:(BOOL)arg0;
- (BOOL)enableBackgroundPlay;
- (void)setEnableBackgroundPlay:(BOOL)arg0;
- (void)setCurrentUserId:(id)arg0;
- (id)ktv;
- (id)initWithRoom:(id)arg0 trackContext:(id)arg1 componentContext:(id)arg2;
- (void)updateEarphoneTurnedOnFlag:(BOOL)arg0;
- (void)linkmicDidStart;
- (void)setEarMonitorVolume:(long long)arg0;
- (BOOL)isHeadsetPluggedIn;
- (BOOL)headphonesMonitoringEnabled;
- (void)setSingScoreWithMidiFilePath:(id)arg0 lyricFilePath:(id)arg1;
- (id)getMidiDataArray;
- (id)getScoreRealtimeInfo;
- (void)exitKTVMode;
- (void)setToneVolume:(float)arg0;
- (BOOL)isInChorus;
- (void)setIsInChorus:(BOOL)arg0;
- (id)detectHeadsetPluggedIn;
- (void)setIsCPUOptimize:(BOOL)arg0;
- (BOOL)isCPUOptimize;
- (BOOL)enableUGCMV;
- (BOOL)isNewAudioKTV;
- (void)setCurrentSongPlayingType:(unsigned long long)arg0;
- (unsigned long long)currentSongPlayingType;
- (BOOL)isHeadphonesPluggedIn;
- (BOOL)isScoreMode;
- (BOOL)isShowLyric;
- (id)currentPlayKTVMusic;
- (void)setIsShowLyric:(BOOL)arg0;
- (void)setIsScoreMode:(BOOL)arg0;
- (id)mixKTVRouter;
- (void)setMixKTVRouter:(id)arg0;
- (unsigned long long)savedSongPlayingType;
- (id)tuningStore;
- (id /* block */)sendPingAction;
- (void)setKtvPlayMode:(int)arg0;
- (void)setIsLocalPlay:(BOOL)arg0;
- (void)setSavedSongPlayingType:(unsigned long long)arg0;
- (void)startPingWithParams:(id /* block */)arg0 passingTest:(id /* block */)arg1;
- (void)sendSeiKTVFinish;
- (void)setCurrentPlayKTVMusic:(id)arg0;
- (BOOL)isOpenSoloKTV;
- (void)setEnabledSaveSongPlayingType:(BOOL)arg0;
- (id)prepareForPlayMusicModel:(id)arg0;
- (BOOL)enableEarReturnMode;
- (void)playBgMusicWithConfig:(id)arg0 startTime:(double)arg1 duration:(double)arg2 createPlayerCompletion:(id /* block */)arg3 progressBlock:(id /* block */)arg4 completioinBlock:(id /* block */)arg5;
- (void)sendSeiMusicFinish;
- (void)setHasTurnedOnEarphoneFeedback:(BOOL)arg0;
- (void)sendSeiScoreClose;
- (void)sendSEIData:(id)arg0 forKey:(id)arg1;
- (BOOL)hasTurnedOnEarphoneFeedback;
- (void)toggleOriginalSinging:(id)arg0 createPlayerCompletion:(id /* block */)arg1 completionBlock:(id /* block */)arg2;
- (id)headsetOperations;
- (BOOL)canSwitchSongPlayingType;
- (void)setCanSwitchSongPlayingType:(BOOL)arg0;
- (id)krcSentenceTimeSource;
- (void)setKrcSentenceTimeSource:(id)arg0;
- (BOOL)enableDecorate;
- (void)setEnableDecorate:(BOOL)arg0;
- (id)challengeRouter;
- (void)sendSeiScoreOpen;
- (void)setChallengeRouter:(id)arg0;
- (BOOL)isEnabledAutotune;
- (id)chorusProvider;
- (void)setEarReturnOn:(BOOL)arg0;
- (void)setTuningStore:(id)arg0;
- (void)handleHeadphonesStatus;
- (id)liveKTVPlayerOriginalSavedKey;
- (void)setEnableMidiMigration:(BOOL)arg0;
- (void)setDisableSendLyricSei:(BOOL)arg0;
- (void)setEnableUGC:(BOOL)arg0;
- (void)setIsKTVLyricSyncOptEnable:(BOOL)arg0;
- (void)setupTuning;
- (void)setupDebugger;
- (void)p_showSheetIfIsMultiKTVAndAudioChangeToNotBluetoothHFPWithRouteChangeReason:(unsigned long long)arg0;
- (BOOL)p_useGlobalHeadPhone;
- (void)setPauseWhenBackground:(BOOL)arg0;
- (id /* block */)foregroundPlayAction;
- (void)setForegroundPlayAction:(id /* block */)arg0;
- (BOOL)pauseWhenBackground;
- (BOOL)p_isConnectNotBluetoothAudioDevice;
- (BOOL)hasShowEnterRoomAudioDeviceChooseSheetVC;
- (void)p_showAudioDeviceChooseAlertIfNotBluetooth;
- (void)setKtvDebugService:(id)arg0;
- (id)ktvDebugService;
- (BOOL)enabledSaveSongPlayingType;
- (BOOL)isLocalPlay;
- (void)startObserverMusicPlayTimer:(id /* block */)arg0 musicModel:(id)arg1 startTime:(double)arg2;
- (void)setEnableVolumeBalance:(BOOL)arg0 audioStruct:(id)arg1;
- (id)prepareForPlayLocalMusicWithModel:(id)arg0;
- (void)setAudioPlayerPlayStartTime:(double)arg0;
- (double)audioPlayerPlayStartTime;
- (void)sendSeiMusicPause;
- (void)sendSeiMusicResume;
- (void)stopObserverMusicPlayTimer;
- (BOOL)isOpenBluetooth;
- (id)playingTiemr;
- (void)setPlayingTiemr:(id)arg0;
- (void)sendSeiMusicStart;
- (void)sendSyncMusicStatus;
- (void)sendSeiKRCSentence:(id)arg0 supplementCount:(long long)arg1;
- (void)sendSeiMusicStartKRCSentence:(id)arg0;
- (void)sendSeiKTVStart:(id)arg0;
- (void)setSendPingAction:(id /* block */)arg0;
- (void)setPingTiemr:(id)arg0;
- (id)pingTiemr;
- (void)setEnableEarReturnMode:(BOOL)arg0;
- (void)setSavedEarReturnEnabled:(BOOL)arg0;
- (void)setLastNSParams:(id)arg0;
- (id)lastNSParams;
- (id)addExtraChorusData:(id)arg0;
- (id)addExtraDecorateInfo:(id)arg0;
- (id)decorateService;
- (BOOL)isKTVLyricSyncOptEnable;
- (long long)lastSendKtvSeiTimestamp;
- (void)setLastSendKtvSeiTimestamp:(long long)arg0;
- (id)seiCommonData;
- (double)singerDraggedScale;
- (id)lyricsFromSentence:(id)arg0 supplementCount:(long long)arg1;
- (BOOL)disableSendLyricSei;
- (int)ktvPlayMode;
- (BOOL)enableSendMidiStatus;
- (void)setIsInteractRuning:(BOOL)arg0;
- (void)resetDefaultHeadphonesMonitoring;
- (BOOL)savedEarReturnEnabled;
- (id)liveKTVPlayerEarReturnSavedKey;
- (id)audioDeviceChooseSheetVC;
- (BOOL)enableUGC;
- (void)setHasShowEnterRoomAudioDeviceChooseSheetVC:(BOOL)arg0;
- (void)recordAudioDeviceChanged:(long long)arg0;
- (void)setAudioDeviceChooseSheetVC:(id)arg0;
- (BOOL)enableMidiMigration;
- (void)setHeadsetOperations:(id)arg0;
- (void)setCurrentOrDefaultEarReturnOn:(BOOL)arg0;
- (void)playLocalMusicWithModel:(id)arg0 startTime:(double)arg1 startPlaySuccess:(id /* block */)arg2;
- (double)localMusicCurrentPlayTime;
- (void)stopPlayCurrenLocalMusicModel;
- (void)startObserverMusicPlayTimer:(id /* block */)arg0 musicModel:(id)arg1;
- (void)sendSeiOrderSongTopUser:(id)arg0;
- (void)sendSeiIndicatorHidden:(BOOL)arg0;
- (void)sendSeiScoreEachWithRow:(long long)arg0 score:(long long)arg1;
- (void)sendSeiScoreTotal:(double)arg0;
- (void)sendSeiDraggedContainerViewDidMove:(double)arg0;
- (id)ktvPlayTimerInterval;
- (void)setSingerDraggedScale:(double)arg0;
- (void)setKtvPlayTimerInterval:(id)arg0;
- (void)setKtv:(id)arg0;
- (BOOL)isInteractRuning;
- (void)setChorusProvider:(id)arg0;
- (void)setDecorateService:(id)arg0;
- (void)setStreamProvider:(id)arg0;
- (BOOL)enabled;
- (void)resume;
- (void).cxx_destruct;
- (id)audioPlayer;
- (void)sendPing;
- (void)stop;
- (void)setEnabled:(BOOL)arg0;
- (BOOL)isPlaying;
- (void)setAudioPlayer:(id)arg0;
- (id)streamProvider;
- (void)pause;
- (void)reset;
- (void)setPlaying:(BOOL)arg0;
- (void)setVoiceVolume:(float)arg0;
- (id)room;
- (void)setRoom:(id)arg0;
- (void)messageReceived:(id)arg0;
- (void)seek:(double)arg0;
- (void)startPing;
- (void)stopPing;

@end
