//
//     Generated by private class-dump
//

@class NSString;

@interface CJPayBankCardModel : JSONModel {
    BOOL _needResign;
    BOOL _isSmallStyle;
    NSString *_bankCardId;
    NSString *_signNo;
    NSString *_bankCode;
    NSString *_bankName;
    NSString *_iconUrl;
    NSString *_cardType;
    NSString *_cardNoMask;
    NSString *_mobileMask;
    NSString *_nameMask;
    NSString *_identityType;
    NSString *_identityCodeMask;
    NSString *_perdayLimit;
    NSString *_perpayLimit;
    NSString *_status;
    NSString *_quickPayMark;
    NSString *_cardBackgroundColor;
    NSString *_channelIconUrl;
    id /* block */ _createNormalOrderAndSendSMSBlock;
}

@property (copy, nonatomic) NSString *bankCardId;
@property (copy, nonatomic) NSString *signNo;
@property (copy, nonatomic) NSString *bankCode;
@property (copy, nonatomic) NSString *bankName;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *cardType;
@property (copy, nonatomic) NSString *cardNoMask;
@property (copy, nonatomic) NSString *mobileMask;
@property (copy, nonatomic) NSString *nameMask;
@property (copy, nonatomic) NSString *identityType;
@property (copy, nonatomic) NSString *identityCodeMask;
@property (copy, nonatomic) NSString *perdayLimit;
@property (copy, nonatomic) NSString *perpayLimit;
@property (copy, nonatomic) NSString *status;
@property (copy, nonatomic) NSString *quickPayMark;
@property (copy, nonatomic) NSString *cardBackgroundColor;
@property (copy, nonatomic) NSString *channelIconUrl;
@property (nonatomic) BOOL needResign;
@property (nonatomic) BOOL isSmallStyle;
@property (copy, nonatomic) id /* block */ createNormalOrderAndSendSMSBlock;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;
+ (BOOL)propertyIsIgnored:(id)arg0;

- (id)iconUrl;
- (void)setIconUrl:(id)arg0;
- (id)nameMask;
- (void)setNameMask:(id)arg0;
- (id)bankCode;
- (void)setBankCode:(id)arg0;
- (id)bankCardId;
- (void)setBankCardId:(id)arg0;
- (id)signNo;
- (void)setSignNo:(id)arg0;
- (id)cardNoMask;
- (void)setCardNoMask:(id)arg0;
- (id)mobileMask;
- (void)setMobileMask:(id)arg0;
- (id)identityCodeMask;
- (void)setIdentityCodeMask:(id)arg0;
- (id)perdayLimit;
- (void)setPerdayLimit:(id)arg0;
- (id)perpayLimit;
- (void)setPerpayLimit:(id)arg0;
- (id)quickPayMark;
- (void)setQuickPayMark:(id)arg0;
- (id)channelIconUrl;
- (void)setChannelIconUrl:(id)arg0;
- (BOOL)needResign;
- (void)setNeedResign:(BOOL)arg0;
- (BOOL)isSmallStyle;
- (void)setIsSmallStyle:(BOOL)arg0;
- (id /* block */)createNormalOrderAndSendSMSBlock;
- (void)setCreateNormalOrderAndSendSMSBlock:(id /* block */)arg0;
- (void).cxx_destruct;
- (id)status;
- (void)setCardBackgroundColor:(id)arg0;
- (void)setStatus:(id)arg0;
- (id)cardBackgroundColor;
- (id)identityType;
- (void)setIdentityType:(id)arg0;
- (id)cardType;
- (void)setCardType:(id)arg0;
- (id)bankName;
- (void)setBankName:(id)arg0;

@end
