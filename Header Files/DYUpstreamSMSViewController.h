//
//     Generated by private class-dump
//

@class DYUserVerifyUpstreamSMSModel, NSString, AWEUITextLoadingView, AWELoginButton, UILabel, UIButton;

@interface DYUpstreamSMSViewController : UIViewController {
    NSString *_enterUrl;
    id /* block */ _completionBlock;
    AWELoginButton *_backButton;
    UILabel *_titleLabel;
    UILabel *_hintLabel;
    UILabel *_firstTipNameLabel;
    UILabel *_firstTipValueLabel;
    UILabel *_secondTipNameLabel;
    UIButton *_secondTipValueLabel;
    UIButton *_submitBtn;
    UIButton *_editSMSBtn;
    UIButton *_faqBtn;
    UILabel *_tipLabel;
    unsigned long long _countdown;
    AWEUITextLoadingView *_loadingView;
    DYUserVerifyUpstreamSMSModel *_model;
}

@property (retain, nonatomic) AWELoginButton *backButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) UILabel *firstTipNameLabel;
@property (retain, nonatomic) UILabel *firstTipValueLabel;
@property (retain, nonatomic) UILabel *secondTipNameLabel;
@property (retain, nonatomic) UIButton *secondTipValueLabel;
@property (retain, nonatomic) UIButton *submitBtn;
@property (retain, nonatomic) UIButton *editSMSBtn;
@property (retain, nonatomic) UIButton *faqBtn;
@property (retain, nonatomic) UILabel *tipLabel;
@property (nonatomic) unsigned long long countdown;
@property (retain, nonatomic) AWEUITextLoadingView *loadingView;
@property (retain, nonatomic) DYUserVerifyUpstreamSMSModel *model;
@property (copy, nonatomic) NSString *enterUrl;
@property (copy, nonatomic) id /* block */ completionBlock;

- (void)countDown:(id)arg0;
- (void)backAction:(id)arg0;
- (id)submitBtn;
- (void)setSubmitBtn:(id)arg0;
- (void)submitAction:(id)arg0;
- (id)firstTipValueLabel;
- (id)secondTipValueLabel;
- (id)firstTipNameLabel;
- (id)secondTipNameLabel;
- (id)editSMSBtn;
- (id)faqBtn;
- (void)updateSubmitButtonWithCountdown:(unsigned long long)arg0;
- (BOOL)copyPhoneNumberToClipboard;
- (void)editSMSAction:(id)arg0;
- (void)faqAction:(id)arg0;
- (void)realSubmitActionWithCompletion:(id /* block */)arg0;
- (void)setFirstTipNameLabel:(id)arg0;
- (void)setFirstTipValueLabel:(id)arg0;
- (void)setSecondTipNameLabel:(id)arg0;
- (void)setSecondTipValueLabel:(id)arg0;
- (void)setEditSMSBtn:(id)arg0;
- (void)setFaqBtn:(id)arg0;
- (id)enterUrl;
- (void)setEnterUrl:(id)arg0;
- (struct CGSize { double x0; double x1; })sizeForText:(id)arg0 Font:(id)arg1 maxWidth:(double)arg2;
- (id)initWithModel:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id /* block */)completionBlock;
- (id)model;
- (id)titleLabel;
- (void)setCompletionBlock:(id /* block */)arg0;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (id)backButton;
- (void)setBackButton:(id)arg0;
- (id)tipLabel;
- (void)setTipLabel:(id)arg0;
- (unsigned long long)countdown;
- (void)setCountdown:(unsigned long long)arg0;
- (id)hintLabel;
- (void)setHintLabel:(id)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;

@end