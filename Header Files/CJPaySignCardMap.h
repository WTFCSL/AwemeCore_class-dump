//
//     Generated by private class-dump
//

@class NSString, CJPayQuickBindCardModel;

@interface CJPaySignCardMap : JSONModel {
    NSString *_appId;
    NSString *_merchantId;
    NSString *_allowTransCardType;
    NSString *_idNameMask;
    NSString *_idType;
    NSString *_isAuthed;
    NSString *_isSetPwd;
    NSString *_mobileMask;
    NSString *_skipPwd;
    NSString *_smchId;
    NSString *_uidMobileMask;
    NSString *_payUID;
    NSString *_memberBizOrderNo;
    NSString *_jumpQuickBindCard;
    CJPayQuickBindCardModel *_quickCardModel;
    NSString *_displayIcon;
    NSString *_displayDesc;
    NSString *_protocolDescription;
    NSString *_buttonDescription;
    NSString *_oneKeyBankInfoStr;
}

@property (copy, nonatomic) NSString *oneKeyBankInfoStr;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *merchantId;
@property (copy, nonatomic) NSString *allowTransCardType;
@property (copy, nonatomic) NSString *idNameMask;
@property (copy, nonatomic) NSString *idType;
@property (copy, nonatomic) NSString *isAuthed;
@property (copy, nonatomic) NSString *isSetPwd;
@property (copy, nonatomic) NSString *mobileMask;
@property (copy, nonatomic) NSString *skipPwd;
@property (copy, nonatomic) NSString *smchId;
@property (copy, nonatomic) NSString *uidMobileMask;
@property (copy, nonatomic) NSString *payUID;
@property (copy, nonatomic) NSString *memberBizOrderNo;
@property (copy, nonatomic) NSString *jumpQuickBindCard;
@property (retain, nonatomic) CJPayQuickBindCardModel *quickCardModel;
@property (copy, nonatomic) NSString *displayIcon;
@property (copy, nonatomic) NSString *displayDesc;
@property (copy, nonatomic) NSString *protocolDescription;
@property (copy, nonatomic) NSString *buttonDescription;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)isAuthed;
- (void)setIsAuthed:(id)arg0;
- (id)displayDesc;
- (void)setDisplayDesc:(id)arg0;
- (id)jumpQuickBindCard;
- (void)setJumpQuickBindCard:(id)arg0;
- (id)idNameMask;
- (id)memberBizOrderNo;
- (id)mobileMask;
- (void)setMobileMask:(id)arg0;
- (void)setMemberBizOrderNo:(id)arg0;
- (id)smchId;
- (id)uidMobileMask;
- (id)skipPwd;
- (void)setSkipPwd:(id)arg0;
- (id)isSetPwd;
- (void)setIsSetPwd:(id)arg0;
- (void)setSmchId:(id)arg0;
- (void)setIdNameMask:(id)arg0;
- (void)setUidMobileMask:(id)arg0;
- (id)payUID;
- (void)setPayUID:(id)arg0;
- (id)protocolDescription;
- (id)buttonDescription;
- (void)setQuickCardModel:(id)arg0;
- (void)setOneKeyBankInfoStr:(id)arg0;
- (id)allowTransCardType;
- (void)setAllowTransCardType:(id)arg0;
- (id)quickCardModel;
- (void)setProtocolDescription:(id)arg0;
- (void)setButtonDescription:(id)arg0;
- (id)oneKeyBankInfoStr;
- (void)setAppId:(id)arg0;
- (void).cxx_destruct;
- (id)appId;
- (id)merchantId;
- (void)setMerchantId:(id)arg0;
- (id)displayIcon;
- (void)setDisplayIcon:(id)arg0;
- (id)idType;
- (void)setIdType:(id)arg0;

@end