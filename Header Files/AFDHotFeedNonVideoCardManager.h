//
//     Generated by private class-dump
//

@class NSString;

@interface AFDHotFeedNonVideoCardManager : NSObject <AFDHotFeedNonVideoCardManagerProtocol> {
    long long _currentFetchCount;
    unsigned long long _currentResult;
    long long _fetchCountOfCurrentResult;
}

@property (nonatomic) long long currentFetchCount;
@property (nonatomic) unsigned long long currentResult;
@property (nonatomic) long long fetchCountOfCurrentResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)setCurrentFetchCount:(long long)arg0;
- (long long)currentFetchCount;
- (unsigned long long)cardTypeToInsertToList:(id)arg0 fetchCount:(long long)arg1;
- (void)fetchNonVideoCardIfNeeded;
- (id)insertNonVideoCardIfNeededToList:(id)arg0;
- (void)hotListWillRefresh;
- (void)hotListDidInitFetch;
- (void)hotListDidLoadMore;
- (BOOL)p_delayFetchRecommend;
- (long long)fetchCountOfCurrentResult;
- (void)setFetchCountOfCurrentResult:(long long)arg0;
- (BOOL)stickerCardPriorityHigh;
- (BOOL)shouldInsertGreetWithAwemeList:(id)arg0 fetchCount:(long long)arg1;
- (unsigned long long)recommendOrGreetCardTypeForFetchCount:(long long)arg0;
- (BOOL)p_greetBigCardMigrate;
- (void)didExemptForShowStrategy;
- (BOOL)canInsertRecAndGreet;
- (BOOL)judgeCanBeExemptForShowStrategy;
- (double)getCompeteRatio;
- (unsigned long long)insertedCardTypeForFetchCount:(long long)arg0;
- (void)runFeedInitFetchCompletion:(id /* block */)arg0 timeout:(double)arg1;
- (BOOL)isContactCardSuperiorToStickerCard;
- (unsigned long long)currentResult;
- (void)setCurrentResult:(unsigned long long)arg0;

@end