//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface HMDPerformanceAggregate : NSObject {
    NSMutableDictionary *_tracksDictionary;
    NSMutableDictionary *_indexKeys;
}

@property (retain, nonatomic) NSMutableDictionary *indexKeys;
@property (retain, nonatomic) NSMutableDictionary *indexKeys;
@property (retain, nonatomic) NSMutableDictionary *tracksDictionary;

- (id)findMaxValueAggregateWithSessionID:(id)arg0 aggregateKeys:(id)arg1 needAggregateDictionary:(id)arg2 normalDictionary:(id)arg3 listDictionary:(id)arg4 currentecordIndex:(long long)arg5 findMaxValueDictionary:(id)arg6;
- (id)getAggregateRecords;
- (id)aggregateWithSessionID:(id)arg0 aggregateKeys:(id)arg1 needAggregateDictionary:(id)arg2 normalDictionary:(id)arg3 listDictionary:(id)arg4 currentecordIndex:(long long)arg5;
- (void)aggregateExtraDictWithNeedAggregateDict:(id)arg0 targetCacheDict:(id)arg1 aggregateKey:(id)arg2 depth:(unsigned long long)arg3;
- (void)setTracksDictionary:(id)arg0;
- (id)tracksDictionary;
- (id)indexKeys;
- (id)indexKeys;
- (void)setIndexKeys:(id)arg0;
- (void)setIndexKeys:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end