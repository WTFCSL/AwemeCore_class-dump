//
//     Generated by private class-dump
//

@class NSString;

@interface BDXBridgeRequestMethod : BDXBridgeMethod <BDXBridgeMethodCallProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)allowBackgroundThreadCall;
+ (id)metaInfo;

- (void)callWithParamModel:(id)arg0 completionHandler:(id /* block */)arg1;
- (Class)paramModelClass;
- (Class)resultModelClass;
- (void)_callWithParamModel:(id)arg0 completionHandler:(id /* block */)arg1;
- (BOOL)isSupportedMethod:(id)arg0;
- (id)networkService;
- (long long)authType;
- (void)setNetworkService:(id)arg0;
- (id)methodName;

@end
