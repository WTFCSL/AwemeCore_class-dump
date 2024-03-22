//
//     Generated by private class-dump
//

@class NSString;

@interface NHAccountPlatformWeChat : NSObject <WXApiDelegate, NHAccountPlatformProtocol> {
    id /* block */ _wechatLoginSuccessBlock;
    id /* block */ _wechatLoginFailureBlock;
    id /* block */ _wechatLoginCancelBlock;
    NSString *_appKey;
}

@property (copy, nonatomic) id /* block */ wechatLoginSuccessBlock;
@property (copy, nonatomic) id /* block */ wechatLoginFailureBlock;
@property (copy, nonatomic) id /* block */ wechatLoginCancelBlock;
@property (copy, nonatomic) NSString *appKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPassportServiceHTSAdapterClass;
+ (id)sharedInstance;

- (void)setAppKey:(id)arg0;
- (id)appKey;
- (void)onResp:(id)arg0;
- (void)registerApp:(id)arg0;
- (id)aAWEPassportServiceHTSAdapter;
- (void)requestLogin:(id /* block */)arg0 failure:(id /* block */)arg1 cancel:(id /* block */)arg2;
- (void)requestBind:(id /* block */)arg0 failure:(id /* block */)arg1 cancel:(id /* block */)arg2;
- (void)requestAccessToken:(id /* block */)arg0 failure:(id /* block */)arg1 cancel:(id /* block */)arg2;
- (BOOL)isSSOAvailable;
- (void)lazyRegisterApp:(id)arg0;
- (void)OAuth:(id /* block */)arg0 failure:(id /* block */)arg1 cancel:(id /* block */)arg2;
- (void)ensureWeChatRegistered;
- (void)setWechatLoginSuccessBlock:(id /* block */)arg0;
- (void)setWechatLoginFailureBlock:(id /* block */)arg0;
- (void)setWechatLoginCancelBlock:(id /* block */)arg0;
- (id /* block */)wechatLoginFailureBlock;
- (id /* block */)wechatLoginSuccessBlock;
- (id /* block */)wechatLoginCancelBlock;
- (void).cxx_destruct;
- (BOOL)isAppInstalled;
- (BOOL)application:(id)arg0 continueUserActivity:(id)arg1 restorationHandler:(id /* block */)arg2;
- (BOOL)handleOpenURL:(id)arg0;

@end