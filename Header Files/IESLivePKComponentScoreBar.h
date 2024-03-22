//
//     Generated by private class-dump
//

@class IESLivePKScoreBar, RACDisposable, NSData, IESLiveAnimatedImageView, IESLiveGCDTimer, IESLiveCombineTwoTuple;
@protocol IESLiveCompoundSubscription;

@interface IESLivePKComponentScoreBar : IESLiveRevenueInteractPlayComponent {
    BOOL _isNeedShowRelativeScore;
    BOOL _inSprintTime;
    BOOL _wasMyGift;
    int _barType;
    IESLivePKScoreBar *_scoreBar;
    IESLiveAnimatedImageView *_selfParticleView;
    IESLiveAnimatedImageView *_oppoParticleView;
    id<IESLiveCompoundSubscription> _disposable;
    RACDisposable *_receiveDisposable;
    long long _remainTime;
    double _ratio;
    double _updateScoreBarTime;
    unsigned long long _previousStatus;
    NSData *_selfParticleAnimation;
    NSData *_oppoParticleAnimation;
    double _curAnimDuration;
    IESLiveGCDTimer *_currentAnimTimer;
    IESLiveCombineTwoTuple *_lastLeftScoreTuple;
}

@property (weak, nonatomic) IESLivePKScoreBar *scoreBar;
@property (retain, nonatomic) IESLiveAnimatedImageView *selfParticleView;
@property (retain, nonatomic) IESLiveAnimatedImageView *oppoParticleView;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (retain, nonatomic) RACDisposable *receiveDisposable;
@property (nonatomic) long long remainTime;
@property (nonatomic) double ratio;
@property (nonatomic) double updateScoreBarTime;
@property (nonatomic) unsigned long long previousStatus;
@property (nonatomic) BOOL isNeedShowRelativeScore;
@property (retain, nonatomic) NSData *selfParticleAnimation;
@property (retain, nonatomic) NSData *oppoParticleAnimation;
@property (nonatomic) BOOL inSprintTime;
@property (nonatomic) int barType;
@property (nonatomic) BOOL wasMyGift;
@property (nonatomic) double curAnimDuration;
@property (retain, nonatomic) IESLiveGCDTimer *currentAnimTimer;
@property (retain, nonatomic) IESLiveCombineTwoTuple *lastLeftScoreTuple;

- (void)setDisposable:(id)arg0;
- (id)disposable;
- (void)setBarType:(int)arg0;
- (long long)remainTime;
- (void)setRemainTime:(long long)arg0;
- (void)componentContainerFrameChanged;
- (id)scoreBar;
- (unsigned long long)p_scoreBarStatus;
- (void)showEmojiAnimation;
- (double)updateScoreBarTime;
- (void)setUpdateScoreBarTime:(double)arg0;
- (void)setSelfLeftNumViewHeight;
- (void)setSelfRightNumViewHeight;
- (void)setSelfLeftNumViewY;
- (void)setSelfRightNumViewY;
- (id)selfParticleView;
- (id)oppoParticleView;
- (void)setOppoParticleView:(id)arg0;
- (void)setSelfParticleView:(id)arg0;
- (void)showParticleAnimationForSelf:(BOOL)arg0;
- (void)setScoreBar:(id)arg0;
- (BOOL)wasMyGift;
- (void)setWasMyGift:(BOOL)arg0;
- (void)componentPlaying;
- (void)componentPunishing;
- (void)componentFinished;
- (void)onReceivedPKLynxEvent:(long long)arg0 extraParmas:(id)arg1;
- (void)componentInteracting;
- (id)receiveDisposable;
- (void)setReceiveDisposable:(id)arg0;
- (void)componentReceivedLynxEvent:(long long)arg0 extraParmas:(id)arg1;
- (void)setInSprintTime:(BOOL)arg0;
- (BOOL)inSprintTime;
- (void)loadPKScoreBar;
- (void)stopCurrentAnimTimer;
- (BOOL)isNeedExternalScoreCorners;
- (void)updateInstantKillLine:(id)arg0;
- (void)updateScoreBuffRewardAnimation:(id)arg0;
- (void)setNumViewHeightAndY;
- (void)trackPKBattleBarOptimize:(id)arg0;
- (void)showBaseStatusAnimationWithLeftValue:(long long)arg0 rightValue:(long long)arg1 isForce:(BOOL)arg2 needChangeAlpha:(BOOL)arg3;
- (BOOL)isNeedShowRelativeScore;
- (void)setLastLeftScoreTuple:(id)arg0;
- (void)scoreDisposableContent:(id)arg0;
- (void)showAnimationInSprintTime;
- (void)showStatusAnimationWithLeftValue:(long long)arg0 rightValue:(long long)arg1 isForce:(BOOL)arg2 showCurAddScoreStr:(BOOL)arg3 cleanBehaviorEffect:(BOOL)arg4;
- (id)lastLeftScoreTuple;
- (BOOL)shouldChangeLeftNumViewHeightWhenNormal;
- (void)setCurAnimDuration:(double)arg0;
- (double)curAnimDuration;
- (id)currentAnimationImageUrl;
- (BOOL)needChangeAnimationImageAlpha;
- (void)setCurrentAnimTimer:(id)arg0;
- (id)selfParticleAnimation;
- (id)oppoParticleAnimation;
- (id)currentAnimTimer;
- (void)setIsNeedShowRelativeScore:(BOOL)arg0;
- (void)setSelfParticleAnimation:(id)arg0;
- (void)setOppoParticleAnimation:(id)arg0;
- (void).cxx_destruct;
- (int)barType;
- (double)ratio;
- (void)setRatio:(double)arg0;
- (unsigned long long)previousStatus;
- (void)clean;
- (void)setPreviousStatus:(unsigned long long)arg0;

@end