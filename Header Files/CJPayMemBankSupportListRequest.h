//
//     Generated by private class-dump
//

@interface CJPayMemBankSupportListRequest : CJPayBaseRequest

+ (id)apiPath;
+ (void)startWithAppId:(id)arg0 merchantId:(id)arg1 specialMerchantId:(id)arg2 signOrderNo:(id)arg3 exts:(id)arg4 completion:(id /* block */)arg5;
+ (id)p_buildRequestParams:(id)arg0 merchantId:(id)arg1 specialMerchantId:(id)arg2 signOrderNo:(id)arg3 exts:(id)arg4;
+ (id)p_buildRequestParams:(id)arg0 merchantId:(id)arg1 specialMerchantId:(id)arg2 signOrderNo:(id)arg3 queryType:(id)arg4 exts:(id)arg5;
+ (void)startWithAppId:(id)arg0 merchantId:(id)arg1 specialMerchantId:(id)arg2 signOrderNo:(id)arg3 completion:(id /* block */)arg4;
+ (void)startWithAppId:(id)arg0 merchantId:(id)arg1 specialMerchantId:(id)arg2 signOrderNo:(id)arg3 queryType:(id)arg4 completion:(id /* block */)arg5;

@end
