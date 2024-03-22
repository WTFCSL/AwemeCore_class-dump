//
//     Generated by private class-dump
//

@class IESLiveRightBottomMutuallyExclusiveItem, IESLiveInteractionLayout, NSString, IESLiveLayoutPlaceholderView, IESLiveBigPartyEqualGuestListViewModel, IESLiveBigPartyEqualGuestListView;
@protocol IESLiveBigPartyStageAdapter, IESLiveCompoundSubscription, IESLiveBigPartyStageDelegate, IESLiveRoomService, IESLiveBigPartyStageDataSource;

@interface IESLiveBigPartyAudienceEqualStage : IESLiveBigPartyBaseStage <IESLiveBigPartyActions, IESLiveBigPartyEqualGuestListViewDataSource, IESLiveBigPartyEqualGuestsListViewDelegate, IESLiveInteractEditSeatReaction, IESLiveInteractionLinkerServiceAction, IESLiveBigPartyStage> {
    BOOL _isBigPartyGoingOn;
    BOOL _isLoading;
    id<IESLiveBigPartyStageDataSource> _dataSource;
    id<IESLiveBigPartyStageDelegate> _delegate;
    id<IESLiveBigPartyStageAdapter> adapter;
    id<IESLiveRoomService> _room;
    IESLiveBigPartyEqualGuestListViewModel *_guestListViewModel;
    IESLiveBigPartyEqualGuestListView *_guestListView;
    IESLiveLayoutPlaceholderView *_placeholderView;
    IESLiveRightBottomMutuallyExclusiveItem *_bigPartyItem;
    IESLiveInteractionLayout *_layout;
    id<IESLiveCompoundSubscription> _disposable;
}

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) IESLiveBigPartyEqualGuestListViewModel *guestListViewModel;
@property (retain, nonatomic) IESLiveBigPartyEqualGuestListView *guestListView;
@property (nonatomic) BOOL isBigPartyGoingOn;
@property (nonatomic) BOOL isLoading;
@property (retain, nonatomic) IESLiveLayoutPlaceholderView *placeholderView;
@property (retain, nonatomic) IESLiveRightBottomMutuallyExclusiveItem *bigPartyItem;
@property (retain, nonatomic) IESLiveInteractionLayout *layout;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<IESLiveBigPartyStageAdapter> adapter;

- (id)roomModel;
- (void)didSetAttachingDIContext;
- (void)setDisposable:(id)arg0;
- (id)disposable;
- (id)emojiContainerForUserID:(id)arg0 isInteractiveEmoji:(BOOL)arg1;
- (BOOL)isBigPartyGoingOn;
- (void)setIsBigPartyGoingOn:(BOOL)arg0;
- (BOOL)isLinking;
- (void)p_removePlaceholderView;
- (id)guestBattleUIAdaptor;
- (id)guestListView;
- (void)setGuestListView:(id)arg0;
- (id)emojiContainerForUserID:(id)arg0;
- (void)disposableIfNeeded;
- (void)interactionLinkerService:(id)arg0 interactListDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)willLoad;
- (void)willUnLoad;
- (id)guestsListView;
- (void)updateWithSubStyle:(id)arg0;
- (void)updateRoomThemeData:(id)arg0;
- (void)interactionDidUpdateAllSeats:(id)arg0;
- (void)p_showGuestListView;
- (void)setGuestListViewModel:(id)arg0;
- (id)guestListViewModel;
- (id)addGuestListViewObserver;
- (void)p_addRightHolderViewWithSize:(struct CGSize { double x0; double x1; })arg0;
- (void)handleInteractAllListChange:(id)arg0;
- (BOOL)isAnchorWithUser:(id)arg0;
- (void)guestListView:(id)arg0 didTapGuestInfoView:(id)arg1;
- (void)guestListView:(id)arg0 didTapAcceptLink:(id)arg1;
- (void)pr_layoutPlayer;
- (void)p_showPlaceholderView;
- (id)bigPartyItem;
- (BOOL)isVideoChatDynamicLayout1V6Horizontal;
- (void)setBigPartyItem:(id)arg0;
- (void)processGuestListViewForVideoChatDynamicLayout1V6HorizontalWithActiveList:(id)arg0;
- (id)equalGuestsListView;
- (void)updateRoomThemeWithBGData:(id)arg0;
- (BOOL)isLoading;
- (id)placeholderView;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void)setLayout:(id)arg0;
- (void).cxx_destruct;
- (BOOL)isAnchor;
- (id)initWithLayout:(id)arg0;
- (id)delegate;
- (id)layout;
- (void)setPlaceholderView:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)setIsLoading:(BOOL)arg0;
- (id)adapter;
- (id)room;
- (void)setRoom:(id)arg0;
- (void)setAdapter:(id)arg0;
- (void)addObservers;

@end
