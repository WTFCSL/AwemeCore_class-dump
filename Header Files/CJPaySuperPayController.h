//
//     Generated by private class-dump
//

@class CJPayNavigationController, NSString, CJPayHintInfo, CJPayBDCreateOrderResponse, NSDictionary, CJPayTimerManager, CJPaySuperPayVerifyManager, CJPaySuperPayVerifyManagerQueen, CJPayFrontCashierContext, CJPayPayAgainHalfViewController, CJPaySuperPayQueryResponse;

@interface CJPaySuperPayController : NSObject <CJPayHomeVCProtocol, CJPayPayAgainDelegate, CJPayBaseLoadingProtocol> {
    BOOL _isIgnoreResponse;
    BOOL _isRepeatByErrorResponse;
    id /* block */ _completion;
    NSString *_tradeNo;
    CJPayNavigationController *_navigationController;
    CJPayBDCreateOrderResponse *_bdCreateResponse;
    id /* block */ _completionBlock;
    CJPaySuperPayVerifyManager *_verifyManager;
    CJPaySuperPayVerifyManagerQueen *_verifyManagerQueen;
    CJPayHintInfo *_hintInfo;
    CJPayPayAgainHalfViewController *_payAgainVC;
    CJPayTimerManager *_timerManager;
    NSDictionary *_dataDict;
    long long _creditPayActivationResultType;
    CJPayFrontCashierContext *_payContext;
    NSString *_scene;
    CJPaySuperPayQueryResponse *_queryResponse;
    NSString *_toastLogo;
}

@property (retain, nonatomic) CJPayBDCreateOrderResponse *bdCreateResponse;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) CJPaySuperPayVerifyManager *verifyManager;
@property (retain, nonatomic) CJPaySuperPayVerifyManagerQueen *verifyManagerQueen;
@property (retain, nonatomic) CJPayNavigationController *navigationController;
@property (retain, nonatomic) CJPayHintInfo *hintInfo;
@property (retain, nonatomic) CJPayPayAgainHalfViewController *payAgainVC;
@property (retain, nonatomic) CJPayTimerManager *timerManager;
@property (nonatomic) BOOL isIgnoreResponse;
@property (nonatomic) BOOL isRepeatByErrorResponse;
@property (copy, nonatomic) NSDictionary *dataDict;
@property (nonatomic) long long creditPayActivationResultType;
@property (retain, nonatomic) CJPayFrontCashierContext *payContext;
@property (copy, nonatomic) NSString *scene;
@property (retain, nonatomic) CJPaySuperPayQueryResponse *queryResponse;
@property (copy, nonatomic) NSString *toastLogo;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) NSString *tradeNo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setTradeNo:(id)arg0;
- (id)tradeNo;
- (void)setDataDict:(id)arg0;
- (id)dataDict;
- (id)topVC;
- (id)verifyManager;
- (void)setVerifyManager:(id)arg0;
- (void)setPayContext:(id)arg0;
- (id)payContext;
- (id)curSelectConfig;
- (id)createOrderResponse;
- (void)push:(id)arg0 animated:(BOOL)arg1;
- (BOOL)receiveDataBus:(unsigned long long)arg0 obj:(id)arg1;
- (unsigned long long)firstVerifyType;
- (void)endVerifyWithResultResponse:(id)arg0;
- (void)closeActionAfterTime:(double)arg0 closeActionSource:(unsigned long long)arg1;
- (id)verifyManagerQueen;
- (void)setVerifyManagerQueen:(id)arg0;
- (void)setBdCreateResponse:(id)arg0;
- (id)bdCreateResponse;
- (id)hintInfo;
- (void)payWithContext:(id)arg0 loadingView:(id)arg1;
- (void)p_presentVC:(id)arg0 animated:(BOOL)arg1;
- (id)p_handlePushHalfViewController:(id)arg0;
- (BOOL)p_topVCIsHalfVC;
- (void)setHintInfo:(id)arg0;
- (long long)creditPayActivationResultType;
- (void)setCreditPayActivationResultType:(long long)arg0;
- (BOOL)isNewVCBackWillExistPayProcess;
- (id)p_buildRequestParams:(id)arg0;
- (void)setIsIgnoreResponse:(BOOL)arg0;
- (void)setIsRepeatByErrorResponse:(BOOL)arg0;
- (void)setToastLogo:(id)arg0;
- (id)toastLogo;
- (id)p_buildQueryParams:(id)arg0;
- (void)p_queryResult:(id)arg0;
- (void)setPayAgainVC:(id)arg0;
- (id)payAgainVC;
- (BOOL)isIgnoreResponse;
- (void)p_handleQueryResult:(id)arg0;
- (BOOL)p_isEndQuery:(id)arg0;
- (void)setQueryResponse:(id)arg0;
- (void)p_handleRiskVerify:(id)arg0;
- (unsigned long long)p_getResultType:(id)arg0;
- (id)p_buildTrackParams:(id)arg0;
- (void)p_trackerWithResponse:(id)arg0;
- (id)queryResponse;
- (void)p_showSuccessToast:(id)arg0;
- (void)p_stopLoadingWithCompletion:(id /* block */)arg0;
- (void)payAgainWithResponse:(id)arg0 completion:(id /* block */)arg1;
- (void)p_showResultToast:(id)arg0 subTitle:(id)arg1;
- (BOOL)isRepeatByErrorResponse;
- (void)p_processResultWithOrderStatus:(unsigned long long)arg0;
- (void)startVerifyWithChannelData:(id)arg0 completion:(id /* block */)arg1;
- (void)p_creditSign;
- (void)p_payAgainWithParams:(id)arg0;
- (void)p_creditSignSuperWithSignUrl:(id)arg0 completion:(id /* block */)arg1;
- (void)p_LynxBindCard;
- (void)p_activateCredit;
- (id)codeVerifyItemDic;
- (void)startQueryResultWithParams:(id)arg0;
- (id)p_hanldeHalfViewController:(id)arg0;
- (void)stopLoading;
- (id)init;
- (void)setScene:(id)arg0;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)startLoading;
- (void)setCompletion:(id /* block */)arg0;
- (id /* block */)completionBlock;
- (void)setTimerManager:(id)arg0;
- (void)setNavigationController:(id)arg0;
- (void)setCompletionBlock:(id /* block */)arg0;
- (id)timerManager;
- (id)navigationController;
- (id)scene;

@end