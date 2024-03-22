//
//     Generated by private class-dump
//

@class IESLiveIntercomCommentEntranceView;
@protocol IESLiveCompoundSubscription;

@interface IESLivePKComponentIntercomComment : IESLivePKComponent {
    BOOL _hasPropEffectInfo;
    IESLiveIntercomCommentEntranceView *_entranceView;
    id<IESLiveCompoundSubscription> _disposable;
}

@property (retain, nonatomic) IESLiveIntercomCommentEntranceView *entranceView;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (nonatomic) BOOL hasPropEffectInfo;

- (void)setDisposable:(id)arg0;
- (id)disposable;
- (id)entranceView;
- (void)setEntranceView:(id)arg0;
- (void)bindAction;
- (void)componentContainerFrameChanged;
- (void)componentPlaying;
- (void)componentPunishing;
- (void)componentFinished;
- (void)componentDidClear:(BOOL)arg0;
- (void)componentInteracting;
- (BOOL)needShowOppoTeamTaskAdditionInfo;
- (BOOL)enablePKComponentLayoutOptimize;
- (BOOL)hasPropEffectInfo;
- (void)setHasPropEffectInfo:(BOOL)arg0;
- (void)loadIntercomCommentButton;
- (void)updateIntercomCommentLayout:(BOOL)arg0 needShowInteractScore:(BOOL)arg1;
- (void)updateCommentPadLayout;
- (void)bindActionLayout;
- (double)topOffset;
- (void).cxx_destruct;
- (void)clean;

@end