//
//     Generated by private class-dump
//

@interface IESECTrackingModel : NSObject

+ (id)appendEventParams:(id)arg0 responder:(id)arg1;
+ (id)appendEntranceInfoWithString:(id)arg0 responder:(id)arg1;
+ (id)appendEntranceInfoWithDictionary:(id)arg0 responder:(id)arg1;
+ (id)appendEntranceInfoWithString:(id)arg0 responder:(id)arg1 scene:(id)arg2;
+ (id)appendEntranceInfoWithDictionary:(id)arg0 responder:(id)arg1 scene:(id)arg2;
+ (id)appendEntranceInfoWhenCartAddWithString:(id)arg0 btmModel:(id)arg1;
+ (id)appendEntranceInfoWhenCartAddWithDictionary:(id)arg0 btmModel:(id)arg1;
+ (id)appendEntranceInfoWhenCartAddWithString:(id)arg0 sourceBtmToken:(id)arg1;
+ (id)appendEntranceInfoWhenCartAddWithDictionary:(id)arg0 sourceBtmToken:(id)arg1;
+ (id)appendEntranceInfoWhenBuyNowWithString:(id)arg0 sourceBtmToken:(id)arg1;
+ (id)appendEntranceInfoWhenBuyNowWithDictionary:(id)arg0 sourceBtmToken:(id)arg1;
+ (void)forwardToCustomPage:(id)arg0;
+ (void)returnFromCustomPage:(id)arg0;
+ (id)fillEventParamOrigin:(id)arg0 eventName:(id)arg1;
+ (id)createBtmChainWithBtmInfo:(id)arg0 clickedView:(id)arg1 enterNewPage:(BOOL)arg2 addBtmChain:(BOOL)arg3 chainLength:(long long)arg4 targetPages:(id)arg5;
+ (id)createBtmChainWithBtmInfo:(id)arg0 clickedView:(id)arg1 enterNewPage:(BOOL)arg2 addBtmChain:(BOOL)arg3 chainLength:(long long)arg4 targetPages:(id)arg5 description:(id)arg6;
+ (void)registerPageShowWillEndHandler:(id /* block */)arg0 forPage:(id)arg1;
+ (void)registerPageDidAppearHandler:(id /* block */)arg0 forPage:(id)arg1;
+ (id)getBTMPageInfo:(id)arg0;
+ (id)btmIdOfCurrentJumpNode;
+ (void)reenqueueJumpNodeWithBtmId:(id)arg0;
+ (void)dequeueJumpNodeWithBtmId:(id)arg0;
+ (id)getBcmFullParamsForKey:(id)arg0 responder:(id)arg1;
+ (id)getBcmFullParamsForKey:(id)arg0 responder:(id)arg1 chainLength:(long long)arg2;
+ (void)bindView:(id)arg0 withContext:(id)arg1;
+ (void)sendEventType:(id)arg0 withView:(id)arg1 context:(id)arg2;
+ (void)forbiddenBubbleForView:(id)arg0;
+ (BOOL)isOrignalReportEnableWithPageName:(id)arg0;
+ (BOOL)isBstBindEnableWithPageName:(id)arg0;
+ (id)bstTag;
+ (void)registerExposureHandler:(id /* block */)arg0 forView:(id)arg1;
+ (void)registerClickHandler:(id /* block */)arg0 forView:(id)arg1;
+ (id)bstInjectLynxWithUniqueKey:(id)arg0;
+ (void)clearViewStatusCacheOfResponder:(id)arg0;
+ (void)addBstABConfig:(id)arg0;
+ (void)autoShowTrackWithContext:(id)arg0;
+ (void)clickTrackWithContext:(id)arg0;
+ (id)getBcmChainWhenBuyNowWithSourceBtmToken:(id)arg0;
+ (id)getBcmChainWhenBuyNowWithResponder:(id)arg0;
+ (id)getBcmChainWhenCartAddWithBtmModel:(id)arg0;
+ (id)getBcmChainWhenCartAddWithSourceBtmToken:(id)arg0;
+ (void)setCurrentPage:(id)arg0 BtmAutoManaged:(BOOL)arg1;
+ (void)setCurrentPage:(id)arg0 BtmId:(id)arg1;
+ (void)setBcmUnitParams:(id)arg0 forBizKey:(id)arg1 responder:(id)arg2;
+ (id)createBtmChainWithBtmInfo:(id)arg0 clickedView:(id)arg1 enterNewPage:(BOOL)arg2;
+ (void)setBcmPageParams:(id)arg0 forBizKey:(id)arg1 responder:(id)arg2;
+ (void)appendBcmPageParams:(id)arg0 forBizKey:(id)arg1 responder:(id)arg2;
+ (void)appendBcmUnitParams:(id)arg0 forBizKey:(id)arg1 responder:(id)arg2;
+ (id)getEntranceInfoForGlobalProps:(id)arg0 query:(id)arg1 responder:(id)arg2;
+ (id)btmList;
+ (Class)serviceImpl;
+ (void)willJumpToNextPageBtmInfo:(id)arg0 clickedView:(id)arg1;
+ (id)createBTMWithContext:(id)arg0;
+ (void)sendEventType:(id)arg0 withView:(id)arg1 BtmId:(id)arg2 trackModel:(id)arg3;
+ (id)createBtmWithBtmInfo:(id)arg0 index:(id)arg1 clickedView:(id)arg2;
+ (id)createBtmWithBtmInfo:(id)arg0 clickedView:(id)arg1;
+ (void)appendAllBcmUnitParams:(id)arg0 responder:(id)arg1;
+ (void)willJumpToNextPageBtmInfo:(id)arg0 index:(id)arg1 clickedView:(id)arg2;
+ (void)sendEventType:(id)arg0 withView:(id)arg1 BtmId:(id)arg2 trackMap:(id)arg3;

@end
