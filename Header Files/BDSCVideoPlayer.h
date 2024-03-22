//
//     Generated by private class-dump
//

@class UIButton, AVPlayerItem, UIImageView, AVPlayerLayer, NSString, AVPlayer;
@protocol BDSCVideoPlayerDelegate;

@interface BDSCVideoPlayer : UIView {
    float _currentTime;
    float _duration;
    unsigned long long _playerStatus;
    id<BDSCVideoPlayerDelegate> _delegate;
    unsigned long long _videoGravity;
    AVPlayer *_player;
    AVPlayerLayer *_playerLayer;
    AVPlayerItem *_currentPlayerItem;
    UIButton *_playButton;
    UIImageView *_coverImageView;
    NSString *_observePlayerItemToken;
    NSString *_observeTimeControlToken;
}

@property (retain, nonatomic) AVPlayer *player;
@property (retain, nonatomic) AVPlayerLayer *playerLayer;
@property (retain, nonatomic) AVPlayerItem *currentPlayerItem;
@property (nonatomic) unsigned long long playerStatus;
@property (nonatomic) float currentTime;
@property (nonatomic) float duration;
@property (retain, nonatomic) UIButton *playButton;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (copy, nonatomic) NSString *observePlayerItemToken;
@property (copy, nonatomic) NSString *observeTimeControlToken;
@property (weak, nonatomic) id<BDSCVideoPlayerDelegate> delegate;
@property (nonatomic) unsigned long long videoGravity;

- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (void)playButtonDidClick;
- (void)updateURLString:(id)arg0;
- (void)setupPlayIcon:(id)arg0;
- (void)setupCoverImageWithURLString:(id)arg0;
- (id)layerVideoGravity;
- (void)observePlayerStatus;
- (id)observePlayerItemToken;
- (void)observePlayerItemStatus;
- (id)observeTimeControlToken;
- (void)setObserveTimeControlToken:(id)arg0;
- (void)setObservePlayerItemToken:(id)arg0;
- (void)updateSubviewsState;
- (void)playWithURLString:(id)arg0;
- (unsigned long long)videoGravity;
- (id)init;
- (void)setVideoGravity:(unsigned long long)arg0;
- (id)playerLayer;
- (void).cxx_destruct;
- (void)setCurrentTime:(float)arg0;
- (void)stop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setPlayer:(id)arg0;
- (float)duration;
- (id)delegate;
- (float)currentTime;
- (void)layoutSubviews;
- (void)setPlayerLayer:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)play;
- (void)pause;
- (id)player;
- (void)setDuration:(float)arg0;
- (void)setupSubviews;
- (id)playButton;
- (id)currentPlayerItem;
- (void)setCurrentPlayerItem:(id)arg0;
- (unsigned long long)playerStatus;
- (void)setPlayButton:(id)arg0;
- (void)setPlayerStatus:(unsigned long long)arg0;

@end
