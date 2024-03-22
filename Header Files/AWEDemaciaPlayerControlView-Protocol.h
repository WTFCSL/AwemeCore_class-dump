//
//     Generated by private class-dump
//

@class AWEDemaciaPlayerProgressSlider, UIProgressView, UILabel, UIView, UIButton;

@protocol AWEDemaciaPlayerControlView <NSObject>

@property (retain, nonatomic) UIView *topBar;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIView *bottomBar;
@property (retain, nonatomic) UIButton *playButton;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UILabel *totalTimeLabel;
@property (retain, nonatomic) UIButton *fullScreenButton;
@property (retain, nonatomic) UIButton *replayBtn;
@property (retain, nonatomic) UILabel *replayTipLabel;
@property (retain, nonatomic) AWEDemaciaPlayerProgressSlider *progressSlider;
@property (retain, nonatomic) UIProgressView *bufferProgressView;
@property (nonatomic) double dragTime;

- (id)totalTimeLabel;
- (void)setTotalTimeLabel:(id)arg0;
- (id)replayBtn;
- (void)setReplayBtn:(id)arg0;
- (void)setFullScreenButton:(id)arg0;
- (id)bufferProgressView;
- (void)hideFullScreenBtn:(BOOL)arg0;
- (id)replayTipLabel;
- (void)showReplayBtn:(BOOL)arg0;
- (double)dragTime;
- (void)setDragTime:(double)arg0;
- (void)refreshPlayTime:(double)arg0 canPlayTime:(double)arg1 totalTime:(double)arg2;
- (void)topBottomBarOpacity:(double)arg0;
- (BOOL)reachEnd;
- (void)setReplayTipLabel:(id)arg0;
- (void)setBufferProgressView:(id)arg0;
- (void)setBottomBar:(id)arg0;
- (id)topBar;
- (void)setTimeLabel:(id)arg0;
- (id)bottomBar;
- (id)backButton;
- (id)timeLabel;
- (void)setBackButton:(id)arg0;
- (void)setTopBar:(id)arg0;
- (id)playButton;
- (void)setPlayButton:(id)arg0;
- (id)fullScreenButton;
- (id)progressSlider;
- (void)setProgressSlider:(id)arg0;

@end