//
//     Generated by private class-dump
//

@class UIButton, AWELoginBackgroundView, UIImageView, NSString, UIView, NSObject, UILabel;
@protocol AWEUserLoginUIAmbientConfig, AWEUserLoginUILayoutConfig;

@interface DYSMSLoginV2Step2ViewController : DYSMSLoginStep2BaseViewController <UIGestureRecognizerDelegate> {
    NSObject<AWEUserLoginUILayoutConfig> *_layoutConfig;
    NSObject<AWEUserLoginUIAmbientConfig> *_ambientConfig;
    AWELoginBackgroundView *_containerView;
    UIView *_contentView;
    UILabel *_titleLabel;
    UILabel *_naviLabel;
    UIButton *_closeWindowButton;
    UIImageView *_logoView;
    UILabel *_subTitleLabel;
}

@property (retain, nonatomic) NSObject<AWEUserLoginUILayoutConfig> *layoutConfig;
@property (retain, nonatomic) NSObject<AWEUserLoginUIAmbientConfig> *ambientConfig;
@property (retain, nonatomic) AWELoginBackgroundView *containerView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *naviLabel;
@property (retain, nonatomic) UIButton *closeWindowButton;
@property (retain, nonatomic) UIImageView *logoView;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEUserModuleConfigCommonAdapterClass;

- (void)setLayoutConfig:(id)arg0;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (void)closeAction:(id)arg0;
- (void)skipAction;
- (void)p_setupNavigationBar;
- (id)ambientConfig;
- (void)setAmbientConfig:(id)arg0;
- (void)trackLoginExitWithIsReturn:(BOOL)arg0;
- (void)handleDeviceOrientationChangeNotification;
- (id)loginPanelTypeString;
- (void)handleKeyboardWillChange:(id)arg0 isShow:(BOOL)arg1;
- (void)dismissKeyboard:(id)arg0;
- (id)aAWEUserModuleConfigCommonAdapter;
- (void)changeLoginButtonBgColor;
- (void)p_setupNormalStyle;
- (id)initWithRouterModel:(id)arg0 phoneNumber:(id)arg1;
- (id)naviLabel;
- (void)setNaviLabel:(id)arg0;
- (void)closeAll;
- (void)handleDismissKeyboardGesture;
- (void)handleLoginError:(id)arg0;
- (id)closeWindowButton;
- (void)p_closeHalfBtnTapped;
- (void)setCloseWindowButton:(id)arg0;
- (void)helpAction:(id)arg0;
- (void)p_setupCompactStyle;
- (void)p_setupHalfDisplayStyle;
- (void)p_setupHTSElderlyStyle;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (void)close;
- (id)titleLabel;
- (void)setContainerView:(id)arg0;
- (long long)preferredStatusBarStyle;
- (id)contentView;
- (id)containerView;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (void)setContentView:(id)arg0;
- (void)setupUI;
- (void)deviceOrientationDidChange:(id)arg0;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;
- (id)logoView;
- (void)setLogoView:(id)arg0;
- (id)layoutConfig;

@end
