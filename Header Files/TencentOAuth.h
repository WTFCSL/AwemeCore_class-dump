//
//     Generated by private class-dump
//

@class NSTimer, NSString, NSArray, NSDate, NSMutableDictionary, NSDictionary, TCOSDKReachability, TencentRequest, TCLoginViewKit;
@protocol TencentSessionDelegate;

@interface TencentOAuth : NSObject <TencentRequestDelegate, TCWebViewKitDelegate, TCLoginViewDelegate, TencentSessionDelegate, APIBaseDelegate> {
    NSMutableDictionary *_apiRequests;
    NSString *_accessToken;
    NSDate *_expirationDate;
    id<TencentSessionDelegate> _sessionDelegate;
    NSString *_localAppId;
    NSString *_openId;
    NSString *_redirectURI;
    NSArray *_permissions;
    TencentRequest *_request;
    TCLoginViewKit *_loginViewKit;
    NSString *_userNick;
    BOOL _userGetUserInfo;
    NSString *_appId;
    NSString *_uin;
    NSString *_skey;
    NSString *_universalLink;
    NSDictionary *_passData;
    unsigned long long _authMode;
    TCOSDKReachability *_reachHost;
    NSTimer *_timer;
    NSMutableDictionary *_loginDict;
    NSMutableDictionary *_openIdDict;
    NSString *_encryToken;
    int _authShareType;
    int _webAuthType;
    NSString *_unionid;
}

@property (retain, nonatomic) NSArray *permissions;
@property (retain, nonatomic) TCOSDKReachability *reachHost;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) NSString *userNick;
@property (retain, nonatomic) NSMutableDictionary *loginDict;
@property (retain, nonatomic) NSMutableDictionary *openIdDict;
@property (readonly, nonatomic) NSString *encryToken;
@property (nonatomic) int webAuthType;
@property (copy, nonatomic) NSString *accessToken;
@property (copy, nonatomic) NSDate *expirationDate;
@property (nonatomic) id<TencentSessionDelegate> sessionDelegate;
@property (copy, nonatomic) NSString *localAppId;
@property (copy, nonatomic) NSString *openId;
@property (copy, nonatomic) NSString *redirectURI;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *universalLink;
@property (retain, nonatomic) NSString *uin;
@property (retain, nonatomic) NSString *skey;
@property (copy, nonatomic) NSDictionary *passData;
@property (nonatomic) unsigned long long authMode;
@property (retain, nonatomic) NSString *unionid;
@property (nonatomic) int authShareType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long *)authorizeState;
+ (id)sdkSubVersion;
+ (BOOL)isLiteSDK;
+ (int)iphoneQQVersion;
+ (int)iphoneTIMVersion;
+ (BOOL)iphoneQQInstalled;
+ (BOOL)iphoneTIMInstalled;
+ (BOOL)iphoneQQSupportSSOLogin;
+ (BOOL)iphoneTIMSupportSSOLogin;
+ (BOOL)HandleOpenURL:(id)arg0;
+ (BOOL)CanHandleOpenURL:(id)arg0;
+ (BOOL)CanHandleUniversalLink:(id)arg0;
+ (BOOL)HandleUniversalLink:(id)arg0;
+ (id)getLastErrorMsg;
+ (unsigned long long)sendRespMessageToTencentApp:(id)arg0;
+ (id)sdkVersion;

- (void)logout:(id)arg0;
- (BOOL)authorize:(id)arg0;
- (void)appBecomeActive;
- (id)openId;
- (void)setOpenId:(id)arg0;
- (void)request:(id)arg0 didReceiveResponse:(id)arg1;
- (id)JSONValue:(id)arg0;
- (void)apiBase:(id)arg0 didSendBodyData:(long long)arg1 totalBytesWritten:(long long)arg2 totalBytesExpectedToWrite:(long long)arg3;
- (BOOL)tencentNeedPerformIncrAuth:(id)arg0 withPermissions:(id)arg1;
- (void)deleteAPIRequestBySeq:(id)arg0;
- (void)request:(id)arg0 didLoad:(id)arg1 dat:(id)arg2;
- (void)setLoginDict:(id)arg0;
- (id)loginDict;
- (id)getOwnBaseUrl;
- (void)loginViewKitDidSucceedLogin:(id)arg0 serial:(id)arg1;
- (void)loginViewKit:(id)arg0 didFailuredWithError:(id)arg1 serial:(id)arg2;
- (BOOL)loginViewKit:(id)arg0 shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientationsWithLoginWebkit:(id)arg0;
- (BOOL)shouldAutorotateWithLoginWebkit:(id)arg0;
- (void)setEncryToken:(id)arg0;
- (id)encryToken;
- (void)tencentDidNotLogin:(BOOL)arg0;
- (void)tencentDidLogin;
- (BOOL)oldCanhandleOpenURL:(id)arg0;
- (BOOL)forceWebLogin;
- (id)initWithAppId:(id)arg0 andUniversalLink:(id)arg1 andDelegate:(id)arg2;
- (id)initWithAppId:(id)arg0 andDelegate:(id)arg1;
- (id)getCachedToken;
- (id)getCachedExpirationDate;
- (void)retryHandleOpenURL;
- (void)cancelAllAPIRequest;
- (BOOL)isSessionValid;
- (BOOL)isOpenIdValid;
- (BOOL)StartNotifyNetWork;
- (void)tencentDidNotNetWork;
- (BOOL)authorizeWithTencentAppAuthInSafari:(BOOL)arg0 permissions:(id)arg1 andExtraParams:(id)arg2 delegate:(id)arg3;
- (void)StopNotifyNetWork;
- (id)requestWithGraphPath:(id)arg0 andParams:(id)arg1 andDelegate:(id)arg2;
- (id)reachHost;
- (void)setReachHost:(id)arg0;
- (BOOL)authorizeWithPermissions:(id)arg0 andExtraParams:(id)arg1 delegate:(id)arg2 inSafari:(BOOL)arg3;
- (void)setUserNick:(id)arg0;
- (void)getUnionIdResponse:(id)arg0;
- (BOOL)authorize:(id)arg0 inSafari:(BOOL)arg1;
- (BOOL)authorize:(id)arg0 localAppId:(id)arg1 inSafari:(BOOL)arg2;
- (void)setLocalAppId:(id)arg0;
- (void)setWebAuthType:(int)arg0;
- (int)webAuthType;
- (id)requestWithMethodName:(id)arg0 andParams:(id)arg1 andHttpMethod:(id)arg2 andDelegate:(id)arg3;
- (id)openUrl:(id)arg0 params:(id)arg1 httpMethod:(id)arg2 delegate:(id)arg3;
- (id)requestWithGraphPath:(id)arg0 andParams:(id)arg1 andHttpMethod:(id)arg2 andDelegate:(id)arg3;
- (id)skey;
- (id)uin;
- (void)getOpenIdResponse:(id)arg0;
- (void)getUserInfoResponse:(id)arg0;
- (BOOL)sendAPIRequest:(id)arg0 callback:(id)arg1;
- (void)onCGIRequestDidResponse:(id)arg0;
- (void)tencentDidUpdate:(id)arg0;
- (void)tencentFailedUpdate:(int)arg0;
- (BOOL)tencentNeedPerformReAuth:(id)arg0;
- (id)stringByTCOSDKReplacingHtmlEscapes:(id)arg0;
- (id)initWithAppId:(id)arg0 enableUniveralLink:(BOOL)arg1 universalLink:(id)arg2 delegate:(id)arg3;
- (id)getCachedOpenID;
- (BOOL)isCachedTokenValid;
- (BOOL)deleteCachedToken;
- (void)setAuthShareType:(int)arg0;
- (id)getUserOpenID;
- (BOOL)authorizeWithTencentAppAuthInSafari:(BOOL)arg0 permissions:(id)arg1 delegate:(id)arg2;
- (void)tencentDialogLogin:(id)arg0 expirationDate:(id)arg1;
- (BOOL)incrAuthWithPermissions:(id)arg0;
- (BOOL)reauthorizeWithPermissions:(id)arg0;
- (BOOL)RequestUnionId;
- (BOOL)authorizeWithQRlogin:(id)arg0;
- (id)requestWithParams:(id)arg0 andDelegate:(id)arg1;
- (id)requestWithGraphPath:(id)arg0 andDelegate:(id)arg1;
- (id)getServerSideCode;
- (BOOL)getOpenId:(id)arg0;
- (id)localEncrytedToken;
- (id)cgiRequestWithURL:(id)arg0 method:(id)arg1 params:(id)arg2 callback:(id)arg3;
- (id)encrytoken;
- (void)setUin:(id)arg0;
- (id)localAppId;
- (void)setSkey:(id)arg0;
- (id)unionid;
- (void)setUnionid:(id)arg0;
- (int)authShareType;
- (id)userNick;
- (id)openIdDict;
- (void)setOpenIdDict:(id)arg0;
- (void)cancelWithRequestKey:(id)arg0;
- (id)timer;
- (void)request:(id)arg0 didFailWithError:(id)arg1;
- (void)setAppId:(id)arg0;
- (void)setSessionDelegate:(id)arg0;
- (BOOL)cancel:(id)arg0;
- (id)expirationDate;
- (void)setExpirationDate:(id)arg0;
- (id)sessionDelegate;
- (void)setPermissions:(id)arg0;
- (id)permissions;
- (void)setUniversalLink:(id)arg0;
- (void)setTimer:(id)arg0;
- (void)reachabilityChanged:(id)arg0;
- (id)accessToken;
- (void)dealloc;
- (id)appId;
- (void)onTimer;
- (void)setAccessToken:(id)arg0;
- (unsigned long long)authMode;
- (void)setAuthMode:(unsigned long long)arg0;
- (BOOL)getUserInfo;
- (id)passData;
- (id)universalLink;
- (void)setPassData:(id)arg0;
- (BOOL)handleOpenURL:(id)arg0;
- (id)redirectURI;
- (void)setRedirectURI:(id)arg0;
- (id)parseURLParams:(id)arg0;

@end
