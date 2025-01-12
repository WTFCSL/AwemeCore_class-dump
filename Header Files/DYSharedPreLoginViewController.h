//
//     Generated by private class-dump
//

@class DYSharedPreLoginView, DYLoginGuideAlertModel, DYAThemeModel, NSString, DYSharedLoginUserModel;

@interface DYSharedPreLoginViewController : UIViewController <DYSharedPreLoginViewDelegate, UIGestureRecognizerDelegate> {
    BOOL _needRemoveBackgroundColor;
    unsigned long long _shownType;
    DYSharedPreLoginView *_sharedPreLoginView;
    DYSharedLoginUserModel *_userModel;
    DYLoginGuideAlertModel *_alertModel;
    DYAThemeModel *_themeModel;
}

@property (retain, nonatomic) DYSharedPreLoginView *sharedPreLoginView;
@property (retain, nonatomic) DYSharedLoginUserModel *userModel;
@property (nonatomic) BOOL needRemoveBackgroundColor;
@property (weak, nonatomic) DYLoginGuideAlertModel *alertModel;
@property (retain, nonatomic) DYAThemeModel *themeModel;
@property (nonatomic) unsigned long long shownType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEUserModuleServiceDOUYINHTSAdapterClass;
+ (id)dyopen_urlWithBaseURLString:(id)arg0 byAppendQueryItems:(id)arg1;
+ (id)douyin_URLEncodedString:(id)arg0;
+ (id)douyin_serializatedStringWithObject:(id)arg0;

- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (id)alertModel;
- (void)setAlertModel:(id)arg0;
- (unsigned long long)loginPlatform;
- (void)login:(id)arg0;
- (id)themeModel;
- (void)setThemeModel:(id)arg0;
- (id)loginTitle;
- (void)trackLoginExitWithIsReturn:(BOOL)arg0;
- (id)p_trackInfo;
- (id)aAWEUserModuleServiceDOUYINHTSAdapter;
- (id)initWithSharedLoginUserModel:(id)arg0;
- (void)setNeedRemoveBackgroundColor:(BOOL)arg0;
- (void)manualDowngradeLogin;
- (void)addTapGestureRecognizer;
- (BOOL)needRemoveBackgroundColor;
- (unsigned long long)shownType;
- (void)setShownType:(unsigned long long)arg0;
- (BOOL)isShownLiteType;
- (void)p_jumpToAuth;
- (id)dyopen_md5ForAppId;
- (id)sharedPreLoginView;
- (void)requestFinishWithError:(id)arg0 account:(id)arg1 ticket:(id)arg2 button:(id)arg3;
- (void)setSharedPreLoginView:(id)arg0;
- (void)handleError:(id)arg0;
- (void)dismiss;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (id)userModel;
- (void)setUserModel:(id)arg0;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (void)viewDidLoad;

@end
