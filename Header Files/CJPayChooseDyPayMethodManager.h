//
//     Generated by private class-dump
//

@class CJPayDefaultChannelShowConfig, CJPayChooseDyPayMethodGroupModel, NSArray, CJPayBDCreateOrderResponse, NSMutableDictionary, NSDictionary, CJPayIntegratedChannelModel, CJPayChooseDyPayMethodViewController;
@protocol CJPayChooseDyPayMethodDelegate;

@interface CJPayChooseDyPayMethodManager : NSObject {
    BOOL _needUpdatePayMethodList;
    BOOL _isCombinePay;
    BOOL _closeChoosePageAfterChangeMethod;
    BOOL _hasChangePayMethod;
    BOOL _isNotCloseChooseVCWhenBindCardSuccess;
    BOOL _isCloseChooseVCWhenCombineNewcard;
    BOOL _hasFetchPayMethodList;
    id<CJPayChooseDyPayMethodDelegate> _delegate;
    CJPayBDCreateOrderResponse *_response;
    CJPayDefaultChannelShowConfig *_curSelectConfig;
    CJPayIntegratedChannelModel *_queryPayTypeChannelModel;
    CJPayDefaultChannelShowConfig *_lastSelectedPrimaryConfig;
    double _height;
    double _payMethodViewHeight;
    NSMutableDictionary *_payMethodDisabledReasonMap;
    long long _scene;
    NSDictionary *_voucherSwell;
    NSArray *_payMethodSortList;
    CJPayChooseDyPayMethodGroupModel *_paymentToolListModel;
    CJPayChooseDyPayMethodGroupModel *_financeChannelListModel;
    CJPayChooseDyPayMethodGroupModel *_paymentToolCombineListModel;
    NSArray *_allChannelConfigs;
    NSArray *_paymentToolChannelConfigs;
    NSArray *_paymentToolCombineChannelConfigs;
    NSArray *_financeChannelConfigs;
    NSArray *_recChannelConfigs;
    CJPayDefaultChannelShowConfig *_creditChannelConfig;
    CJPayDefaultChannelShowConfig *_balanceChannelConfig;
    CJPayDefaultChannelShowConfig *_incomeChannelConfig;
    CJPayChooseDyPayMethodViewController *_choosePayMethodVC;
}

@property (nonatomic) BOOL hasFetchPayMethodList;
@property (retain, nonatomic) CJPayIntegratedChannelModel *queryPayTypeChannelModel;
@property (retain, nonatomic) NSArray *payMethodSortList;
@property (retain, nonatomic) CJPayChooseDyPayMethodGroupModel *paymentToolListModel;
@property (retain, nonatomic) CJPayChooseDyPayMethodGroupModel *financeChannelListModel;
@property (retain, nonatomic) CJPayChooseDyPayMethodGroupModel *paymentToolCombineListModel;
@property (copy, nonatomic) NSArray *allChannelConfigs;
@property (copy, nonatomic) NSArray *paymentToolChannelConfigs;
@property (copy, nonatomic) NSArray *paymentToolCombineChannelConfigs;
@property (copy, nonatomic) NSArray *financeChannelConfigs;
@property (copy, nonatomic) NSArray *recChannelConfigs;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *creditChannelConfig;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *balanceChannelConfig;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *incomeChannelConfig;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *lastSelectedPrimaryConfig;
@property (retain, nonatomic) CJPayChooseDyPayMethodViewController *choosePayMethodVC;
@property (weak, nonatomic) id<CJPayChooseDyPayMethodDelegate> delegate;
@property (retain, nonatomic) CJPayBDCreateOrderResponse *response;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *curSelectConfig;
@property (nonatomic) BOOL needUpdatePayMethodList;
@property (nonatomic) BOOL isCombinePay;
@property (nonatomic) BOOL closeChoosePageAfterChangeMethod;
@property (nonatomic) double height;
@property (nonatomic) BOOL hasChangePayMethod;
@property (nonatomic) double payMethodViewHeight;
@property (retain, nonatomic) NSMutableDictionary *payMethodDisabledReasonMap;
@property (nonatomic) BOOL isNotCloseChooseVCWhenBindCardSuccess;
@property (nonatomic) BOOL isCloseChooseVCWhenCombineNewcard;
@property (nonatomic) long long scene;
@property (copy, nonatomic) NSDictionary *voucherSwell;

- (id)extParams;
- (void)p_stopLoading;
- (void)p_startLoading;
- (id)curSelectConfig;
- (BOOL)isCombinePay;
- (id)getDefaultBankCardPayConfig;
- (void)setIsCombinePay:(BOOL)arg0;
- (void)setChoosePayMethodVC:(id)arg0;
- (id)choosePayMethodVC;
- (id)voucherSwell;
- (void)setVoucherSwell:(id)arg0;
- (void)p_bindcardSuccess;
- (void)createPayTypeResponse;
- (void)updateQueryPayTypeChannelModel:(id)arg0;
- (id)allChannelConfigs;
- (void)setCurSelectConfig:(id)arg0;
- (void)setLastSelectedPrimaryConfig:(id)arg0;
- (void)refreshPayMethodSelectStatus:(id)arg0;
- (void)gotoChooseDyPayMethodFromCombinedPay:(BOOL)arg0;
- (id)p_createChoosePayMethodVC;
- (void)p_tryPushChoosePayMethodVC:(id)arg0;
- (void)setQueryPayTypeChannelModel:(id)arg0;
- (void)p_handlePayMethodListResponse:(id)arg0;
- (void)setNeedUpdatePayMethodList:(BOOL)arg0;
- (BOOL)hasFetchPayMethodList;
- (BOOL)needUpdatePayMethodList;
- (id)p_getPayMethodList;
- (id)p_cardListParams;
- (void)setHasFetchPayMethodList:(BOOL)arg0;
- (long long)p_payMethodTypeWithGroupTypeStr:(id)arg0;
- (void)setPaymentToolListModel:(id)arg0;
- (void)setPaymentToolCombineListModel:(id)arg0;
- (void)setFinanceChannelListModel:(id)arg0;
- (void)p_buildSinglePayMethodModels:(id)arg0;
- (void)setPayMethodSortList:(id)arg0;
- (id)payMethodDisabledReasonMap;
- (void)setBalanceChannelConfig:(id)arg0;
- (void)setIncomeChannelConfig:(id)arg0;
- (void)setAllChannelConfigs:(id)arg0;
- (id)paymentToolListModel;
- (id)p_filterAndSortMethodList:(id)arg0 subPayTypeIndexList:(id)arg1;
- (void)setPaymentToolChannelConfigs:(id)arg0;
- (id)paymentToolCombineListModel;
- (void)setPaymentToolCombineChannelConfigs:(id)arg0;
- (id)financeChannelListModel;
- (void)setFinanceChannelConfigs:(id)arg0;
- (void)setRecChannelConfigs:(id)arg0;
- (id)p_getPayMethodListWithSort:(BOOL)arg0;
- (id)recChannelConfigs;
- (id)paymentToolChannelConfigs;
- (id)financeChannelConfigs;
- (id)priorityPrimaryConfigForCombinePay;
- (id)incomeChannelConfig;
- (id)balanceChannelConfig;
- (void)setSelectedPayMethod:(id)arg0;
- (void)p_updateMethodSortOrderBySelectedConfig:(id)arg0;
- (id)paymentToolCombineChannelConfigs;
- (id)payMethodSortList;
- (id)lastSelectedPrimaryConfig;
- (BOOL)p_needRefreshSelectedStatusWhenSelectMethod:(id)arg0;
- (BOOL)hasChangePayMethod;
- (void)setHasChangePayMethod:(BOOL)arg0;
- (BOOL)p_needCloseChooseVCWhenSelectMethod:(id)arg0;
- (id)payContextWithConfig:(id)arg0;
- (BOOL)isCloseChooseVCWhenCombineNewcard;
- (BOOL)closeChoosePageAfterChangeMethod;
- (void)p_modifyMethodGroupSortList:(id)arg0;
- (void)p_modifyPaymentToolSortList:(id)arg0;
- (void)p_modifyFinanceChannelSortList:(id)arg0;
- (id)payMethodGroupTypeStrWithShowConfig:(id)arg0;
- (BOOL)isNotCloseChooseVCWhenBindCardSuccess;
- (void)didSelectPayMethod:(id)arg0 loadingView:(id)arg1;
- (id)p_buildPreTradeParams;
- (id)p_getCombineTypeStr:(id)arg0;
- (id)initWithOrderResponse:(id)arg0;
- (void)gotoChooseDyPayMethod;
- (void)getPayMethodListSilent:(BOOL)arg0 completion:(id /* block */)arg1;
- (id)getDefaultConfigByRecList:(id)arg0 isCombinePay:(BOOL)arg1;
- (id)getMethodGroupModelsWithStatus:(unsigned long long)arg0 limitMethodIndexs:(id)arg1 needSortMethod:(BOOL)arg2;
- (id)getAllPayMethodShowConfigs;
- (void)setCreditChannelConfig:(id)arg0;
- (void)trackerWithEventName:(id)arg0 params:(id)arg1;
- (id)queryPayTypeChannelModel;
- (void)setCloseChoosePageAfterChangeMethod:(BOOL)arg0;
- (double)payMethodViewHeight;
- (void)setPayMethodViewHeight:(double)arg0;
- (void)setPayMethodDisabledReasonMap:(id)arg0;
- (void)setIsNotCloseChooseVCWhenBindCardSuccess:(BOOL)arg0;
- (void)setIsCloseChooseVCWhenCombineNewcard:(BOOL)arg0;
- (id)creditChannelConfig;
- (void)setScene:(long long)arg0;
- (void).cxx_destruct;
- (void)setResponse:(id)arg0;
- (double)height;
- (id)response;
- (id)delegate;
- (void)setHeight:(double)arg0;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (long long)scene;

@end