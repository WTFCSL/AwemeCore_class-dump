//
//     Generated by private class-dump
//

@protocol IESLiveMultiKTVStageProvider <NSObject>

- (id)trackContext;
- (double)currentPlayingTime;
- (id)componentContext;
- (id)videoInfoDict;
- (double)leftTime;
- (id)currentMusic;
- (unsigned long long)currentMusicDuration;
- (id)currentPlayingMusic;
- (id)musicManager;
- (id)orderList;
- (BOOL)isSinging;
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
- (BOOL)isStarted;
- (BOOL)isPlaying;
- (double)playStart;
- (double)playDuration;

@end
