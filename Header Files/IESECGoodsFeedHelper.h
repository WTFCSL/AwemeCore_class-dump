//
//     Generated by private class-dump
//

@class NSString, IESECGoodsDetailResponse;

@interface IESECGoodsFeedHelper : NSObject

@property (class, nonatomic) BOOL goodsFeedSpeedup;
@property (class, nonatomic) BOOL goodsFeedLighting;
@property (class, retain, nonatomic) IESECGoodsDetailResponse *preLoadInnerData;
@property (class, copy, nonatomic) NSString *preLoadGroupID;
@property (class, nonatomic) BOOL preLoading;

+ (id)preLoadGroupID;
+ (void)preLoadInternalFeedWithRequest:(id)arg0;
+ (void)showGoodsInternalFeed:(id)arg0;
+ (id)exposedMessageForParameters:(id)arg0;
+ (BOOL)goodsFeedLighting;
+ (id)createGoodsDetailParameterByResponse:(id)arg0 request:(id)arg1 entranceInfoJSONString:(id)arg2 metaParams:(id)arg3;
+ (id)preLoadInnerData;
+ (BOOL)preLoading;
+ (void)setGoodsFeedSpeedup:(BOOL)arg0;
+ (void)setGoodsFeedLighting:(BOOL)arg0;
+ (BOOL)goodsFeedSpeedup;
+ (id)buildParamsForOneStepOrder:(id)arg0 request:(id)arg1;
+ (id)showParams:(id)arg0 from:(id)arg1 recommendType:(long long)arg2 metricsSnapshot:(id)arg3 willOpenHalfPage:(id /* block */)arg4 willClosePage:(id /* block */)arg5 closeHalfPageProgress:(id /* block */)arg6 feedSeesionId:(id)arg7 completion:(id /* block */)arg8;
+ (void)updateTargetViewControllerData:(id)arg0 largeCardResponse:(id)arg1 error:(id)arg2;
+ (void)updateTargetViewControllerData:(id)arg0 response:(id)arg1 requestStart:(double)arg2 metric:(id)arg3 error:(id)arg4;
+ (void)updateBannerViewControllerData:(id)arg0 response:(id)arg1 error:(id)arg2;
+ (void)trackInflowCoreParamsWithResponse:(id)arg0 request:(id)arg1 extraParams:(id)arg2;
+ (void)requestGoodInternalFeedRecommendListWithRequest:(id)arg0 metaParams:(id)arg1 completion:(id /* block */)arg2;
+ (void)requestSearchBannerWithParams:(id)arg0 completion:(id /* block */)arg1;
+ (void)setPreLoadGroupID:(id)arg0;
+ (void)setPreLoading:(BOOL)arg0;
+ (void)setPreLoadInnerData:(id)arg0;
+ (id)recommendTypeEventDescriptionWithType:(unsigned long long)arg0;
+ (id)indemnificationMessageWithParams:(id)arg0;
+ (id)activityDetailForTrackingWithParams:(id)arg0;
+ (void)showGoodsFeedWithParams:(id)arg0 source:(id)arg1 completion:(id /* block */)arg2;

@end