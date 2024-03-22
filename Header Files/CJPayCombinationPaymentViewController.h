//
//     Generated by private class-dump
//

@class CJPayDefaultChannelShowConfig, CJPayBytePayMethodView, CJPayIntegratedCashierProcessManager, NSArray, NSString, CJPayCreateOrderResponse, NSDictionary, CJPayStyleButton, UIViewController, CJPayCombinationPaymentAmountView, NSMutableArray;
@protocol CJPayMethodTableViewDelegate;

@interface CJPayCombinationPaymentViewController : CJPayHalfPageBaseViewController <CJPayMethodTableViewDelegate, CJPayBaseLoadingProtocol> {
    BOOL _showNotSufficientFundsHeaderLabel;
    id<CJPayMethodTableViewDelegate> _delegate;
    id /* block */ _payBlock;
    NSDictionary *_commonTrackerParams;
    unsigned long long _type;
    unsigned long long _combineType;
    NSMutableArray *_notSufficientFundsIDs;
    CJPayCombinationPaymentAmountView *_combinationPaymentAmountView;
    CJPayBytePayMethodView *_payMethodView;
    CJPayStyleButton *_confirmPayBtn;
    CJPayIntegratedCashierProcessManager *_processManager;
    UIViewController *_homeVC;
    CJPayDefaultChannelShowConfig *_defaultConfig;
    CJPayCreateOrderResponse *_response;
    NSArray *_bizModels;
    long long _balanceAmount;
    long long _incomeAmount;
    long long _bankCardAmount;
    long long _loadingType;
}

@property (retain, nonatomic) CJPayCombinationPaymentAmountView *combinationPaymentAmountView;
@property (retain, nonatomic) CJPayBytePayMethodView *payMethodView;
@property (retain, nonatomic) CJPayStyleButton *confirmPayBtn;
@property (retain, nonatomic) CJPayIntegratedCashierProcessManager *processManager;
@property (weak, nonatomic) UIViewController *homeVC;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *defaultConfig;
@property (retain, nonatomic) CJPayCreateOrderResponse *response;
@property (copy, nonatomic) NSArray *bizModels;
@property (nonatomic) long long balanceAmount;
@property (nonatomic) long long incomeAmount;
@property (nonatomic) long long bankCardAmount;
@property (nonatomic) long long loadingType;
@property (weak, nonatomic) id<CJPayMethodTableViewDelegate> delegate;
@property (copy, nonatomic) id /* block */ payBlock;
@property (copy, nonatomic) NSDictionary *commonTrackerParams;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long combineType;
@property (nonatomic) BOOL showNotSufficientFundsHeaderLabel;
@property (retain, nonatomic) NSMutableArray *notSufficientFundsIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSelectAtIndex:(int)arg0;
- (void)p_setupUI;
- (long long)loadingType;
- (void)setLoadingType:(long long)arg0;
- (id)bizModels;
- (void)setBizModels:(id)arg0;
- (void)p_trackWithEventName:(id)arg0 params:(id)arg1;
- (void)showState:(long long)arg0;
- (void)setNotSufficientFundsIDs:(id)arg0;
- (id)confirmPayBtn;
- (void)setConfirmPayBtn:(id)arg0;
- (void)p_onConfirmPayAction;
- (void)p_updateWithResponse:(id)arg0;
- (id)p_buildPayMethodModels;
- (void)p_updatePayMethodView;
- (id)payMethodView;
- (id)notSufficientFundsIDs;
- (void)p_reloadCurrentView;
- (void)setPayMethodView:(id)arg0;
- (BOOL)showNotSufficientFundsHeaderLabel;
- (void)setCombineType:(unsigned long long)arg0;
- (id)commonTrackerParams;
- (void)notifyNotsufficient:(id)arg0;
- (void)setShowNotSufficientFundsHeaderLabel:(BOOL)arg0;
- (void)setCommonTrackerParams:(id)arg0;
- (id)homeVC;
- (void)setHomeVC:(id)arg0;
- (void)updateSelectConfig:(id)arg0;
- (id)getShouldShowConfigs;
- (id)initWithOrderResponse:(id)arg0 defaultConfig:(id)arg1 processManager:(id)arg2 type:(unsigned long long)arg3;
- (void)setPayBlock:(id /* block */)arg0;
- (long long)bankCardAmount;
- (void)p_bindCardSuccess:(id)arg0;
- (void)p_setupAmount;
- (id)combinationPaymentAmountView;
- (long long)incomeAmount;
- (void)setBankCardAmount:(long long)arg0;
- (id)p_curSelectConfig;
- (id /* block */)payBlock;
- (void)setCombinationPaymentAmountView:(id)arg0;
- (void)setIncomeAmount:(long long)arg0;
- (void)stopLoading;
- (void).cxx_destruct;
- (void)startLoading;
- (void)setResponse:(id)arg0;
- (void)setProcessManager:(id)arg0;
- (id)processManager;
- (unsigned long long)type;
- (id)response;
- (void)setType:(unsigned long long)arg0;
- (id)delegate;
- (id)defaultConfig;
- (void)viewWillAppear:(BOOL)arg0;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (long long)balanceAmount;
- (void)setBalanceAmount:(long long)arg0;
- (unsigned long long)combineType;
- (void)setDefaultConfig:(id)arg0;
- (void)back;

@end