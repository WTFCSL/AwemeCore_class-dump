//
//     Generated by private class-dump
//

@class RACDisposable, HTSLivePKContributeListView;
@protocol IESLiveCompoundSubscription;

@interface IESLivePKComponentContributeList : IESLiveRevenueInteractPlayComponent {
    HTSLivePKContributeListView *_selfList;
    HTSLivePKContributeListView *_otherList;
    id<IESLiveCompoundSubscription> _disposable;
    RACDisposable *_receiveDisposable;
}

@property (weak, nonatomic) HTSLivePKContributeListView *selfList;
@property (weak, nonatomic) HTSLivePKContributeListView *otherList;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (retain, nonatomic) RACDisposable *receiveDisposable;

- (void)setDisposable:(id)arg0;
- (id)disposable;
- (void)componentContainerFrameChanged;
- (void)componentPlaying;
- (void)componentPunishing;
- (void)componentFinished;
- (void)componentDidClear:(BOOL)arg0;
- (void)componentInteracting;
- (void)cleanOnfinish;
- (void)loadContributeView;
- (void)doScreenClearAnimation:(BOOL)arg0;
- (id)selfList;
- (id)otherList;
- (void)setSelfList:(id)arg0;
- (void)setOtherList:(id)arg0;
- (void)updateContributeListHidden:(BOOL)arg0;
- (void)setContributeListAlpha:(double)arg0;
- (id)receiveDisposable;
- (void)setReceiveDisposable:(id)arg0;
- (void)componentReceivedLynxEvent:(long long)arg0 extraParmas:(id)arg1;
- (void).cxx_destruct;

@end
