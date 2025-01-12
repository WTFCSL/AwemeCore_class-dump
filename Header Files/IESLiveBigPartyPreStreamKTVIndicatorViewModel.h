//
//     Generated by private class-dump
//

@class IESLiveKTVResourceManager, NSString, IESLiveKTVCommonListenerStore, IESLiveCombineSubject, IESLiveKTVMidiStore, IESLiveKTVSEIOrderInfo, IESLiveKTVDownloader, NSNumber;
@protocol IESLiveRoomService;

@interface IESLiveBigPartyPreStreamKTVIndicatorViewModel : NSObject <IESLiveKTVSongIndicatorViewModelProtocol> {
    BOOL _isShowLyric;
    BOOL _isPlaying;
    BOOL _isScoreMode;
    IESLiveCombineSubject *_ktvMidiFeedbackSEIModelSubject;
    IESLiveCombineSubject *_resetSubject;
    IESLiveCombineSubject *_seiModelSubject;
    NSNumber *_anchorID;
    IESLiveKTVMidiStore *_midiStore;
    id<IESLiveRoomService> _roomModel;
    id /* block */ _updateSingerCallback;
    NSNumber *_currentPlayingMusicID;
    NSNumber *_currentPlayingUserID;
    unsigned long long _state;
    IESLiveKTVCommonListenerStore *_listenerStore;
    IESLiveKTVDownloader *_ktvDownloader;
    IESLiveKTVResourceManager *_resourceManager;
    IESLiveKTVSEIOrderInfo *_remoteOrderInfo;
    NSString *_lyricUrl;
}

@property (nonatomic) BOOL isShowLyric;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL isScoreMode;
@property (retain, nonatomic) NSNumber *currentPlayingMusicID;
@property (retain, nonatomic) NSNumber *currentPlayingUserID;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) IESLiveKTVCommonListenerStore *listenerStore;
@property (retain, nonatomic) IESLiveKTVDownloader *ktvDownloader;
@property (retain, nonatomic) IESLiveKTVResourceManager *resourceManager;
@property (retain, nonatomic) IESLiveKTVSEIOrderInfo *remoteOrderInfo;
@property (retain, nonatomic) NSString *lyricUrl;
@property (retain, nonatomic) NSNumber *anchorID;
@property (weak, nonatomic) IESLiveKTVMidiStore *midiStore;
@property (weak, nonatomic) id<IESLiveRoomService> roomModel;
@property (copy, nonatomic) id /* block */ updateSingerCallback;
@property (retain, nonatomic) IESLiveCombineSubject *resetSubject;
@property (retain, nonatomic) IESLiveCombineSubject *seiModelSubject;
@property (retain, nonatomic) IESLiveCombineSubject *ktvMidiFeedbackSEIModelSubject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)currentPlayTime;
- (id)roomModel;
- (BOOL)liveTypeAudio;
- (long long)waitingTime;
- (id)anchorID;
- (void)setAnchorID:(id)arg0;
- (id)lyricUrl;
- (void)setLyricUrl:(id)arg0;
- (id)challengeModel;
- (void)setRoomModel:(id)arg0;
- (void)handleSEIModel:(id)arg0;
- (BOOL)isSelfSinging;
- (void)toggleShowLyricsAction;
- (id)pendingOrderNumber;
- (id)remoteOrderInfo;
- (id)midiStore;
- (BOOL)useOldIMOrderList;
- (id)nextMusic;
- (id)resetSubject;
- (BOOL)isScoreMode;
- (BOOL)supportMidi;
- (id)midiViewModel;
- (id)listenerStore;
- (id)ktvDownloader;
- (id)currentPlayingMusicID;
- (id)ktvMidiFeedbackSEIModelSubject;
- (void)handleScoreSEIModel:(id)arg0;
- (void)setRemoteOrderInfo:(id)arg0;
- (id)seiModelSubject;
- (id)currentPlayingUserID;
- (void)updatePlayingUser:(id)arg0 musicID:(id)arg1;
- (id /* block */)updateSingerCallback;
- (void)resetSingerStatus;
- (void)setCurrentPlayingMusicID:(id)arg0;
- (void)setCurrentPlayingUserID:(id)arg0;
- (id)isShowLyricSignal;
- (id)isScoreModeSignal;
- (id)isPlayingSignal;
- (id)currentPlayKTVMusicSignal;
- (id)averageScoreSignal;
- (id)orderSongListSignal;
- (id)onWaitingSignal;
- (id)ktvStageStateChangeSignal;
- (id)listenerPlayingTime;
- (id)currentPlayingTimeSignal;
- (id)ktvIMOrderListChanageSignal;
- (id)chorusSignal;
- (id)willResetMusicSignal;
- (id)yellowDotSignal;
- (BOOL)isShowLyric;
- (id)currentPlayKTVMusic;
- (id)playingMidiMusic;
- (id)currentWaitingMusic;
- (BOOL)isChorusStart;
- (id)wantListenTextWithMusic:(id)arg0;
- (void)didTapIndicatorWithSongKTVing;
- (void)downloadLyricsUseCache:(id)arg0 lyricType:(unsigned long long)arg1 lyricsOffset:(double)arg2 duration:(long long)arg3 filePath:(id)arg4 completion:(id /* block */)arg5;
- (void)downloadLyricsV2:(id)arg0 lyricType:(unsigned long long)arg1 lyricsOffset:(double)arg2 duration:(long long)arg3 completion:(id /* block */)arg4;
- (void)reportMidiScoreWithCompletion:(id /* block */)arg0;
- (void)didMidiScoreFeedbackShowWithUid:(id)arg0 score:(id)arg1 isHighScore:(BOOL)arg2;
- (void)setResetSubject:(id)arg0;
- (void)setSeiModelSubject:(id)arg0;
- (void)setKtvMidiFeedbackSEIModelSubject:(id)arg0;
- (id)getControlStore;
- (long long)liveKtvMidiMigrationSetting;
- (void)trackKsongIconShowWithIconType:(id)arg0;
- (BOOL)canApplySing;
- (unsigned long long)ktvState;
- (id)stageResetSignal;
- (void)updateWithSEI:(id)arg0;
- (void)setMidiStore:(id)arg0;
- (void)setUpdateSingerCallback:(id /* block */)arg0;
- (void)setIsShowLyric:(BOOL)arg0;
- (void)setIsScoreMode:(BOOL)arg0;
- (void)setListenerStore:(id)arg0;
- (void)setKtvDownloader:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg0;
- (BOOL)isAnchor;
- (id)resourceManager;
- (BOOL)isPreview;
- (BOOL)isPlaying;
- (void)dealloc;
- (void)setIsPlaying:(BOOL)arg0;
- (id)room;
- (void)setResourceManager:(id)arg0;

@end
