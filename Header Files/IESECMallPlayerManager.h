//
//     Generated by private class-dump
//

@class NSString, NSTimer, IESECMallLivePlayerWrapper, IESECMallVideoPlayerWrapper, UICollectionViewCell;
@protocol IESECMallCollectionCellPlayerContainer;

@interface IESECMallPlayerManager : NSObject <IESECMallLivePlayerWrapperDelegate, IESECMallVideoPlayerWrapperDelegate> {
    BOOL _isPreloadLivePlayer;
    BOOL _isDequeueLivePlayer;
    BOOL _optimizeContinuePlay;
    id /* block */ _playCompleted;
    UICollectionViewCell<IESECMallCollectionCellPlayerContainer> *_playingCell;
    IESECMallLivePlayerWrapper *_livePlayer;
    IESECMallVideoPlayerWrapper *_videoPlayer;
    NSTimer *_timer;
    long long _duration;
    double _playStartTime;
    double _playEndTime;
    NSTimer *_autoPlaytimer;
    double _autoPlayDuration;
    id /* block */ _startPlayingBlock;
}

@property (retain, nonatomic) IESECMallLivePlayerWrapper *livePlayer;
@property (retain, nonatomic) IESECMallVideoPlayerWrapper *videoPlayer;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) long long duration;
@property (retain, nonatomic) UICollectionViewCell<IESECMallCollectionCellPlayerContainer> *playingCell;
@property (nonatomic) double playStartTime;
@property (nonatomic) double playEndTime;
@property (nonatomic) BOOL isPreloadLivePlayer;
@property (nonatomic) BOOL isDequeueLivePlayer;
@property (retain, nonatomic) NSTimer *autoPlaytimer;
@property (nonatomic) double autoPlayDuration;
@property (nonatomic) BOOL optimizeContinuePlay;
@property (copy, nonatomic) id /* block */ startPlayingBlock;
@property (copy, nonatomic) id /* block */ playCompleted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (double)playStartTime;
- (void)setPlayStartTime:(double)arg0;
- (id)getFormatTimeStringWithDuration:(long long)arg0;
- (id)minuteFormatStringWithDuration:(long long)arg0;
- (id)secondsFormatStringWithDuration:(long long)arg0;
- (void)didError:(id)arg0;
- (void)loadStateDidChange:(unsigned long long)arg0;
- (void)setIsDequeueLivePlayer:(BOOL)arg0;
- (id)playingCell;
- (double)playEndTime;
- (void)setPlayEndTime:(double)arg0;
- (void)setPlayingCell:(id)arg0;
- (void)setVoiceMute:(BOOL)arg0;
- (void)enterVideoDetailWithTrackParams:(id)arg0;
- (void)preloadLivePlayer;
- (void)updatePlayerCellWithVideoData:(id)arg0 trackParams:(id)arg1 cell:(id)arg2 isReplay:(BOOL)arg3 autoPlayDuration:(double)arg4 completeBlock:(id /* block */)arg5;
- (void)stopVideoCell:(id)arg0;
- (void)updatePlayerCellWithLiveModel:(id)arg0 cell:(id)arg1 autoPlayDuration:(double)arg2 startPlayingBlock:(id /* block */)arg3 completeBlock:(id /* block */)arg4;
- (void)stopLiveCell:(id)arg0;
- (void)updateCurrent:(double)arg0 duration:(double)arg1;
- (void)setOptimizeContinuePlay:(BOOL)arg0;
- (void)enqueueLivePlayer;
- (BOOL)optimizeContinuePlay;
- (void)dequeueLivePlayerWithCell:(id)arg0 autoPlayDuration:(double)arg1 checkInAutoPlayManager:(id)arg2 completeBlock:(id /* block */)arg3;
- (void)dequeueLivePlayer;
- (double)currentVideoPlaybackTime;
- (void)stopMedia;
- (void)setIsPreloadLivePlayer:(BOOL)arg0;
- (void)setPlayCompleted:(id /* block */)arg0;
- (void)setStartPlayingBlock:(id /* block */)arg0;
- (BOOL)isVideoCellType:(id)arg0;
- (BOOL)isLiveCellType:(id)arg0;
- (void)stopVideoCell:(id)arg0 needPlayNext:(BOOL)arg1;
- (void)resetVideoForCell:(id)arg0 needPlayNext:(BOOL)arg1;
- (void)endAutoPlayTimer;
- (id /* block */)playCompleted;
- (void)reportLivePlayerPreload:(double)arg0 endTime:(double)arg1;
- (BOOL)isDequeueLivePlayer;
- (void)addLiveViewIfNeeded;
- (void)beginAutoPlayTimer;
- (BOOL)isPreloadLivePlayer;
- (void)stopLiveCell:(id)arg0 needPlayNext:(BOOL)arg1;
- (void)reportPlayerPlayResult:(BOOL)arg0 error:(id)arg1;
- (void)updateDurationLabel:(id)arg0;
- (id /* block */)startPlayingBlock;
- (void)setAutoPlaytimer:(id)arg0;
- (id)autoPlaytimer;
- (void)videoReadyToDisplay;
- (void)videoDidStop;
- (void)setVideoPlayer:(id)arg0;
- (id)videoPlayer;
- (id)timer;
- (id)init;
- (void).cxx_destruct;
- (long long)duration;
- (void)setTimer:(id)arg0;
- (void)clear;
- (void)setDuration:(long long)arg0;
- (void)didReceiveError:(id)arg0;
- (double)autoPlayDuration;
- (void)setAutoPlayDuration:(double)arg0;
- (id)livePlayer;
- (void)setLivePlayer:(id)arg0;

@end
