//
//     Generated by private class-dump
//

@class NSString, NSArray, CJPayBDRetainInfoModel, NSDictionary;
@protocol CJPaySubPayTypeDisplayInfo, BDPayCombinePayShowInfo;

@interface CJPayInfo : JSONModel {
    BOOL _isCreditActivate;
    BOOL _isNeedJumpTargetUrl;
    BOOL _isForeignCard;
    BOOL _hasRandomDiscount;
    BOOL _isGuideCheck;
    NSString *_businessScene;
    NSString *_bankCardId;
    NSString *_creditPayInstallment;
    NSString *_payAmountPerInstallment;
    NSString *_originFeePerInstallment;
    NSString *_realFeePerInstallment;
    NSArray *_voucherNoList;
    NSString *_decisionId;
    NSString *_realTradeAmount;
    long long _realTradeAmountRaw;
    NSString *_originTradeAmount;
    NSString *_voucherMsg;
    NSString *_creditActivateUrl;
    NSString *_targetUrl;
    NSString *_voucherType;
    NSString *_payName;
    NSArray *_cashierTags;
    NSString *_verifyDesc;
    NSString *_localVerifyDownGradeDesc;
    NSString *_verifyDowngradeReason;
    long long _verifyDescType;
    NSString *_tradeDesc;
    NSString *_currency;
    NSString *_iconUrl;
    CJPayBDRetainInfoModel *_retainInfo;
    NSDictionary *_retainInfoV2;
    NSString *_combineType;
    NSString *_primaryPayType;
    NSArray<BDPayCombinePayShowInfo> *_combineShowInfo;
    NSString *_guideVoucherLabel;
    NSString *_priceZoneShowStyle;
    NSString *_standardRecDesc;
    NSString *_standardShowAmount;
    NSArray<CJPaySubPayTypeDisplayInfo> *_subPayTypeDisplayInfoList;
    NSString *_showAmountView;
    NSString *_showChangePaytype;
    NSString *_recipientDesc;
    NSString *_shareAssetID;
    NSString *_shareAssetCode;
}

@property (copy, nonatomic) NSString *businessScene;
@property (copy, nonatomic) NSString *bankCardId;
@property (copy, nonatomic) NSString *creditPayInstallment;
@property (copy, nonatomic) NSString *payAmountPerInstallment;
@property (copy, nonatomic) NSString *originFeePerInstallment;
@property (copy, nonatomic) NSString *realFeePerInstallment;
@property (copy, nonatomic) NSArray *voucherNoList;
@property (copy, nonatomic) NSString *decisionId;
@property (copy, nonatomic) NSString *realTradeAmount;
@property (nonatomic) long long realTradeAmountRaw;
@property (copy, nonatomic) NSString *originTradeAmount;
@property (copy, nonatomic) NSString *voucherMsg;
@property (nonatomic) BOOL isCreditActivate;
@property (copy, nonatomic) NSString *creditActivateUrl;
@property (nonatomic) BOOL isNeedJumpTargetUrl;
@property (copy, nonatomic) NSString *targetUrl;
@property (copy, nonatomic) NSString *voucherType;
@property (copy, nonatomic) NSString *payName;
@property (copy, nonatomic) NSArray *cashierTags;
@property (copy, nonatomic) NSString *verifyDesc;
@property (nonatomic) BOOL isForeignCard;
@property (copy, nonatomic) NSString *localVerifyDownGradeDesc;
@property (copy, nonatomic) NSString *verifyDowngradeReason;
@property (nonatomic) long long verifyDescType;
@property (copy, nonatomic) NSString *tradeDesc;
@property (copy, nonatomic) NSString *currency;
@property (nonatomic) BOOL hasRandomDiscount;
@property (copy, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) CJPayBDRetainInfoModel *retainInfo;
@property (copy, nonatomic) NSDictionary *retainInfoV2;
@property (copy, nonatomic) NSString *combineType;
@property (copy, nonatomic) NSString *primaryPayType;
@property (copy, nonatomic) NSArray<BDPayCombinePayShowInfo> *combineShowInfo;
@property (readonly, nonatomic) BOOL isCombinePay;
@property (copy, nonatomic) NSString *guideVoucherLabel;
@property (nonatomic) BOOL isGuideCheck;
@property (copy, nonatomic) NSString *priceZoneShowStyle;
@property (copy, nonatomic) NSString *standardRecDesc;
@property (copy, nonatomic) NSString *standardShowAmount;
@property (readonly, nonatomic) BOOL needShowStandardVoucher;
@property (copy, nonatomic) NSArray<CJPaySubPayTypeDisplayInfo> *subPayTypeDisplayInfoList;
@property (copy, nonatomic) NSString *showAmountView;
@property (copy, nonatomic) NSString *showChangePaytype;
@property (copy, nonatomic) NSString *recipientDesc;
@property (copy, nonatomic) NSString *shareAssetID;
@property (copy, nonatomic) NSString *shareAssetCode;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (void)setBusinessScene:(id)arg0;
- (id)iconUrl;
- (void)setIconUrl:(id)arg0;
- (void)setTargetUrl:(id)arg0;
- (id)targetUrl;
- (id)businessScene;
- (BOOL)isForeignCard;
- (id)retainInfo;
- (void)setRetainInfo:(id)arg0;
- (void)setVoucherMsg:(id)arg0;
- (id)bankCardId;
- (void)setBankCardId:(id)arg0;
- (BOOL)isCombinePay;
- (id)voucherNoList;
- (id)voucherMsg;
- (id)recipientDesc;
- (BOOL)isCreditActivate;
- (id)retainInfoV2;
- (void)setRetainInfoV2:(id)arg0;
- (id)payName;
- (id)voucherType;
- (id)tradeDesc;
- (void)setTradeDesc:(id)arg0;
- (void)setStandardRecDesc:(id)arg0;
- (void)setStandardShowAmount:(id)arg0;
- (id)standardRecDesc;
- (id)standardShowAmount;
- (long long)verifyDescType;
- (id)verifyDesc;
- (void)setCreditPayInstallment:(id)arg0;
- (void)setCombineType:(id)arg0;
- (id)creditPayInstallment;
- (void)setIsCreditActivate:(BOOL)arg0;
- (long long)realTradeAmountRaw;
- (id)subPayTypeDisplayInfoList;
- (id)realTradeAmount;
- (id)decisionId;
- (id)primaryPayType;
- (id)priceZoneShowStyle;
- (id)shareAssetID;
- (id)creditActivateUrl;
- (id)shareAssetCode;
- (void)setVoucherType:(id)arg0;
- (id)payAmountPerInstallment;
- (void)setPayAmountPerInstallment:(id)arg0;
- (BOOL)isNeedJumpTargetUrl;
- (id)combineShowInfo;
- (void)setIsForeignCard:(BOOL)arg0;
- (void)setDecisionId:(id)arg0;
- (void)setCreditActivateUrl:(id)arg0;
- (id)buildCreditPayMethodModel;
- (BOOL)isDynamicLayout;
- (void)setVoucherNoList:(id)arg0;
- (BOOL)hasRandomDiscount;
- (void)setShareAssetCode:(id)arg0;
- (void)setShareAssetID:(id)arg0;
- (id)realFeePerInstallment;
- (id)originFeePerInstallment;
- (id)guideVoucherLabel;
- (id)cashierTags;
- (BOOL)needShowStandardVoucher;
- (void)setOriginFeePerInstallment:(id)arg0;
- (void)setRealFeePerInstallment:(id)arg0;
- (void)setRealTradeAmount:(id)arg0;
- (void)setRealTradeAmountRaw:(long long)arg0;
- (id)originTradeAmount;
- (void)setOriginTradeAmount:(id)arg0;
- (void)setIsNeedJumpTargetUrl:(BOOL)arg0;
- (void)setPayName:(id)arg0;
- (void)setCashierTags:(id)arg0;
- (void)setVerifyDesc:(id)arg0;
- (id)localVerifyDownGradeDesc;
- (void)setLocalVerifyDownGradeDesc:(id)arg0;
- (id)verifyDowngradeReason;
- (void)setVerifyDowngradeReason:(id)arg0;
- (void)setVerifyDescType:(long long)arg0;
- (void)setHasRandomDiscount:(BOOL)arg0;
- (void)setPrimaryPayType:(id)arg0;
- (void)setCombineShowInfo:(id)arg0;
- (void)setGuideVoucherLabel:(id)arg0;
- (BOOL)isGuideCheck;
- (void)setIsGuideCheck:(BOOL)arg0;
- (void)setPriceZoneShowStyle:(id)arg0;
- (void)setSubPayTypeDisplayInfoList:(id)arg0;
- (id)showAmountView;
- (void)setShowAmountView:(id)arg0;
- (id)showChangePaytype;
- (void)setShowChangePaytype:(id)arg0;
- (void)setRecipientDesc:(id)arg0;
- (void).cxx_destruct;
- (id)currency;
- (void)setCurrency:(id)arg0;
- (id)combineType;

@end