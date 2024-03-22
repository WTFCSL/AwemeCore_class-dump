//
//     Generated by private class-dump
//

@class NSLock, NSString, NSRecursiveLock, NSArray, NSMutableDictionary, NSDictionary, IESBridgeAuthPackage, NSMutableSet, BDXBridgeAuthConfigPackage;
@protocol IESBridgeAuthManagerDelegate;

@interface IESBridgeAuthManager : NSObject {
    id /* block */ _monitorHybridBlock;
    id<IESBridgeAuthManagerDelegate> _delegate;
    NSArray *_innerDomains;
    BDXBridgeAuthConfigPackage *_authConfigPackage;
    NSString *_namespace;
    NSDictionary *_authRules;
    NSMutableSet *_privateDomains;
    NSLock *_methodSetLock;
    NSMutableSet *_publicMethods;
    NSMutableSet *_protectedMethods;
    NSMutableSet *_privateMethods;
    NSMutableSet *_secureMethods;
    NSMutableDictionary *_methodAuths;
    NSRecursiveLock *_methodAuthsLock;
    IESBridgeAuthPackage *_authPackage;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _privateDomainsLock;
}

@property (class, nonatomic) BOOL enableDebug;
@property (class, readonly, copy, nonatomic) NSString *boeHostSuffix;

@property (copy, nonatomic) NSString *namespace;
@property (copy, nonatomic) BDXBridgeAuthConfigPackage *authConfigPackage;
@property (copy, nonatomic) NSDictionary *authRules;
@property (retain, nonatomic) NSMutableSet *privateDomains;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } privateDomainsLock;
@property (retain, nonatomic) NSLock *methodSetLock;
@property (retain, nonatomic) NSMutableSet *publicMethods;
@property (retain, nonatomic) NSMutableSet *protectedMethods;
@property (retain, nonatomic) NSMutableSet *privateMethods;
@property (retain, nonatomic) NSMutableSet *secureMethods;
@property (retain, nonatomic) NSMutableDictionary *methodAuths;
@property (retain, nonatomic) NSRecursiveLock *methodAuthsLock;
@property (copy, nonatomic) IESBridgeAuthPackage *authPackage;
@property (nonatomic, getter=hasFetchedAuthInfos) BOOL fetchedAuthInfos;
@property (nonatomic, getter=isFetchingAuthInfos) BOOL fetchingAuthInfos;
@property (nonatomic, getter=hasUsedAuthInfosBeforeConfiguring) BOOL usedAuthInfosBeforeConfiguring;
@property (copy, nonatomic) id /* block */ monitorHybridBlock;
@property (nonatomic, getter=isBypassJSBAuthEnabled) BOOL bypassJSBAuthEnabled;
@property (nonatomic, getter=isBuiltinAuthInfosEnabled) BOOL builtinAuthInfosEnabled;
@property (readonly, nonatomic) BOOL hasCachedAuthInfos;
@property (weak, nonatomic) id<IESBridgeAuthManagerDelegate> delegate;
@property (copy, nonatomic) NSArray *innerDomains;

+ (id)sharedManagerWithNamesapce:(id)arg0;
+ (id)boeHostSuffix;
+ (void)configBoeUrlString:(id)arg0;
+ (void)updateAuthPackagesWithJsonObjects:(id)arg0;
+ (long long)authTypeFromString:(id)arg0;
+ (BOOL)isSafeUrl:(id)arg0 inUrs:(id)arg1;
+ (id)defaultPrivateDomains;
+ (id)secondLevelDomainForURL:(id)arg0;
+ (void)p_updateAuthManagerWithPackages:(id)arg0;
+ (void)addPrivateDomains:(id)arg0 inNamespace:(id)arg1;
+ (id)parseAuthInfosWithJSON:(id)arg0 accessKey:(id)arg1;
+ (id)getRequestParamsWithAccessKey:(id)arg0 commonParams:(id)arg1 extraChannels:(id)arg2;
+ (void)configureWithAuthDomain:(id)arg0 accessKey:(id)arg1 afterDelay:(double)arg2 commonParams:(id /* block */)arg3;
+ (void)configureWithAccessKey:(id)arg0 commonParams:(id /* block */)arg1;
+ (BOOL)isAuthorizedForNamespace:(id)arg0 webView:(id)arg1 appID:(id)arg2 method:(id)arg3 invokeUrl:(id)arg4 messageUUID:(id)arg5 fromSource:(id)arg6;
+ (BOOL)isAuthorizedForNamespace:(id)arg0 webView:(id)arg1 appID:(id)arg2 method:(id)arg3 invokeUrl:(id)arg4 messageUUID:(id)arg5 fromSource:(id)arg6 frameURL:(id)arg7 isMainFrame:(BOOL)arg8;
+ (id)internalAuthorizedResultForNamespace:(id)arg0 webView:(id)arg1 appID:(id)arg2 method:(id)arg3 invokeUrl:(id)arg4 messageUUID:(id)arg5 fromSource:(id)arg6 isMainFrame:(BOOL)arg7 frameURL:(id)arg8;
+ (id)authTypeString:(long long)arg0;
+ (id)strippedBoeHostURLForOriginURL:(id)arg0;
+ (id)internalAuthorizedWithAppID:(id)arg0 method:(id)arg1 invokeUrl:(id)arg2 forType:(long long)arg3 inAuthPackage:(id)arg4 inNamespace:(id)arg5;
+ (id)urlStringForPatterMatchedWithURL:(id)arg0;
+ (long long)authTypeForMethodName:(id)arg0 inNamespace:(id)arg1;
+ (void)configureWithAuthDomain:(id)arg0 accessKey:(id)arg1 afterDelay:(double)arg2 commonParams:(id /* block */)arg3 extraChannels:(id)arg4;
+ (void)configureWithAuthDomain:(id)arg0 accessKey:(id)arg1 boeHostSuffix:(id)arg2 afterDelay:(double)arg3 commonParams:(id /* block */)arg4 extraChannels:(id)arg5;
+ (void)configureWithAuthDomain:(id)arg0 accessKey:(id)arg1 commonParams:(id /* block */)arg2;
+ (id)sharedManager;
+ (BOOL)enableDebug;
+ (void)setEnableDebug:(BOOL)arg0;

- (void)addPrivateDomains:(id)arg0;
- (unsigned long long)authGroupForURL:(id)arg0;
- (void)setBuiltinAuthInfosEnabled:(BOOL)arg0;
- (id)publicMethods;
- (id)protectedMethods;
- (id)privateMethods;
- (void)setMonitorHybridBlock:(id /* block */)arg0;
- (id)authPackage;
- (void)setAuthPackage:(id)arg0;
- (id)methodSetLock;
- (id)secureMethods;
- (void)endMonitorEvent:(id)arg0;
- (BOOL)isBypassJSBAuthEnabled;
- (id)strippedURL:(id)arg0;
- (void)updateAuthGroup:(unsigned long long *)arg0 includedMethods:(id)arg1 excludedMethods:(id)arg2 forURL:(id)arg3;
- (id /* block */)monitorHybridBlock;
- (id)privateDomains;
- (void)setUsedAuthInfosBeforeConfiguring:(BOOL)arg0;
- (id)secondLevelDomainForURL:(id)arg0;
- (id)authRules;
- (void)setAuthRules:(id)arg0;
- (void)updateAuthRules;
- (void)updateMethodAuthTypes;
- (void)registerMethod:(id)arg0 withAuthType:(unsigned long long)arg1;
- (id)innerDomains;
- (void)setFetchedAuthInfos:(BOOL)arg0;
- (BOOL)hasFetchedAuthInfos;
- (void)setFetchingAuthInfos:(BOOL)arg0;
- (BOOL)isFetchingAuthInfos;
- (BOOL)hasUsedAuthInfosBeforeConfiguring;
- (BOOL)isBuiltinAuthInfosEnabled;
- (void)setBypassJSBAuthEnabled:(BOOL)arg0;
- (BOOL)hasCachedAuthInfos;
- (void)setInnerDomains:(id)arg0;
- (void)setPrivateDomains:(id)arg0;
- (void)setMethodSetLock:(id)arg0;
- (void)setPublicMethods:(id)arg0;
- (void)setProtectedMethods:(id)arg0;
- (void)setPrivateMethods:(id)arg0;
- (void)setSecureMethods:(id)arg0;
- (BOOL)isAuthorizedMethod:(id)arg0 forURL:(id)arg1 fromSource:(id)arg2 fromEngineView:(id)arg3;
- (id)internalAuthorizedWebView:(id)arg0 appID:(id)arg1 method:(id)arg2 invokeUrl:(id)arg3 messageUUID:(id)arg4;
- (id)authConfigPackage;
- (id)internalStandardWebAuthorizedWithWebView:(id)arg0 method:(id)arg1 invokeUrl:(id)arg2 appID:(id)arg3;
- (id)internalAuthorizedAppIDWithWebView:(id)arg0 appID:(id)arg1 method:(id)arg2 invokeUrl:(id)arg3;
- (id)internalAuthorizedUrlWithMethod:(id)arg0 invokeUrl:(id)arg1 needCompatible:(BOOL)arg2;
- (BOOL)isInDomainsWithURL:(id)arg0;
- (id)getAuthorizedControlManager:(id)arg0 invokeUrl:(id)arg1 appID:(id)arg2;
- (id)getFeAuthConfig:(id)arg0 appID:(id)arg1;
- (BOOL)isInPrivateDomainsWithURL:(id)arg0 url:(id)arg1;
- (BOOL)isAuthorizedForWebView:(id)arg0 appID:(id)arg1 method:(id)arg2 invokeUrl:(id)arg3 messageUUID:(id)arg4 fromSource:(id)arg5;
- (BOOL)isAuthorizedForWebView:(id)arg0 appID:(id)arg1 method:(id)arg2 invokeUrl:(id)arg3 messageUUID:(id)arg4 fromSource:(id)arg5 frameURL:(id)arg6 isMainFrame:(BOOL)arg7;
- (id)methodAuthsLock;
- (id)methodAuths;
- (void)setAuthConfigPackage:(id)arg0;
- (BOOL)isAuthorizedMethod:(id)arg0 forURL:(id)arg1 fromEngineView:(id)arg2;
- (struct _opaque_pthread_rwlock_t { long long x0; char x1[192]; })privateDomainsLock;
- (void)setPrivateDomainsLock:(struct _opaque_pthread_rwlock_t { long long x0; char x1[192]; })arg0;
- (void)setMethodAuths:(id)arg0;
- (void)setMethodAuthsLock:(id)arg0;
- (id)init;
- (id)namespace;
- (void).cxx_destruct;
- (id)delegate;
- (void)setNamespace:(id)arg0;
- (void)setDelegate:(id)arg0;

@end
