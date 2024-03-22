//
//     Generated by private class-dump
//

@class NSDictionary, CSJAPIThrottling;

@interface CSJAPIClient : NSObject {
    CSJAPIThrottling *_throttling;
    id /* block */ _recieveBidMaterialBlock;
    NSDictionary *_extraDict;
}

@property (copy, nonatomic) id /* block */ recieveBidMaterialBlock;
@property (copy, nonatomic) NSDictionary *extraDict;
@property (retain, nonatomic) CSJAPIThrottling *throttling;

+ (id)sharedInstance;

- (id)dictionaryToJson:(id)arg0;
- (void)setExtraDict:(id)arg0;
- (id)extraDict;
- (void)batchWithParams:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)splashAdLogWithAdSlot:(id)arg0 splashAdLogType:(long long)arg1 otherParameter:(id)arg2;
- (void)nativeNoAdLogWithAdSlot:(id)arg0 materialMeta:(id)arg1 otherParameter:(id)arg2;
- (void)fetchNativeAdsWithAdSlot:(id)arg0 reqType:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchNativeAdsJsonWithConfiguration:(id)arg0 completionHandler:(id /* block */)arg1;
- (BOOL)pbu_checkAdNetworkValidWithSlot:(id)arg0 error:(id *)arg1;
- (void)_reportAppEnvIfNeeded;
- (void)printRequestLog:(id)arg0;
- (void)_reportLoadADMaterialDurationWithSlot:(id)arg0;
- (void)recordResponseMaterial:(id)arg0;
- (void)nativeNoAdLogWithAdSlot:(id)arg0 responseModel:(id)arg1 otherParameter:(id)arg2;
- (void)fetchSplashAdsWithAdSlot:(id)arg0 requestDictionary:(id)arg1 reqType:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)new_fetchSplashAdsWithAdSlot:(id)arg0 requestDictionary:(id)arg1 reqType:(long long)arg2 completionHandler:(id /* block */)arg3;
- (id)preFetchAdmsWithRequest:(id)arg0 error:(id *)arg1;
- (id)asyncPackageAdmsWithRequest:(id)arg0 error:(id *)arg1;
- (void)fetchPreFetchJsonWithConfiguration:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)fetchAsyncPackageJsonWithConfiguration:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)applogWithParams:(id)arg0 isV3Data:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (void)_applogWithParams:(id)arg0 isV3Data:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (id)___v3DataWithParams:(id)arg0;
- (id)___v1DataWithParams:(id)arg0;
- (void)setRecieveBidMaterialBlock:(id /* block */)arg0;
- (id /* block */)recieveBidMaterialBlock;
- (id)_adExtraADLoadDataForSlot:(id)arg0;
- (void)reportDownloadImageAdSlot:(id)arg0 materialMeta:(id)arg1 startTime:(double)arg2 imageUrl:(id)arg3 image:(id)arg4 imageData:(id)arg5;
- (void)reportCreativeErrorWithSlot:(id)arg0 materialMeta:(id)arg1 imageUrl:(id)arg2 imageData:(id)arg3 error:(id)arg4;
- (void)nativeExpressRetry107WithAdSlot:(id)arg0 materialMeta:(id)arg1 type:(id)arg2;
- (void)nativeExpressFetch103WithAdSlot:(id)arg0 materialMeta:(id)arg1 type:(id)arg2;
- (void)nativeExpress103TemplateDataDeleteError;
- (void)reportCreativeMissingErrorWithSlot:(id)arg0 materialMeta:(id)arg1 errorType:(long long)arg2;
- (void)fetchSlotWithCodeGroupId:(long long)arg0 completionHandler:(id /* block */)arg1;
- (void)fetchSplashAdsWithAdSlot:(id)arg0 requestDictionary:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchNativeAdsJSONWithAdSlot:(id)arg0 sourceTemaiProductIds:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)preFetchBiddingAdsWithAdSlot:(id)arg0 requestID:(id)arg1 requestDictionary:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)preCacheBiddingAdsWithAdSlot:(id)arg0 requestDictionary:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchAsyncPackageMaterialsWithAdSlot:(id)arg0 requestDictionary:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)checkSplashMaterialMetaValid:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)rewardedVideoAdRewardVerify:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)checkRewardedLiveStateWithMeta:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)nativeExpressAdLogWithAdSlot:(id)arg0 materialMeta:(id)arg1 error:(id)arg2;
- (void)iconLogWithSlot:(id)arg0 material:(id)arg1 error:(id)arg2;
- (void)rewardVideoWebDefaultViewShowWithSlot:(id)arg0 material:(id)arg1 error:(id)arg2;
- (void)applogWithParams:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)playableWebViewReloadLogWithEventName:(id)arg0 slot:(id)arg1 material:(id)arg2 error:(id)arg3;
- (void)reportDownloadImageDurationWithSlot:(id)arg0;
- (void)reportLoadTemplateDurationWithSlot:(id)arg0;
- (void)reportRenderDurationWithSlot:(id)arg0;
- (void)reportTotalLoadDurationWithSlot:(id)arg0;
- (void)reportAppInfoWith:(id)arg0;
- (void)fetchWCMiniappInfoWithMaterialMeta:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)updateExtraDict:(id)arg0;
- (void)fetchNativeAdsWithAdSlot:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)checkMaterialMetaMissingparameter:(id)arg0 withMaterialMeta:(id)arg1;
- (void)reportADLoadDurationWithSlot:(id)arg0;
- (void)reportBiddingReceiveUnionMetarialTimeWithSlot:(id)arg0;
- (void)reportBiddingADLoadDurationWithSlot:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)getExtraData:(id)arg0;
- (id)_deviceInfo;
- (id)throttling;
- (void)setThrottling:(id)arg0;

@end