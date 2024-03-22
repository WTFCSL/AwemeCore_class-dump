//
//     Generated by private class-dump
//

@class NSString, CJPayBizWebViewController;

@interface CJH5PayDeskManager : NSObject <CJPayH5DeskModule> {
    CJPayBizWebViewController *_h5CashDeskVC;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) CJPayBizWebViewController *h5CashDeskVC;

+ (void)registerComponents;
+ (id)defaultService;

- (void)openH5CashDeskWithOrderInfo:(id)arg0 merchantId:(id)arg1 appId:(id)arg2 cashDeskStyle:(long long)arg3 completion:(id /* block */)arg4;
- (void)preloadPayChannelInfoWithAppId:(id)arg0 merchantId:(id)arg1 userId:(id)arg2 exts:(id)arg3;
- (id)h5CashDeskVC;
- (void)p_reportMonitorWithParams:(id)arg0 URL:(id)arg1 merchantId:(id)arg2 appId:(id)arg3 type:(id)arg4;
- (id)_prepareCallParam:(long long)arg0 orderInfoDic:(id)arg1;
- (id)buildWebBizVC:(long long)arg0 finalUrl:(id)arg1 completion:(id /* block */)arg2;
- (void)setH5CashDeskVC:(id)arg0;
- (void)openH5CashDeskWithURL:(id)arg0 orderInfoDic:(id)arg1 merchantId:(id)arg2 appId:(id)arg3 cashDeskStyle:(long long)arg4 completion:(id /* block */)arg5;
- (BOOL)isSupportPayCallBackURL:(id)arg0;
- (void)registerPayRefer:(id)arg0;
- (void)closeH5PayDesk;
- (void)i_openH5PayDesk:(id)arg0 withDelegate:(id)arg1;
- (void)i_openH5PayDesk:(id)arg0 deskStyle:(long long)arg1 withDelegate:(id)arg2;
- (void)i_openH5PayManagerWithAppId:(id)arg0 merchantId:(id)arg1;
- (void)i_openH5TradeRecordWithAppId:(id)arg0 merchantId:(id)arg1;
- (void)i_openH5BalanceWithdrawDeskWithParams:(id)arg0 delegate:(id)arg1;
- (void)i_openH5BDPayDesk:(id)arg0 withDelegate:(id)arg1;
- (void)i_openH5SetPasswordDeskWithParams:(id)arg0 withDelegate:(id)arg1;
- (void)p_processCallback:(long long)arg0 resultParam:(id)arg1 apiDelegate:(id)arg2;
- (void)p_openBDH5PayDeskWithParams:(id)arg0 openDeskBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)p_buildWebBizVCWithFinalUrl:(id)arg0 completion:(id /* block */)arg1;
- (void)openH5SetPasswordDeskWithParams:(id)arg0 callBack:(id /* block */)arg1;
- (id)p_dealChannelOrderInfo:(id)arg0;
- (id)p_getUrl:(id)arg0;
- (void)i_openH5BankCardListWithMerchantId:(id)arg0 appId:(id)arg1 userId:(id)arg2;
- (void)preloadPayChannelInfoWithAppId:(id)arg0 merchantId:(id)arg1 userId:(id)arg2;
- (void).cxx_destruct;

@end
