//
//     Generated by private class-dump
//

@class NSString;

@interface AWEFCoinBridgeOpenCoinRewardAdAgainMethod : DHBaseBridgeMethod {
    id /* block */ _completion;
    NSString *_reqFrom;
    NSString *_token;
}

@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) NSString *reqFrom;
@property (copy, nonatomic) NSString *token;

- (void)callWithParamModel:(id)arg0 completionHandler:(id /* block */)arg1;
- (Class)paramModelClass;
- (Class)resultModelClass;
- (void)setReqFrom:(id)arg0;
- (id)reqFrom;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setCompletion:(id /* block */)arg0;
- (long long)authType;
- (void)setToken:(id)arg0;
- (id)token;
- (id)methodName;

@end
