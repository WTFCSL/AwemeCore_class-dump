//
//     Generated by private class-dump
//

@protocol AWERTVFeedContentControllers, AFDPlayRemoteAwemeDataControllerProtocol;

@protocol AWEPlayRemoteTableViewControllerProtocol <NSObject>

@property (nonatomic) struct EngineAudioWrapper { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void *x4; } *audioWrapper;
@property (retain, nonatomic) id<AFDPlayRemoteAwemeDataControllerProtocol> dataController;
@property (retain, nonatomic) id<AWERTVFeedContentControllers> rtvFeedContentControllers;
@property (nonatomic) double tabBarHeight;
@property (readonly, nonatomic) BOOL isHost;
@property (nonatomic) long long playState;

- (void)pauseWithAnimation;
- (void)playWithAnimation;
- (struct EngineAudioWrapper { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void *x4; } *)audioWrapper;
- (void)setAudioWrapper:(struct EngineAudioWrapper { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void *x4; } *)arg0;
- (BOOL)canRefresh;
- (void)setDataController:(id)arg0;
- (void)loadMoreIfNeeded;
- (void)updateContentSize:(struct CGSize { double x0; double x1; })arg0;
- (void)receiveListMessage;
- (id)rtvFeedContentControllers;
- (void)updatePlaySpeed:(id)arg0;
- (void)setRtvFeedContentControllers:(id)arg0;
- (void)hidePauseView:(BOOL)arg0;
- (void)pauseWithIcon:(BOOL)arg0;
- (void)updateNeedReusePlayerAwemeID:(id)arg0;
- (void)preloadFeedCellWithFirstModel:(id)arg0;
- (void)updateAwemeList:(id)arg0 currentAweme:(id)arg1 animated:(BOOL)arg2;
- (void)updateCurrentProgress:(long long)arg0;
- (void)updateCurrentAwemeProgress:(id)arg0;
- (void)updatePlayerState:(BOOL)arg0;
- (void)playIfNotPausedBySingleClick;
- (void)enablePureMode:(long long)arg0;
- (unsigned long long)videoLayoutTypeOfModel:(id)arg0;
- (long long)currentAwemeMediaType;
- (void)updateIsHost:(BOOL)arg0 ignoreRefresh:(BOOL)arg1;
- (void)setTabBarHeight:(double)arg0;
- (void)refreshCurrentCell;
- (void)setScrollEnabled:(BOOL)arg0;
- (double)currentPlaybackTime;
- (double)totalTime;
- (void)resume;
- (void)stop;
- (void)setVolume:(float)arg0;
- (double)videoDuration;
- (void)play;
- (void)pause;
- (void)setMute:(BOOL)arg0;
- (BOOL)isHost;
- (id)dataController;
- (long long)playState;
- (void)setPlayState:(long long)arg0;
- (double)tabBarHeight;
- (void)seekToTime:(double)arg0 completion:(id /* block */)arg1;

@end
