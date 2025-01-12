//
//     Generated by private class-dump
//

@class DYLoginGuideAlertModel, DYAThemeModel, NSString, UIView, DUXActionSheet, NSMutableArray, UIButton;
@protocol AWESMSLoginStep1View;

@interface DYSMSLoginStep1HalfViewController : DYSMSLoginStep1BaseViewController <AWESMSLoginStep1ViewDelegate, DUXActionSheetDelegate, UIGestureRecognizerDelegate> {
    BOOL _needRemoveBackgroundColor;
    UIView<AWESMSLoginStep1View> *_containerView;
    id /* block */ _backAction;
    UIButton *_backButton;
    UIButton *_closeButton;
    DUXActionSheet *_otherLoginActionSheet;
    NSMutableArray *_trackThirdForms;
    DYLoginGuideAlertModel *_alertModel;
    DYAThemeModel *_themeModel;
}

@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) DUXActionSheet *otherLoginActionSheet;
@property (retain, nonatomic) NSMutableArray *trackThirdForms;
@property (nonatomic) BOOL needRemoveBackgroundColor;
@property (weak, nonatomic) DYLoginGuideAlertModel *alertModel;
@property (retain, nonatomic) DYAThemeModel *themeModel;
@property (copy, nonatomic) id /* block */ backAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)actionSheet:(id)arg0 didClickButtonAtIndex:(long long)arg1;
- (void)actionSheetDidClickCancelButton:(id)arg0;
- (void)actionSheetDidClickMaskArea:(id)arg0;
- (void)backButtonClicked;
- (id)alertModel;
- (void)setAlertModel:(id)arg0;
- (void)trackLoginNotify;
- (id)themeModel;
- (void)setThemeModel:(id)arg0;
- (id)loginTitle;
- (void)trackLoginExitWithIsReturn:(BOOL)arg0;
- (id)loginPanelTypeString;
- (id)p_trackInfo;
- (void)handleKeyboardWillChange:(id)arg0 isShow:(BOOL)arg1;
- (void)trackClearPhoneNumberFromDeleteTypeString:(id)arg0;
- (void)setNeedRemoveBackgroundColor:(BOOL)arg0;
- (void)addTapGestureRecognizer;
- (BOOL)needRemoveBackgroundColor;
- (void)clickOtherLoginTextButtonWithView:(id)arg0;
- (void)clickPasswordLoginTextButtonWithView:(id)arg0;
- (void)didClickInputClearButton:(id)arg0 deleteTypeString:(id)arg1;
- (void)appearAgainAfterCancelOtherLogin;
- (void)hideOtherLoginViewAfterSSOLogin:(id /* block */)arg0;
- (void)trackLoginSubmit:(unsigned long long)arg0;
- (void)trackLoginFail:(id)arg0 platform:(unsigned long long)arg1;
- (void)turnNextStep2Page:(id)arg0;
- (void)disappearAnimation;
- (id)otherLoginActionSheet;
- (id)trackThirdForms;
- (void)appearAnimation;
- (void)setOtherLoginActionSheet:(id)arg0;
- (void)setTrackThirdForms:(id)arg0;
- (void)handleError:(id)arg0;
- (void)dismiss;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)setContainerView:(id)arg0;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (id)containerView;
- (void)setBackAction:(id /* block */)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (void)viewDidLoad;
- (id)backButton;
- (void)setBackButton:(id)arg0;
- (id /* block */)backAction;
- (void)setupUI;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (id)extraInfo;

@end
