//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSDictionary, IESECListKitBundleConfig, NSMutableArray;
@protocol IESECListKitDynamicRequestDelegate;

@interface IESECListKitDynamicRequest : NSObject <IESECListKitDynamicRequestProtocol> {
    NSDictionary *_globalProps;
    IESECListKitBundleConfig *_bundleConfig;
    id<IESECListKitDynamicRequestDelegate> _requestDelegate;
    NSString *_bundleConfigURL;
    NSMutableDictionary *_cachedResponse;
    NSMutableDictionary *_allParamsFromClient;
    NSMutableDictionary *_dynamicParams;
    NSMutableArray *_responseNeedCallback;
}

@property (copy, nonatomic) NSString *bundleConfigURL;
@property (retain, nonatomic) IESECListKitBundleConfig *bundleConfig;
@property (retain, nonatomic) NSMutableDictionary *cachedResponse;
@property (retain, nonatomic) NSMutableDictionary *allParamsFromClient;
@property (retain, nonatomic) NSMutableDictionary *dynamicParams;
@property (retain, nonatomic) NSMutableArray *responseNeedCallback;
@property (copy, nonatomic) NSDictionary *globalProps;
@property (weak, nonatomic) id<IESECListKitDynamicRequestDelegate> requestDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableNetPerfMetrics;

- (void)setGlobalProps:(id)arg0;
- (id)globalProps;
- (void)setRequestDelegate:(id)arg0;
- (id)requestDelegate;
- (id)getCachedValueWithApiKey:(id)arg0 majorKey:(id)arg1 subKey:(id)arg2 subSubKey:(id)arg3;
- (void)appendClientParams:(id)arg0;
- (void)setDynamicParams:(id)arg0;
- (void)appendDynamicParams:(id)arg0;
- (id)bundleConfig;
- (void)setBundleConfig:(id)arg0;
- (void)loadBundleWithComplete:(id /* block */)arg0;
- (void)fetchWithAPIKeys:(id)arg0 mainAPIFirst:(BOOL)arg1 complete:(id /* block */)arg2;
- (id)resourceFromString:(id)arg0;
- (void)fetchWithAPIKeys:(id)arg0 complete:(id /* block */)arg1;
- (id)initWithBundleConfigURL:(id)arg0;
- (void)fetchWithAPIKey:(id)arg0 header:(id)arg1 params:(id)arg2 complete:(id /* block */)arg3;
- (BOOL)bundleIsValid:(id)arg0;
- (id)allParamsFromClient;
- (void)callbackBundleFetchFailWithErrorCode:(unsigned long long)arg0 errMsg:(id)arg1 complete:(id /* block */)arg2;
- (void)callbackDynamicAPIFailWithErrorCode:(unsigned long long)arg0 errMsg:(id)arg1 complete:(id /* block */)arg2;
- (id)responseNeedCallback;
- (void)callbackAllResponse:(id /* block */)arg0;
- (void)sendRequest:(id)arg0 params:(id)arg1 header:(id)arg2 complete:(id /* block */)arg3;
- (id)getStorageJsonStringFromRequest:(id)arg0;
- (void)trackTTNetResponse:(id)arg0;
- (id)bundleConfigURL;
- (void)setBundleConfigURL:(id)arg0;
- (void)setAllParamsFromClient:(id)arg0;
- (void)setResponseNeedCallback:(id)arg0;
- (id)cachedResponse;
- (void).cxx_destruct;
- (void)setCachedResponse:(id)arg0;
- (id)dynamicParams;

@end
