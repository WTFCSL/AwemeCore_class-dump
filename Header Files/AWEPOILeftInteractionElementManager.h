//
//     Generated by private class-dump
//

@class NSString, NSDate;

@interface AWEPOILeftInteractionElementManager : NSObject <AWEPOIFeedElementManagerProtocol> {
    long long _todayCollectShowedCount;
    long long _totalCollectShowedCount;
    NSDate *_noMoreShowStartDate;
    NSString *_showedItemList;
}

@property (nonatomic) long long todayCollectShowedCount;
@property (nonatomic) long long totalCollectShowedCount;
@property (copy, nonatomic) NSDate *noMoreShowStartDate;
@property (copy, nonatomic) NSString *showedItemList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)setTotalCollectShowedCount:(long long)arg0;
- (void)setTodayCollectShowedCount:(long long)arg0;
- (void)setNoMoreShowStartDate:(id)arg0;
- (void)setShowedItemList:(id)arg0;
- (long long)todayCollectShowedCount;
- (id)p_hasShowPOICollectElementCountKey;
- (long long)totalCollectShowedCount;
- (id)showedItemList;
- (id)noMoreShowStartDate;
- (void)clearTotalCountOfShowPOICollectElement;
- (void)increaseCountOfShowPOICollectElementWithItemId:(id)arg0;
- (long long)todayCountOfShowPOICollectElement;
- (long long)totalCountOfShowPOICollectElement;
- (BOOL)hasContainInNoMoreShowPOICollectElementWithMaxDay:(long long)arg0;
- (void)saveCurrentDateNoMoreShowCollectElement;
- (BOOL)hasContainInTodayShowedListWithItemId:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
