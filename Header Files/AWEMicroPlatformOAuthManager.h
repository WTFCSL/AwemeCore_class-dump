//
//     Generated by private class-dump
//

@class NSDictionary, BDPOpenPlatformAuthModel, BDPlatformSDKNetApi;
@protocol AWEMicroPlatformOAuthManagerDelegate;

@interface AWEMicroPlatformOAuthManager : NSObject {
    BOOL _isInLogin;
    id<AWEMicroPlatformOAuthManagerDelegate> _delegate;
    BDPlatformSDKNetApi *_sdkNetApi;
    NSDictionary *_normalScopes;
    NSDictionary *_pageDetail;
    BDPOpenPlatformAuthModel *_authModel;
}

@property (nonatomic) BOOL isInLogin;
@property (retain, nonatomic) BDPlatformSDKNetApi *sdkNetApi;
@property (copy, nonatomic) NSDictionary *normalScopes;
@property (copy, nonatomic) NSDictionary *pageDetail;
@property (retain, nonatomic) BDPOpenPlatformAuthModel *authModel;
@property (weak, nonatomic) id<AWEMicroPlatformOAuthManagerDelegate> delegate;

+ (id)errorWithErrMsg:(id)arg0 code:(long long)arg1;

- (void)setAuthModel:(id)arg0;
- (id)joinedScopesString;
- (id)authModel;
- (id)sdkNetApi;
- (void)setNormalScopes:(id)arg0;
- (BOOL)canSkipConfirm;
- (void)authorizeWithScope:(id)arg0;
- (void)fetchUserInfo;
- (void)setPageDetail:(id)arg0;
- (id)pageDetail;
- (id)normalScopeItems;
- (id)normalScopes;
- (void)setItemTitle:(id)arg0 scopeMap:(id)arg1;
- (void)setItemCellHeightWithItem:(id)arg0;
- (id)identityScopeString;
- (void)fetchTicket;
- (id)genericClientKey;
- (BOOL)isInLogin;
- (void)setIsInLogin:(BOOL)arg0;
- (void)setSdkNetApi:(id)arg0;
- (id)initWithModel:(id)arg0;
- (void).cxx_destruct;
- (long long)maxWidth;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
