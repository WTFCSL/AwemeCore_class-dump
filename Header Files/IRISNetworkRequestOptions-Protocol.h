//
//     Generated by private class-dump
//

@class NSArray, NSDictionary;
@protocol IRISDataCoder;

@protocol IRISNetworkRequestOptions <IRISModule>

@property (nonatomic) unsigned long long attempts;
@property (nonatomic) double timeout;
@property (retain, nonatomic) NSArray *compressors;
@property (weak, nonatomic) id<IRISDataCoder> encryptor;
@property (weak, nonatomic) id<IRISDataCoder> decryptor;
@property (retain, nonatomic) NSDictionary *userInfo;

- (id)compressors;
- (void)setCompressors:(id)arg0;
- (void)setDecryptor:(id)arg0;
- (void)setUserInfo:(id)arg0;
- (double)timeout;
- (id)userInfo;
- (void)setTimeout:(double)arg0;
- (unsigned long long)attempts;
- (void)setAttempts:(unsigned long long)arg0;
- (id)encryptor;
- (void)setEncryptor:(id)arg0;
- (id)decryptor;

@end
