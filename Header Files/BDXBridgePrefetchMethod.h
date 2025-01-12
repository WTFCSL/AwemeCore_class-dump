//
//     Generated by private class-dump
//

@class BDXContext;

@interface BDXBridgePrefetchMethod : BDXBridgeMethod {
    BDXContext *_bdxContext;
}

@property (weak, nonatomic) BDXContext *bdxContext;

- (void)callWithParamModel:(id)arg0 completionHandler:(id /* block */)arg1;
- (Class)paramModelClass;
- (Class)resultModelClass;
- (id)bdxContext;
- (void)setBdxContext:(id)arg0;
- (id)prefetchUrlWithSchema:(id)arg0;
- (id)findPageUrl;
- (void)prefetchMonitor:(id)arg0 isSuccess:(BOOL)arg1 cacheCode:(id)arg2 errorMsg:(id)arg3 duration:(double)arg4 api:(id)arg5;
- (id)checkParamsDict:(id)arg0;
- (id)checkHeadersDict:(id)arg0;
- (BOOL)shouldForceNetwork;
- (id)findBusinessString;
- (void).cxx_destruct;
- (long long)authType;
- (unsigned long long)engineTypes;
- (id)methodName;

@end
