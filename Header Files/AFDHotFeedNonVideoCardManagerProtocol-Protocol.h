//
//     Generated by private class-dump
//

@protocol AFDHotFeedNonVideoCardManagerProtocol <NSObject>

- (long long)currentFetchCount;
- (unsigned long long)cardTypeToInsertToList:(id)arg0 fetchCount:(long long)arg1;
- (void)fetchNonVideoCardIfNeeded;
- (id)insertNonVideoCardIfNeededToList:(id)arg0;
- (void)hotListWillRefresh;
- (void)hotListDidInitFetch;
- (void)hotListDidLoadMore;
- (BOOL)canInsertRecAndGreet;
- (unsigned long long)insertedCardTypeForFetchCount:(long long)arg0;
- (void)runFeedInitFetchCompletion:(id /* block */)arg0 timeout:(double)arg1;

@end