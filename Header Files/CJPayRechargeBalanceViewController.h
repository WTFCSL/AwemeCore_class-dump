//
//     Generated by private class-dump
//

@class UILabel, NSDictionary, CJPayButton, CJPayBDCreateOrderResponse, CJPayAccountInsuranceTipView, NSMutableArray, UIView, UIScrollView, CJPayRechargeMainView, NSString, CJPayBalanceRechargeController, CJPayLoadingButton, CJPayDefaultChannelShowConfig;

@interface CJPayRechargeBalanceViewController : CJPayThemeBaseViewController <CJPayBaseLoadingProtocol> {
    UIScrollView *_scrollView;
    UIView *_scrollContentView;
    CJPayRechargeMainView *_mainView;
    UILabel *_serviceTipsLabel;
    CJPayAccountInsuranceTipView *_safeGuardTipView;
    CJPayButton *_rechargeRecordButton;
    CJPayBDCreateOrderResponse *_orderResponse;
    id /* block */ _completion;
    NSDictionary *_bizParams;
    NSString *_bizUrl;
    CJPayDefaultChannelShowConfig *_defaultConfig;
    NSMutableArray *_notSufficientIds;
    CJPayBalanceRechargeController *_frontCashierController;
    CJPayBalanceRechargeController *_frontCashierCtrlFromCardList;
    CJPayLoadingButton *_confirmBtn;
    CJPayLoadingButton *_staticConfirmBtn;
    NSString *_memBizOrderNo;
}

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *scrollContentView;
@property (retain, nonatomic) CJPayRechargeMainView *mainView;
@property (retain, nonatomic) UILabel *serviceTipsLabel;
@property (retain, nonatomic) CJPayAccountInsuranceTipView *safeGuardTipView;
@property (retain, nonatomic) CJPayButton *rechargeRecordButton;
@property (retain, nonatomic) CJPayBDCreateOrderResponse *orderResponse;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) NSDictionary *bizParams;
@property (copy, nonatomic) NSString *bizUrl;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *defaultConfig;
@property (retain, nonatomic) NSMutableArray *notSufficientIds;
@property (retain, nonatomic) CJPayBalanceRechargeController *frontCashierController;
@property (retain, nonatomic) CJPayBalanceRechargeController *frontCashierCtrlFromCardList;
@property (retain, nonatomic) CJPayLoadingButton *confirmBtn;
@property (retain, nonatomic) CJPayLoadingButton *staticConfirmBtn;
@property (copy, nonatomic) NSString *memBizOrderNo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)cjAllowTransition;
- (id)confirmBtn;
- (void)setConfirmBtn:(id)arg0;
- (void)setMainView:(id)arg0;
- (id)bizParams;
- (void)setBizParams:(id)arg0;
- (void)appDidInBackground;
- (void)p_adapterTheme;
- (id)safeGuardTipView;
- (void)setSafeGuardTipView:(id)arg0;
- (id)orderResponse;
- (void)setOrderResponse:(id)arg0;
- (void)bindCardFromCardList:(id /* block */)arg0;
- (id)bizUrl;
- (void)setBizUrl:(id)arg0;
- (void)p_trackerWithEventName:(id)arg0 params:(id)arg1;
- (id)initWithBizParams:(id)arg0 bizurl:(id)arg1 response:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)p_bindCard:(id /* block */)arg0;
- (void)silentRefresh;
- (void)p_confirmClick;
- (id)rechargeRecordButton;
- (void)p_updateOrderResponse;
- (void)silentRefreshAndCheckVoucher:(id)arg0;
- (void)p_bindCardSuccessPreClose;
- (void)p_insertConfirmBtn;
- (void)p_becomeFirstResponder;
- (BOOL)p_isHitBindCardTest;
- (void)p_confirmPayWithBindCardAndPay:(BOOL)arg0 invokeFromCardList:(BOOL)arg1;
- (void)p_silentRefreshWithCheckVoucher:(BOOL)arg0;
- (void)setMemBizOrderNo:(id)arg0;
- (id)staticConfirmBtn;
- (id)p_buildBizParams:(id)arg0 isNeedCheckVoucher:(BOOL)arg1;
- (id)frontCashierController;
- (void)tapContent;
- (void)p_trackPromotionWithEvent:(id)arg0 param:(id)arg1;
- (void)gotoChooseCard;
- (void)p_updateConfirmBtnState;
- (id)p_genConfirmBtn;
- (void)rechargeRecordClick;
- (id)serviceTipsLabel;
- (id)notSufficientIds;
- (id)p_baseTrackerParams;
- (void)p_trackCardSelectImp;
- (id)memBizOrderNo;
- (void)p_openNativeResultPageWithResponse:(id)arg0;
- (void)p_openLynxResultPageWithResponse:(id)arg0;
- (void)p_startPaymentWithContext:(id)arg0 isBindCardAndPay:(BOOL)arg1 invokeFromCardList:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)setFrontCashierCtrlFromCardList:(id)arg0;
- (void)setFrontCashierController:(id)arg0;
- (void)setServiceTipsLabel:(id)arg0;
- (void)setRechargeRecordButton:(id)arg0;
- (void)setNotSufficientIds:(id)arg0;
- (id)frontCashierCtrlFromCardList;
- (void)setStaticConfirmBtn:(id)arg0;
- (void)stopLoading;
- (void)setScrollView:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)startLoading;
- (void)setCompletion:(id /* block */)arg0;
- (id)scrollContentView;
- (void)keyboardWillShow:(id)arg0;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)keyboardWillHide;
- (id)defaultConfig;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (id)scrollView;
- (void)keyboardDidHide;
- (void)setupViews;
- (void)setScrollContentView:(id)arg0;
- (id)mainView;
- (void)appWillEnterForeground;
- (void)setDefaultConfig:(id)arg0;
- (void)back;

@end
