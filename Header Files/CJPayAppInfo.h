//
//     Generated by private class-dump
//

@class NSString;

@interface CJPayAppInfo : NSObject {
    BOOL _adapterIpadStyle;
    BOOL _enableSaasEnv;
    NSString *_appName;
    NSString *_appID;
    id /* block */ _deviceIDBlock;
    id /* block */ _userIDBlock;
    id /* block */ _userNicknameBlock;
    id /* block */ _userPhoneNumberBlock;
    id /* block */ _accessTokenBlock;
    id /* block */ _userAvatarBlock;
    id /* block */ _infoConfigBlock;
    id /* block */ _reskInfoBlock;
    id /* block */ _networkCommonParamsBlock;
    NSString *_wxH5PayRefer;
    NSString *_wxUniversalLink;
    NSString *_secLinkDomain;
    id /* block */ _transferSecLinkSceneBlock;
}

@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) id /* block */ deviceIDBlock;
@property (copy, nonatomic) id /* block */ userIDBlock;
@property (copy, nonatomic) id /* block */ userNicknameBlock;
@property (copy, nonatomic) id /* block */ userPhoneNumberBlock;
@property (copy, nonatomic) id /* block */ accessTokenBlock;
@property (copy, nonatomic) id /* block */ userAvatarBlock;
@property (copy, nonatomic) id /* block */ infoConfigBlock;
@property (copy, nonatomic) id /* block */ reskInfoBlock;
@property (copy, nonatomic) id /* block */ networkCommonParamsBlock;
@property (copy, nonatomic) NSString *wxH5PayRefer;
@property (copy, nonatomic) NSString *wxUniversalLink;
@property (copy, nonatomic) NSString *secLinkDomain;
@property (copy, nonatomic) id /* block */ transferSecLinkSceneBlock;
@property (nonatomic) BOOL adapterIpadStyle;
@property (nonatomic) BOOL enableSaasEnv;

- (void)setNetworkCommonParamsBlock:(id /* block */)arg0;
- (void)setWxUniversalLink:(id)arg0;
- (void)setDeviceIDBlock:(id /* block */)arg0;
- (void)setUserIDBlock:(id /* block */)arg0;
- (id)wxH5PayRefer;
- (void)setSecLinkDomain:(id)arg0;
- (void)setTransferSecLinkSceneBlock:(id /* block */)arg0;
- (void)setReskInfoBlock:(id /* block */)arg0;
- (void)setUserNicknameBlock:(id /* block */)arg0;
- (void)setUserPhoneNumberBlock:(id /* block */)arg0;
- (void)setUserAvatarBlock:(id /* block */)arg0;
- (void)setWxH5PayRefer:(id)arg0;
- (id /* block */)networkCommonParamsBlock;
- (id /* block */)deviceIDBlock;
- (id /* block */)userIDBlock;
- (id /* block */)userNicknameBlock;
- (id /* block */)userPhoneNumberBlock;
- (id /* block */)accessTokenBlock;
- (void)setAccessTokenBlock:(id /* block */)arg0;
- (id /* block */)userAvatarBlock;
- (id /* block */)infoConfigBlock;
- (void)setInfoConfigBlock:(id /* block */)arg0;
- (id /* block */)reskInfoBlock;
- (id)wxUniversalLink;
- (id)secLinkDomain;
- (id /* block */)transferSecLinkSceneBlock;
- (BOOL)adapterIpadStyle;
- (void)setAdapterIpadStyle:(BOOL)arg0;
- (BOOL)enableSaasEnv;
- (void)setEnableSaasEnv:(BOOL)arg0;
- (void)setAppName:(id)arg0;
- (id)appName;
- (void)setAppID:(id)arg0;
- (void).cxx_destruct;
- (id)appID;

@end