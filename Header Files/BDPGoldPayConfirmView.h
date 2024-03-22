//
//     Generated by private class-dump
//

@class BDPCloseButton, NSString, UIView, BDPCheckBox, UIImageView, UIButton, BDPGoldPrivacyButton, BDPGoldIconView, UILabel;

@interface BDPGoldPayConfirmView : UIView {
    id _delegate;
    unsigned long long _goldNum;
    NSString *_info;
    unsigned long long _type;
    UIView *_confirmView;
    UIImageView *_bgImage;
    BDPCloseButton *_closeButton;
    UILabel *_titleLabel;
    BDPGoldPrivacyButton *_privacyButton;
    UIButton *_linkButton;
    UIView *_goldBoxView;
    BDPGoldIconView *_goldIcon;
    UILabel *_goldNumLabel;
    UILabel *_infoLabel;
    UIButton *_confirmButton;
    BDPCheckBox *_checkBox;
    UILabel *_checkBoxLabel;
    UIView *_privacyView;
}

@property (weak, nonatomic) id delegate;
@property (nonatomic) unsigned long long goldNum;
@property (copy, nonatomic) NSString *info;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) UIView *confirmView;
@property (retain, nonatomic) UIImageView *bgImage;
@property (retain, nonatomic) BDPCloseButton *closeButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) BDPGoldPrivacyButton *privacyButton;
@property (retain, nonatomic) UIButton *linkButton;
@property (retain, nonatomic) UIView *goldBoxView;
@property (retain, nonatomic) BDPGoldIconView *goldIcon;
@property (retain, nonatomic) UILabel *goldNumLabel;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) BDPCheckBox *checkBox;
@property (retain, nonatomic) UILabel *checkBoxLabel;
@property (retain, nonatomic) UIView *privacyView;

- (void)setCheckBox:(id)arg0;
- (id)checkBox;
- (id)initWithGoldNum:(unsigned long long)arg0 info:(id)arg1 type:(unsigned long long)arg2 delegate:(id)arg3;
- (void)setConfirmView:(id)arg0;
- (id)confirmView;
- (void)didClickClose;
- (void)setGoldNum:(unsigned long long)arg0;
- (void)setupLayoutForConfirmView;
- (id)privacyButton;
- (id)goldBoxView;
- (id)goldIcon;
- (id)goldNumLabel;
- (id)checkBoxLabel;
- (double)safeBottom;
- (void)drawTopLeftAndRightCorner:(id)arg0;
- (void)didClickPrivacy;
- (unsigned long long)goldNum;
- (void)didClickConfirm;
- (void)didClickPrivacyBack;
- (void)didClickPrivacyLink;
- (void)setupLayoutForPrivacyView;
- (void)setPrivacyButton:(id)arg0;
- (void)setGoldBoxView:(id)arg0;
- (void)setGoldIcon:(id)arg0;
- (void)setGoldNumLabel:(id)arg0;
- (void)setCheckBoxLabel:(id)arg0;
- (id)info;
- (void).cxx_destruct;
- (id)titleLabel;
- (unsigned long long)type;
- (void)setInfo:(id)arg0;
- (void)setType:(unsigned long long)arg0;
- (id)delegate;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (id)linkButton;
- (void)setupUI;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (void)setLinkButton:(id)arg0;
- (id)privacyView;
- (void)setPrivacyView:(id)arg0;
- (id)infoLabel;
- (void)setInfoLabel:(id)arg0;
- (void)setupLayout;
- (void)setBgImage:(id)arg0;
- (id)bgImage;

@end
