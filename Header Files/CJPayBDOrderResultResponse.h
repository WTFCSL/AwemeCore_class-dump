//
//     Generated by private class-dump
//

@class CJPayBioPaymentInfo, CJPaySkipPwdGuideInfoModel, CJPayResultPageGuideInfoModel, CJPayFEGuideInfoModel, NSDictionary, CJPayResultShowConfig, CJPayErrorButtonInfo, CJPayCombinePayLimitModel, NSString, CJPayMerchantInfo, CJPayResultPageInfoModel, CJPayProcessingGuidePopupInfo, NSArray, CJPayUserInfo, CJPayProcessInfo, CJPayBDTypeInfo, CJPayBDTradeInfo;
@protocol CJPayPaymentInfo, CJPayTradeQueryContentList, CJPayResultPayInfo;

@interface CJPayBDOrderResultResponse : CJPayBaseResponse {
    BOOL _skipPwdOpenStatus;
    NSString *_skipPwdOpenMsg;
    CJPayCombinePayLimitModel *_limitModel;
    NSDictionary *_extParams;
    CJPayMerchantInfo *_merchant;
    NSArray<CJPayResultPayInfo> *_payInfos;
    CJPayBDTradeInfo *_tradeInfo;
    CJPayBDTypeInfo *_payTypeInfo;
    CJPayUserInfo *_userInfo;
    CJPayResultShowConfig *_resultConfig;
    CJPayProcessInfo *_processInfo;
    CJPayBioPaymentInfo *_bioPaymentInfo;
    CJPayErrorButtonInfo *_buttonInfo;
    CJPayProcessingGuidePopupInfo *_processingGuidePopupInfo;
    CJPaySkipPwdGuideInfoModel *_skipPwdGuideInfoModel;
    CJPayResultPageGuideInfoModel *_resultPageGuideInfoModel;
    CJPayFEGuideInfoModel *_feGuideInfoModel;
    NSString *_payAfterUseGuideUrl;
    NSArray *_voucherDetails;
    NSArray<CJPayTradeQueryContentList> *_contentList;
    NSArray<CJPayPaymentInfo> *_paymentInfo;
    CJPayResultPageInfoModel *_resultPageInfo;
    NSDictionary *_originalDict;
}

@property (nonatomic) BOOL skipPwdOpenStatus;
@property (copy, nonatomic) NSString *skipPwdOpenMsg;
@property (retain, nonatomic) CJPayCombinePayLimitModel *limitModel;
@property (copy, nonatomic) NSDictionary *extParams;
@property (retain, nonatomic) CJPayMerchantInfo *merchant;
@property (copy, nonatomic) NSArray<CJPayResultPayInfo> *payInfos;
@property (retain, nonatomic) CJPayBDTradeInfo *tradeInfo;
@property (retain, nonatomic) CJPayBDTypeInfo *payTypeInfo;
@property (retain, nonatomic) CJPayUserInfo *userInfo;
@property (retain, nonatomic) CJPayResultShowConfig *resultConfig;
@property (retain, nonatomic) CJPayProcessInfo *processInfo;
@property (retain, nonatomic) CJPayBioPaymentInfo *bioPaymentInfo;
@property (retain, nonatomic) CJPayErrorButtonInfo *buttonInfo;
@property (retain, nonatomic) CJPayProcessingGuidePopupInfo *processingGuidePopupInfo;
@property (retain, nonatomic) CJPaySkipPwdGuideInfoModel *skipPwdGuideInfoModel;
@property (retain, nonatomic) CJPayResultPageGuideInfoModel *resultPageGuideInfoModel;
@property (retain, nonatomic) CJPayFEGuideInfoModel *feGuideInfoModel;
@property (copy, nonatomic) NSString *payAfterUseGuideUrl;
@property (copy, nonatomic) NSArray *voucherDetails;
@property (copy, nonatomic) NSArray<CJPayTradeQueryContentList> *contentList;
@property (copy, nonatomic) NSArray<CJPayPaymentInfo> *paymentInfo;
@property (retain, nonatomic) CJPayResultPageInfoModel *resultPageInfo;
@property (copy, nonatomic) NSDictionary *originalDict;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)originalDict;
- (void)setOriginalDict:(id)arg0;
- (id)extParams;
- (void)setExtParams:(id)arg0;
- (id)tradeInfo;
- (void)setTradeInfo:(id)arg0;
- (id)paymentInfo;
- (void)setPaymentInfo:(id)arg0;
- (id)buttonInfo;
- (void)setButtonInfo:(id)arg0;
- (id)limitModel;
- (void)setLimitModel:(id)arg0;
- (id)payTypeInfo;
- (id)resultConfig;
- (id)skipPwdOpenMsg;
- (int)closeAfterTime;
- (void)setResultConfig:(id)arg0;
- (void)setPayTypeInfo:(id)arg0;
- (id)skipPwdGuideInfoModel;
- (void)setSkipPwdGuideInfoModel:(id)arg0;
- (id)payInfos;
- (id)creditPayInstallmentDesc;
- (id)payTypeDescText;
- (id)halfScreenText;
- (BOOL)skipPwdOpenStatus;
- (void)setSkipPwdOpenStatus:(BOOL)arg0;
- (void)setSkipPwdOpenMsg:(id)arg0;
- (void)setPayInfos:(id)arg0;
- (id)bioPaymentInfo;
- (void)setBioPaymentInfo:(id)arg0;
- (id)processingGuidePopupInfo;
- (void)setProcessingGuidePopupInfo:(id)arg0;
- (id)resultPageGuideInfoModel;
- (void)setResultPageGuideInfoModel:(id)arg0;
- (id)feGuideInfoModel;
- (void)setFeGuideInfoModel:(id)arg0;
- (id)payAfterUseGuideUrl;
- (void)setPayAfterUseGuideUrl:(id)arg0;
- (id)voucherDetails;
- (void)setVoucherDetails:(id)arg0;
- (id)resultPageInfo;
- (void)setResultPageInfo:(id)arg0;
- (id)processInfo;
- (void).cxx_destruct;
- (void)setProcessInfo:(id)arg0;
- (void)setUserInfo:(id)arg0;
- (id)userInfo;
- (id)merchant;
- (void)setMerchant:(id)arg0;
- (id)contentList;
- (void)setContentList:(id)arg0;

@end