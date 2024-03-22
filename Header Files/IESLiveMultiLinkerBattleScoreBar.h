//
//     Generated by private class-dump
//

@class IESLiveAnimatedImageView, IESLivePKScoreBar;

@interface IESLiveMultiLinkerBattleScoreBar : UIView {
    BOOL _wasMyGift;
    IESLivePKScoreBar *_scoreBar;
    IESLiveAnimatedImageView *_selfParticleView;
    IESLiveAnimatedImageView *_oppoParticleView;
    double _ratio;
    unsigned long long _previousStatus;
    long long _timeThreshold;
    double _updateScoreBarTime;
}

@property (retain, nonatomic) IESLivePKScoreBar *scoreBar;
@property (retain, nonatomic) IESLiveAnimatedImageView *selfParticleView;
@property (retain, nonatomic) IESLiveAnimatedImageView *oppoParticleView;
@property (nonatomic) double ratio;
@property (nonatomic) unsigned long long previousStatus;
@property (nonatomic) long long timeThreshold;
@property (nonatomic) double updateScoreBarTime;
@property (nonatomic) BOOL wasMyGift;

- (id)initWithDIContext:(id)arg0;
- (long long)timeThreshold;
- (void)setTimeThreshold:(long long)arg0;
- (void)initSubviews;
- (double)currentOffsetY;
- (void)setupScoreInfo;
- (id)scoreBar;
- (unsigned long long)p_scoreBarStatus;
- (void)showEmojiAnimation;
- (void)updateScoreLabelIsShowRelative:(BOOL)arg0;
- (void)updateViewAnimated:(BOOL)arg0;
- (double)updateScoreBarTime;
- (void)setUpdateScoreBarTime:(double)arg0;
- (BOOL)refreshEffectInfoContainer;
- (void)setSelfLeftNumViewHeight;
- (void)setSelfRightNumViewHeight;
- (void)setSelfLeftNumViewY;
- (void)setSelfRightNumViewY;
- (void)showStatusAnimationWithLeftValue:(long long)arg0 rightValue:(long long)arg1 isForce:(BOOL)arg2;
- (id)selfParticleView;
- (id)oppoParticleView;
- (void)setOppoParticleView:(id)arg0;
- (void)setSelfParticleView:(id)arg0;
- (void)updateScoreBarLayoutIsReward:(BOOL)arg0;
- (void)showParticleAnimationForSelf:(BOOL)arg0;
- (void)refreshEffectInfoContainerScoreAnimation;
- (void)setLeftScore:(long long)arg0 scoreStr:(id)arg1 rightScore:(long long)arg2 scoreStr:(id)arg3;
- (void)updateScoreBarStatus;
- (void)setScoreBar:(id)arg0;
- (BOOL)wasMyGift;
- (void)setWasMyGift:(BOOL)arg0;
- (double)currentHeight;
- (void).cxx_destruct;
- (double)ratio;
- (void)setRatio:(double)arg0;
- (unsigned long long)previousStatus;
- (void)setPreviousStatus:(unsigned long long)arg0;

@end
