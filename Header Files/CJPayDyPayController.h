//
//     Generated by private class-dump
//

@class CJPayFrontCashierContext, NSString, CJPayNavigationController, CJPayDyPayVerifyManager, CJPayDyPayVerifyManagerQueen;

@interface CJPayDyPayController : NSObject <CJPayHomeVCProtocol, CJPayChooseDyPayMethodDelegate, CJPayBaseLoadingProtocol> {
    BOOL _isPayOuterMerchant;
    BOOL _isNotSufficientNewStyle;
    BOOL _isCreditPayActiveSuccess;
    BOOL _isCloseFromRetain;
    CJPayDyPayVerifyManager *_verifyManager;
    CJPayFrontCashierContext *_payContext;
    CJPayDyPayVerifyManagerQueen *_verifyManagerQueen;
    CJPayNavigationController *_navigationController;
    id /* block */ _completion;
    long long _creditPayActivationResultType;
    double _startloadingTime;
    double _stoploadingTime;
    double _enterTimestamp;
    CJPayFrontCashierContext *_bindcardPayContext;
    CJPayFrontCashierContext *_signCardPayContext;
    NSString *_outerAppName;
    NSString *_outerAppID;
}

@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) CJPayNavigationController *navigationController;
@property (readonly, nonatomic) BOOL isNotSufficientNewStyle;
@property (nonatomic) BOOL isCreditPayActiveSuccess;
@property (nonatomic) long long creditPayActivationResultType;
@property (nonatomic) double startloadingTime;
@property (nonatomic) double stoploadingTime;
@property (nonatomic) double enterTimestamp;
@property (retain, nonatomic) CJPayFrontCashierContext *bindcardPayContext;
@property (retain, nonatomic) CJPayFrontCashierContext *signCardPayContext;
@property (copy, nonatomic) NSString *outerAppName;
@property (copy, nonatomic) NSString *outerAppID;
@property (readonly, nonatomic) BOOL isCloseFromRetain;
@property (retain, nonatomic) CJPayDyPayVerifyManager *verifyManager;
@property (retain, nonatomic) CJPayFrontCashierContext *payContext;
@property (retain, nonatomic) CJPayDyPayVerifyManagerQueen *verifyManagerQueen;
@property (nonatomic) BOOL isPayOuterMerchant;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)enterTimestamp;
- (void)setEnterTimestamp:(double)arg0;
- (id)topVC;
- (id)verifyManager;
- (void)setVerifyManager:(id)arg0;
- (void)setPayContext:(id)arg0;
- (id)payContext;
- (void)p_callbackResultWithSource:(unsigned long long)arg0;
- (void)showState:(long long)arg0;
- (id)curSelectConfig;
- (id)createOrderResponse;
- (void)push:(id)arg0 animated:(BOOL)arg1;
- (BOOL)receiveDataBus:(unsigned long long)arg0 obj:(id)arg1;
- (unsigned long long)firstVerifyType;
- (void)endVerifyWithResultResponse:(id)arg0;
- (void)closeActionAfterTime:(double)arg0 closeActionSource:(unsigned long long)arg1;
- (id)verifyManagerQueen;
- (void)p_sendRequestToEnableBioPaymentWithCompletion:(id /* block */)arg0;
- (void)setVerifyManagerQueen:(id)arg0;
- (id)creditPayInstallment;
- (void)p_combinePayLimitWithModel:(id)arg0;
- (void)changePayMethod:(id)arg0 loadingView:(id)arg1;
- (void)signPayWithPayContext:(id)arg0 loadingView:(id)arg1;
- (id)payContextExtParams;
- (id)outerAppName;
- (void)p_pay;
- (void)p_bindCardAndPay;
- (BOOL)isCreditPayActiveSuccess;
- (void)setIsCreditPayActiveSuccess:(BOOL)arg0;
- (void)p_endVerifyWithResultResponse:(id)arg0;
- (void)setStoploadingTime:(double)arg0;
- (void)p_trackConsumeTime;
- (double)stoploadingTime;
- (double)startloadingTime;
- (void)p_cancelVerifyWithType:(unsigned long long)arg0;
- (void)p_signCardAndPayFailedWithMessage:(id)arg0;
- (BOOL)p_isPasswordV3Style;
- (void)setStartloadingTime:(double)arg0;
- (BOOL)isPayOuterMerchant;
- (void)setIsPayOuterMerchant:(BOOL)arg0;
- (void)setBindcardPayContext:(id)arg0;
- (id)bindcardPayContext;
- (void)p_callbackQueryResultWithResponse:(id)arg0;
- (void)p_refreshCreateOrderWithParams:(id)arg0 isHiddenToast:(BOOL)arg1;
- (void)setSignCardPayContext:(id)arg0;
- (id)signCardPayContext;
- (void)p_payFailWithData:(id)arg0;
- (void)p_userCancelRiskVerify:(id)arg0;
- (void)p_dismissAllVCWithCloseActionSource:(unsigned long long)arg0 completion:(id /* block */)arg1;
- (void)p_tryShowResultPageAndGuidePageWithResponse:(id)arg0;
- (void)startPaymentWithParams:(id)arg0 createOrderResponse:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)p_creditPay;
- (void)p_activateCreditAndPay;
- (void)p_activateCreditFailedWithAmountNotSufficient;
- (BOOL)isNotSufficientNewStyle;
- (long long)creditPayActivationResultType;
- (void)setCreditPayActivationResultType:(long long)arg0;
- (void)setOuterAppName:(id)arg0;
- (id)outerAppID;
- (void)setOuterAppID:(id)arg0;
- (BOOL)isCloseFromRetain;
- (void)stopLoading;
- (id)init;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)startLoading;
- (void)setCompletion:(id /* block */)arg0;
- (void)setNavigationController:(id)arg0;
- (id)navigationController;

@end
