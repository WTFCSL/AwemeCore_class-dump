//
//     Generated by private class-dump
//

@class NSNumber, NSString;
@protocol AWEHttpTask;

@interface AWEShopSeekDataManager : AWEListDataController {
    NSNumber *_cursor;
    NSString *_POIId;
    NSString *_secUserID;
    NSString *_userID;
    id<AWEHttpTask> _currentFilteringTask;
}

@property (retain, nonatomic) NSNumber *cursor;
@property (copy, nonatomic) NSString *POIId;
@property (copy, nonatomic) NSString *secUserID;
@property (copy, nonatomic) NSString *userID;
@property (retain, nonatomic) id<AWEHttpTask> currentFilteringTask;

- (id)secUserID;
- (void)setSecUserID:(id)arg0;
- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (void)initFetchWithCompletion:(id /* block */)arg0;
- (id)POIId;
- (void)removeWithItemID:(id)arg0;
- (void)setPOIId:(id)arg0;
- (void)constructDataSourceWithResponseModel:(id)arg0 error:(id)arg1 isLoadMore:(BOOL)arg2;
- (id)p_fetchIsLoadMore:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)setCurrentFilteringTask:(id)arg0;
- (id)paramsIsLoadMore:(BOOL)arg0;
- (id)initWithPOIId:(id)arg0 secUserID:(id)arg1 userID:(id)arg2;
- (void)refreshPOIId:(id)arg0 secUserID:(id)arg1 userID:(id)arg2;
- (id)currentFilteringTask;
- (id)userID;
- (void)removeAll;
- (id)cursor;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setUserID:(id)arg0;
- (void)setCursor:(id)arg0;
- (void)refreshWithCompletion:(id /* block */)arg0;

@end