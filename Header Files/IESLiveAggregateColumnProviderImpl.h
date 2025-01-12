//
//     Generated by private class-dump
//

@class NSString, HTSEventContext, IESLiveFeedDrawerEntranceView, NSNumber, IESLiveFeedAggregateViewController;
@protocol IESLiveRoomService;

@interface IESLiveAggregateColumnProviderImpl : NSObject <IESLiveFeedDrawerEntranceViewDelegate, IESLiveReferenceActions, IESLiveAggregateColumnProvider> {
    BOOL _usePlatformData;
    BOOL _isAppearing;
    BOOL _isFirstEnter;
    BOOL _isInnerFromDrawer;
    HTSEventContext *_trackContext;
    IESLiveFeedDrawerEntranceView *_aggregateEntrenceView;
    id /* block */ _hideAggregateAction;
    id /* block */ _showAggregateAction;
    IESLiveFeedAggregateViewController *_viewController;
    id<IESLiveRoomService> _currentRoom;
    NSNumber *_hasMore;
    NSString *_entranceViewTitle;
}

@property (retain, nonatomic) IESLiveFeedDrawerEntranceView *aggregateEntrenceView;
@property (copy, nonatomic) id /* block */ hideAggregateAction;
@property (copy, nonatomic) id /* block */ showAggregateAction;
@property (nonatomic) BOOL isAppearing;
@property (retain, nonatomic) IESLiveFeedAggregateViewController *viewController;
@property (retain, nonatomic) id<IESLiveRoomService> currentRoom;
@property (retain, nonatomic) NSNumber *hasMore;
@property (nonatomic) BOOL isFirstEnter;
@property (retain, nonatomic) NSString *entranceViewTitle;
@property (nonatomic) BOOL isInnerFromDrawer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL usePlatformData;
@property (retain, nonatomic) HTSEventContext *trackContext;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (void)didSetAttachingDIContext;
- (BOOL)isFirstEnter;
- (void)setIsFirstEnter:(BOOL)arg0;
- (void)addPanGesture;
- (id)feedController;
- (void)closePipWithShowType:(unsigned long long)arg0;
- (void)pipNeedToEnterNewRoom:(unsigned long long)arg0;
- (BOOL)isFollow;
- (BOOL)needAnimate;
- (void)setEntranceHidden:(BOOL)arg0;
- (BOOL)isNeedToCleanMode;
- (BOOL)usePlatformData;
- (void)setUsePlatformData:(BOOL)arg0;
- (BOOL)enableLiveAggregateColumn;
- (id)aggregateEntrenceView;
- (void)updateRoom:(id)arg0;
- (void)loadmoreCompletionWithError:(BOOL)arg0 hasMore:(BOOL)arg1 models:(id)arg2;
- (id)aggregateCellModels;
- (void)showAggregateColumnFrom:(id)arg0 isDraw:(BOOL)arg1;
- (void)deleteItems:(id)arg0 isDeleteByHand:(BOOL)arg1;
- (void)hideFooter;
- (void)updateAggregateColumnTitle:(id)arg0 room:(id)arg1;
- (void)hideAggregateColumnFrom:(id)arg0 isDraw:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)updateIsInnerFromDrawer:(BOOL)arg0;
- (BOOL)isInnerFromDrawer;
- (void)didLeaveAudienceRoom;
- (void)didCloseStageForPipModel:(id)arg0;
- (void)beforeCloseStageForPipModel:(id)arg0;
- (void)p_releaseProvider;
- (void)p_releaseAggregateProvider;
- (void)setIsInnerFromDrawer:(BOOL)arg0;
- (void)setEntranceViewTitle:(id)arg0;
- (id)feedDrawerEntranceTitle;
- (id)entranceViewTitle;
- (void)aggregateEntrenceViewAction;
- (void)setShowAggregateAction:(id /* block */)arg0;
- (void)setHideAggregateAction:(id /* block */)arg0;
- (id /* block */)hideAggregateAction;
- (id /* block */)showAggregateAction;
- (BOOL)isCity;
- (id)iconImageUrls;
- (void)setAggregateEntrenceView:(id)arg0;
- (id)animator;
- (id)iconImage;
- (void)setViewController:(id)arg0;
- (id)viewController;
- (void).cxx_destruct;
- (void)setIsAppearing:(BOOL)arg0;
- (BOOL)isAppearing;
- (void)setHasMore:(id)arg0;
- (id)hasMore;
- (void)setCurrentRoom:(id)arg0;
- (id)currentRoom;

@end
