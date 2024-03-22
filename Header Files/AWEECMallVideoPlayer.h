//
//     Generated by private class-dump
//

@class NSString, UIImageView, AWEAwemeModel, UIViewController;
@protocol IESECMallVideoDelegate, AWEPlayVideoViewControllerProtocol, AWEAwemePlayVideoViewControllerProtocol, AWEAwemePlayVideoProtocol;

@interface AWEECMallVideoPlayer : UIView <AWEPlayVideoDelegate, IESVideoPlayerDelegate, AWEPlayVideoViewControllerStatusDelegate, AWEModernFullscreenTransitionOuterContextProvider, IESECMallVideoProtocol> {
    BOOL _repeat;
    BOOL _mute;
    BOOL _autoPlay;
    BOOL _inTransition;
    BOOL _isSameVideoBack;
    NSString *_fitMode;
    NSString *_posterURL;
    double _startTime;
    double _volume;
    id<IESECMallVideoDelegate> _delegate;
    double _currentPlaybackTime;
    double _totalPlayTime;
    unsigned long long _playState;
    UIViewController<AWEAwemePlayVideoViewControllerProtocol, AWEPlayVideoViewControllerProtocol, AWEAwemePlayVideoProtocol> *_playerController;
    UIImageView *_coverImageView;
    AWEAwemeModel *_model;
}

@property (retain, nonatomic) UIViewController<AWEAwemePlayVideoViewControllerProtocol, AWEPlayVideoViewControllerProtocol, AWEAwemePlayVideoProtocol> *playerController;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (nonatomic) unsigned long long playState;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL isSameVideoBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL repeat;
@property (nonatomic) BOOL mute;
@property (copy, nonatomic) NSString *fitMode;
@property (copy, nonatomic) NSString *posterURL;
@property (nonatomic) BOOL autoPlay;
@property (nonatomic) double startTime;
@property (nonatomic) double volume;
@property (nonatomic) BOOL inTransition;
@property (nonatomic) double currentPlaybackTime;
@property (nonatomic) double totalPlayTime;
@property (weak, nonatomic) id<IESECMallVideoDelegate> delegate;

- (void)player:(id)arg0 playbackFailedWithError:(id)arg1;
- (void)player:(id)arg0 didChangePlaybackStateWithAction:(long long)arg1;
- (void)playerWillLoopPlaying:(id)arg0;
- (void)player:(id)arg0 playbackFailedForURL:(id)arg1 error:(id)arg2;
- (void)player:(id)arg0 didChangeStallState:(long long)arg1 actionType:(long long)arg2 reason:(unsigned long long)arg3;
- (void)setLogExtra:(id)arg0;
- (double)customTimerPeriodic:(id)arg0;
- (void)player:(id)arg0 updatePlayTime:(double)arg1 canPlayTime:(double)arg2 totalTime:(double)arg3;
- (void)player:(id)arg0 didUpdateFromPlayViewController:(id)arg1;
- (double)totalPlayTime;
- (BOOL)shouldModernTransitionUpdatePlayerControllerWithFromContext:(id)arg0;
- (void)videoUpdatePlayerControllerWithPlayVideoVC:(id)arg0;
- (id)fitMode;
- (void)setFitMode:(id)arg0;
- (void)setPlayerSubTag:(id)arg0;
- (void)setPlayerTag:(id)arg0;
- (void)modernTransitionUpdateOffset:(long long)arg0 isScrolled:(BOOL)arg1;
- (id)modernTransitionContext;
- (void)modernTransitionDidCompleteWithOffset:(long long)arg0;
- (long long)preferScaleMode;
- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (id)posterURL;
- (void)setPosterURL:(id)arg0;
- (void)setTotalPlayTime:(double)arg0;
- (void)updatePlayerControllerPlayState:(long long)arg0;
- (void)transferPlayStateFromPlaybackAction:(long long)arg0;
- (BOOL)isSameVideoBack;
- (void)setIsSameVideoBack:(BOOL)arg0;
- (void)videoUpdatePlayerControllerWithPlayState:(long long)arg0;
- (void)updateVideoPlayerAwemeModel:(id)arg0;
- (BOOL)mute;
- (void)setModel:(id)arg0;
- (double)currentPlaybackTime;
- (void)setStartTime:(double)arg0;
- (void).cxx_destruct;
- (double)volume;
- (id)model;
- (void)beginTransition;
- (id)playerController;
- (void)stop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)endTransition;
- (void)setPlayerController:(id)arg0;
- (id)delegate;
- (double)startTime;
- (void)setVolume:(double)arg0;
- (void)setCurrentPlaybackTime:(double)arg0;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)play;
- (void)pause;
- (void)reset;
- (void)setMute:(BOOL)arg0;
- (BOOL)inTransition;
- (void)setInTransition:(BOOL)arg0;
- (BOOL)autoPlay;
- (void)setAutoPlay:(BOOL)arg0;
- (unsigned long long)playState;
- (void)setPlayState:(unsigned long long)arg0;
- (BOOL)repeat;
- (void)setRepeat:(BOOL)arg0;
- (void)seekToTime:(double)arg0 completion:(id /* block */)arg1;

@end
