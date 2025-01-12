//
//     Generated by private class-dump
//

@class NSDate, DYRouterModel, NSObject, DYAThemeModel, AWEUITextLoadingView, UIButton, UIView, NSString, AWELoginBackgroundView, AWENavigationBar, AWEUserContext, DUXLoadingToast, DYPhoneNumberModel;
@protocol AWECarrierLoginView, AWEUserLoginUIAmbientConfig, AWEUserLoginUILayoutConfig;

@interface AWECarrierLoginViewController : UIViewController <AWECarrierLoginViewDelegate, HTSAccountMessage, UIGestureRecognizerDelegate> {
    BOOL _isThirdLogin;
    BOOL _isKeyboardShow;
    NSString *_enterFrom;
    NSString *_enterMethod;
    AWEUserContext *_userContext;
    NSString *_loginTitle;
    DYPhoneNumberModel *_phoneNumber;
    long long _carrierType;
    DYRouterModel *_routerModel;
    NSObject<AWEUserLoginUILayoutConfig> *_layoutConfig;
    NSObject<AWEUserLoginUIAmbientConfig> *_ambientConfig;
    UIView<AWECarrierLoginView> *_quickLoginView;
    AWENavigationBar *_navigationBar;
    AWELoginBackgroundView *_containerView;
    UIView *_maskView;
    UIView *_backgroundView;
    UIButton *_closeButton;
    AWEUITextLoadingView *_thirdLoginLoadingView;
    double _carrierLoginStart;
    long long _maskloginDuration;
    long long _requestTokenDuration;
    long long _tokenloginDuration;
    AWEUITextLoadingView *_loadingView;
    DUXLoadingToast *_loadingToast;
    NSDate *_startLoginDate;
    DYAThemeModel *_themeModel;
}

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) AWEUserContext *userContext;
@property (copy, nonatomic) NSString *loginTitle;
@property (retain, nonatomic) DYPhoneNumberModel *phoneNumber;
@property (nonatomic) long long carrierType;
@property (retain, nonatomic) DYRouterModel *routerModel;
@property (retain, nonatomic) NSObject<AWEUserLoginUILayoutConfig> *layoutConfig;
@property (retain, nonatomic) NSObject<AWEUserLoginUIAmbientConfig> *ambientConfig;
@property (retain, nonatomic) UIView<AWECarrierLoginView> *quickLoginView;
@property (retain, nonatomic) AWENavigationBar *navigationBar;
@property (retain, nonatomic) AWELoginBackgroundView *containerView;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) AWEUITextLoadingView *thirdLoginLoadingView;
@property (nonatomic) BOOL isThirdLogin;
@property (nonatomic) BOOL isKeyboardShow;
@property (nonatomic) double carrierLoginStart;
@property (nonatomic) long long maskloginDuration;
@property (nonatomic) long long requestTokenDuration;
@property (nonatomic) long long tokenloginDuration;
@property (retain, nonatomic) AWEUITextLoadingView *loadingView;
@property (retain, nonatomic) DUXLoadingToast *loadingToast;
@property (retain, nonatomic) NSDate *startLoginDate;
@property (retain, nonatomic) DYAThemeModel *themeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEUserModuleServiceDOUYINHTSAdapterClass;

- (void)setLayoutConfig:(id)arg0;
- (void)setEnterFrom:(id)arg0;
- (void)setEnterMethod:(id)arg0;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (id)enterMethod;
- (id)enterFrom;
- (void)setCarrierType:(long long)arg0;
- (BOOL)isKeyboardShow;
- (void)skipAction;
- (void)handleThirdLoginOpenURL;
- (id)loadingToast;
- (void)setLoadingToast:(id)arg0;
- (long long)carrierType;
- (id)themeModel;
- (id)routerModel;
- (void)setRouterModel:(id)arg0;
- (void)setThemeModel:(id)arg0;
- (void)loginWithPlatform:(unsigned long long)arg0;
- (void)p_setupNavigationBar;
- (void)clickQuickLogin:(id)arg0;
- (void)clickSMSLogin:(id)arg0;
- (void)clickSSOLogin:(id)arg0 platform:(unsigned long long)arg1;
- (void)clickSSOMoreLogin:(id)arg0;
- (id)loginTitle;
- (void)clickQRLogin:(id)arg0;
- (void)setLoginTitle:(id)arg0;
- (id)ambientConfig;
- (void)setAmbientConfig:(id)arg0;
- (id)thirdLoginLoadingView;
- (BOOL)isThirdLogin;
- (void)setThirdLoginLoadingView:(id)arg0;
- (void)setIsThirdLogin:(BOOL)arg0;
- (void)trackLoginExitWithIsReturn:(BOOL)arg0;
- (void)p_setupUIForFullScreen;
- (id)quickLoginView;
- (void)handleDeviceOrientationChangeNotification;
- (void)helpAction;
- (void)trackLoginDurationWithStatus:(BOOL)arg0;
- (double)carrierLoginStart;
- (long long)maskloginDuration;
- (long long)requestTokenDuration;
- (long long)tokenloginDuration;
- (void)setStartLoginDate:(id)arg0;
- (void)setCarrierLoginStart:(double)arg0;
- (void)requestPrefetchLogin;
- (id)startLoginDate;
- (void)setMaskloginDuration:(long long)arg0;
- (void)requestCarrierLogin;
- (void)handleLoginSuccessAccount:(id)arg0 ticket:(id)arg1 preLogin:(BOOL)arg2 nonageVerifyEnable:(BOOL)arg3;
- (void)setRequestTokenDuration:(long long)arg0;
- (void)requestTokenLogin:(id)arg0 withError:(id)arg1;
- (void)showToastWithModel:(id)arg0 platform:(unsigned long long)arg1;
- (void)handleLoginError:(id)arg0 ticket:(id)arg1;
- (void)requestQuickLoginWithToken:(id)arg0;
- (void)setTokenloginDuration:(long long)arg0;
- (id)p_trackInfo;
- (void)clickClose:(id)arg0;
- (void)clickHelp:(id)arg0;
- (id)aAWEUserModuleServiceDOUYINHTSAdapter;
- (id)initWithPhoneNumber:(id)arg0 carrier:(long long)arg1 routerModel:(id)arg2;
- (void)setQuickLoginView:(id)arg0;
- (void)setIsKeyboardShow:(BOOL)arg0;
- (id)userContext;
- (void)setUserContext:(id)arg0;
- (void)viewDidLayoutSubviews;
- (id)backgroundView;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)phoneNumber;
- (void)setPhoneNumber:(id)arg0;
- (id)maskView;
- (void)setContainerView:(id)arg0;
- (long long)preferredStatusBarStyle;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)closeAction;
- (id)containerView;
- (id)navigationBar;
- (void)setNavigationBar:(id)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setBackgroundView:(id)arg0;
- (void)appWillResignActive:(id)arg0;
- (void)setMaskView:(id)arg0;
- (void)backAction;
- (void)setupUI;
- (void)deviceOrientationDidChange:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (void)showError:(id)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)layoutConfig;

@end
