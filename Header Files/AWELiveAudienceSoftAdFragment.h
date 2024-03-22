//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLiveCompoundSubscription, IESLiveDouPlusService, IESLiveAudienceMoreToolsProvider, IESLivePerfSampler;

@interface AWELiveAudienceSoftAdFragment : IESLiveRoomComponent <HTSLiveGiftActions, IESLiveMessageInteractionModuleCommentAction, HTSLiveRoomProfileReaction, HTSLiveUserPreviewActions, HTSLiveAudienceActions, HTSLiveRoomRemoteActions, HTSLiveFollowGuideActions, HTSLiveSpeedGiftActions, IESLiveAudienceECommerceActions, HTSLiveLongPressActions> {
    BOOL _hasGoodsInHistory;
    BOOL _hasShoppingToolBarItemShown;
    id<IESLiveCompoundSubscription> _disposable;
    id<IESLivePerfSampler> _perfSampler;
    id<IESLiveDouPlusService> _douPlusService;
    id<IESLiveAudienceMoreToolsProvider> _moreToolsProvider;
}

@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (retain, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (retain, nonatomic) id<IESLiveDouPlusService> douPlusService;
@property (retain, nonatomic) id<IESLiveAudienceMoreToolsProvider> moreToolsProvider;
@property (nonatomic) BOOL hasGoodsInHistory;
@property (nonatomic) BOOL hasShoppingToolBarItemShown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDisposable:(id)arg0;
- (id)disposable;
- (BOOL)shouldShowDouPlusXiaoDianEntrance;
- (void)unfollowUser;
- (void)componentBindService;
- (void)componentUnmount;
- (id)moreToolsProvider;
- (void)reportWithRoom:(id)arg0 refer:(id)arg1;
- (void)didCloseLiveRoomWithDuration:(double)arg0;
- (void)liveFirstWatchingOneMinute;
- (void)didShowShoppingToolBarItem;
- (void)didShowCommerceCardView;
- (BOOL)hasGoodsInHistory;
- (void)setHasGoodsInHistory:(BOOL)arg0;
- (id)douPlusService;
- (void)updateGoodsStatus;
- (id)perfSampler;
- (void)setPerfSampler:(id)arg0;
- (void)setDouPlusService:(id)arg0;
- (void)setMoreToolsProvider:(id)arg0;
- (void)setHasShoppingToolBarItemShown:(BOOL)arg0;
- (BOOL)hasShoppingToolBarItemShown;
- (id)getRoomAndAnchorInfo;
- (void)trackDouplusWithEvent:(id)arg0 params:(id)arg1;
- (void)commentSucceed:(id)arg0;
- (void)didSendGiftWithCost:(long long)arg0;
- (void)didFollowAnchor;
- (void)didFollowAnchorSuccessWithStatus:(long long)arg0;
- (void)followAnchorSuccess;
- (void)unfollowAnchorSuccess;
- (void)followUserSuccess;
- (void)followUserSuccessWithStatus:(long long)arg0;
- (void)followUserSuccessFromFollowGuide;
- (void)followAnchorSuccessWithLongPress;
- (void)unfollowAnchorSuccessWithLongPress;
- (void)didFollowAnchorSuccessInLongPressWithStatus:(long long)arg0;
- (void)didSendSpeedGiftWifhAmount:(id)arg0;
- (void).cxx_destruct;
- (void)setupActions;

@end
