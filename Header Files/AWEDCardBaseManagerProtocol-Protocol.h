//
//     Generated by private class-dump
//

@protocol AWEDCardBaseManagerProtocol <NSObject>

+ (void)registerBizManager:(id)arg0;
+ (void)setDCardsWithFetchType:(long long)arg0 dcardsFromHotFeed:(id)arg1 sourceType:(long long)arg2 containerType:(long long)arg3;
+ (id)requestHotFeedParamsForType:(long long)arg0;

- (id)fetchInsertedDCard;
- (void)tryInsertDCard:(id)arg0;
- (void)tryDeleteDCard:(id)arg0;
- (id)willRequestDCardWithParams:(id)arg0;
- (id)parseDCardModelWithRawData:(id)arg0 logID:(id)arg1;
- (void)replaceDCard:(id)arg0 withDCard:(id)arg1;
- (void)didInsertDCard:(id)arg0;
- (void)registerBizManager:(id)arg0 scene:(id)arg1;
- (void)registerDynamicCardProcesser:(id)arg0 awemeType:(long long)arg1;
- (id)bizManagerForScene:(id)arg0;
- (long long)fixedIndexWithTargetIndex:(long long)arg0 dCardModel:(id)arg1;
- (void)receiveDCard:(id)arg0;
- (id)getDcardModelIfSpecialTemplate:(id)arg0;
- (id)dcardsReceivedToBeInserted;

@end
