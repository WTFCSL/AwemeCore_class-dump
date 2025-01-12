//
//     Generated by private class-dump
//

@class NSDictionary, HGOpenPlatformAuthModel, BDPlatformSDKNetApi;
@protocol AWEHGMicroPlatformOAuthManagerDelegate;

@interface AWEHGMicroPlatformOAuthManager : NSObject {
    BOOL _isInLogin;
    id<AWEHGMicroPlatformOAuthManagerDelegate> _delegate;
    BDPlatformSDKNetApi *_sdkNetApi;
    NSDictionary *_normalScopes;
    NSDictionary *_pageDetail;
    HGOpenPlatformAuthModel *_authModel;
}

@property (nonatomic) BOOL isInLogin;
@property (retain, nonatomic) BDPlatformSDKNetApi *sdkNetApi;
@property (copy, nonatomic) NSDictionary *normalScopes;
@property (copy, nonatomic) NSDictionary *pageDetail;
@property (retain, nonatomic) HGOpenPlatformAuthModel *authModel;
@property (weak, nonatomic) id<AWEHGMicroPlatformOAuthManagerDelegate> delegate;

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
