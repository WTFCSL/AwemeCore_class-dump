//
//     Generated by private class-dump
//

@class UIImageView, UILabel, DUXButton;
@protocol AWEPOIOfflineScanInfoButtonsDelegate;

@interface AWEPOIOfflineScanInfoView : UIView {
    id<AWEPOIOfflineScanInfoButtonsDelegate> _buttonClickDelegate;
    UIImageView *_avatarView;
    UILabel *_nickNameLabel;
    UILabel *_descriptionLabel;
    UILabel *_priceTitleLabel;
    UILabel *_priceSubtitleLabel;
    UILabel *_couponTitleLabel;
    UILabel *_couponSubtitleLabel;
    DUXButton *_confirmButton;
    DUXButton *_cancelButton;
    UIImageView *_receivedIcon;
}

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UILabel *priceTitleLabel;
@property (retain, nonatomic) UILabel *priceSubtitleLabel;
@property (retain, nonatomic) UILabel *couponTitleLabel;
@property (retain, nonatomic) UILabel *couponSubtitleLabel;
@property (retain, nonatomic) DUXButton *confirmButton;
@property (retain, nonatomic) DUXButton *cancelButton;
@property (retain, nonatomic) UIImageView *receivedIcon;
@property (weak, nonatomic) id<AWEPOIOfflineScanInfoButtonsDelegate> buttonClickDelegate;

+ (id)aweCouponFormattedPriceWithOriginalPrice:(id)arg0;
+ (double)fontSizeOfPriceTitle:(id)arg0;

- (void)onCancel:(id)arg0;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg0;
- (void)setButtonClickDelegate:(id)arg0;
- (void)refreshViewWithModel:(id)arg0;
- (void)hideReceivedIcon:(BOOL)arg0;
- (void)updatePriceTitle:(id)arg0;
- (id)priceSubtitleLabel;
- (id)couponTitleLabel;
- (id)couponSubtitleLabel;
- (id)receivedIcon;
- (id)priceTitleLabel;
- (void)onConfirm:(id)arg0;
- (id)buttonClickDelegate;
- (void)setPriceTitleLabel:(id)arg0;
- (void)setPriceSubtitleLabel:(id)arg0;
- (void)setCouponTitleLabel:(id)arg0;
- (void)setCouponSubtitleLabel:(id)arg0;
- (void)setReceivedIcon:(id)arg0;
- (id)initWithModel:(id)arg0;
- (void)setCancelButton:(id)arg0;
- (void)setAvatarView:(id)arg0;
- (id)avatarView;
- (void).cxx_destruct;
- (id)cancelButton;
- (void)setDescriptionLabel:(id)arg0;
- (id)descriptionLabel;
- (void)setupUI;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg0;
- (void)setLoadingState:(BOOL)arg0;

@end