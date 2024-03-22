//
//     Generated by private class-dump
//

@class DYLoginGuideAlertModel, DYAThemeModel, UIImageView, NSString, UILabel, UIView, UIButton;

@interface DYSMSLoginStep2HTSElderlyHalfViewController : DYSMSLoginStep2HalfViewController <UIGestureRecognizerDelegate> {
    BOOL _needRemoveBackgroundColor;
    UIButton *_backButton;
    UIView *_contentView;
    UILabel *_titleLabel;
    UIButton *_closeButton;
    UIView *_backWhiteView;
    UIImageView *_themeBGImageView;
    DYLoginGuideAlertModel *_alertModel;
    DYAThemeModel *_themeModel;
}

@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (nonatomic) BOOL needRemoveBackgroundColor;
@property (retain, nonatomic) UIView *backWhiteView;
@property (retain, nonatomic) UIImageView *themeBGImageView;
@property (weak, nonatomic) DYLoginGuideAlertModel *alertModel;
@property (retain, nonatomic) DYAThemeModel *themeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)backButtonClicked;
- (id)alertModel;
- (void)setAlertModel:(id)arg0;
- (id)themeModel;
- (void)setThemeModel:(id)arg0;
- (void)setupElderlyUIContent;
- (void)trackLoginExitWithIsReturn:(BOOL)arg0;
- (id)loginPanelTypeString;
- (id)themeBGImageView;
- (void)handleKeyboardWillChange:(id)arg0 isShow:(BOOL)arg1;
- (void)p_monitorLoadImage:(unsigned long long)arg0 duration:(double)arg1 imageURL:(id)arg2 imageType:(id)arg3 activityId:(id)arg4 error:(id)arg5;
- (void)p_monitorLoginGuideShow:(unsigned long long)arg0 method:(id)arg1 activityId:(id)arg2 error:(id)arg3;
- (void)setThemeBGImageView:(id)arg0;
- (void)changeLoginButtonBgColor;
- (void)setNeedRemoveBackgroundColor:(BOOL)arg0;
- (void)addTapGestureRecognizer;
- (BOOL)needRemoveBackgroundColor;
- (id)backWhiteView;
- (void)setBackWhiteView:(id)arg0;
- (void)handleLoginError:(id)arg0;
- (void)dismiss;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)contentView;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (void)viewWillLayoutSubviews;
- (id)backButton;
- (void)setBackButton:(id)arg0;
- (void)setContentView:(id)arg0;
- (void)setupUI;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;

@end
