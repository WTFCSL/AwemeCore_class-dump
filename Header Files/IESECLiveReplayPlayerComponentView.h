//
//     Generated by private class-dump
//

@class IESECLiveGoodsReplayVideoModel, NSString, UIImageView, IESECLiveReplayDataStore, IESLiveVideoPlayerController, NSMutableArray;

@interface IESECLiveReplayPlayerComponentView : UIView <IESLiveVideoPlayerControllerDelegate, IESECLiveReplayComponentViewProtocol, IESECLiveReplayPlayControlProtocol> {
    BOOL _replayVideoDeleted;
    BOOL _hasEverBeenPlayed;
    BOOL _hasSetupPlayResource;
    BOOL _isReloadVideoActionInvoke;
    IESECLiveReplayDataStore *_dataStore;
    id /* block */ _progressDidUpdate;
    NSString *_playerTag;
    NSString *_playerSubTag;
    IESLiveVideoPlayerController *_player;
    UIImageView *_playImageView;
    long long _totalDuration;
    double _totalPlayTime;
    long long _preloadStatus;
    NSMutableArray *_waitRequestBackBlocks;
    IESECLiveGoodsReplayVideoModel *_currentVideoInfo;
}

@property (retain, nonatomic) IESLiveVideoPlayerController *player;
@property (retain, nonatomic) UIImageView *playImageView;
@property (nonatomic) long long totalDuration;
@property (nonatomic) double totalPlayTime;
@property (nonatomic) BOOL hasEverBeenPlayed;
@property (nonatomic) BOOL hasSetupPlayResource;
@property (nonatomic) long long preloadStatus;
@property (nonatomic) BOOL isReloadVideoActionInvoke;
@property (retain, nonatomic) NSMutableArray *waitRequestBackBlocks;
@property (retain, nonatomic) IESECLiveGoodsReplayVideoModel *currentVideoInfo;
@property (retain, nonatomic) IESECLiveReplayDataStore *dataStore;
@property (nonatomic) BOOL replayVideoDeleted;
@property (copy, nonatomic) id /* block */ progressDidUpdate;
@property (copy, nonatomic) NSString *playerTag;
@property (copy, nonatomic) NSString *playerSubTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isPlaying;

- (double)totalPlayTime;
- (void)containerViewDidAppear:(BOOL)arg0;
- (void)containerViewWillDisappear:(BOOL)arg0;
- (void)setPlayerSubTag:(id)arg0;
- (void)setPlayerTag:(id)arg0;
- (void)setupSubViews;
- (void)setCurrentPlaybackTime:(double)arg0 complete:(id /* block */)arg1 renderComplete:(id /* block */)arg2;
- (id)currentVideoInfo;
- (void)setCurrentVideoInfo:(id)arg0;
- (void)setTotalPlayTime:(double)arg0;
- (id)playerTag;
- (id)playerSubTag;
- (void)dataStoreChanged;
- (void)seekToProgress:(double)arg0;
- (void)videoReadyToDisPlayOfPlayerController:(id)arg0;
- (void)playerController:(id)arg0 updateCacheProgress:(double)arg1;
- (void)playerController:(id)arg0 updateProgress:(double)arg1 duration:(double)arg2;
- (void)playerController:(id)arg0 loadStateDidChange:(unsigned long long)arg1;
- (void)playerController:(id)arg0 playbackStateDidChange:(unsigned long long)arg1;
- (void)playerController:(id)arg0 playerDidFinishError:(id)arg1;
- (void)playerController:(id)arg0 userStop:(id)arg1;
- (long long)preloadStatus;
- (BOOL)canPlayCurrentVideo;
- (void)setIsReloadVideoActionInvoke:(BOOL)arg0;
- (void)reloadAndPlayWithVideo:(id)arg0;
- (void)setHasSetupPlayResource:(BOOL)arg0;
- (id)waitRequestBackBlocks;
- (BOOL)hasEverBeenPlayed;
- (id /* block */)progressDidUpdate;
- (void)setHasEverBeenPlayed:(BOOL)arg0;
- (BOOL)replayVideoDeleted;
- (BOOL)isReloadVideoActionInvoke;
- (BOOL)hasSetupPlayResource;
- (id)createPlayerController;
- (void)preloadAndPlayWithVideo:(id)arg0;
- (void)trigerWaitRequestBackBlocksIfNeeded;
- (void)setReplayVideoDeleted:(BOOL)arg0;
- (void)setProgressDidUpdate:(id /* block */)arg0;
- (void)setWaitRequestBackBlocks:(id)arg0;
- (void)reload;
- (long long)totalDuration;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setSpeed:(double)arg0;
- (void)setPlayer:(id)arg0;
- (void)setDataStore:(id)arg0;
- (id)dataStore;
- (BOOL)isPlaying;
- (void)play;
- (void)pause;
- (id)player;
- (void)toggle;
- (void)setTotalDuration:(long long)arg0;
- (id)playImageView;
- (void)setPlayImageView:(id)arg0;
- (void)resetPlayer;
- (void)setPreloadStatus:(long long)arg0;

@end