//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWEDPlayletUserProfileTabDataController : AWEListDataController {
    NSDictionary *_requestParams;
    long long _count;
    NSString *_userID;
}

@property (nonatomic) long long count;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSDictionary *requestParams;

- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (void)initFetchWithCompletion:(id /* block */)arg0;
- (id)initWithUserID:(id)arg0;
- (BOOL)canLoadMore;
- (void)reloadWithPullType:(long long)arg0 Completion:(id /* block */)arg1;
- (id)userID;
- (void)setCount:(long long)arg0;
- (void).cxx_destruct;
- (void)setUserID:(id)arg0;
- (long long)count;
- (void)refreshWithCompletion:(id /* block */)arg0;
- (id)requestParams;
- (void)setRequestParams:(id)arg0;

@end