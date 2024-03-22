//
//     Generated by private class-dump
//

@class IESLiveAnimatedImageView;

@interface IESLiveMultiLinkerComponentBreakthroughStageAnimation : IESLiveRevenueInteractPlayComponent {
    BOOL _isSetup;
    IESLiveAnimatedImageView *_stageAnimationView;
    IESLiveAnimatedImageView *_atmosphereAnimationView;
    unsigned long long _currentStage;
    long long _ownerScore;
}

@property (retain, nonatomic) IESLiveAnimatedImageView *stageAnimationView;
@property (retain, nonatomic) IESLiveAnimatedImageView *atmosphereAnimationView;
@property (nonatomic) unsigned long long currentStage;
@property (nonatomic) long long ownerScore;
@property (nonatomic) BOOL isSetup;

- (void)setCurrentStage:(unsigned long long)arg0;
- (void)componentDidLoad;
- (void)componentDidUpdateBattleView;
- (void)componentPlaying;
- (void)componentPunishing;
- (void)componentFinished;
- (void)playStageAnimationWithUrl:(id)arg0 offsetY:(double)arg1;
- (void)playStageAtmosphereAnimationWithUrl:(id)arg0;
- (void)playEndAnimationWithInfo:(id)arg0;
- (id)atmosphereAnimationView;
- (void)onReceivedLinkmicMethodMessage:(id)arg0;
- (void)playAtmosphereAnimationWithUrl:(id)arg0 enhance:(BOOL)arg1;
- (void)clearStageAnimationView;
- (void)setStageAnimationView:(id)arg0;
- (id)stageAnimationView;
- (void)clearAtmosphereAnimationView;
- (void)setAtmosphereAnimationView:(id)arg0;
- (long long)ownerScore;
- (void)setOwnerScore:(long long)arg0;
- (void)trackFinishLevel;
- (void).cxx_destruct;
- (BOOL)isSetup;
- (void)setup;
- (void)clear;
- (void)setIsSetup:(BOOL)arg0;
- (unsigned long long)currentStage;

@end
