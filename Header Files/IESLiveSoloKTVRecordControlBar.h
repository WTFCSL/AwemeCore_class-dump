//
//     Generated by private class-dump
//

@class IESLiveCircleProgressView, IESLiveSoloKTVGradientButton, IESLiveGCDTimer, UILabel, UIImage, UIButton;
@protocol IESLiveSoloKTVRecordControlDelegate;

@interface IESLiveSoloKTVRecordControlBar : UIView {
    BOOL _supportOrigin;
    BOOL _isPlaying;
    BOOL _isOpen;
    float _progress;
    int _countDownTime;
    int _countDownTimeOrigin;
    id<IESLiveSoloKTVRecordControlDelegate> _delegate;
    UIButton *_completeButton;
    IESLiveCircleProgressView *_progressView;
    IESLiveSoloKTVGradientButton *_playPauseButton;
    UIButton *_originalButton;
    UIButton *_restartButton;
    UIButton *_tuneButton;
    long long _songDuration;
    UILabel *_songTimeLabel;
    UILabel *_durationLabel;
    IESLiveSoloKTVGradientButton *_countDownButton;
    IESLiveGCDTimer *_countDownTimer;
    UIImage *_recordPauseImage;
    UIImage *_recordPlayImage;
    UIImage *_originalOpenImage;
    UIImage *_originalCloseImage;
}

@property (retain, nonatomic) IESLiveCircleProgressView *progressView;
@property (retain, nonatomic) IESLiveSoloKTVGradientButton *playPauseButton;
@property (retain, nonatomic) UIButton *originalButton;
@property (retain, nonatomic) UIButton *restartButton;
@property (retain, nonatomic) UIButton *tuneButton;
@property (nonatomic) long long songDuration;
@property (nonatomic) float progress;
@property (retain, nonatomic) UILabel *songTimeLabel;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) IESLiveSoloKTVGradientButton *countDownButton;
@property (nonatomic) int countDownTime;
@property (nonatomic) int countDownTimeOrigin;
@property (retain, nonatomic) IESLiveGCDTimer *countDownTimer;
@property (retain, nonatomic) UIImage *recordPauseImage;
@property (retain, nonatomic) UIImage *recordPlayImage;
@property (retain, nonatomic) UIImage *originalOpenImage;
@property (retain, nonatomic) UIImage *originalCloseImage;
@property (nonatomic) BOOL isOpen;
@property (weak, nonatomic) id<IESLiveSoloKTVRecordControlDelegate> delegate;
@property (retain, nonatomic) UIButton *completeButton;
@property (nonatomic) BOOL supportOrigin;
@property (nonatomic) BOOL isPlaying;

- (id)completeButton;
- (void)setCompleteButton:(id)arg0;
- (void)setCountDownTime:(int)arg0;
- (int)countDownTime;
- (void)startCountDown;
- (void)stopCountDown;
- (void)didClickComplete;
- (BOOL)isCountDown;
- (id)restartButton;
- (void)setRestartButton:(id)arg0;
- (void)setCountDownTimeOrigin:(int)arg0;
- (id)createGraientBtn;
- (void)didClickPlayPause;
- (void)setCountDownButton:(id)arg0;
- (void)updateButtonImageWithName:(id)arg0 button:(id)arg1;
- (void)didClickOriginal;
- (id)creatControlLabelWithTitle:(id)arg0;
- (id)creatSingleControlViewWithButton:(id)arg0 label:(id)arg1;
- (void)didClickTuning;
- (void)setTuneButton:(id)arg0;
- (void)didClickRestart;
- (void)setSongTimeLabel:(id)arg0;
- (void)setRecordPauseImage:(id)arg0;
- (void)setRecordPlayImage:(id)arg0;
- (void)setOriginalOpenImage:(id)arg0;
- (void)setOriginalCloseImage:(id)arg0;
- (void)updateOriginalStateWithIsOpen:(BOOL)arg0;
- (id)songTimeLabel;
- (id)recordPauseImage;
- (id)recordPlayImage;
- (id)originalOpenImage;
- (id)originalCloseImage;
- (int)countDownTimeOrigin;
- (id)countDownButton;
- (id)tuneButton;
- (id)initWithSongDuration:(long long)arg0 needCountDownTime:(int)arg1;
- (void)updateWithCurrentPlayTime:(double)arg0;
- (void)updatePlayStateWithState:(BOOL)arg0;
- (void)setSupportOrigin:(BOOL)arg0;
- (BOOL)supportOrigin;
- (void)setIsOpen:(BOOL)arg0;
- (void).cxx_destruct;
- (void)loadImage;
- (id)delegate;
- (BOOL)isOpen;
- (id)progressView;
- (void)setProgressView:(id)arg0;
- (float)progress;
- (BOOL)isPlaying;
- (void)setDelegate:(id)arg0;
- (void)setProgress:(float)arg0;
- (void)setIsPlaying:(BOOL)arg0;
- (id)createAnimation;
- (void)setupUI;
- (id)durationLabel;
- (void)setDurationLabel:(id)arg0;
- (long long)songDuration;
- (void)setSongDuration:(long long)arg0;
- (void)setCountDownTimer:(id)arg0;
- (id)countDownTimer;
- (id)playPauseButton;
- (void)updateDuration:(double)arg0;
- (void)setPlayPauseButton:(id)arg0;
- (id)originalButton;
- (void)setOriginalButton:(id)arg0;

@end
