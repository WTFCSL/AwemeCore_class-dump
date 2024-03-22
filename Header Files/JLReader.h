//
//     Generated by private class-dump
//

@class NSString, JLNFCMessageModel;

@interface JLReader : NSObject {
    BOOL _isProgress;
    BOOL _isImg;
    BOOL _passportIsImg;
    long long _reTryTimes;
    long long _timeouts;
    id /* block */ _connectBlock;
    long long _reqidType;
    NSString *_appid;
    long long _mod;
    NSString *_ip;
    long long _port;
    long long _cardType;
    long long _envCode;
    JLNFCMessageModel *_model;
    long long _httpPort;
    JLNFCMessageModel *_passportModel;
    long long _passportMod;
}

@property (nonatomic) long long reqidType;
@property (copy, nonatomic) NSString *appid;
@property (nonatomic) long long mod;
@property (copy, nonatomic) NSString *ip;
@property (nonatomic) long long port;
@property (nonatomic) long long cardType;
@property (nonatomic) long long envCode;
@property (nonatomic) BOOL isImg;
@property (retain, nonatomic) JLNFCMessageModel *model;
@property (nonatomic) long long httpPort;
@property (retain, nonatomic) JLNFCMessageModel *passportModel;
@property (nonatomic) long long passportMod;
@property (nonatomic) BOOL passportIsImg;
@property (nonatomic) long long reTryTimes;
@property (nonatomic) long long timeouts;
@property (nonatomic) BOOL isProgress;
@property (copy, nonatomic) id /* block */ connectBlock;

+ (id)sharedInstance;

- (void)setEnvCode:(long long)arg0;
- (void)setIsImg:(BOOL)arg0;
- (void)setPassportModel:(id)arg0;
- (void)setPassportMod:(long long)arg0;
- (void)setPassportIsImg:(BOOL)arg0;
- (long long)envCode;
- (BOOL)isImg;
- (int)checkParamWithIsBackImg:(BOOL)arg0;
- (BOOL)passportIsImg;
- (id)passportModel;
- (long long)passportMod;
- (void)setReaderConfigWithAppid:(id)arg0 withMod:(long long)arg1 withIp:(id)arg2 withPort:(long long)arg3 withCardType:(long long)arg4 withEnvCode:(long long)arg5 withIsImg:(BOOL)arg6 withModel:(id)arg7 withConfigState:(long long)arg8;
- (void)startReadIDCardWithResult:(id /* block */)arg0;
- (void)readPassportWithPassportNumber:(id)arg0 birth:(id)arg1 date:(id)arg2 result:(id /* block */)arg3;
- (double)updateNetDelayStateWithIp:(id)arg0 withPort:(long long)arg1 withEnvCode:(long long)arg2;
- (void)JL_setQueryInfoParameterWithCardInfoState:(int)arg0 withVoucher:(int)arg1 withCompositeCardPhoto:(int)arg2;
- (long long)reqidType;
- (void)setReqidType:(long long)arg0;
- (long long)reTryTimes;
- (void)setReTryTimes:(long long)arg0;
- (void)setIsProgress:(BOOL)arg0;
- (void)setConnectBlock:(id /* block */)arg0;
- (void)setModel:(id)arg0;
- (long long)port;
- (void)setPort:(long long)arg0;
- (void).cxx_destruct;
- (long long)timeouts;
- (id)model;
- (void)setTimeouts:(long long)arg0;
- (long long)cardType;
- (void)setCardType:(long long)arg0;
- (id)appid;
- (void)setAppid:(id)arg0;
- (BOOL)isProgress;
- (void)setIp:(id)arg0;
- (id)ip;
- (long long)mod;
- (void)setMod:(long long)arg0;
- (long long)httpPort;
- (void)setHttpPort:(long long)arg0;
- (id /* block */)connectBlock;
- (id)getErrorMessage:(long long)arg0;

@end