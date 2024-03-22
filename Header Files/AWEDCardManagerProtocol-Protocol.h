//
//     Generated by private class-dump
//

@class NSDictionary, NSMutableArray;

@protocol AWEDCardManagerProtocol <NSObject>

@property (readonly, nonatomic) NSMutableArray *dcardsInHotFeed;
@property (readonly, copy, nonatomic) NSDictionary *exposedAwemeCards;

- (void)removeAllDCardsInHotFeed;
- (void)addDCardsInHotFeedFromArray:(id)arg0;
- (BOOL)acceptDCard:(id)arg0;
- (void)addDCardInHotFeed:(id)arg0;
- (void)insertDCard:(id)arg0 fallbackEnabled:(BOOL)arg1 insertCompletion:(id /* block */)arg2 interception:(id /* block */)arg3;
- (id)dcardsInHotFeed;
- (int)dcardsAcceptionBitsForContainerType:(long long)arg0;
- (void)cleanCardForScene:(id)arg0;
- (id)createDCardWithAwemeModel:(id)arg0 loadCompletion:(id /* block */)arg1;
- (BOOL)resourcesExistInChannel:(id)arg0;
- (void)registerBSyncGeckoActionMessageWithCallback:(id /* block */)arg0;
- (id)removeNullFromDict:(id)arg0;
- (void)preloadLynxWithAwemeModel:(id)arg0 completion:(id /* block */)arg1;
- (id)cardCachedForScene:(id)arg0;
- (BOOL)dcardCompensateDisplayEventEnable;
- (int)delayCallDidDisplay;
- (void)unregisterScene:(id)arg0;
- (BOOL)dcardUpdateEnable;
- (void)registerScene:(id)arg0 withContext:(id)arg1;
- (void)updateFreqRulesWithModel:(id)arg0;
- (void)loadResourcesFromChannel:(id)arg0 enableRetry:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)statsForScene:(id)arg0;
- (id)contextOfScene:(id)arg0;
- (void)testFreqControlWithAwemeModel:(id)arg0 testResult:(id *)arg1;
- (void)updateStats:(id)arg0 containerType:(long long)arg1;
- (id)exposedAwemeCards;
- (void)updateLocalStats:(id)arg0 forScene:(id)arg1;
- (void)recordMultiPOICardShowWithModel:(id)arg0;

@end