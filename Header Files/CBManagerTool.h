//
//     Generated by private class-dump
//

@class JLRCs, NSTimer;

@interface CBManagerTool : NSObject {
    int counts;
    char DetailCode[100];
    BOOL _isProgress;
    int _readNum;
    long long _reqidType;
    long long _reTryTimes;
    long long _timeouts;
    id /* block */ _NFCReaderCanceled;
    unsigned long long _logLevel;
    JLRCs *_jlrcObj;
    NSTimer *_timerNFC;
}

@property (nonatomic) unsigned long long logLevel;
@property (nonatomic) JLRCs *jlrcObj;
@property (retain, nonatomic) NSTimer *timerNFC;
@property (nonatomic) long long reqidType;
@property (nonatomic) long long reTryTimes;
@property (nonatomic) long long timeouts;
@property (nonatomic) int readNum;
@property (nonatomic) BOOL isProgress;
@property (copy, nonatomic) id /* block */ NFCReaderCanceled;

+ (id)sharedInstance;

- (void)updateNFCMsg:(id)arg0;
- (id)timerNFC;
- (void)setTimerNFC:(id)arg0;
- (void)countDowns;
- (void)setJlrcObj:(id)arg0;
- (id)jlrcObj;
- (id /* block */)NFCReaderCanceled;
- (int)readNum;
- (void)setReadNum:(int)arg0;
- (void)updateNFCTimer;
- (long long)reqidType;
- (void)setReqidType:(long long)arg0;
- (void)stopNFCWithSuccess:(BOOL)arg0 msg:(id)arg1;
- (BOOL)isOnlyNumber:(id)arg0;
- (long long)reTryTimes;
- (void)setReTryTimes:(long long)arg0;
- (void)setIsProgress:(BOOL)arg0;
- (void)readPassportWithPassportNumber:(id)arg0 birth:(id)arg1 date:(id)arg2 cid:(id)arg3 withIsImg:(BOOL)arg4 withMod:(long long)arg5 result:(id /* block */)arg6;
- (BOOL)isValidIP:(id)arg0;
- (id)nullToString:(id)arg0;
- (unsigned long long)setIp:(id)arg0 port:(long long)arg1 envcode:(long long)arg2;
- (double)updateNetDelayState;
- (void)startReadIDCardWithNFC:(id)arg0 mod:(long long)arg1 CardType:(long long)arg2 withIsImg:(BOOL)arg3 result:(id /* block */)arg4;
- (int)isAlphaAndNumber:(id)arg0;
- (void)setNFCReaderCanceled:(id /* block */)arg0;
- (void)setLogLevel:(unsigned long long)arg0;
- (void).cxx_destruct;
- (long long)timeouts;
- (void)setTimeouts:(long long)arg0;
- (unsigned long long)logLevel;
- (BOOL)isProgress;

@end
