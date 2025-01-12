//
//     Generated by private class-dump
//

@class UIView, BDNovelCommonVipHelpContainerViewV2, BDNovelCommonVipInfoViewV2, BDNovelCommonVipBookListView, NSString, UIImageView, BDNovelCommonVipPriceViewV2, UIButton, BDNovelCommonVipPayViewV2, BDNovelCommonVipRightContainerView, UILabel, UIScrollView;

@interface BDNovelCommonVipContentViewV2 : BDNovelCommonVipBaseContentView <BDNovelCommonVipPriceViewDelegate, UIScrollViewDelegate, BDNovelUIThemeProtocol, BDNovelCommonVipHelpContainerViewV2Delegate> {
    BOOL _payButtonViewBottomVisible;
    UIImageView *_backgroundImageView;
    UIScrollView *_scrollView;
    UIView *_topBarView;
    UIButton *_backButton;
    UILabel *_titleLabel;
    UIButton *_openVipHistoryButton;
    BDNovelCommonVipInfoViewV2 *_vipInfoView;
    UIView *_bottomBackgroundView;
    UIView *_bottomView;
    BDNovelCommonVipPriceViewV2 *_priceView;
    BDNovelCommonVipPayViewV2 *_payButtonView;
    BDNovelCommonVipRightContainerView *_vipRightView;
    BDNovelCommonVipHelpContainerViewV2 *_helpView;
    BDNovelCommonVipBookListView *_bookView;
    BDNovelCommonVipPayViewV2 *_payButtonViewBottom;
    UIView *_darkView;
}

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *topBarView;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *openVipHistoryButton;
@property (retain, nonatomic) BDNovelCommonVipInfoViewV2 *vipInfoView;
@property (retain, nonatomic) UIView *bottomBackgroundView;
@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) BDNovelCommonVipPriceViewV2 *priceView;
@property (retain, nonatomic) BDNovelCommonVipPayViewV2 *payButtonView;
@property (retain, nonatomic) BDNovelCommonVipRightContainerView *vipRightView;
@property (retain, nonatomic) BDNovelCommonVipHelpContainerViewV2 *helpView;
@property (retain, nonatomic) BDNovelCommonVipBookListView *bookView;
@property (retain, nonatomic) BDNovelCommonVipPayViewV2 *payButtonViewBottom;
@property (nonatomic) BOOL payButtonViewBottomVisible;
@property (retain, nonatomic) UIView *darkView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)drawRadialGradient:(struct CGContext { } *)arg0 path:(struct CGPath { } *)arg1 startColor:(struct CGColor { } *)arg2 endColor:(struct CGColor { } *)arg3;
+ (id)getRadialGradientImage:(id)arg0 and:(id)arg1 option:(struct CGSize { double x0; double x1; })arg2;

- (BOOL)isVip;
- (void)didThemeChanged:(BOOL)arg0 userInfo:(id)arg1;
- (void)setupViewColor;
- (id)vipInfoView;
- (void)setPriceView:(id)arg0;
- (void)setPayButtonView:(id)arg0;
- (id)payButtonView;
- (void)setPayButtonViewBottom:(id)arg0;
- (id)payButtonViewBottom;
- (void)setVipRightView:(id)arg0;
- (void)setHelpView:(id)arg0;
- (void)setBookView:(id)arg0;
- (void)setDarkView:(id)arg0;
- (void)updateDarkView;
- (void)setBottomBackgroundView:(id)arg0;
- (void)setVipInfoView:(id)arg0;
- (void)onBackClick;
- (void)onOpenVipHistory;
- (void)setOpenVipHistoryButton:(id)arg0;
- (id)bottomBackgroundView;
- (id)openVipHistoryButton;
- (id)priceView;
- (id)vipRightView;
- (id)bookView;
- (id)helpView;
- (id)darkView;
- (void)layoutBottomSubView;
- (void)updateBookViewShowHeight;
- (void)beginDiscountAnimation:(BOOL)arg0;
- (BOOL)payButtonViewBottomVisible;
- (void)setPayButtonViewBottomVisible:(BOOL)arg0;
- (void)onRestoreAction;
- (void)priceViewDidSelect;
- (long long)currentSelect;
- (BOOL)loginIfNeed;
- (void)onRechargeButtonClick;
- (void)updatePayButtonBottomState;
- (void)priceViewCountDownEndAction;
- (void)setScrollView:(id)arg0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg0;
- (id)backgroundImageView;
- (id)titleLabel;
- (void)scrollViewDidScroll:(id)arg0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setTitleLabel:(id)arg0;
- (id)backButton;
- (id)scrollView;
- (void)setBackButton:(id)arg0;
- (id)bottomView;
- (void)setupViews;
- (void)setBottomView:(id)arg0;
- (void)setBackgroundImageView:(id)arg0;
- (void)updateWithViewModel:(id)arg0;
- (id)topBarView;
- (void)setTopBarView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 viewModel:(id)arg1;
- (void)setupTitleView;

@end
