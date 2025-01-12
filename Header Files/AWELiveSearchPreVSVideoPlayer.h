//
//     Generated by private class-dump
//

@class AWELiveVSEpisode, NSString, UIImageView, UIView, NSNumber, IESLiveVideoPlayerController;
@protocol AWELiveSearchVSVideoPlayerDelegate;

@interface AWELiveSearchPreVSVideoPlayer : NSObject <IESLiveVideoPlayerControllerDelegate, AWELiveVSVideoPlayerProtocol> {
    BOOL _isStarted;
    id<AWELiveSearchVSVideoPlayerDelegate> _delegate;
    long long _playState;
    double _currPlaybackTime;
    double _durationTime;
    IESLiveVideoPlayerController *_player;
    AWELiveVSEpisode *_vsEpisode;
    NSNumber *_episodeID;
    NSString *_playInfo;
    UIView *_containerView;
    UIImageView *_loadingImageView;
}

@property (retain, nonatomic) AWELiveVSEpisode *vsEpisode;
@property (retain, nonatomic) NSNumber *episodeID;
@property (copy, nonatomic) NSString *playInfo;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *loadingImageView;
@property (nonatomic) BOOL isStarted;
@property (retain, nonatomic) IESLiveVideoPlayerController *player;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWELiveSearchVSVideoPlayerDelegate> delegate;
@property (nonatomic) double volume;
@property (nonatomic) BOOL muted;
@property (readonly, nonatomic) BOOL isLoop;
@property (nonatomic) long long playState;
@property (readonly, nonatomic) double durationTime;
@property (readonly, nonatomic) double currPlaybackTime;

- (double)durationTime;
- (id)loadingImageView;
- (void)setLoadingImageView:(id)arg0;
- (void)playerController:(id)arg0 currentPlayTime:(double)arg1 playableTime:(double)arg2 duration:(double)arg3;
- (void)onStalledStart:(id)arg0 actionType:(long long)arg1 reason:(unsigned long long)arg2;
- (void)onStalledEnd:(id)arg0;
- (double)currPlaybackTime;
- (void)setPlayInfo:(id)arg0;
- (id)playInfo;
- (void)setEpisodeID:(id)arg0;
- (id)vsEpisode;
- (void)changePlayerContentMode:(long long)arg0;
- (void)updateWithVsEpisode:(id)arg0;
- (void)setStartTime:(double)arg0 loopStartTime:(double)arg1;
- (void)videoReadyToDisPlayOfPlayerController:(id)arg0;
- (void)playerController:(id)arg0 playbackStateDidChange:(unsigned long long)arg1;
- (void)playerController:(id)arg0 playerDidFinishError:(id)arg1;
- (void)playFromHistoryLocation;
- (void)enableLoop:(BOOL)arg0;
- (void)seekToTime:(double)arg0 complete:(id /* block */)arg1;
- (id)initWithVsEpisode:(id)arg0;
- (void)recoverContentMode;
- (void)setVsEpisode:(id)arg0;
- (void)setStartTime:(double)arg0;
- (BOOL)isStarted;
- (void).cxx_destruct;
- (BOOL)muted;
- (double)volume;
- (BOOL)isLoop;
- (void)setMuted:(BOOL)arg0;
- (void)stop;
- (void)setContainerView:(id)arg0;
- (void)setPlayer:(id)arg0;
- (id)delegate;
- (id)containerView;
- (void)setVolume:(double)arg0;
- (id)playerView;
- (void)setDelegate:(id)arg0;
- (void)play;
- (void)pause;
- (id)player;
- (void)setupUI;
- (long long)playState;
- (void)setPlayState:(long long)arg0;
- (void)setIsStarted:(BOOL)arg0;
- (id)episodeID;
- (void)createPlayer;

@end
