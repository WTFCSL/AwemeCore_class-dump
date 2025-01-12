//
//     Generated by private class-dump
//

@class NSString, UIImageView, DUXButton, UILabel, UIButton;

@interface AWEModernElderModeSettingViewController : UIViewController <AWERouterViewControllerProtocol> {
    NSString *_enterFrom;
    UIImageView *_bgImageView;
    UILabel *_titleLabel;
    UILabel *_tipsLabel;
    UIButton *_ensureButton;
    DUXButton *_delayEffectButton;
}

@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIButton *ensureButton;
@property (retain, nonatomic) DUXButton *delayEffectButton;
@property (readonly, copy, nonatomic) NSString *referString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referString;
- (void)setEnterFrom:(id)arg0;
- (BOOL)configWithRouterParamDict:(id)arg0;
- (id)enterFrom;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg0;
- (void)__setupUI;
- (id)ensureButton;
- (void)setEnsureButton:(id)arg0;
- (void)__trackEnterElderModeSetting;
- (id)delayEffectButton;
- (void)__trackElderModeStatusButtonClick;
- (void)__ensureButtonClicked;
- (void)delayEffectButtonDidClick;
- (void)setDelayEffectButton:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (void)setBgImageView:(id)arg0;
- (id)bgImageView;

@end
