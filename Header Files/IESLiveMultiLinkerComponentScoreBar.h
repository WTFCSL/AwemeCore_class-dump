//
//     Generated by private class-dump
//

@class IESLiveMultiLinkerBattleScoreBar;
@protocol IESLiveCompoundSubscription;

@interface IESLiveMultiLinkerComponentScoreBar : IESLiveRevenueInteractPlayComponent {
    BOOL _isInFinalTime;
    IESLiveMultiLinkerBattleScoreBar *_scoreBar;
    id<IESLiveCompoundSubscription> _disposable;
    long long _timeThreshold;
}

@property (retain, nonatomic) IESLiveMultiLinkerBattleScoreBar *scoreBar;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (nonatomic) long long timeThreshold;
@property (nonatomic) BOOL isInFinalTime;

- (long long)timeThreshold;
- (void)setTimeThreshold:(long long)arg0;
- (void)setDisposable:(id)arg0;
- (id)disposable;
- (void)bindAction;
- (id)scoreBar;
- (void)setScoreBar:(id)arg0;
- (void)componentDidUpdateBattleView;
- (void)componentPlaying;
- (void)componentPunishing;
- (void)componentFinished;
- (void)setupScoreBar;
- (void)updateScoreBarFrame;
- (void)setIsInFinalTime:(BOOL)arg0;
- (BOOL)isInFinalTime;
- (void).cxx_destruct;
- (void)dealloc;

@end