//
//     Generated by private class-dump
//

@class NSDate, NSString, UIView, AWEUserContext, DYAThemeModel, DYSharedLoginUserModel, DYRouterModel, AWELoginBackgroundView, NSObject;
@protocol AWEUserLoginUIAmbientConfig, DYSharedLoginView, AWEUserLoginUILayoutConfig;

@interface DYSharedLoginViewController : UIViewController <DYSharedLoginViewDelegate> {
    AWELoginBackgroundView *_containerView;
    UIView<DYSharedLoginView> *_sharedLoginView;
    NSString *_loginTitle;
    AWEUserContext *_userContext;
    DYSharedLoginUserModel *_userModel;
    NSObject<AWEUserLoginUILayoutConfig> *_layoutConfig;
    NSObject<AWEUserLoginUIAmbientConfig> *_ambientConfig;
    NSDate *_startLoginDate;
    DYRouterModel *_routerModel;
    DYAThemeModel *_themeModel;
}

@property (retain, nonatomic) AWELoginBackgroundView *containerView;
@property (retain, nonatomic) UIView<DYSharedLoginView> *sharedLoginView;
@property (retain, nonatomic) NSString *loginTitle;
@property (retain, nonatomic) AWEUserContext *userContext;
@property (retain, nonatomic) DYSharedLoginUserModel *userModel;
@property (retain, nonatomic) NSObject<AWEUserLoginUILayoutConfig> *layoutConfig;
@property (retain, nonatomic) NSObject<AWEUserLoginUIAmbientConfig> *ambientConfig;
@property (retain, nonatomic) NSDate *startLoginDate;
@property (retain, nonatomic) DYRouterModel *routerModel;
@property (retain, nonatomic) DYAThemeModel *themeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEUserModuleServiceDOUYINHTSAdapterClass;
+ (id)dyopen_urlWithBaseURLString:(id)arg0 byAppendQueryItems:(id)arg1;
+ (id)douyin_URLEncodedString:(id)arg0;
+ (id)douyin_serializatedStringWithObject:(id)arg0;

- (void)setLayoutConfig:(id)arg0;
- (void)p_setupUI;
- (unsigned long long)loginPlatform;
- (void)skipAction;
- (id)themeModel;
- (id)routerModel;
- (void)setRouterModel:(id)arg0;
- (void)setThemeModel:(id)arg0;
- (void)p_setupNavigationBar;
- (id)loginTitle;
- (void)setLoginTitle:(id)arg0;
- (id)ambientConfig;
- (void)setAmbientConfig:(id)arg0;
- (void)trackLoginExitWithIsReturn:(BOOL)arg0;
- (void)helpAction;
- (void)setStartLoginDate:(id)arg0;
- (id)startLoginDate;
- (id)p_trackInfo;
- (id)aAWEUserModuleServiceDOUYINHTSAdapter;
- (void)clickLoginWithView:(id)arg0;
- (void)clickOtherLoginWithView:(id)arg0;
- (id)initWithSharedLoginUserModel:(id)arg0;
- (id)initWithSharedLoginUserModel:(id)arg0 routerModel:(id)arg1;
- (id)sharedLoginView;
- (BOOL)isShownLiteType;
- (void)p_jumpQuickLogin;
- (void)requestFinishWithError:(id)arg0 account:(id)arg1 ticket:(id)arg2 view:(id)arg3;
- (void)p_jumpToAuth;
- (id)dyopen_md5ForAppId;
- (void)setSharedLoginView:(id)arg0;
- (void)handleError:(id)arg0;
- (id)userContext;
- (void)setUserContext:(id)arg0;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg0;
- (void)applicationWillEnterForeground:(id)arg0;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (long long)preferredStatusBarStyle;
- (void)viewDidDisappear:(BOOL)arg0;
- (id)userModel;
- (void)setUserModel:(id)arg0;
- (void)closeAction;
- (id)containerView;
- (void)refreshUI;
- (void)viewDidLoad;
- (void)backAction;
- (id)layoutConfig;

@end