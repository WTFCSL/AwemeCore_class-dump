//
//     Generated by private class-dump
//

@class NSArray, NSMutableDictionary;

@interface BCMManager : NSObject {
    BOOL _isValid;
    NSMutableDictionary *_configs;
    NSMutableDictionary *_bcmReportFreq;
    NSArray *_bcmInChainWhitelist;
}

@property (class, readonly, nonatomic) BCMManager *shared;

@property (readonly, nonatomic) NSMutableDictionary *configs;
@property BOOL isValid;
@property (retain, nonatomic) NSMutableDictionary *bcmReportFreq;
@property (copy, nonatomic) NSArray *bcmInChainWhitelist;

+ (void)setupWithConfig:(id)arg0;
+ (id)getBridges;
+ (id)shared;
+ (BOOL)isValid;
+ (void)setup;
+ (void)invalidate;

- (void)setBcmUnitParams:(id)arg0 forKey:(id)arg1 responder:(id)arg2;
- (void)setBcmPageParams:(id)arg0 forKey:(id)arg1 responder:(id)arg2;
- (void)appendBcmPageParams:(id)arg0 forKey:(id)arg1 responder:(id)arg2;
- (void)appendBcmUnitParams:(id)arg0 forKey:(id)arg1 responder:(id)arg2;
- (id)getBcmFullParamsForKey:(id)arg0 responder:(id)arg1;
- (id)getBcmChainForKey:(id)arg0 WithBtmModel:(id)arg1 chainLength:(long long)arg2;
- (id)getBcmFullParamsForKey:(id)arg0 responder:(id)arg1 chainLength:(long long)arg2;
- (id)getBcmChainWithSourceBtmToken:(id)arg0;
- (id)getBcmChainWithSourceBtmToken:(id)arg0 chainLength:(long long)arg1;
- (id)getBcmChainWithSourceBtmToken:(id)arg0 biz:(id)arg1 chainLength:(long long)arg2;
- (void)mergeingNodesGraphjsonString:(id)arg0 forkey:(id)arg1;
- (id)checkTrackGraph:(id)arg0 withKey:(id)arg1 preItemBlock:(id /* block */)arg2;
- (id)btmListWithResponder:(id)arg0;
- (id)btmListWithSourceBtmToken:(id)arg0;
- (id)getEnumBstFormInfo:(id)arg0;
- (void)getBcmWhitelist;
- (id)pageShowParamsForPage:(id)arg0;
- (void)resetBcmHolderPage:(id)arg0;
- (void)reportBcmCall:(id)arg0 key:(id)arg1 params:(id)arg2 responder:(id)arg3;
- (void)object:(id)arg0 appendObject:(id)arg1;
- (id)getBcmChainWithBtmModel:(id)arg0 biz:(id)arg1 chainLength:(long long)arg2 isDomainStandard:(BOOL)arg3;
- (id)defaultBizArray;
- (void)replaceUnitForParams:(id)arg0 withAdditionalParams:(id)arg1;
- (id)updateCDAndUnitParamsFromOriginArray:(id)arg0 withBtmModel:(id)arg1;
- (id)bcmInChainWhitelist;
- (id)filterContentAndPageIdFromArray:(id)arg0;
- (id)getBcmChainWithSourceBtmToken:(id)arg0 biz:(id)arg1 chainLength:(long long)arg2 isDomainStandard:(BOOL)arg3;
- (id)bcmReportFreq;
- (id)btmListWithSourceBtmToken:(id)arg0 length:(long long)arg1;
- (void)addBcmParams:(id)arg0 toNodeStorage:(id)arg1;
- (void)setBcmInChainWhitelist:(id)arg0;
- (void)registerParamCheckHandler:(id /* block */)arg0;
- (void)connectFormatter:(id)arg0 withKey:(id)arg1;
- (id)pageRepresenterForResponder:(id)arg0;
- (id)getBcmFullParamsForKey:(id)arg0 pageRepresenter:(id)arg1;
- (void)associateBcmParams:(id)arg0 withNode:(id)arg1;
- (void)setBcmReportFreq:(id)arg0;
- (id)bcmHolderFromPage:(id)arg0 autoCreate:(BOOL)arg1;
- (id)bcmHolderFromNode:(id)arg0 autoCreate:(BOOL)arg1;
- (void)setIsValid:(BOOL)arg0;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)getConfigForKey:(id)arg0;
- (void)setConfig:(id)arg0 forKey:(id)arg1;
- (id)configs;

@end