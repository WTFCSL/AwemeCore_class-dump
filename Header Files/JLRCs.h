//
//     Generated by private class-dump
//

@class NSString;

@interface JLRCs : NSObject {
    BOOL _isProgress;
    int _readNum;
    unsigned long long _mod;
    unsigned long long _apduLen;
    NSString *_deviceSN;
    long long _logLevel;
    unsigned long long _reTime;
    void /* function */ *_callback;
    long long _reqidType;
    long long _reTryTimes;
    long long _timeouts;
    id _model;
    id /* block */ _connectBlock;
    NSString *_passportDomin;
}

@property (copy, nonatomic) NSString *passportDomin;
@property (nonatomic) unsigned long long mod;
@property (nonatomic) unsigned long long apduLen;
@property (copy, nonatomic) NSString *deviceSN;
@property (nonatomic) long long logLevel;
@property (nonatomic) unsigned long long reTime;
@property void /* function */ *callback;
@property (nonatomic) long long reqidType;
@property (nonatomic) long long reTryTimes;
@property (nonatomic) long long timeouts;
@property (nonatomic) int readNum;
@property (retain, nonatomic) id model;
@property (nonatomic) BOOL isProgress;
@property (copy, nonatomic) id /* block */ connectBlock;

+ (id)sharedInstance;

- (int)setIp:(id)arg0 andPort:(int)arg1 idType:(int)arg2;
- (double)testNetWork;
- (int)readNum;
- (void)setReadNum:(int)arg0;
- (void)JL_setQueryInfoParameterWithCardInfoState:(int)arg0 withVoucher:(int)arg1 withCompositeCardPhoto:(int)arg2;
- (long long)reqidType;
- (void)setReqidType:(long long)arg0;
- (void)readIDCard:(id)arg0 type:(long long)arg1 withIsImg:(BOOL)arg2 result:(id /* block */)arg3;
- (long long)reTryTimes;
- (void)setReTryTimes:(long long)arg0;
- (void)setIsProgress:(BOOL)arg0;
- (void)setConnectBlock:(id /* block */)arg0;
- (void)readPassportWithPassportNumber:(id)arg0 birth:(id)arg1 date:(id)arg2 cid:(id)arg3 withIsImg:(BOOL)arg4 withMod:(long long)arg5 result:(id /* block */)arg6;
- (void)setApduLen:(unsigned long long)arg0;
- (void)setReTime:(unsigned long long)arg0;
- (void)RPUserClose;
- (id)generateRandomStr:(unsigned long long)arg0;
- (id)getUUID:(id)arg0;
- (unsigned long long)apduLen;
- (unsigned long long)reTime;
- (int)bytesToHexStr:(char *)arg0 srcLen:(int)arg1 res:(char *)arg2;
- (int)hexStrToByte:(char *)arg0 dest:(char *)arg1;
- (void)setPassportDomin:(id)arg0;
- (id)queryIpWithDomain:(id)arg0;
- (id)passportDomin;
- (void)readIDCard:(id)arg0 type:(long long)arg1 result:(id /* block */)arg2;
- (void)setModel:(id)arg0;
- (void)setLogLevel:(long long)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setCallback:(void /* function */ *)arg0;
- (long long)timeouts;
- (id)model;
- (void /* function */ *)callback;
- (void)setTimeouts:(long long)arg0;
- (void)dealloc;
- (long long)logLevel;
- (BOOL)isProgress;
- (void)setDeviceSN:(id)arg0;
- (id)deviceSN;
- (unsigned long long)mod;
- (void)setMod:(unsigned long long)arg0;
- (id /* block */)connectBlock;

@end
