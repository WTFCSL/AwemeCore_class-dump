//
//     Generated by private class-dump
//

@interface DYSharedLoginManager : NSObject {
    BOOL _isAuthLogin;
}

@property (nonatomic) BOOL didLogined;
@property (nonatomic) BOOL isAuthLogin;

+ (BOOL)isDouyin;
+ (BOOL)shouldShowSharedLoginInHotSoon;
+ (long long)showSharedLoginForHotSoonPriority;
+ (Class)aAWEUserModuleServiceDOUYINHTSAdapterClass;
+ (Class)aAWEUserModuleServiceDOUYINAdapterClass;
+ (BOOL)shouldShowSharedLiteLoginINHotSoon;
+ (id)sharedManager;

- (BOOL)shouldShowSharedLoginForLite;
- (BOOL)shouldShowSharedLoginForDouyin;
- (BOOL)shouldShowDouyinSharedLogin;
- (BOOL)shouldShowLiteSharedLogin;
- (id)getUserModel;
- (id)aAWEUserModuleServiceDOUYINHTSAdapter;
- (id)getUserModelShownType:(unsigned long long)arg0;
- (id)aAWEUserModuleServiceDOUYINAdapter;
- (BOOL)shouldShowSharedLoginWithProviderAppId:(id)arg0;
- (BOOL)shouldShowSharedLoginForHotSoon;
- (BOOL)shouldShowSharedLiteLoginForHotSoon;
- (void)setDidLogined:(BOOL)arg0;
- (BOOL)didLogined;
- (BOOL)isAuthLogin;
- (void)setIsAuthLogin:(BOOL)arg0;

@end
