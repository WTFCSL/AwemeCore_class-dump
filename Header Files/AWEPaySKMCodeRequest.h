//
//     Generated by private class-dump
//

@interface AWEPaySKMCodeRequest : CJPayBaseRequest

+ (void)startCheckCodeValid:(id)arg0 completion:(id /* block */)arg1;
+ (void)startCreateCodeRequest:(id)arg0 codeType:(unsigned long long)arg1 completion:(id /* block */)arg2;
+ (id)buildWithParams:(id)arg0 codeType:(unsigned long long)arg1;
+ (id)buildUrl:(id)arg0;
+ (id)getCodeTypeStr:(unsigned long long)arg0;
+ (void)startRefreshCode:(id)arg0 completion:(id /* block */)arg1;

@end
