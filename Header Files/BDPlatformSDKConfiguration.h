//
//     Generated by private class-dump
//

@class UIColor, NSString, NSArray, UIImage, BDPlatformSDKPrivacyProtocolConfig, BDPlatformSDKConfigurationOld;
@protocol BDPlatformSDKOAuthDelegate, BDPlatformAuthLogger, BDPlatformUIViewDelegate;

@interface BDPlatformSDKConfiguration : NSObject {
    BOOL _loginBtnRoundedCorner;
    BOOL _hasBgImage;
    BOOL _isLTR;
    BOOL _mustPortrait;
    id<BDPlatformSDKOAuthDelegate> _oauthDelegate;
    NSString *_loginDomain;
    NSString *_passportDomain;
    NSArray *_URLSchemes;
    NSString *_iTunesUri;
    NSString *_productDisplayName;
    NSString *_loginButtonTitle;
    UIColor *_h1Color;
    UIColor *_h2Color;
    UIColor *_loginBtnColor;
    UIColor *_loginBtnTextColor;
    double _loginBtnCornerRadius;
    UIColor *_backgroundColor;
    UIColor *_splitLineColor;
    UIImage *_stayCheckedImage;
    UIImage *_checkedImage;
    UIImage *_uncheckedImage;
    UIImage *_defaultAppIcon;
    id<BDPlatformAuthLogger> _authlogger;
    UIColor *_scopeListTitleColor;
    double _loginButtonHeight;
    double _loginButtonXSpace;
    id<BDPlatformUIViewDelegate> _viewDelegate;
    NSString *_startLoadingTitle;
    NSString *_authLoadingTitle;
    NSString *_lang;
    BDPlatformSDKPrivacyProtocolConfig *_protocolConf;
    BDPlatformSDKConfigurationOld *_oldConfig;
}

@property (weak, nonatomic) id<BDPlatformSDKOAuthDelegate> oauthDelegate;
@property (copy, nonatomic) NSString *loginDomain;
@property (copy, nonatomic) NSString *passportDomain;
@property (retain, nonatomic) NSArray *URLSchemes;
@property (copy, nonatomic) NSString *iTunesUri;
@property (copy, nonatomic) NSString *productDisplayName;
@property (copy, nonatomic) NSString *loginButtonTitle;
@property (retain, nonatomic) UIColor *h1Color;
@property (retain, nonatomic) UIColor *h2Color;
@property (retain, nonatomic) UIColor *loginBtnColor;
@property (retain, nonatomic) UIColor *loginBtnTextColor;
@property (nonatomic) BOOL loginBtnRoundedCorner;
@property (nonatomic) double loginBtnCornerRadius;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *splitLineColor;
@property (nonatomic) BOOL hasBgImage;
@property (retain, nonatomic) UIImage *stayCheckedImage;
@property (retain, nonatomic) UIImage *checkedImage;
@property (retain, nonatomic) UIImage *uncheckedImage;
@property (retain, nonatomic) UIImage *defaultAppIcon;
@property (retain, nonatomic) id<BDPlatformAuthLogger> authlogger;
@property (retain, nonatomic) UIColor *scopeListTitleColor;
@property (nonatomic) double loginButtonHeight;
@property (nonatomic) double loginButtonXSpace;
@property (weak, nonatomic) id<BDPlatformUIViewDelegate> viewDelegate;
@property (copy, nonatomic) NSString *startLoadingTitle;
@property (copy, nonatomic) NSString *authLoadingTitle;
@property (nonatomic) BOOL isLTR;
@property (copy, nonatomic) NSString *lang;
@property (nonatomic) BOOL mustPortrait;
@property (retain, nonatomic) BDPlatformSDKPrivacyProtocolConfig *protocolConf;
@property (retain, nonatomic) BDPlatformSDKConfigurationOld *oldConfig;

- (void)setH1Color:(id)arg0;
- (void)setH2Color:(id)arg0;
- (void)setLoginBtnColor:(id)arg0;
- (void)setLoginBtnTextColor:(id)arg0;
- (void)setSplitLineColor:(id)arg0;
- (void)setLoginButtonXSpace:(double)arg0;
- (void)setLoginButtonHeight:(double)arg0;
- (void)setIsLTR:(BOOL)arg0;
- (id)oauthDelegate;
- (void)setOauthDelegate:(id)arg0;
- (id)loginDomain;
- (void)setLoginDomain:(id)arg0;
- (id)passportDomain;
- (void)setPassportDomain:(id)arg0;
- (void)setURLSchemes:(id)arg0;
- (id)productDisplayName;
- (void)setProductDisplayName:(id)arg0;
- (id)loginButtonTitle;
- (void)setLoginButtonTitle:(id)arg0;
- (id)h1Color;
- (id)h2Color;
- (id)loginBtnColor;
- (id)loginBtnTextColor;
- (BOOL)loginBtnRoundedCorner;
- (void)setLoginBtnRoundedCorner:(BOOL)arg0;
- (double)loginBtnCornerRadius;
- (void)setLoginBtnCornerRadius:(double)arg0;
- (id)splitLineColor;
- (BOOL)hasBgImage;
- (void)setHasBgImage:(BOOL)arg0;
- (id)stayCheckedImage;
- (void)setStayCheckedImage:(id)arg0;
- (void)setDefaultAppIcon:(id)arg0;
- (id)authlogger;
- (void)setAuthlogger:(id)arg0;
- (id)scopeListTitleColor;
- (void)setScopeListTitleColor:(id)arg0;
- (double)loginButtonHeight;
- (double)loginButtonXSpace;
- (id)startLoadingTitle;
- (void)setStartLoadingTitle:(id)arg0;
- (id)authLoadingTitle;
- (void)setAuthLoadingTitle:(id)arg0;
- (BOOL)mustPortrait;
- (void)setMustPortrait:(BOOL)arg0;
- (id)protocolConf;
- (void)setProtocolConf:(id)arg0;
- (id)oldConfig;
- (void)setOldConfig:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)viewDelegate;
- (BOOL)isLTR;
- (void)setViewDelegate:(id)arg0;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg0;
- (id)URLSchemes;
- (id)iTunesUri;
- (void)setITunesUri:(id)arg0;
- (id)checkedImage;
- (id)uncheckedImage;
- (void)setCheckedImage:(id)arg0;
- (void)setUncheckedImage:(id)arg0;
- (id)lang;
- (void)setLang:(id)arg0;
- (id)defaultAppIcon;

@end