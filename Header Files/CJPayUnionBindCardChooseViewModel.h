//
//     Generated by private class-dump
//

@class CJPayUnionCardInfoModel, NSString, NSMutableSet, CJPayUnionBindCardListResponse, CJPayUnionBindCardCommonModel;

@interface CJPayUnionBindCardChooseViewModel : CJPayBindCardPageBaseModel {
    CJPayUnionBindCardListResponse *_cardListResponse;
    CJPayUnionCardInfoModel *_selectedUnionCardInfoModel;
    NSMutableSet *_selectedCards;
    CJPayUnionBindCardCommonModel *_unionBindCardCommonModel;
    NSString *_signOrderNo;
    NSString *_specialMerchantId;
    NSString *_bankMobileNoMask;
    long long _bindUnionCardType;
    NSString *_bindCardSafetyExperiment;
}

@property (retain, nonatomic) CJPayUnionBindCardListResponse *cardListResponse;
@property (retain, nonatomic) CJPayUnionCardInfoModel *selectedUnionCardInfoModel;
@property (retain, nonatomic) NSMutableSet *selectedCards;
@property (retain, nonatomic) CJPayUnionBindCardCommonModel *unionBindCardCommonModel;
@property (copy, nonatomic) NSString *signOrderNo;
@property (copy, nonatomic) NSString *specialMerchantId;
@property (copy, nonatomic) NSString *bankMobileNoMask;
@property (nonatomic) long long bindUnionCardType;
@property (copy, nonatomic) NSString *bindCardSafetyExperiment;

+ (id)keyMapperDict;

- (id)specialMerchantId;
- (void)setSpecialMerchantId:(id)arg0;
- (id)signOrderNo;
- (void)setSignOrderNo:(id)arg0;
- (long long)bindUnionCardType;
- (void)setBindUnionCardType:(long long)arg0;
- (id)bankMobileNoMask;
- (void)setBankMobileNoMask:(id)arg0;
- (id)unionBindCardCommonModel;
- (void)setUnionBindCardCommonModel:(id)arg0;
- (id)p_buildULSMSBizParam;
- (id)selectedCards;
- (void)setSelectedCards:(id)arg0;
- (id)cardListResponse;
- (void)sendSMSWithCompletion:(id /* block */)arg0;
- (id)verifySMSViewControllerWithResponse:(id)arg0;
- (id)selectedUnionCardInfoModel;
- (void)setSelectedUnionCardInfoModel:(id)arg0;
- (id)p_buildBDPaySendSMSBaseParam;
- (void)setCardListResponse:(id)arg0;
- (id)bindCardSafetyExperiment;
- (void)setBindCardSafetyExperiment:(id)arg0;
- (void).cxx_destruct;

@end
