//
//     Generated by private class-dump
//

@class CJPayNavigationController, CJPayDefaultChannelShowConfig, NSString, CJPayBDCreateOrderResponse, CJPayDouPayProcessVerifyManager, NSMutableDictionary, NSDictionary, CJPayDouPayProcessModel, CJPayDouPayProcessVerifyManagerQueen;

@interface CJPayDouPayProcessController : NSObject <CJPayHomeVCProtocol, CJPayChooseDyPayMethodDelegate, CJPayPayAgainDelegate, CJPayTrackerProtocol, CJPayDeskRouteDelegate> {
    BOOL _isHasCallBack;
    BOOL _isFeGuide;
    BOOL _isCreditPayActiveSuccess;
    BOOL _isGuidePagePush;
    CJPayDouPayProcessVerifyManager *_verifyManager;
    CJPayDouPayProcessVerifyManagerQueen *_verifyManagerQueen;
    CJPayDefaultChannelShowConfig *_currentShowConfig;
    CJPayBDCreateOrderResponse *_createResponse;
    id /* block */ _completionBlock;
    CJPayNavigationController *_navigationController;
    CJPayDouPayProcessModel *_configModel;
    unsigned long long _resultPageStyle;
    NSMutableDictionary *_payDisabledFundID2ReasonMap;
    NSDictionary *_extParams;
    CJPayDefaultChannelShowConfig *_bindCardShowConfig;
    CJPayDefaultChannelShowConfig *_signCardShowConfig;
    NSDictionary *_bindCardExtParams;
    double _startloadingTime;
    double _stoploadingTime;
    double _enterTimestamp;
}

@property (retain, nonatomic) CJPayDouPayProcessVerifyManager *verifyManager;
@property (retain, nonatomic) CJPayDouPayProcessVerifyManagerQueen *verifyManagerQueen;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *currentShowConfig;
@property (retain, nonatomic) CJPayBDCreateOrderResponse *createResponse;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) CJPayNavigationController *navigationController;
@property (retain, nonatomic) CJPayDouPayProcessModel *configModel;
@property (nonatomic) unsigned long long resultPageStyle;
@property (nonatomic) BOOL isHasCallBack;
@property (nonatomic) BOOL isFeGuide;
@property (retain, nonatomic) NSMutableDictionary *payDisabledFundID2ReasonMap;
@property (nonatomic) BOOL isCreditPayActiveSuccess;
@property (nonatomic) BOOL isGuidePagePush;
@property (copy, nonatomic) NSDictionary *extParams;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *bindCardShowConfig;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *signCardShowConfig;
@property (copy, nonatomic) NSDictionary *bindCardExtParams;
@property (nonatomic) double startloadingTime;
@property (nonatomic) double stoploadingTime;
@property (nonatomic) double enterTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)enterTimestamp;
- (void)setEnterTimestamp:(double)arg0;
- (void)event:(id)arg0 params:(id)arg1;
- (void)setConfigModel:(id)arg0;
- (id)configModel;
- (id)topVC;
- (id)extParams;
- (void)setExtParams:(id)arg0;
- (id)verifyManager;
- (void)setVerifyManager:(id)arg0;
- (id)curSelectConfig;
- (id)createOrderResponse;
- (void)push:(id)arg0 animated:(BOOL)arg1;
- (BOOL)receiveDataBus:(unsigned long long)arg0 obj:(id)arg1;
- (unsigned long long)firstVerifyType;
- (void)endVerifyWithResultResponse:(id)arg0;
- (void)closeActionAfterTime:(double)arg0 closeActionSource:(unsigned long long)arg1;
- (id)verifyManagerQueen;
- (void)setVerifyManagerQueen:(id)arg0;
- (void)p_updateDefaultPayConfig;
- (BOOL)p_isPasswordV2Style;
- (id)signCardShowConfig;
- (void)p_handlePayMethodDisabled:(id)arg0;
- (void)setSignCardShowConfig:(id)arg0;
- (id)payDisabledFundID2ReasonMap;
- (void)p_gotoHalfPayMethodDisabledVCWithResponse:(id)arg0;
- (void)setPayDisabledFundID2ReasonMap:(id)arg0;
- (void)payWithContext:(id)arg0 loadingView:(id)arg1;
- (void)changePayMethod:(id)arg0 loadingView:(id)arg1;
- (void)signPayWithPayContext:(id)arg0 loadingView:(id)arg1;
- (id)payContextExtParams;
- (void)refreshOrderResSinceChangePayMethod;
- (void)setCreateResponse:(id)arg0;
- (void)setResultPageStyle:(unsigned long long)arg0;
- (void)douPayProcessWithModel:(id)arg0 completion:(id /* block */)arg1;
- (void)setCurrentShowConfig:(id)arg0;
- (unsigned long long)resultPageStyle;
- (id)bindCardExtParams;
- (void)setBindCardExtParams:(id)arg0;
- (void)p_trackPerformance;
- (id)currentShowConfig;
- (void)p_pay;
- (void)p_trackNormalPayWithSource:(id)arg0;
- (void)p_bindCardAndPay;
- (void)p_trackBindCardAndPayWithSource:(id)arg0;
- (void)p_tryUnLockBankCardAndPay;
- (void)p_preBalancePay;
- (void)p_activeCreditAndPayWithTrackSourceStr:(id)arg0;
- (void)p_payAfterUse;
- (void)p_preIncomePay;
- (void)p_sharePay;
- (void)p_bankCardUnlock;
- (void)p_requestUnlockBankCard;
- (void)p_callbackWithResultCode:(unsigned long long)arg0 errorMsg:(id)arg1;
- (void)p_showAndTrackUnlockToast:(id)arg0;
- (BOOL)p_isPasswordListStyle;
- (BOOL)isCreditPayActiveSuccess;
- (void)setIsCreditPayActiveSuccess:(BOOL)arg0;
- (void)p_tryCallBackCreditPayFailWithErrorMsg:(id)arg0 disableStr:(id)arg1;
- (BOOL)p_isInCJPay;
- (void)p_callbackWithResultCode:(unsigned long long)arg0 errorMsg:(id)arg1 extParams:(id)arg2;
- (id)bindCardShowConfig;
- (void)p_endVerifyWithResultResponse:(id)arg0;
- (void)setStoploadingTime:(double)arg0;
- (void)p_trackConsumeTime;
- (void)p_removeNotSufficientPopUpViewController;
- (void)p_showGuidePageWithResponse:(id)arg0;
- (double)stoploadingTime;
- (double)startloadingTime;
- (void)p_tryShowResultPageWithResponse:(id)arg0;
- (void)p_hitNativeGuide;
- (void)p_showFEGuidePageWithResponse:(id)arg0 completion:(id /* block */)arg1;
- (void)setIsGuidePagePush:(BOOL)arg0;
- (id)p_getTrackInfo;
- (void)p_callBackWithCloseActionSource:(unsigned long long)arg0 data:(id)arg1;
- (void)p_closeDouPayProcessWithClosePayDesk:(BOOL)arg0 isAnimate:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)setIsFeGuide:(BOOL)arg0;
- (void)p_showProcessPopupInfoWithPopupInfo:(id)arg0;
- (void)p_presentVC:(id)arg0 animated:(BOOL)arg1;
- (id)p_handlePushHalfViewController:(id)arg0;
- (BOOL)isGuidePagePush;
- (id)p_handlePresentHalfViewController:(id)arg0;
- (BOOL)p_topVCIsHalfVC;
- (void)p_openVerifyExceptionWithItem:(unsigned long long)arg0;
- (void)p_cancelVerifyWithType:(unsigned long long)arg0;
- (void)p_defaultToastWithConfirmResponse:(id)arg0;
- (void)p_handleDiscountNotAvailable:(id)arg0;
- (void)p_signCardAndPayFailedWithMessage:(id)arg0;
- (void)p_bindCardSuccessAndPayFail;
- (void)p_confirmError;
- (void)p_bindCardFailedWithActionSource:(unsigned long long)arg0;
- (BOOL)p_isPasswordV3Style;
- (void)p_refreshCreateOrderWithCompletion:(id /* block */)arg0;
- (BOOL)p_topVCIsPasswordV3Style;
- (void)p_gotoPayAgainPageV2WithResponse:(id)arg0;
- (void)p_pushSingleTop:(id)arg0 animated:(BOOL)arg1;
- (id)getPerformanceInfo;
- (BOOL)isFeGuide;
- (id)p_payDisableReasonStrWithData:(id)arg0;
- (void)setBindCardShowConfig:(id)arg0;
- (void)p_updatePayMethodWithContext:(id)arg0;
- (void)p_updateCreateResponsePayInfoWithShowConfig:(id)arg0;
- (void)p_refreshPassUIWithLoadingStatus:(BOOL)arg0;
- (void)p_securityLoading;
- (id)p_loadingTitleWithChannelType:(unsigned long long)arg0 userInfo:(id)arg1;
- (void)p_startLoadingWithHalfPageVC:(id)arg0 isSecurityLoading:(BOOL)arg1;
- (BOOL)p_topVCIsPasswordV2Style;
- (id)p_getLoadingText;
- (void)setStartloadingTime:(double)arg0;
- (void)routeToVC:(id)arg0 animated:(BOOL)arg1;
- (BOOL)isHasCallBack;
- (void)setIsHasCallBack:(BOOL)arg0;
- (void)stopLoading;
- (void).cxx_destruct;
- (void)startLoading;
- (id /* block */)completionBlock;
- (void)setNavigationController:(id)arg0;
- (void)setCompletionBlock:(id /* block */)arg0;
- (id)navigationController;
- (id)createResponse;

@end