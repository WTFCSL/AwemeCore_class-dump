//
//     Generated by private class-dump
//

@class NSData;

@interface JLResult : NSObject {
    unsigned char _sw1;
    unsigned char _sw2;
    NSData *_outData;
    long long _errCode;
}

@property (retain, nonatomic) NSData *outData;
@property (nonatomic) long long errCode;
@property (nonatomic) unsigned char sw1;
@property (nonatomic) unsigned char sw2;

- (long long)errCode;
- (void)setErrCode:(long long)arg0;
- (id)outData;
- (unsigned char)sw1;
- (unsigned char)sw2;
- (void)setOutData:(id)arg0;
- (void)setSw1:(unsigned char)arg0;
- (void)setSw2:(unsigned char)arg0;
- (void).cxx_destruct;

@end
