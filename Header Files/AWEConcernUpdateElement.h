//
//     Generated by private class-dump
//

@class NSArray, NSString, NSError, NSObject;
@protocol AWEConcernSkylightContainerProtocol;

@interface AWEConcernUpdateElement : NSObject <AWEConcernRecentUpdateUnreadListPageHandlerProtocol, AWEConcernFollowListUnreadCacheMessage, AWEConcernSkylightElementProtocol> {
    NSObject<AWEConcernSkylightContainerProtocol> *_skylightContainer;
    NSArray *_highValueUserList;
    NSArray *_realShowUserList;
    long long _totalUnreadCount;
    NSError *_error;
}

@property (retain, nonatomic) NSError *error;
@property (weak, nonatomic) NSObject<AWEConcernSkylightContainerProtocol> *skylightContainer;
@property (retain, nonatomic) NSArray *highValueUserList;
@property (retain, nonatomic) NSArray *realShowUserList;
@property (nonatomic) long long totalUnreadCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreate;
+ (id)generateWithSkylightContainer:(id)arg0 dataController:(id)arg1;
+ (id)validUserListWithUserList:(id)arg0;
+ (void)saveUnreadNumWithUserList:(id)arg0;
+ (id)elementKey;

- (void)followListUnreadCacheDidChangeWithUserID:(id)arg0 deleteItemIDs:(id)arg1;
- (Class)emptyCellClass;
- (id)currentUnreadUserIDList;
- (BOOL)noMoreUserData;
- (void)loadMoreUnreadUserWithCompletion:(id /* block */)arg0;
- (id)userModelWithUserID:(id)arg0;
- (void)setTotalUnreadCount:(long long)arg0;
- (long long)totalUnreadCount;
- (id)skylightContainer;
- (BOOL)removeDataSourceWithUserID:(id)arg0;
- (void)refreshWithNeedHandleData:(BOOL)arg0 complete:(id /* block */)arg1;
- (id)headerConfig;
- (void)clearDataSource;
- (BOOL)shouldShowSkylight;
- (BOOL)shouldShowEmptyInSkylight;
- (struct CGSize { double x0; double x1; })itemSizeWithIndex:(long long)arg0 cellModel:(id)arg1;
- (void)willDisplayCellWithCellModel:(id)arg0;
- (void)didSelectItemAtIndexPath:(id)arg0 cellModel:(id)arg1;
- (BOOL)removeDataSourceWithUser:(id)arg0;
- (void)setSkylightContainer:(id)arg0;
- (void)setHighValueUserList:(id)arg0;
- (void)setRealShowUserList:(id)arg0;
- (id)realShowUserList;
- (id)cellModelsWithUserList:(id)arg0;
- (id)highValueUserList;
- (void)enterUnreadListPageWithUserModel:(id)arg0;
- (void)enterProfileWithUserModel:(id)arg0;
- (void)updateTotalUnreadCount;
- (id)originDataSource;
- (id)init;
- (id)dataSource;
- (void).cxx_destruct;
- (Class)cellClass;
- (void)setError:(id)arg0;
- (void)dealloc;
- (unsigned long long)cellType;
- (id)error;
- (id)requestError;

@end
