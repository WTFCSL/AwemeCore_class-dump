//
//     Generated by private class-dump
//

@class NSString, NSArray, NSObject;
@protocol TTAccountMessageFirstResponder;

@interface TTAccountConfiguration : NSObject {
    BOOL _multiThreadSafeEnabled;
    BOOL _unbindAlertEnabled;
    BOOL _showAlertWhenLoginFail;
    BOOL _byFindPasswordLoginEnabled;
    BOOL _isSupportMutilLogin;
    BOOL _sysnUserInfoAfterAuthLogin;
    BOOL _isBoe;
    BOOL _autoSynchronizeUserInfo;
    BOOL _autoSynchronizeUserInfoByTimer;
    BOOL _isXTTTokenActive;
    BOOL _shouldShareTokeInShareCookieHostList;
    BOOL _shouldTrackNoTokenRequest;
    BOOL _openCacheLoginInfo;
    BOOL _enableNetNotParse;
    BOOL _shouldStrategyRecordNotClearWhenLogin;
    id /* block */ _networkParamsHandler;
    id /* block */ _appRequiredParamsHandler;
    NSString *_sharingKeyChainGroup;
    NSString *_domain;
    NSObject<TTAccountMessageFirstResponder> *_accountMessageFirstResponder;
    id /* block */ _visibleViewControllerHandler;
    NSString *_unbindThirdPartyURLPath;
    NSString *_userInfoURLPath;
    long long _autoSynchronizeUserInfoTimeInterval;
    NSArray *_needTokenDomins;
    NSArray *_addtionalTokenDomins;
    long long _tokenPollingInterveral;
    NSString *_mobileSeparator;
    NSArray *_configLoginPaths;
    NSArray *_configLogoutPaths;
}

@property (nonatomic) BOOL disableChainLogin;
@property (nonatomic) BOOL isProviderForChainLogin;
@property (nonatomic) BOOL shouldAutoHandleUserInfoForChainLogin;
@property (copy, nonatomic) id /* block */ networkParamsHandler;
@property (copy, nonatomic) id /* block */ appRequiredParamsHandler;
@property (nonatomic) BOOL multiThreadSafeEnabled;
@property (copy, nonatomic) NSString *sharingKeyChainGroup;
@property (nonatomic) BOOL unbindAlertEnabled;
@property (nonatomic) BOOL showAlertWhenLoginFail;
@property (nonatomic) BOOL byFindPasswordLoginEnabled;
@property (copy, nonatomic) NSString *domain;
@property (retain, nonatomic) NSObject<TTAccountMessageFirstResponder> *accountMessageFirstResponder;
@property (copy, nonatomic) id /* block */ visibleViewControllerHandler;
@property (nonatomic) BOOL isSupportMutilLogin;
@property (nonatomic) BOOL sysnUserInfoAfterAuthLogin;
@property (nonatomic) BOOL isBoe;
@property (copy, nonatomic) NSString *unbindThirdPartyURLPath;
@property (nonatomic) BOOL autoSynchronizeUserInfo;
@property (copy, nonatomic) NSString *userInfoURLPath;
@property (nonatomic) BOOL autoSynchronizeUserInfoByTimer;
@property (nonatomic) long long autoSynchronizeUserInfoTimeInterval;
@property (copy, nonatomic) NSArray *needTokenDomins;
@property (copy, nonatomic) NSArray *addtionalTokenDomins;
@property (nonatomic) BOOL isXTTTokenActive;
@property (nonatomic) BOOL shouldShareTokeInShareCookieHostList;
@property (nonatomic) BOOL shouldTrackNoTokenRequest;
@property (nonatomic) long long tokenPollingInterveral;
@property (nonatomic) BOOL openCacheLoginInfo;
@property (copy, nonatomic) NSString *mobileSeparator;
@property (nonatomic) BOOL enableNetNotParse;
@property (copy) NSArray *configLoginPaths;
@property (copy) NSArray *configLogoutPaths;
@property (nonatomic) BOOL shouldStrategyRecordNotClearWhenLogin;

+ (id)tta_defaultURLParameters;
+ (id)tta_appBundleID;

- (BOOL)isBoe;
- (void)setIsBoe:(BOOL)arg0;
- (id)tta_sharingKeyChainGroup;
- (BOOL)multiThreadSafeEnabled;
- (id /* block */)appRequiredParamsHandler;
- (id)needTokenDomins;
- (id /* block */)networkParamsHandler;
- (void)setNeedTokenDomins:(id)arg0;
- (void)setAddtionalTokenDomins:(id)arg0;
- (id /* block */)visibleViewControllerHandler;
- (void)setIsXTTTokenActive:(BOOL)arg0;
- (BOOL)sysnUserInfoAfterAuthLogin;
- (void)setNetworkParamsHandler:(id /* block */)arg0;
- (void)setAppRequiredParamsHandler:(id /* block */)arg0;
- (void)setMultiThreadSafeEnabled:(BOOL)arg0;
- (id)sharingKeyChainGroup;
- (void)setSharingKeyChainGroup:(id)arg0;
- (BOOL)unbindAlertEnabled;
- (void)setUnbindAlertEnabled:(BOOL)arg0;
- (BOOL)showAlertWhenLoginFail;
- (void)setShowAlertWhenLoginFail:(BOOL)arg0;
- (BOOL)byFindPasswordLoginEnabled;
- (void)setByFindPasswordLoginEnabled:(BOOL)arg0;
- (id)accountMessageFirstResponder;
- (void)setAccountMessageFirstResponder:(id)arg0;
- (void)setVisibleViewControllerHandler:(id /* block */)arg0;
- (void)setIsSupportMutilLogin:(BOOL)arg0;
- (void)setSysnUserInfoAfterAuthLogin:(BOOL)arg0;
- (void)setUnbindThirdPartyURLPath:(id)arg0;
- (BOOL)autoSynchronizeUserInfo;
- (void)setAutoSynchronizeUserInfo:(BOOL)arg0;
- (void)setUserInfoURLPath:(id)arg0;
- (BOOL)autoSynchronizeUserInfoByTimer;
- (void)setAutoSynchronizeUserInfoByTimer:(BOOL)arg0;
- (long long)autoSynchronizeUserInfoTimeInterval;
- (void)setAutoSynchronizeUserInfoTimeInterval:(long long)arg0;
- (id)addtionalTokenDomins;
- (BOOL)isXTTTokenActive;
- (BOOL)shouldShareTokeInShareCookieHostList;
- (void)setShouldShareTokeInShareCookieHostList:(BOOL)arg0;
- (BOOL)shouldTrackNoTokenRequest;
- (void)setShouldTrackNoTokenRequest:(BOOL)arg0;
- (long long)tokenPollingInterveral;
- (void)setTokenPollingInterveral:(long long)arg0;
- (BOOL)openCacheLoginInfo;
- (void)setOpenCacheLoginInfo:(BOOL)arg0;
- (id)mobileSeparator;
- (void)setMobileSeparator:(id)arg0;
- (void)setEnableNetNotParse:(BOOL)arg0;
- (id)configLoginPaths;
- (void)setConfigLoginPaths:(id)arg0;
- (id)configLogoutPaths;
- (void)setConfigLogoutPaths:(id)arg0;
- (BOOL)shouldStrategyRecordNotClearWhenLogin;
- (void)setShouldStrategyRecordNotClearWhenLogin:(BOOL)arg0;
- (id)tta_deviceID;
- (id)tta_installID;
- (id)tta_currentViewController;
- (id)tta_ssAppID;
- (id)tta_ssMID;
- (id)tta_commonNetworkParameters;
- (BOOL)isSupportMutilLogin;
- (id)tta_appRequiredParameters;
- (BOOL)enableNetNotParse;
- (id)userInfoURLPath;
- (id)unbindThirdPartyURLPath;
- (BOOL)disableChainLogin;
- (BOOL)shouldAutoHandleUserInfoForChainLogin;
- (void)setDisableChainLogin:(BOOL)arg0;
- (BOOL)isProviderForChainLogin;
- (void)setIsProviderForChainLogin:(BOOL)arg0;
- (void)setShouldAutoHandleUserInfoForChainLogin:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)domain;
- (void)dealloc;
- (void)setDomain:(id)arg0;

@end
