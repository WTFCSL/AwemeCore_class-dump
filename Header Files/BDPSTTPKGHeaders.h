//
//     Generated by private class-dump
//

@class NSData;

@interface BDPSTTPKGHeaders : NSObject {
    BOOL _isEncrypt;
    long long _version;
    unsigned long long _compressionType;
    NSData *_MD5;
}

@property (nonatomic) long long version;
@property (nonatomic) unsigned long long compressionType;
@property (nonatomic) BOOL isEncrypt;
@property (copy, nonatomic) NSData *MD5;

- (void)setIsEncrypt:(BOOL)arg0;
- (BOOL)isEncrypt;
- (void)setVersion:(long long)arg0;
- (void).cxx_destruct;
- (void)setCompressionType:(unsigned long long)arg0;
- (long long)version;
- (unsigned long long)compressionType;
- (id)MD5;
- (void)setMD5:(id)arg0;

@end
