//
//     Generated by private class-dump
//

@interface CJPayCardSignRequest : CJPayBaseRequest

+ (id)apiPath;
+ (id)p_buildRequestParamsWithAppId:(id)arg0 merchantId:(id)arg1 bankCardId:(id)arg2 processInfo:(id)arg3;
+ (id)p_buildBizContentParamsWithBankCardId:(id)arg0 processInfo:(id)arg1;
+ (void)startWithAppId:(id)arg0 merchantId:(id)arg1 bankCardId:(id)arg2 processInfo:(id)arg3 completion:(id /* block */)arg4;

@end
