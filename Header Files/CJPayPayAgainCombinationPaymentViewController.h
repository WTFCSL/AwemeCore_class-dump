//
//     Generated by private class-dump
//

@class NSString, NSArray, CJPayBytePayMethodView, CJPayPayAgainViewModel, CJPayCreateOrderResponse, CJPayCombinationPaymentAmountView, NSDictionary;
@protocol CJPayPayAgainCombineChoosePayMethodDelegate;

@interface CJPayPayAgainCombinationPaymentViewController : CJPayHalfPageBaseViewController <CJPayMethodTableViewDelegate, CJPayBaseLoadingProtocol> {
    NSDictionary *_commonTrackerParams;
    unsigned long long _type;
    id<CJPayPayAgainCombineChoosePayMethodDelegate> _delegate;
    CJPayCombinationPaymentAmountView *_combinationPaymentAmountView;
    CJPayBytePayMethodView *_payMethodView;
    CJPayCreateOrderResponse *_response;
    CJPayPayAgainViewModel *_viewModel;
    NSArray *_subPayTypeInfoList;
    long long _balanceAmount;
    long long _incomeAmount;
    long long _bankCardAmount;
    long long _combinePayIndex;
    long long _loadingType;
}

@property (retain, nonatomic) CJPayCombinationPaymentAmountView *combinationPaymentAmountView;
@property (retain, nonatomic) CJPayBytePayMethodView *payMethodView;
@property (retain, nonatomic) CJPayCreateOrderResponse *response;
@property (retain, nonatomic) CJPayPayAgainViewModel *viewModel;
@property (copy, nonatomic) NSArray *subPayTypeInfoList;
@property (nonatomic) long long balanceAmount;
@property (nonatomic) long long incomeAmount;
@property (nonatomic) long long bankCardAmount;
@property (nonatomic) long long combinePayIndex;
@property (nonatomic) long long loadingType;
@property (copy, nonatomic) NSDictionary *commonTrackerParams;
@property (nonatomic) unsigned long long type;
@property (weak, nonatomic) id<CJPayPayAgainCombineChoosePayMethodDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSelectAtIndex:(int)arg0;
- (void)p_setupUI;
- (long long)loadingType;
- (void)setLoadingType:(long long)arg0;
- (id)subPayTypeInfoList;
- (void)p_trackWithEventName:(id)arg0 params:(id)arg1;
- (void)p_updateWithResponse:(id)arg0;
- (id)p_buildPayMethodModels;
- (id)payMethodView;
- (void)setPayMethodView:(id)arg0;
- (id)p_getShouldShowConfigs;
- (id)commonTrackerParams;
- (void)didSelectAtIndex:(int)arg0 methodCell:(id)arg1;
- (void)setCommonTrackerParams:(id)arg0;
- (long long)bankCardAmount;
- (void)p_bindCardSuccess:(id)arg0;
- (void)p_setupAmount;
- (id)combinationPaymentAmountView;
- (long long)incomeAmount;
- (void)setBankCardAmount:(long long)arg0;
- (void)setCombinationPaymentAmountView:(id)arg0;
- (void)setIncomeAmount:(long long)arg0;
- (void)setSubPayTypeInfoList:(id)arg0;
- (void)p_setupConfig;
- (void)setCombinePayIndex:(long long)arg0;
- (id)p_primaryCombineModelWithList:(id)arg0;
- (long long)combinePayIndex;
- (void)stopLoading;
- (void).cxx_destruct;
- (void)startLoading;
- (void)setResponse:(id)arg0;
- (id)initWithViewModel:(id)arg0;
- (unsigned long long)type;
- (id)response;
- (void)setViewModel:(id)arg0;
- (void)setType:(unsigned long long)arg0;
- (id)delegate;
- (id)viewModel;
- (void)viewWillAppear:(BOOL)arg0;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (long long)balanceAmount;
- (void)setBalanceAmount:(long long)arg0;
- (void)back;

@end
