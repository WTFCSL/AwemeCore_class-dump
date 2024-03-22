//
//     Generated by private class-dump
//

@class NSString;

@interface NHAccountPlatformWeibo : NSObject <WeiboSDKDelegate, WBHttpRequestDelegate, NHAccountPlatformProtocol> {
    id /* block */ _weiboLoginSuccessBlock;
    id /* block */ _weiboLoginFailureBlock;
    id /* block */ _weiboLoginCancelBlock;
    id /* block */ _weiboAccessTokenSuccessBlock;
    unsigned long long _type;
    NSString *_appKey;
}

@property (copy, nonatomic) id /* block */ weiboLoginSuccessBlock;
@property (copy, nonatomic) id /* block */ weiboLoginFailureBlock;
@property (copy, nonatomic) id /* block */ weiboLoginCancelBlock;
@property (copy, nonatomic) id /* block */ weiboAccessTokenSuccessBlock;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *appKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPassportServiceHTSAdapterClass;
+ (id)sharedInstance;

- (void)setAppKey:(id)arg0;
- (id)appKey;
- (void)didReceiveWeiboRequest:(id)arg0;
- (void)didReceiveWeiboResponse:(id)arg0;
- (void)registerApp:(id)arg0;
- (id)aAWEPassportServiceHTSAdapter;
- (void)requestLogin:(id /* block */)arg0 failure:(id /* block */)arg1 cancel:(id /* block */)arg2;
- (void)requestBind:(id /* block */)arg0 failure:(id /* block */)arg1 cancel:(id /* block */)arg2;
- (void)requestAccessToken:(id /* block */)arg0 failure:(id /* block */)arg1 cancel:(id /* block */)arg2;
- (BOOL)isSSOAvailable;
- (void)lazyRegisterApp:(id)arg0;
- (void)OAuth:(id /* block */)arg0 failure:(id /* block */)arg1 cancel:(id /* block */)arg2;
- (BOOL)isAccessTokenGetterAvailable;
- (id)stringRepresentationForExpirationDate:(id)arg0;
- (void)ensureWeiboRegistered;
- (void)setWeiboLoginSuccessBlock:(id /* block */)arg0;
- (void)setWeiboLoginFailureBlock:(id /* block */)arg0;
- (void)setWeiboLoginCancelBlock:(id /* block */)arg0;
- (id)authLoginSuccessURLString;
- (id /* block */)weiboLoginFailureBlock;
- (void)setWeiboAccessTokenSuccessBlock:(id /* block */)arg0;
- (id /* block */)weiboLoginSuccessBlock;
- (id /* block */)weiboAccessTokenSuccessBlock;
- (id /* block */)weiboLoginCancelBlock;
- (void).cxx_destruct;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg0;
- (BOOL)handleOpenURL:(id)arg0;

@end
