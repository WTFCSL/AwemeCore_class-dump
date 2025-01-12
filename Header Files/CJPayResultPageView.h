//
//     Generated by private class-dump
//

@class UIStackView, UIView, NSString, CJPayFullResultCardView, CJPayBDCreateOrderResponse, CJPayBDOrderResultResponse, CJPayCombinePayDetailView, CJPayAccountInsuranceTipView, CJPayButton, UILabel;
@protocol CJPayResultPageViewDelegate;

@interface CJPayResultPageView : UIView <CJPayLynxViewDelegate> {
    id<CJPayResultPageViewDelegate> _delegate;
    long long _resultPageType;
    id /* block */ _updateResultPageViewHeightBlock;
    CJPayCombinePayDetailView *_combinePayDetailView;
    UIStackView *_signDetailView;
    CJPayAccountInsuranceTipView *_safeGuardTipView;
    CJPayFullResultCardView *_payBannerView;
    CJPayButton *_backToMerchantButton;
    UILabel *_detailDescLabel;
    UILabel *_discountLabel;
    UILabel *_topLabel;
    UILabel *_guideLabel;
    UIView *_borderView;
    CJPayBDOrderResultResponse *_resultResponse;
    CJPayBDCreateOrderResponse *_createOrderResponse;
}

@property (retain, nonatomic) CJPayCombinePayDetailView *combinePayDetailView;
@property (retain, nonatomic) UIStackView *signDetailView;
@property (retain, nonatomic) CJPayAccountInsuranceTipView *safeGuardTipView;
@property (retain, nonatomic) CJPayFullResultCardView *payBannerView;
@property (retain, nonatomic) CJPayButton *backToMerchantButton;
@property (retain, nonatomic) UILabel *detailDescLabel;
@property (retain, nonatomic) UILabel *discountLabel;
@property (retain, nonatomic) UILabel *topLabel;
@property (retain, nonatomic) UILabel *guideLabel;
@property (retain, nonatomic) UIView *borderView;
@property (retain, nonatomic) CJPayBDOrderResultResponse *resultResponse;
@property (retain, nonatomic) CJPayBDCreateOrderResponse *createOrderResponse;
@property (weak, nonatomic) id<CJPayResultPageViewDelegate> delegate;
@property (nonatomic) long long resultPageType;
@property (copy, nonatomic) id /* block */ updateResultPageViewHeightBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDiscountLabel:(id)arg0;
- (id)discountLabel;
- (void)p_setupUI;
- (id)guideLabel;
- (void)setGuideLabel:(id)arg0;
- (void)lynxView:(id)arg0 receiveEvent:(id)arg1 withData:(id)arg2;
- (id)resultResponse;
- (void)setResultResponse:(id)arg0;
- (id)detailDescLabel;
- (void)setDetailDescLabel:(id)arg0;
- (id)safeGuardTipView;
- (void)setSafeGuardTipView:(id)arg0;
- (id)createOrderResponse;
- (void)setCreateOrderResponse:(id)arg0;
- (void)updateBannerContentWithModel:(id)arg0 benefitStr:(id)arg1 tradeNo:(id)arg2;
- (void)setResultPageType:(long long)arg0;
- (long long)resultPageType;
- (BOOL)p_isCombinePay;
- (void)hideSafeGuard;
- (id)initWithResultResponse:(id)arg0 createOrderResponse:(id)arg1;
- (void)setUpdateResultPageViewHeightBlock:(id /* block */)arg0;
- (id)combinePayDetailView;
- (void)setCombinePayDetailView:(id)arg0;
- (void)p_setDetailUIAndText;
- (void)p_updateDiscountText:(id)arg0 payTypeDescText:(id)arg1;
- (id)backToMerchantButton;
- (void)p_showBackToMerchantBtn;
- (void)p_tapBtmButton:(id)arg0;
- (void)setBackToMerchantButton:(id)arg0;
- (void)setPayBannerView:(id)arg0;
- (id)payBannerView;
- (void)p_updateContainerViewHeight;
- (void)p_updateCombinePayDetail:(id)arg0;
- (id)signDetailView;
- (id /* block */)updateResultPageViewHeightBlock;
- (void)p_showCombinePay;
- (void)p_showSignDetail;
- (void)p_showPayBanner;
- (id)p_buildCommonModelWithGuideModel:(id)arg0;
- (void)setSignDetailView:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)topLabel;
- (void)setTopLabel:(id)arg0;
- (id)borderView;
- (void)setBorderView:(id)arg0;

@end
