//
//     Generated by private class-dump
//

@class NSArray, NSString, CJPayCreditPayChannelModel, CJPayIntegratedChannelModel, CJPayDeskConfig;
@protocol CJPayChannelModel;

@interface CJPayTypeInfo : JSONModel {
    BOOL _isDefaultBytePay;
    BOOL _isBalanceAvailable;
    CJPayDeskConfig *_deskConfig;
    NSArray<CJPayChannelModel> *_payChannels;
    NSString *_defaultPayChannel;
    NSArray *_sortedPayChannels;
    NSString *_paySource;
    NSString *_isCreditPayAvailable;
    NSString *_creditPayStageListStr;
    CJPayIntegratedChannelModel *_bdPayModel;
    CJPayCreditPayChannelModel *_creditPayModel;
}

@property (retain, nonatomic) CJPayIntegratedChannelModel *bdPayModel;
@property (retain, nonatomic) CJPayCreditPayChannelModel *creditPayModel;
@property (retain, nonatomic) CJPayDeskConfig *deskConfig;
@property (readonly, nonatomic) CJPayIntegratedChannelModel *bdPay;
@property (readonly, nonatomic) CJPayCreditPayChannelModel *creditPay;
@property (copy, nonatomic) NSArray<CJPayChannelModel> *payChannels;
@property (copy, nonatomic) NSString *defaultPayChannel;
@property (copy, nonatomic) NSArray *sortedPayChannels;
@property (copy, nonatomic) NSString *paySource;
@property (nonatomic) BOOL isDefaultBytePay;
@property (copy, nonatomic) NSString *isCreditPayAvailable;
@property (nonatomic) BOOL isBalanceAvailable;
@property (copy, nonatomic) NSString *creditPayStageListStr;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;
+ (unsigned long long)getChannelTypeBy:(id)arg0;
+ (id)getTrackerMethodByChannelConfig:(id)arg0;
+ (id)getChannelStrByChannelType:(unsigned long long)arg0;

- (id)deskConfig;
- (void)setDeskConfig:(id)arg0;
- (id)payChannels;
- (id)defaultPayChannel;
- (void)setPayChannels:(id)arg0;
- (void)setDefaultPayChannel:(id)arg0;
- (id)showConfigForCardList;
- (id)bdPay;
- (BOOL)isDefaultBytePay;
- (id)showConfigForHomePageWithId:(id)arg0;
- (void)setIsDefaultBytePay:(BOOL)arg0;
- (id)sortedPayChannels;
- (BOOL)isBalanceAvailable;
- (id)isCreditPayAvailable;
- (id)creditPayStageListStr;
- (id)paySource;
- (void)setPaySource:(id)arg0;
- (id)p_bytePayShowConfigForHomePageWithId:(id)arg0;
- (void)setSortedPayChannels:(id)arg0;
- (id)creditPay;
- (id)setHomePageBytepayVoucherMsg:(id)arg0 bySubPayObj:(id)arg1;
- (id)showConfigForUniteSign;
- (id)p_isAvailableWithMethod:(id)arg0;
- (void)setIsCreditPayAvailable:(id)arg0;
- (void)setIsBalanceAvailable:(BOOL)arg0;
- (void)setCreditPayStageListStr:(id)arg0;
- (id)bdPayModel;
- (void)setBdPayModel:(id)arg0;
- (id)creditPayModel;
- (void)setCreditPayModel:(id)arg0;
- (void).cxx_destruct;

@end
