//
//     Generated by private class-dump
//

@protocol HTSLiveRoomCollectionDataObserver;

@protocol HTSLiveRoomCollectionDelegate <NSObject>

@property (weak, nonatomic) id<HTSLiveRoomCollectionDataObserver> dataObserver;

- (id)dataObserver;
- (void)setDataObserver:(id)arg0;

@optional

- (BOOL)canRefresh;
- (BOOL)canLoadMore;
- (void)loadMore;
- (void)loadMore:(id)arg0 completion:(id /* block */)arg1;
- (void)changeToIndex:(unsigned long long)arg0;
- (void)didEnterRoom:(id)arg0;
- (void)refreshWithPullId:(id)arg0;
- (BOOL)deleteRoom:(id)arg0;
- (BOOL)deleteModel:(id)arg0;
- (void)changeToRoom:(id)arg0;
- (id)isHaveFeedbackCardWithRoomID:(id)arg0;
- (void)deleteUserFeedbackCardWithCellModel:(id)arg0;
- (void)insertUserFeedbackCardWithCellModel:(id)arg0 index:(unsigned long long)arg1;
- (void)removeUserFeedbackCardToTemporaryStorageWithCellModel:(id)arg0;
- (void)loadMoreWithCollectUnreadRoomIDs:(id)arg0 completion:(id /* block */)arg1;
- (void)insertCellModel:(id)arg0 index:(unsigned long long)arg1 withAction:(unsigned long long)arg2;
- (BOOL)enableUsePullRefresh;
- (void)refresh;
- (BOOL)hasMore;
- (void)didCloseRoom:(id)arg0 originIndexPath:(id)arg1;

@end