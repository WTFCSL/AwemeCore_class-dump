//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSData, RPManagerTool;

@interface RPReadPassport : NSObject {
    int counts;
    BOOL _isHttp;
    BOOL _isProgress;
    long long _reqidType;
    long long _reTryTimes;
    long long _timeouts;
    NSString *_strCid;
    id /* block */ _readerPassportCanceled;
    NSString *_passportNumber;
    NSString *_dateOfBirth;
    NSString *_expiryDate;
    id /* block */ _rpResult;
    NSDictionary *_dgData;
    NSData *_imgData;
    RPManagerTool *_tool;
    long long _readerCount;
    NSString *_longReqid;
    NSString *_shortReqid;
    double _startTime;
}

@property (copy, nonatomic) NSString *passportNumber;
@property (copy, nonatomic) NSString *dateOfBirth;
@property (copy, nonatomic) NSString *expiryDate;
@property (copy, nonatomic) id /* block */ rpResult;
@property (retain, nonatomic) NSDictionary *dgData;
@property (retain, nonatomic) NSData *imgData;
@property (retain, nonatomic) RPManagerTool *tool;
@property (nonatomic) long long readerCount;
@property (copy, nonatomic) NSString *longReqid;
@property (copy, nonatomic) NSString *shortReqid;
@property (nonatomic) double startTime;
@property (nonatomic) long long reqidType;
@property (nonatomic) long long reTryTimes;
@property (nonatomic) long long timeouts;
@property (copy, nonatomic) NSString *strCid;
@property (nonatomic) BOOL isHttp;
@property (nonatomic) BOOL isProgress;
@property (copy, nonatomic) id /* block */ readerPassportCanceled;

+ (id)sharedInstance;

- (long long)reqidType;
- (void)setReqidType:(long long)arg0;
- (long long)reTryTimes;
- (void)setReTryTimes:(long long)arg0;
- (void)setIsProgress:(BOOL)arg0;
- (int)sendFirstHttp;
- (void)sendLastDataWithErrCode:(int)arg0 withSodFile:(id)arg1;
- (long long)readerCount;
- (void)setReaderCount:(long long)arg0;
- (void)setPassportNumber:(id)arg0;
- (void)setRpResult:(id /* block */)arg0;
- (id /* block */)readerPassportCanceled;
- (id /* block */)rpResult;
- (void)setImgData:(id)arg0;
- (void)verifyData:(id)arg0 withTime:(double)arg1;
- (BOOL)isHttp;
- (void)showLoadHUDMsg:(id)arg0;
- (id)passportNumber;
- (id)strCid;
- (void)setLongReqid:(id)arg0;
- (id)getUTCFormatDate:(id)arg0 formatStr:(id)arg1;
- (void)setShortReqid:(id)arg0;
- (void)httpVerifyData:(id)arg0 withTime:(double)arg1;
- (void)tcpVerifyData:(id)arg0 withTime:(double)arg1;
- (void)hideLoadHUD;
- (id)longReqid;
- (id)shortReqid;
- (void)setStrCid:(id)arg0;
- (void)readPassportWithPassportNumber:(id)arg0 birth:(id)arg1 date:(id)arg2 withIsImg:(BOOL)arg3 result:(id /* block */)arg4;
- (void)setIsHttp:(BOOL)arg0;
- (void)setReaderPassportCanceled:(id /* block */)arg0;
- (id)imgData;
- (void)setDgData:(id)arg0;
- (id)dgData;
- (void)setStartTime:(double)arg0;
- (void).cxx_destruct;
- (long long)timeouts;
- (void)setExpiryDate:(id)arg0;
- (void)setTimeouts:(long long)arg0;
- (double)startTime;
- (id)expiryDate;
- (id)tool;
- (id)dateOfBirth;
- (void)setDateOfBirth:(id)arg0;
- (BOOL)isProgress;
- (void)setTool:(id)arg0;
- (id)stringToDate:(id)arg0;

@end