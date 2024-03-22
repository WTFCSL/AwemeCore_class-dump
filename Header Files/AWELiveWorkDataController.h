//
//     Generated by private class-dump
//

@class NSString, LiveTabResponse_Extra;

@interface AWELiveWorkDataController : AWEListDataController {
    BOOL _needReloadData;
    LiveTabResponse_Extra *_extraModel;
    NSString *_userID;
    NSString *_secUserID;
    long long _pageSize;
    long long _cursor;
}

@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUserID;
@property (nonatomic) long long pageSize;
@property (nonatomic) long long cursor;
@property (readonly, nonatomic) BOOL needReloadData;
@property (retain, nonatomic) LiveTabResponse_Extra *extraModel;

- (id)secUserID;
- (void)setSecUserID:(id)arg0;
- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (id)extraModel;
- (void)initFetchWithCompletion:(id /* block */)arg0;
- (void)setExtraModel:(id)arg0;
- (void)loadMore:(id /* block */)arg0;
- (BOOL)needReloadData;
- (id)initWithUserID:(id)arg0 secUserID:(id)arg1;
- (id)userID;
- (long long)cursor;
- (void).cxx_destruct;
- (void)setUserID:(id)arg0;
- (void)setCursor:(long long)arg0;
- (void)refreshWithCompletion:(id /* block */)arg0;
- (void)refresh:(id /* block */)arg0;
- (long long)pageSize;
- (void)setPageSize:(long long)arg0;

@end
