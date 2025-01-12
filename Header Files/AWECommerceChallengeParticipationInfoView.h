//
//     Generated by private class-dump
//

@class AWETaskModel, UIImageView, NSTimer, UILabel, UIView;

@interface AWECommerceChallengeParticipationInfoView : UIView {
    AWETaskModel *_mission;
    UIView *_contentView;
    UILabel *_titleLabel;
    UILabel *_statusLabel;
    UIView *_seperateLine;
    UIView *_userImageContentView;
    UIImageView *_statusImageView;
    NSTimer *_timer;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) UIView *seperateLine;
@property (retain, nonatomic) UIView *userImageContentView;
@property (retain, nonatomic) UIImageView *statusImageView;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) AWETaskModel *mission;

- (id)mission;
- (void)setMission:(id)arg0;
- (void)updateWithMission:(id)arg0;
- (void)invalidateCountdownTimer;
- (void)setUserImageContentView:(id)arg0;
- (id)userImageContentView;
- (void)updateTextColorWithChallenge:(id)arg0;
- (id)seperateLine;
- (void)refreshCountLabel:(id)arg0;
- (void)startCountdownTimerIfNeeded;
- (void)setSeperateLine:(id)arg0;
- (id)timer;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)contentView;
- (void)setTimer:(id)arg0;
- (void)dealloc;
- (void)reset;
- (void)setTitleLabel:(id)arg0;
- (void)setContentView:(id)arg0;
- (id)statusImageView;
- (void)setStatusImageView:(id)arg0;
- (id)statusLabel;
- (void)setStatusLabel:(id)arg0;

@end
