//
//     Generated by private class-dump
//

@class BDNovelCommonVipCenterVipPayInfo, NSString, BDNovelCommonVipCenterViewModel, BDNovelCommonVipBaseContentView, UIView, NSObject, BDNovelVipCenterPendantView;
@protocol BDNovelLoadFailViewProtocol, BDNovelLoadingViewProtocol, BDNovelToastProtocol;

@interface BDNovelCommonVipCenterViewController : UIViewController <BDNovelCommonVipCenterHeaderViewDelegate, BDNovelCommonVipBindAlertDelegate> {
    BOOL _isNeedOpenClose;
    BOOL _isNoFirst;
    BOOL _checkOrderResult;
    BOOL _checkSignResult;
    BOOL _isPurchaseVipInOtherPage;
    BDNovelCommonVipCenterViewModel *_viewModel;
    BDNovelCommonVipBaseContentView *_contentView;
    UIView<BDNovelLoadingViewProtocol> *_loadingView;
    UIView<BDNovelLoadFailViewProtocol> *_failView;
    NSObject<BDNovelToastProtocol> *_toastLoading;
    BDNovelVipCenterPendantView *_pendantView;
    double _beginStamp;
    double _totalTime;
    NSString *_exitType;
}

@property (retain, nonatomic) BDNovelCommonVipBaseContentView *contentView;
@property (retain, nonatomic) UIView<BDNovelLoadingViewProtocol> *loadingView;
@property (retain, nonatomic) UIView<BDNovelLoadFailViewProtocol> *failView;
@property (retain, nonatomic) NSObject<BDNovelToastProtocol> *toastLoading;
@property (retain, nonatomic) BDNovelVipCenterPendantView *pendantView;
@property (nonatomic) BOOL isNeedOpenClose;
@property (nonatomic) BOOL isNoFirst;
@property (nonatomic) double beginStamp;
@property (nonatomic) double totalTime;
@property (nonatomic) BOOL checkOrderResult;
@property (nonatomic) BOOL checkSignResult;
@property (nonatomic) BOOL isPurchaseVipInOtherPage;
@property (copy, nonatomic) NSString *exitType;
@property (readonly, nonatomic) BDNovelCommonVipCenterVipPayInfo *selectedPayInfo;
@property (retain, nonatomic) BDNovelCommonVipCenterViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createViewControllerWithParams:(id)arg0;

- (void)setFailView:(id)arg0;
- (id)failView;
- (void)setBeginStamp:(double)arg0;
- (double)beginStamp;
- (id)initWithRouteParams:(id)arg0;
- (id)toastLoading;
- (void)setToastLoading:(id)arg0;
- (id)selectedPayInfo;
- (void)onVipBindAlertCloseOrCancelButtonClicked:(long long)arg0;
- (void)vipBindAuthCompletionFrom:(long long)arg0 error:(id)arg1 authStatus:(long long)arg2;
- (void)setIsNeedOpenClose:(BOOL)arg0;
- (BOOL)isNeedOpenClose;
- (void)receiveEnterNotification:(id)arg0;
- (void)receiveLeaveNotification:(id)arg0;
- (void)refreshPageDataForOpenVipSuccessByJSB:(id)arg0;
- (void)setIsPurchaseVipInOtherPage:(BOOL)arg0;
- (BOOL)isPurchaseVipInOtherPage;
- (id)pendantView;
- (BOOL)showDiscountRetainAlertIfNeed;
- (BOOL)checkSignResult;
- (BOOL)checkOrderResult;
- (void)hideToastLoading;
- (void)setupVipView:(BOOL)arg0;
- (BOOL)showUnionVipAlert:(long long)arg0;
- (void)rechargeRetryingAlert;
- (void)updatePendantViewWithInfo:(id)arg0;
- (void)setCheckOrderResult:(BOOL)arg0;
- (void)handlerCheckResult;
- (void)checkOrder:(long long)arg0 maxCount:(long long)arg1 payInfo:(id)arg2;
- (void)setCheckSignResult:(BOOL)arg0;
- (void)checkSubscribeSign:(long long)arg0 maxCount:(long long)arg1 payInfo:(id)arg2;
- (void)showToastLoading;
- (void)hideLoading:(id)arg0;
- (void)startPrefetchProductWithVipPageData;
- (void)setupVipView;
- (void)setPendantView:(id)arg0;
- (BOOL)isNoFirst;
- (void)setIsNoFirst:(BOOL)arg0;
- (BOOL)showDiscountEnterAlertIfNeed;
- (BOOL)showAnnualVipCardDiscountAlertIfNeed;
- (id)halfPriceAnnualCardVipPayInfo;
- (id)continuousDiscountCardVipPayInfo;
- (void)showToastLoadingWithText:(id)arg0;
- (void)checkVipStateWithPayInfo:(id)arg0;
- (void)showRestoreToastLoading;
- (void)backToReaderAfterVipBindAlertClickedFrom:(long long)arg0;
- (void)onRestoreAction;
- (void)onCountDownEndAction;
- (BOOL)loginIfNeed;
- (void)onRechargeButtonClick;
- (void)backButtonClick:(id)arg0;
- (BOOL)shouldAutorotate;
- (id)init;
- (double)totalTime;
- (void)contentViewDidScroll;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)close;
- (long long)preferredStatusBarStyle;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)setViewModel:(id)arg0;
- (id)contentView;
- (id)viewModel;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setTotalTime:(double)arg0;
- (void)setContentView:(id)arg0;
- (void)loadData;
- (id)exitType;
- (void)setExitType:(id)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)showLoading;

@end
