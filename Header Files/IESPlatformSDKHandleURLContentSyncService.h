//
//     Generated by private class-dump
//

@class NSString;

@interface IESPlatformSDKHandleURLContentSyncService : NSObject <IESPlatformSDKURLServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)consumerGetReqFromURL:(id)arg0;
+ (BOOL)handleConsumerGetReq:(id)arg0 withUserInfo:(id)arg1 completion:(id /* block */)arg2;
+ (id)URLFromProviderGetResp:(id)arg0;
+ (id)serviceName;

@end
