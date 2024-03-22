//
//     Generated by private class-dump
//

@class DUXAbandonedButton, AFDModalViewHelper, NSString, UIViewController, DUXActionSheet, UIButton;

@interface AFDSetSchoolPopupViewController : UIViewController <AWEPanelTransitionWithBackground, DUXActionSheetDelegate> {
    BOOL _wantsDimmingBackground;
    BOOL _wantsShowLoading;
    AFDModalViewHelper *_helper;
    UIButton *_selectSchoolButton;
    DUXAbandonedButton *_confirmButton;
    id /* block */ _schoolUpdateCallback;
    id /* block */ _userSettingDisabledCallBack;
    NSString *_schoolName;
    NSString *_comment;
    UIViewController *_sourceViewController;
    DUXActionSheet *_disableSheet;
    DUXActionSheet *_confirmSheet;
    NSString *_enterFrom;
}

@property (retain, nonatomic) AFDModalViewHelper *helper;
@property (retain, nonatomic) UIButton *selectSchoolButton;
@property (retain, nonatomic) DUXAbandonedButton *confirmButton;
@property (copy, nonatomic) id /* block */ schoolUpdateCallback;
@property (copy, nonatomic) id /* block */ userSettingDisabledCallBack;
@property (copy, nonatomic) NSString *schoolName;
@property (copy, nonatomic) NSString *comment;
@property (nonatomic) BOOL wantsDimmingBackground;
@property (nonatomic) BOOL wantsShowLoading;
@property (weak, nonatomic) UIViewController *sourceViewController;
@property (retain, nonatomic) DUXActionSheet *disableSheet;
@property (retain, nonatomic) DUXActionSheet *confirmSheet;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showIfNeededWithDimmingBackground:(BOOL)arg0 shouldShowLoading:(BOOL)arg1 ignoreFrequencyControl:(BOOL)arg2 enterFrom:(id)arg3 shown:(id /* block */)arg4 schoolUpdate:(id /* block */)arg5 userSettingDisabled:(id /* block */)arg6;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (BOOL)wantsDimmingTransitionBackground;
- (void)transitionBackgroundViewTapped:(id)arg0;
- (void)actionSheet:(id)arg0 didClickButtonAtIndex:(long long)arg1;
- (void)actionSheetDidClickCancelButton:(id)arg0;
- (void)actionSheetDidClickMaskArea:(id)arg0;
- (void)setSchoolName:(id)arg0;
- (void)p_updateUI;
- (void)p_setupViews;
- (void)p_closeAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)setWantsDimmingBackground:(BOOL)arg0;
- (void)setSchoolUpdateCallback:(id /* block */)arg0;
- (void)setUserSettingDisabledCallBack:(id /* block */)arg0;
- (void)setWantsShowLoading:(BOOL)arg0;
- (void)p_safeShowAnimated:(BOOL)arg0 withCompletion:(id /* block */)arg1;
- (id)disableSheet;
- (void)p_disableUserSettingWithCompletion:(id /* block */)arg0;
- (id)confirmSheet;
- (void)p_updateSchoolWithCompletion:(id /* block */)arg0;
- (BOOL)wantsDimmingBackground;
- (id)selectSchoolButton;
- (void)p_showConfirmSheet;
- (BOOL)wantsShowLoading;
- (id /* block */)schoolUpdateCallback;
- (void)p_showDisableConfirmSheet;
- (id /* block */)userSettingDisabledCallBack;
- (void)p_close:(id)arg0;
- (void)p_selectSchool:(id)arg0;
- (void)setSelectSchoolButton:(id)arg0;
- (void)p_confirm:(id)arg0;
- (void)p_disable:(id)arg0;
- (void)setDisableSheet:(id)arg0;
- (void)setConfirmSheet:(id)arg0;
- (id)init;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (void)setHelper:(id)arg0;
- (void)setSourceViewController:(id)arg0;
- (id)helper;
- (id)sourceViewController;
- (id)comment;
- (void)viewDidLoad;
- (void)setComment:(id)arg0;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg0;
- (id)schoolName;

@end