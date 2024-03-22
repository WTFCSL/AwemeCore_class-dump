//
//     Generated by private class-dump
//

@class NSMutableDictionary;
@protocol IESLiveCompoundSubscription;

@interface IESLiveRevenueInteractPlayComponentEffectInfo : IESLiveRevenueInteractPlayComponent {
    NSMutableDictionary *_playContainerViewDict;
    id<IESLiveCompoundSubscription> _disposable;
}

@property (retain, nonatomic) NSMutableDictionary *playContainerViewDict;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;

- (void)setDisposable:(id)arg0;
- (id)disposable;
- (void)bindAction;
- (void)componentDidUpdateBattleView;
- (void)componentPlaying;
- (void)componentPunishing;
- (void)componentFinished;
- (void)componentInteracting;
- (void)loadPlayContainer;
- (void)loadPlayContainerForBattleView:(id)arg0 anchorModel:(id)arg1;
- (id)playContainerViewDict;
- (void)setPlayContainerViewDict:(id)arg0;
- (void).cxx_destruct;
- (void)clean;

@end