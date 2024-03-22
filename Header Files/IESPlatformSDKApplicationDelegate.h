//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface IESPlatformSDKApplicationDelegate : NSObject {
    NSMutableDictionary *_servicesMapper;
}

@property (retain, nonatomic) NSMutableDictionary *servicesMapper;

+ (BOOL)sendReqToConsumer:(id)arg0;
+ (BOOL)sendRespToConsumer:(id)arg0;
+ (BOOL)application:(id)arg0 openURL:(id)arg1 delegate:(id)arg2 productType:(long long)arg3;
+ (id)sharedDelegate;
+ (void)registerServiceClass:(Class)arg0;

- (id)servicesMapper;
- (id)URLServicerForServiceName:(id)arg0;
- (BOOL)sendReqToConsumer:(id)arg0;
- (BOOL)sendRespToConsumer:(id)arg0;
- (BOOL)isSupportedService:(id)arg0;
- (void)setServicesMapper:(id)arg0;
- (BOOL)application:(id)arg0 openURL:(id)arg1 delegate:(id)arg2 productType:(long long)arg3;
- (void)askForContentSyncWithReq:(id)arg0 forDelegate:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void).cxx_destruct;
- (void)registerServiceClass:(Class)arg0;

@end
