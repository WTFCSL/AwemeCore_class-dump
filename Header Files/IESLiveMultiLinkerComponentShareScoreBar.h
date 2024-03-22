//
//     Generated by private class-dump
//

@class IESLiveRevenueInteractShareScoreBar;
@protocol IESLiveCompoundSubscription;

@interface IESLiveMultiLinkerComponentShareScoreBar : IESLiveRevenueInteractPlayComponent {
    IESLiveRevenueInteractShareScoreBar *_scoreBar;
    id<IESLiveCompoundSubscription> _disposable;
}

@property (retain, nonatomic) IESLiveRevenueInteractShareScoreBar *scoreBar;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;

- (void)setDisposable:(id)arg0;
- (id)disposable;
- (void)bindAction;
- (id)scoreBar;
- (void)setScoreBar:(id)arg0;
- (void)componentPlaying;
- (void)componentPunishing;
- (void)componentFinished;
- (void)setupScoreBar;
- (void)updateScoreBarFrame;
- (void).cxx_destruct;
- (void)dealloc;

@end
