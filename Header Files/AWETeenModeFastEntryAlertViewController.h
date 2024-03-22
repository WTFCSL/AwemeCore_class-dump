//
//     Generated by private class-dump
//

@class NSString, UILabel, UIView, UIButton;
@protocol AFDModalViewHelperProtocol;

@interface AWETeenModeFastEntryAlertViewController : UIViewController <AWEPanelTransitionWithBackground> {
    id /* block */ _confirmBlock;
    id<AFDModalViewHelperProtocol> _helper;
    UIView *_lineView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIButton *_settingBtn;
    UIView *_buttonContainerView;
    UIButton *_cancelBtn;
    UIButton *_confirmBtn;
    UIView *_contentView;
}

@property (retain, nonatomic) id<AFDModalViewHelperProtocol> helper;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIButton *settingBtn;
@property (retain, nonatomic) UIView *buttonContainerView;
@property (retain, nonatomic) UIButton *cancelBtn;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) UIView *contentView;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)wantsDimmingTransitionBackground;
- (void)transitionBackgroundViewTapped:(id)arg0;
- (id)descLabel;
- (void)setDescLabel:(id)arg0;
- (id /* block */)confirmBlock;
- (id)confirmBtn;
- (id)cancelBtn;
- (void)setConfirmBtn:(id)arg0;
- (void)setCancelBtn:(id)arg0;
- (void)setConfirmBlock:(id /* block */)arg0;
- (void)trackEventWithActionType:(id)arg0;
- (id)settingBtn;
- (void)didClickSettingBtn;
- (void)didClickCancelBtn;
- (void)didClickConfirmBtn;
- (void)trackEventForEnterSettingPage;
- (void)dissmissWithCompletion:(id /* block */)arg0;
- (void)trackEventForOpenTeenMode;
- (void)setSettingBtn:(id)arg0;
- (id)init;
- (void)dismiss;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (void)setHelper:(id)arg0;
- (id)titleLabel;
- (id)helper;
- (id)contentView;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (void)setContentView:(id)arg0;
- (id)lineView;
- (void)setLineView:(id)arg0;
- (void)setupUI;
- (id)buttonContainerView;
- (void)setButtonContainerView:(id)arg0;

@end
