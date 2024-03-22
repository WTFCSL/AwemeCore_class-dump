//
//     Generated by private class-dump
//

@class CJPayOpenBioGuideView, CJPayButton, NSString, CJPayBioPaymentInfo, CJPayBaseVerifyManager;

@interface CJPayBioGuideViewController : CJPayHalfPageBaseViewController <CJPayOpenBioGuideViewDelegate, CJPayBaseLoadingProtocol> {
    BOOL _isTradeCreateAgain;
    CJPayBaseVerifyManager *_manager;
    CJPayOpenBioGuideView *_openBioGuideView;
    CJPayBioPaymentInfo *_bioPaymentInfo;
    id /* block */ _completionBlock;
    CJPayButton *_skipGuideButton;
}

@property (retain, nonatomic) CJPayOpenBioGuideView *openBioGuideView;
@property (retain, nonatomic) CJPayBioPaymentInfo *bioPaymentInfo;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) CJPayButton *skipGuideButton;
@property (retain, nonatomic) CJPayBaseVerifyManager *manager;
@property (nonatomic) BOOL isTradeCreateAgain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createWithWithParams:(id)arg0 completionBlock:(id /* block */)arg1;

- (void)giveUpAction;
- (void)p_setupUI;
- (void)p_trackWithEventName:(id)arg0 params:(id)arg1;
- (id)bioPaymentInfo;
- (void)setBioPaymentInfo:(id)arg0;
- (void)stateButtonClick:(id)arg0;
- (BOOL)isTradeCreateAgain;
- (void)setIsTradeCreateAgain:(BOOL)arg0;
- (id)initWithPaymentInfo:(id)arg0 completionBlock:(id /* block */)arg1;
- (id)openBioGuideView;
- (id)skipGuideButton;
- (void)openBioPayment;
- (void)setOpenBioGuideView:(id)arg0;
- (void)setSkipGuideButton:(id)arg0;
- (void)stopLoading;
- (void).cxx_destruct;
- (void)startLoading;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg0;
- (void)setManager:(id)arg0;
- (void)viewDidLoad;
- (id)manager;
- (void)back;

@end
