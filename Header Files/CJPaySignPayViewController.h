//
//     Generated by private class-dump
//

@class CJPaySignPayQuerySignInfoResponse, NSString, CJPayCreateOrderResponse, CJPayDefaultChannelShowConfig, CJPaySignView;

@interface CJPaySignPayViewController : CJPayFullPageBaseViewController <CJPayAPIDelegate> {
    BOOL _immediatelyClose;
    CJPaySignPayQuerySignInfoResponse *_querySignInfo;
    NSString *_returnURLStr;
    NSString *_appId;
    NSString *_token;
    NSString *_appName;
    long long _signType;
    id /* block */ _completion;
    CJPaySignView *_contentView;
    CJPayCreateOrderResponse *_orderResponse;
    NSString *_zg_app_id;
    NSString *_zg_merchant_id;
    CJPayDefaultChannelShowConfig *_selectedShowConfig;
}

@property (retain, nonatomic) CJPaySignView *contentView;
@property (retain, nonatomic) CJPayCreateOrderResponse *orderResponse;
@property (copy, nonatomic) NSString *zg_app_id;
@property (copy, nonatomic) NSString *zg_merchant_id;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *selectedShowConfig;
@property (retain, nonatomic) CJPaySignPayQuerySignInfoResponse *querySignInfo;
@property (copy, nonatomic) NSString *returnURLStr;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *appName;
@property (nonatomic) long long signType;
@property (nonatomic) BOOL immediatelyClose;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupUI;
- (void)onResponse:(id)arg0;
- (id)orderResponse;
- (void)setOrderResponse:(id)arg0;
- (void)p_onConfirmPayAction;
- (id)p_buildCommonModel;
- (void)setSelectedShowConfig:(id)arg0;
- (id)selectedShowConfig;
- (void)p_updateDeductMethodWithShowConfig:(id)arg0;
- (void)p_closeCashierDeskAndJumpBackWithResult:(unsigned long long)arg0;
- (void)p_alertRequestErrorWithMsg:(id)arg0 clickAction:(id /* block */)arg1;
- (void)p_openCashDesk;
- (void)p_requestQuerySignInfo;
- (void)p_bindCard;
- (void)p_trackForPage:(id)arg0 params:(id)arg1;
- (id)querySignInfo;
- (id)zg_app_id;
- (id)zg_merchant_id;
- (void)setQuerySignInfo:(id)arg0;
- (BOOL)immediatelyClose;
- (id)returnURLStr;
- (void)p_gotoCardListVC;
- (void)setReturnURLStr:(id)arg0;
- (void)setZg_app_id:(id)arg0;
- (void)setZg_merchant_id:(id)arg0;
- (void)setImmediatelyClose:(BOOL)arg0;
- (void)p_trackerEvent:(id)arg0 params:(id)arg1;
- (void)p_configCashRegisterVCWithBizParams:(id)arg0;
- (id)p_mergeCommonParamsWithDict:(id)arg0 response:(id)arg1;
- (BOOL)p_isFromOuterPay;
- (id)p_outerAppId;
- (void)setAppName:(id)arg0;
- (id)appName;
- (void)setAppId:(id)arg0;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setCompletion:(id /* block */)arg0;
- (void)setToken:(id)arg0;
- (id)contentView;
- (id)token;
- (id)appId;
- (void)viewDidLoad;
- (void)setContentView:(id)arg0;
- (long long)signType;
- (void)setSignType:(long long)arg0;
- (void)back;

@end