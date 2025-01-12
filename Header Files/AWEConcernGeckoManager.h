//
//     Generated by private class-dump
//

@class NSString;

@interface AWEConcernGeckoManager : NSObject <AWEConcernGeckoManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)loadGeckoImageWithChannel:(id)arg0 fileName:(id)arg1 completion:(id /* block */)arg2;
+ (id)urlWithChannel:(id)arg0 bundleName:(id)arg1;
+ (id)taskConfigWithChannel:(id)arg0 bundleName:(id)arg1;
+ (id)concernGeckoSetting;
+ (Class)aAWEConcernMutiTargetConfigCommonAdapterClass;
+ (id)concernGeckoHostPrefix;
+ (void)loadGeckoResourceWithChannel:(id)arg0 fileName:(id)arg1 completion:(id /* block */)arg2;

- (id)aAWEConcernMutiTargetConfigCommonAdapter;

@end
