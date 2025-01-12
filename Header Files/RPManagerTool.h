//
//     Generated by private class-dump
//

@class JLRCs;

@interface RPManagerTool : NSObject {
    long long _reqidType;
    JLRCs *_jlrc_RP;
}

@property (retain, nonatomic) JLRCs *jlrc_RP;
@property (nonatomic) long long reqidType;

+ (id)sharedInstance;

- (long long)reqidType;
- (void)setReqidType:(long long)arg0;
- (BOOL)isValidIP:(id)arg0;
- (void)setJlrc_RP:(id)arg0;
- (id)jlrc_RP;
- (id)generateRandStr:(unsigned long long)arg0;
- (int)setRPReader;
- (int)JLReadPassportByCid:(char *)arg0 andReqid:(char *)arg1 MKZSm3:(id)arg2;
- (id)getSM3withPassportNumber:(id)arg0 birth:(id)arg1 date:(id)arg2;
- (int)beforeSendFileData:(id)arg0 andNewReqid:(char *)arg1;
- (int)sendFileData:(id)arg0 andNewReqid:(char *)arg1 withReadTime:(int)arg2 andInfoData:(char *)arg3;
- (void)sendLastDataWithErrCode:(int)arg0 withSodFile:(id)arg1 withReqid:(id)arg2 withCid:(id)arg3 withReadTime:(float)arg4;
- (void).cxx_destruct;

@end
