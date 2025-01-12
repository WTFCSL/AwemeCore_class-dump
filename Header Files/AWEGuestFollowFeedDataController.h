//
//     Generated by private class-dump
//

@class NSString;
@protocol AWEHttpTask;

@interface AWEGuestFollowFeedDataController : AWEListDataController {
    id<AWEHttpTask> _lastRequestTask;
    NSString *_pageToken;
}

@property (retain, nonatomic) id<AWEHttpTask> lastRequestTask;
@property (copy, nonatomic) NSString *pageToken;

- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (void)initFetchWithCompletion:(id /* block */)arg0;
- (id)pageToken;
- (void)setPageToken:(id)arg0;
- (void)fetchWithPullType:(long long)arg0 completion:(id /* block */)arg1;
- (id)lastRequestTask;
- (void)setLastRequestTask:(id)arg0;
- (id)requestFollowFeedWithParams:(id)arg0 completionBlock:(id /* block */)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)refreshWithCompletion:(id /* block */)arg0;
- (BOOL)cancelCurrentRequest;

@end
