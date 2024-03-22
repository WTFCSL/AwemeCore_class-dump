//
//     Generated by private class-dump
//

@class HTSLiveScorllLabelView, UIImageView, IESLiveGCDTimer, UILabel, IESLiveGradientView, UIView;

@interface IESLiveKTVChallengeProgressView : UIView {
    BOOL _enableUGCMV;
    int _challengeType;
    unsigned long long _target;
    IESLiveGradientView *_progressView;
    UIView *_challengeTypeView;
    UILabel *_targetLabel;
    UILabel *_dividerLabel;
    UILabel *_scoreLabel;
    UILabel *_timeLabel;
    HTSLiveScorllLabelView *_songName;
    UIImageView *_statusImageView;
    IESLiveGCDTimer *_timer;
}

@property (nonatomic) int challengeType;
@property (nonatomic) unsigned long long target;
@property (retain, nonatomic) IESLiveGradientView *progressView;
@property (retain, nonatomic) UIView *challengeTypeView;
@property (retain, nonatomic) UILabel *targetLabel;
@property (retain, nonatomic) UILabel *dividerLabel;
@property (retain, nonatomic) UILabel *scoreLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) HTSLiveScorllLabelView *songName;
@property (retain, nonatomic) UIImageView *statusImageView;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (nonatomic) BOOL enableUGCMV;

- (void)updateRemainTime:(unsigned long long)arg0;
- (id)targetLabel;
- (void)setChallengeType:(int)arg0;
- (BOOL)enableUGCMV;
- (id)initWithChallengeType:(int)arg0 enableUGCMV:(BOOL)arg1;
- (void)bindChallengeModel:(id)arg0;
- (void)showStartAnimationWithSingerName:(id)arg0 andSongName:(id)arg1;
- (void)showChallengeStatusWithStatus:(unsigned long long)arg0 duration:(double)arg1 completion:(id /* block */)arg2;
- (void)setEnableUGCMV:(BOOL)arg0;
- (void)setChallengeTypeView:(id)arg0;
- (id)challengeTypeView;
- (id)dividerLabel;
- (void)invalidataTimer;
- (id)initWithChallengeType:(int)arg0;
- (void)setTargetLabel:(id)arg0;
- (void)setDividerLabel:(id)arg0;
- (void)setChallengeTarget:(unsigned long long)arg0;
- (void)setChallengeScore:(unsigned long long)arg0;
- (void)startSongNameAnimationWithName:(id)arg0;
- (id)timer;
- (void).cxx_destruct;
- (void)setTarget:(unsigned long long)arg0;
- (unsigned long long)target;
- (void)setTimeLabel:(id)arg0;
- (void)setTimer:(id)arg0;
- (id)progressView;
- (void)setProgressView:(id)arg0;
- (void)layoutSubviews;
- (void)dealloc;
- (id)timeLabel;
- (void)setupSubviews;
- (id)statusImageView;
- (void)setStatusImageView:(id)arg0;
- (id)songName;
- (id)scoreLabel;
- (void)setScoreLabel:(id)arg0;
- (void)setSongName:(id)arg0;
- (int)challengeType;

@end