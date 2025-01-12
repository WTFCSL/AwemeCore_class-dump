//
//     Generated by private class-dump
//

@class UIStackView, UIView, UIImageView, UIButton, CJPayAccountInsuranceTipView, CJPayStyleButton, CJPayBioPaymentInfo, UILabel;
@protocol CJPayOpenBioGuideViewDelegate;

@interface CJPayOpenBioGuideView : UIView {
    id<CJPayOpenBioGuideViewDelegate> _delegate;
    UIImageView *_bioImgView;
    UIView *_bioImgBackgroundView;
    UILabel *_titleLabel;
    CJPayStyleButton *_openBiopaymentBtn;
    UIButton *_ignoreBtn;
    CJPayBioPaymentInfo *_biopaymentInfo;
    UIStackView *_tipsStackView;
    CJPayAccountInsuranceTipView *_safeGuardTipView;
}

@property (retain, nonatomic) UIImageView *bioImgView;
@property (retain, nonatomic) UIView *bioImgBackgroundView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) CJPayStyleButton *openBiopaymentBtn;
@property (retain, nonatomic) UIButton *ignoreBtn;
@property (retain, nonatomic) CJPayBioPaymentInfo *biopaymentInfo;
@property (retain, nonatomic) UIStackView *tipsStackView;
@property (retain, nonatomic) CJPayAccountInsuranceTipView *safeGuardTipView;
@property (weak, nonatomic) id<CJPayOpenBioGuideViewDelegate> delegate;

- (void)setBtnTitle:(id)arg0;
- (id)tipsStackView;
- (void)setTipsStackView:(id)arg0;
- (id)safeGuardTipView;
- (void)setSafeGuardTipView:(id)arg0;
- (void)startBtnLoading;
- (void)stopBtnLoading;
- (id)initWithBioInfo:(id)arg0;
- (void)setBiopaymentInfo:(id)arg0;
- (void)p_setupUIForNewStyle;
- (id)openBiopaymentBtn;
- (void)setOpenBiopaymentBtn:(id)arg0;
- (void)p_tapOpenBio;
- (id)bioImgView;
- (void)p_makeConstraintsForNewStyle;
- (void)p_updateContentForNewStyle;
- (void)p_addImgBackgroundView;
- (id)biopaymentInfo;
- (id)bioImgBackgroundView;
- (void)p_tapIgnore;
- (void)setBioImgView:(id)arg0;
- (void)setBioImgBackgroundView:(id)arg0;
- (id)ignoreBtn;
- (void)setIgnoreBtn:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setTitleLabel:(id)arg0;

@end
