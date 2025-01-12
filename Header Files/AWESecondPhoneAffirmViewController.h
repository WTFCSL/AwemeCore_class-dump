//
//     Generated by private class-dump
//

@class NSString, UILabel, UIButton;

@interface AWESecondPhoneAffirmViewController : UIViewController <AWERouterViewControllerProtocol> {
    NSString *_phoneStr;
    UILabel *_regionTitleLabel;
    UILabel *_regionContentLabel;
    UILabel *_phoneTitleLabel;
    UILabel *_phoneContentLabel;
    UIButton *_confirmButton;
    UIButton *_changeButton;
}

@property (copy, nonatomic) NSString *phoneStr;
@property (retain, nonatomic) UILabel *regionTitleLabel;
@property (retain, nonatomic) UILabel *regionContentLabel;
@property (retain, nonatomic) UILabel *phoneTitleLabel;
@property (retain, nonatomic) UILabel *phoneContentLabel;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIButton *changeButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)arg0;
- (void)backBtnClick;
- (void)setPhoneStr:(id)arg0;
- (id)phoneStr;
- (id)regionTitleLabel;
- (id)regionContentLabel;
- (id)phoneTitleLabel;
- (id)phoneContentLabel;
- (void)didClickAtConfirmButton;
- (void)didClickAtChangeButton;
- (void)setRegionTitleLabel:(id)arg0;
- (void)setRegionContentLabel:(id)arg0;
- (void)setPhoneTitleLabel:(id)arg0;
- (void)setPhoneContentLabel:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupUI;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg0;
- (id)changeButton;
- (void)setChangeButton:(id)arg0;

@end
