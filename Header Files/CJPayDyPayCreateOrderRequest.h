//
//     Generated by private class-dump
//

@interface CJPayDyPayCreateOrderRequest : CJPayBaseRequest

+ (id)apiPath;
+ (id)p_buildBizParamsWithParams:(id)arg0;
+ (id)buildRequestParamsWithMerchantId:(id)arg0 bizParams:(id)arg1;
+ (void)startWithMerchantId:(id)arg0 bizParams:(id)arg1 completion:(id /* block */)arg2;
+ (void)startWithMerchantId:(id)arg0 bizParams:(id)arg1 highPriority:(BOOL)arg2 completion:(id /* block */)arg3;

@end