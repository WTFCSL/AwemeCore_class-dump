//
//     Generated by private class-dump
//

@class UIView, DYLoginNextActionButton, NSArray, DYPhoneNumberModel, NSString, DYRouterModel, DYASecurityTicketModel, NSObject, UIViewController, DYLoginInputView, UILabel;
@protocol AWEUserLoginUILayoutConfig;

@interface DYFindPasswordStep2ViewController : UIViewController <UIGestureRecognizerDelegate, AWESecurityMessage> {
    BOOL _shouldHandleTransformForKeyboardCovering;
    BOOL _isFirstHandleTransformForKeyboardCovering;
    BOOL _isFirstSendMessage;
    BOOL _isFirstSendVoiceMessage;
    BOOL _shouldRecoverChange;
    BOOL _hasAppear;
    BOOL _sessionExpired;
    NSString *_secUid;
    DYASecurityTicketModel *_verifyTicket;
    UIViewController *_targetViewController;
    DYPhoneNumberModel *_phoneNumber;
    DYRouterModel *_routerModel;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UILabel *_errorTipLabel;
    DYLoginInputView *_passwordInputView;
    DYLoginNextActionButton *_loginButton;
    UIView *_contentView;
    NSArray *_notificationObservers;
    UILabel *_naviLabel;
    long long _curCountDown;
    NSObject<AWEUserLoginUILayoutConfig> *_layoutConfig;
    UIView *_containerView;
}

@property (retain, nonatomic) DYPhoneNumberModel *phoneNumber;
@property (retain, nonatomic) DYRouterModel *routerModel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *errorTipLabel;
@property (retain, nonatomic) DYLoginInputView *passwordInputView;
@property (retain, nonatomic) DYLoginNextActionButton *loginButton;
@property (retain, nonatomic) UIView *contentView;
@property (copy, nonatomic) NSArray *notificationObservers;
@property (retain, nonatomic) UILabel *naviLabel;
@property (nonatomic) BOOL shouldHandleTransformForKeyboardCovering;
@property (nonatomic) BOOL isFirstHandleTransformForKeyboardCovering;
@property (nonatomic) BOOL isFirstSendMessage;
@property (nonatomic) BOOL isFirstSendVoiceMessage;
@property (nonatomic) long long curCountDown;
@property (nonatomic) BOOL shouldRecoverChange;
@property (nonatomic) BOOL hasAppear;
@property (retain, nonatomic) NSObject<AWEUserLoginUILayoutConfig> *layoutConfig;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) BOOL sessionExpired;
@property (copy, nonatomic) NSString *secUid;
@property (retain, nonatomic) DYASecurityTicketModel *verifyTicket;
@property (retain, nonatomic) UIViewController *targetViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setLayoutConfig:(id)arg0;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (id)secUid;
- (id)targetViewController;
- (void)setSecUid:(id)arg0;
- (void)p_setupUI;
- (id)verifyTicket;
- (void)setVerifyTicket:(id)arg0;
- (BOOL)hasAppear;
- (void)setHasAppear:(BOOL)arg0;
- (void)backAction:(id)arg0;
- (id)passwordInputView;
- (void)setPasswordInputView:(id)arg0;
- (id)routerModel;
- (void)setRouterModel:(id)arg0;
- (id)errorTipLabel;
- (void)setErrorTipLabel:(id)arg0;
- (void)setTargetViewController:(id)arg0;
- (void)nextAction:(id)arg0;
- (void)p_setupNavigationBar;
- (void)securityCheckDidStart:(long long)arg0;
- (void)securityCheckDidEnd:(long long)arg0;
- (id)p_trackInfo;
- (void)setCurCountDown:(long long)arg0;
- (long long)curCountDown;
- (void)dismissKeyboard:(id)arg0;
- (void)handleKeyboardAnimationWithShow:(BOOL)arg0 userInfo:(id)arg1;
- (void)resetNextButtonStatus;
- (void)p_setupNormalStyle;
- (void)setShouldHandleTransformForKeyboardCovering:(BOOL)arg0;
- (void)setShouldRecoverChange:(BOOL)arg0;
- (void)setIsFirstHandleTransformForKeyboardCovering:(BOOL)arg0;
- (BOOL)shouldHandleTransformForKeyboardCovering;
- (BOOL)isFirstHandleTransformForKeyboardCovering;
- (BOOL)shouldRecoverChange;
- (void)inputPasswordSubmit;
- (id)naviLabel;
- (void)setNaviLabel:(id)arg0;
- (void)handleErrorMessage:(id)arg0;
- (void)setSessionExpired:(BOOL)arg0;
- (BOOL)sessionExpired;
- (BOOL)isFirstSendMessage;
- (void)setIsFirstSendMessage:(BOOL)arg0;
- (BOOL)isFirstSendVoiceMessage;
- (void)setIsFirstSendVoiceMessage:(BOOL)arg0;
- (id)initWithContext:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)phoneNumber;
- (void)setPhoneNumber:(id)arg0;
- (id)titleLabel;
- (void)setContainerView:(id)arg0;
- (long long)preferredStatusBarStyle;
- (void)setNotificationObservers:(id)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (id)contentView;
- (id)notificationObservers;
- (id)containerView;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (void)setContentView:(id)arg0;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;
- (id)loginButton;
- (void)setLoginButton:(id)arg0;
- (id)layoutConfig;

@end
