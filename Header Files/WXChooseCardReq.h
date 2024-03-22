//
//     Generated by private class-dump
//

@class NSString;

@interface WXChooseCardReq : BaseReq {
    unsigned int _shopID;
    unsigned int _canMultiSelect;
    unsigned int _timeStamp;
    NSString *_appID;
    NSString *_cardType;
    NSString *_cardTpID;
    NSString *_signType;
    NSString *_cardSign;
    NSString *_nonceStr;
}

@property (copy, nonatomic) NSString *appID;
@property (nonatomic) unsigned int shopID;
@property (nonatomic) unsigned int canMultiSelect;
@property (copy, nonatomic) NSString *cardType;
@property (copy, nonatomic) NSString *cardTpID;
@property (copy, nonatomic) NSString *signType;
@property (copy, nonatomic) NSString *cardSign;
@property (nonatomic) unsigned int timeStamp;
@property (copy, nonatomic) NSString *nonceStr;

- (void)setShopID:(unsigned int)arg0;
- (unsigned int)shopID;
- (id)nonceStr;
- (void)setNonceStr:(id)arg0;
- (unsigned int)canMultiSelect;
- (void)setCanMultiSelect:(unsigned int)arg0;
- (id)cardTpID;
- (void)setCardTpID:(id)arg0;
- (id)cardSign;
- (void)setCardSign:(id)arg0;
- (void)setAppID:(id)arg0;
- (void).cxx_destruct;
- (unsigned int)timeStamp;
- (id)appID;
- (void)setTimeStamp:(unsigned int)arg0;
- (id)signType;
- (void)setSignType:(id)arg0;
- (id)cardType;
- (void)setCardType:(id)arg0;

@end
