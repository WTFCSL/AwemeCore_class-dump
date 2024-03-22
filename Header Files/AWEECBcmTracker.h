//
//     Generated by private class-dump
//

@class NSArray, NSDictionary, AWEECBcmNetworkChecker, NSObject;
@protocol OS_dispatch_queue;

@interface AWEECBcmTracker : NSObject {
    NSArray *_trackerList;
    NSObject<OS_dispatch_queue> *_serialQueue;
    AWEECBcmNetworkChecker *_checker;
    NSDictionary *_bcmConfigDict;
}

@property (retain) AWEECBcmNetworkChecker *checker;
@property (copy, nonatomic) NSDictionary *bcmConfigDict;
@property (copy, nonatomic) NSArray *trackerList;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;

+ (id)shared;

- (id)gurdAccessKey;
- (id)appendEventParams:(id)arg0 responder:(id)arg1;
- (id)appendEntranceInfoWithString:(id)arg0 responder:(id)arg1 scene:(id)arg2;
- (id)appendEntranceInfoWithDictionary:(id)arg0 responder:(id)arg1 scene:(id)arg2;
- (id)appendEntranceInfoWhenCartAddWithString:(id)arg0 btmModel:(id)arg1;
- (id)appendEntranceInfoWhenCartAddWithDictionary:(id)arg0 btmModel:(id)arg1;
- (id)appendEntranceInfoWhenCartAddWithString:(id)arg0 sourceBtmToken:(id)arg1;
- (id)appendEntranceInfoWhenCartAddWithDictionary:(id)arg0 sourceBtmToken:(id)arg1;
- (id)appendEntranceInfoWhenBuyNowWithString:(id)arg0 sourceBtmToken:(id)arg1;
- (id)appendEntranceInfoWhenBuyNowWithDictionary:(id)arg0 sourceBtmToken:(id)arg1;
- (id)extraParamsForEvent:(id)arg0 params:(id)arg1 responder:(id)arg2;
- (void)setChecker:(id)arg0;
- (void)setTrackerList:(id)arg0;
- (void)getConfigFromGecko;
- (id)updateBtmList:(id)arg0 withBtm:(id)arg1 pageId:(id)arg2;
- (id)trackerList;
- (void)updateBcmInfo:(id)arg0 entranceInfoDict:(id)arg1;
- (id)getEntranceModel:(id)arg0 btmTrackerModel:(id)arg1 scene:(id)arg2;
- (id)getBcmChainWhenBuyNowWithSourceBtmToken:(id)arg0;
- (id)getBcmChainForOrderWithModel:(id)arg0;
- (id)getBcmChainForOrderWithSourceBtmToken:(id)arg0;
- (void)setBcmConfigDict:(id)arg0;
- (id)getBcmInfoForGlobalProps:(id)arg0 query:(id)arg1 responder:(id)arg2;
- (id)getBcmChainForGlobalPropsScheme:(id)arg0 query:(id)arg1 responder:(id)arg2;
- (id)getBcmChainWhenBuyNowWithResponder:(id)arg0;
- (id)getBcmChainWhenCartAddWithBtmModel:(id)arg0;
- (id)getBcmChainWhenCartAddWithSourceBtmToken:(id)arg0;
- (id)getBcmChainWhenBuyNowWithBtmModel:(id)arg0;
- (id)bcmConfigDict;
- (void).cxx_destruct;
- (void)setSerialQueue:(id)arg0;
- (id)serialQueue;
- (id)checker;

@end