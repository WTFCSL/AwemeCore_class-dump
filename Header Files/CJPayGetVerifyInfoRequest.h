//
//     Generated by private class-dump
//

@interface CJPayGetVerifyInfoRequest : CJPayBaseRequest

+ (id)apiPath;
+ (id)p_buildRequestParamsWithAppId:(id)arg0 merchantId:(id)arg1 bizParams:(id)arg2;
+ (id)p_buildBizParamsWithParams:(id)arg0;
+ (void)startVerifyInfoRequestWithAppid:(id)arg0 merchantId:(id)arg1 bizContentParams:(id)arg2 completionBlock:(id /* block */)arg3;

@end
