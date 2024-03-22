//
//     Generated by private class-dump
//

@class DYLastLoginUserModel, NSString, NSDictionary, NSArray, AWEUserLoginUIContext, NSObject, DYPhoneNumberModel;
@protocol AWEUserLoginUIAmbientConfig, AWEUserLoginUILayoutConfig;

@interface AWEUserContext : NSObject {
    BOOL _isIgnoreAddThemeShowCount;
    BOOL _isFillLastLoginPhoneNumber;
    BOOL _hasModifiedFillPhoneNumber;
    BOOL _closeFinishTrack;
    BOOL _isShownHalfScreen;
    BOOL _needPhoneNumberUseChineseCode;
    BOOL _fromMultiLogin;
    BOOL _isPushVerify;
    BOOL _isForceHalfscreenLogin;
    BOOL _isLoginAlertAppear;
    BOOL _isForbiddenAnimation;
    NSString *_loginDesc;
    unsigned long long _loginTitleType;
    NSString *_loginAddTitle;
    NSString *_buttonAddTitle;
    NSString *_tagText;
    NSString *_tagBgColor;
    NSString *_tagTextColor;
    NSString *_themeId;
    NSString *_settingsThemeId;
    NSString *_enterFrom;
    NSString *_enterMethod;
    NSString *_groupId;
    NSDictionary *_extraParams;
    NSDictionary *_loginSuccessTrackInfo;
    NSDictionary *_trackInfo;
    long long _loginScene;
    unsigned long long _loginPlatform;
    DYPhoneNumberModel *_phoneNumberModel;
    NSArray *_concealPlatforms;
    DYLastLoginUserModel *_lastTrustUserModel;
    unsigned long long _scene;
    long long _currentAccountCount;
}

@property (nonatomic) BOOL ignoreLoginLast;
@property (nonatomic) BOOL trustOneClickIsShow;
@property (nonatomic) unsigned long long loginLastPlatform;
@property (readonly, nonatomic) BOOL loginLastPlatformTrust;
@property (readonly, nonatomic) AWEUserLoginUIContext *uiContext;
@property (readonly, nonatomic) AWEUserLoginUIContext *configurableUIContext;
@property (readonly, nonatomic) AWEUserLoginUIContext *forceDefaultUIContext;
@property (readonly, nonatomic) BOOL showAmbient;
@property (readonly, nonatomic) NSObject<AWEUserLoginUILayoutConfig> *layoutConfig;
@property (readonly, nonatomic) NSObject<AWEUserLoginUIAmbientConfig> *ambientConfig;
@property (copy, nonatomic) NSString *loginDesc;
@property (nonatomic) unsigned long long loginTitleType;
@property (copy, nonatomic) NSString *loginAddTitle;
@property (copy, nonatomic) NSString *buttonAddTitle;
@property (copy, nonatomic) NSString *tagText;
@property (copy, nonatomic) NSString *tagBgColor;
@property (copy, nonatomic) NSString *tagTextColor;
@property (copy, nonatomic) NSString *themeId;
@property (copy, nonatomic) NSString *settingsThemeId;
@property (nonatomic) BOOL isIgnoreAddThemeShowCount;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) NSString *groupId;
@property (readonly, copy, nonatomic) NSString *paramsForSpecial;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) NSDictionary *loginSuccessTrackInfo;
@property (nonatomic) BOOL isFillLastLoginPhoneNumber;
@property (nonatomic) BOOL hasModifiedFillPhoneNumber;
@property (retain, nonatomic) NSDictionary *trackInfo;
@property (nonatomic) BOOL closeFinishTrack;
@property (nonatomic) long long loginScene;
@property (nonatomic) BOOL isShownHalfScreen;
@property (nonatomic) unsigned long long loginPlatform;
@property (retain, nonatomic) DYPhoneNumberModel *phoneNumberModel;
@property (retain, nonatomic) NSArray *concealPlatforms;
@property (retain, nonatomic) DYLastLoginUserModel *lastTrustUserModel;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) BOOL needPhoneNumberUseChineseCode;
@property (nonatomic) BOOL fromMultiLogin;
@property (nonatomic) long long currentAccountCount;
@property (nonatomic) BOOL isPushVerify;
@property (nonatomic) BOOL isForceHalfscreenLogin;
@property (nonatomic) BOOL isLoginAlertAppear;
@property (nonatomic) BOOL isForbiddenAnimation;

+ (id)instanceWithBlock:(id /* block */)arg0;
+ (id)displayLoginDescWithContext:(id)arg0 loginMethod:(unsigned long long)arg1;
+ (id)displayLoginButtonTitleWithContext:(id)arg0 themeTitle:(id)arg1 defaultTitle:(id)arg2 buttonWidth:(double)arg3;
+ (id)displayTagTextWithContext:(id)arg0 themeModel:(id)arg1;
+ (Class)aAWEUserModuleConfigCommonAdapterClass;
+ (Class)aAWEUserModuleServiceDOUYINAdapterClass;

- (void)setEnterFrom:(id)arg0;
- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (id)enterFrom;
- (BOOL)isDouyin;
- (void)setTagText:(id)arg0;
- (id)extraParams;
- (id)tagText;
- (void)setTagTextColor:(id)arg0;
- (void)setIsForceHalfscreenLogin:(BOOL)arg0;
- (void)setLoginTitleType:(unsigned long long)arg0;
- (void)setLoginDesc:(id)arg0;
- (void)setExtraParams:(id)arg0;
- (id)themeId;
- (void)setThemeId:(id)arg0;
- (id)uiContext;
- (unsigned long long)loginPlatform;
- (void)setLoginPlatform:(unsigned long long)arg0;
- (id)tagTextColor;
- (unsigned long long)loginTitleType;
- (void)setFromMultiLogin:(BOOL)arg0;
- (id)tagBgColor;
- (void)setTagBgColor:(id)arg0;
- (id)concealPlatforms;
- (BOOL)isForceLoginGuide;
- (id)paramsForSpecial;
- (long long)loginScene;
- (BOOL)isColdLoginGuide;
- (id)loginDesc;
- (id)loginAddTitle;
- (void)setLoginAddTitle:(id)arg0;
- (id)buttonAddTitle;
- (void)setButtonAddTitle:(id)arg0;
- (id)settingsThemeId;
- (void)setSettingsThemeId:(id)arg0;
- (BOOL)isIgnoreAddThemeShowCount;
- (void)setIsIgnoreAddThemeShowCount:(BOOL)arg0;
- (id)loginSuccessTrackInfo;
- (void)setLoginSuccessTrackInfo:(id)arg0;
- (BOOL)isFillLastLoginPhoneNumber;
- (void)setIsFillLastLoginPhoneNumber:(BOOL)arg0;
- (BOOL)hasModifiedFillPhoneNumber;
- (void)setHasModifiedFillPhoneNumber:(BOOL)arg0;
- (BOOL)closeFinishTrack;
- (void)setCloseFinishTrack:(BOOL)arg0;
- (void)setLoginScene:(long long)arg0;
- (BOOL)isShownHalfScreen;
- (void)setIsShownHalfScreen:(BOOL)arg0;
- (id)phoneNumberModel;
- (void)setPhoneNumberModel:(id)arg0;
- (void)setConcealPlatforms:(id)arg0;
- (id)lastTrustUserModel;
- (void)setLastTrustUserModel:(id)arg0;
- (BOOL)needPhoneNumberUseChineseCode;
- (void)setNeedPhoneNumberUseChineseCode:(BOOL)arg0;
- (BOOL)fromMultiLogin;
- (long long)currentAccountCount;
- (void)setCurrentAccountCount:(long long)arg0;
- (BOOL)isPushVerify;
- (void)setIsPushVerify:(BOOL)arg0;
- (BOOL)isForceHalfscreenLogin;
- (BOOL)isLoginAlertAppear;
- (void)setIsLoginAlertAppear:(BOOL)arg0;
- (BOOL)isForbiddenAnimation;
- (void)setIsForbiddenAnimation:(BOOL)arg0;
- (id)loginCommonParamsWithLoginPlatform:(unsigned long long)arg0;
- (id)loginMethodForwPlatform:(unsigned long long)arg0;
- (id)loginCommonParams;
- (id)loginCommonParamsWithShowPlatforms:(id)arg0 loginPlatform:(unsigned long long)arg1;
- (id)ambientConfig;
- (id)carrierOneClickExtraParams;
- (void)setLoginLastPlatform:(unsigned long long)arg0;
- (void)setIgnoreLoginLast:(BOOL)arg0;
- (id)aAWEUserModuleConfigCommonAdapter;
- (id)aAWEUserModuleServiceDOUYINAdapter;
- (id)displayLoginDescWithNewTheme;
- (BOOL)ignoreLoginLast;
- (unsigned long long)loginLastPlatform;
- (BOOL)trustOneClickIsShow;
- (id)phoneLoginExtraInfoWithPlatform:(unsigned long long)arg0;
- (BOOL)isCarrierOnClickTrackInFrequencyControl;
- (id)loginCommonParamsWithShowPlatforms:(id)arg0;
- (BOOL)showAmbient;
- (BOOL)loginLastPlatformTrust;
- (void)setTrustOneClickIsShow:(BOOL)arg0;
- (id)forceDefaultUIContext;
- (id)configurableUIContext;
- (BOOL)shouldShowElderlyView;
- (void)switchUIContextWithThemeID:(id)arg0 completion:(id /* block */)arg1;
- (id)titleFromLoginEnter;
- (id)titleFromAddTitleWithThemeModel:(id)arg0 title:(id)arg1;
- (id)displayTitle;
- (void)setScene:(unsigned long long)arg0;
- (void).cxx_destruct;
- (void)setGroupId:(id)arg0;
- (id)groupId;
- (id)initWithBlock:(id /* block */)arg0;
- (unsigned long long)scene;
- (id)trackInfo;
- (void)setTrackInfo:(id)arg0;
- (id)layoutConfig;

@end