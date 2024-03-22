//
//     Generated by private class-dump
//

@class CJPayDefaultChannelShowConfig, NSString, UIImageView, NSDictionary, CJPayDyPaySignOnlyView, CJPayCreditSignPageQueryResponse, QueryMemberPayTypeItem;

@interface CJPayDyPayCreditSignViewController : CJPayFullPageBaseViewController {
    BOOL _userIsRetained;
    BOOL _retainVoucherCanUse;
    id /* block */ _backAndCompletionBlock;
    UIImageView *_navIconImgView;
    CJPayDyPaySignOnlyView *_contentView;
    CJPayCreditSignPageQueryResponse *_response;
    NSDictionary *_allParamsDict;
    NSString *_merchantId;
    QueryMemberPayTypeItem *_firstSelectedItem;
    CJPayDefaultChannelShowConfig *_selectedShowConfig;
    id /* block */ _loadingBlock;
}

@property (retain, nonatomic) UIImageView *navIconImgView;
@property (retain, nonatomic) CJPayDyPaySignOnlyView *contentView;
@property (retain, nonatomic) CJPayCreditSignPageQueryResponse *response;
@property (copy, nonatomic) NSDictionary *allParamsDict;
@property (copy, nonatomic) NSString *merchantId;
@property (retain, nonatomic) QueryMemberPayTypeItem *firstSelectedItem;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *selectedShowConfig;
@property (nonatomic) BOOL userIsRetained;
@property (nonatomic) BOOL retainVoucherCanUse;
@property (copy, nonatomic) id /* block */ loadingBlock;
@property (copy, nonatomic) id /* block */ backAndCompletionBlock;

- (void)p_setupUI;
- (void)p_setupConstraints;
- (void)p_stopLoading;
- (void)p_startLoading;
- (void)p_clickBubble;
- (id)p_buildCommonModel;
- (void)setFirstSelectedItem:(id)arg0;
- (void)setSelectedShowConfig:(id)arg0;
- (void)setAllParamsDict:(id)arg0;
- (void)setUserIsRetained:(BOOL)arg0;
- (void)setRetainVoucherCanUse:(BOOL)arg0;
- (id)firstSelectedItem;
- (void)trackerWithName:(id)arg0 params:(id)arg1;
- (BOOL)p_showRetain;
- (void)p_backAndCompletionWithErrorCode:(long long)arg0 errorMsg:(id)arg1;
- (id)navIconImgView;
- (id)allParamsDict;
- (BOOL)p_buildRetainInfoV2Config:(id)arg0;
- (BOOL)p_lynxRetain:(id)arg0;
- (void)p_showBackwardDeskView;
- (id /* block */)backAndCompletionBlock;
- (void)p_clickConfirmSignBtn;
- (void)p_pushVC:(id)arg0;
- (id)selectedShowConfig;
- (void)p_updateDeductMethodWithShowConfig:(id)arg0;
- (void)p_didCompleteBindCardSuccess:(id)arg0;
- (id)p_getTrackerParams:(id)arg0;
- (void)p_checkIsNeedOpenAuthorizationPage:(BOOL)arg0;
- (void)p_requestSignInfoQueryWithCompletion:(id /* block */)arg0;
- (void)p_updateSignPageWithNewResponse:(id)arg0;
- (void)p_startBindCardProcess;
- (void)p_startVerifyProcess;
- (void)p_openAuthorizationPageWithURL:(id)arg0 completion:(id /* block */)arg1;
- (void)p_startQuerySignResult:(id)arg0 hasAddCard:(BOOL)arg1;
- (BOOL)userIsRetained;
- (BOOL)retainVoucherCanUse;
- (void)p_gotoResultPageWithResponse:(id)arg0;
- (void)p_openLynxSuccessResultPage:(id)arg0 signSuccess:(BOOL)arg1 errorMsg:(id)arg2;
- (void)p_clickDetailOpenChangeCardPage;
- (id)initWithResponse:(id)arg0 allParamsDict:(id)arg1 merchantId:(id)arg2;
- (void)setBackAndCompletionBlock:(id /* block */)arg0;
- (void)setNavIconImgView:(id)arg0;
- (void).cxx_destruct;
- (void)setResponse:(id)arg0;
- (void)close;
- (id)response;
- (id)contentView;
- (void)viewDidLoad;
- (void)setContentView:(id)arg0;
- (id)merchantId;
- (void)setMerchantId:(id)arg0;
- (id /* block */)loadingBlock;
- (void)setLoadingBlock:(id /* block */)arg0;

@end