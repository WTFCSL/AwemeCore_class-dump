//
//     Generated by private class-dump
//

@class CJPayOPHomeContentView, CJPayCombinationPaymentViewController, CJPayBizChoosePayMethodViewController, CJPayDefaultChannelShowConfig, NSMutableArray;

@interface CJPayOPHomePageViewController : CJPayHomePageViewController {
    BOOL _isColdLaunch;
    BOOL _isViewDidAppear;
    double _lastTimestamp;
    CJPayOPHomeContentView *_outerPayHomeContentView;
    CJPayCombinationPaymentViewController *_combinePayViewController;
    CJPayBizChoosePayMethodViewController *_choosePayMethodVC;
    CJPayDefaultChannelShowConfig *_currentPayConfig;
    NSMutableArray *_notSufficientFundIdsInCombinePay;
}

@property (retain, nonatomic) CJPayOPHomeContentView *outerPayHomeContentView;
@property (retain, nonatomic) CJPayCombinationPaymentViewController *combinePayViewController;
@property (retain, nonatomic) CJPayBizChoosePayMethodViewController *choosePayMethodVC;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *currentPayConfig;
@property (readonly, nonatomic, getter=isSendToCombinePaymentVC) BOOL isSendToCombinePaymentVC;
@property (nonatomic) BOOL isViewDidAppear;
@property (retain, nonatomic) NSMutableArray *notSufficientFundIdsInCombinePay;
@property (nonatomic) double lastTimestamp;
@property (nonatomic) BOOL isColdLaunch;

- (id)getCurrentContentView;
- (BOOL)isColdLaunch;
- (void)didSelectAtIndex:(int)arg0;
- (BOOL)isViewDidAppear;
- (void)setIsColdLaunch:(BOOL)arg0;
- (void)setIsViewDidAppear:(BOOL)arg0;
- (void)showState:(long long)arg0;
- (void)combinePayWithType:(unsigned long long)arg0;
- (void)changePayMethodTo:(id)arg0;
- (void)didClickBannerWithType:(unsigned long long)arg0;
- (void)notifyNotsufficient:(id)arg0;
- (void)setCurrentPayConfig:(id)arg0;
- (id)currentPayConfig;
- (void)updateOrderResponse:(id)arg0;
- (void)p_checkAuthStatusAndPay;
- (void)onConfirmPayAction;
- (void)p_showAuthAlertWithAuthUrl:(id)arg0 completion:(id /* block */)arg1;
- (void)p_bindCardSuccess;
- (BOOL)isSendToCombinePaymentVC;
- (id)combinePayViewController;
- (BOOL)isSecondaryCellView:(unsigned long long)arg0;
- (void)p_notifyHomeVCAndChooseVCNotSufficientWithResponse:(id)arg0 error:(id)arg1 bankCardId:(id)arg2;
- (id)notSufficientFundIdsInCombinePay;
- (void)p_tryInsertChooseViewControllerWithNotSufficientID:(id)arg0;
- (void)setChoosePayMethodVC:(id)arg0;
- (id)choosePayMethodVC;
- (void)p_gotoCombinationPaymentType:(unsigned long long)arg0;
- (void)setCombinePayViewController:(id)arg0;
- (void)setupNavigatinBar;
- (void)setNotSufficientFundIdsInCombinePay:(id)arg0;
- (void)updatePayTypeView;
- (id)outerPayHomeContentView;
- (void)setOuterPayHomeContentView:(id)arg0;
- (void)stopLoading;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)startLoading;
- (void)setLastTimestamp:(double)arg0;
- (double)lastTimestamp;
- (void)viewDidLoad;
- (void)back;

@end