//
//     Generated by private class-dump
//

@class NSString;

@interface AWEProfileGeckoManager : NSObject <AWEProfileGeckoManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)loadGeckoResourceWithFolder:(id)arg0 fileName:(id)arg1 completion:(id /* block */)arg2;
+ (void)loadGeckoImageWithFolder:(id)arg0 fileName:(id)arg1 completion:(id /* block */)arg2;
+ (id)urlWithBundleName:(id)arg0;
+ (id)taskConfigWithBundleName:(id)arg0;
+ (id)profileGeckoSetting;
+ (id)profileGeckoHostPrefix;
+ (id)profileChannelName;

@end
