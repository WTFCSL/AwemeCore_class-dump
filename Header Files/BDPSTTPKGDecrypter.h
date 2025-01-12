//
//     Generated by private class-dump
//

@class NSString, NSData, NSMutableData, NSError, BDPSTTPKGHeaders;
@protocol BDPSTTPKGDecompressionProtocol;

@interface BDPSTTPKGDecrypter : NSObject {
    BOOL _rc4Status;
    NSError *_error;
    BDPSTTPKGHeaders *_sttpkgHeaders;
    id /* block */ _headersCallback;
    id /* block */ _decryptedDataCallback;
    id /* block */ _errorCallback;
    NSString *_mpId;
    unsigned long long _pkgType;
    unsigned long long _spkgVersion;
    id<BDPSTTPKGDecompressionProtocol> _compression;
    NSData *_keyData;
    NSMutableData *_headersBuffer;
    NSMutableData *_rc4Buffer;
    unsigned long long _xorStatus;
}

@property (readonly, copy, nonatomic) NSString *mpId;
@property (nonatomic) unsigned long long pkgType;
@property (nonatomic) unsigned long long spkgVersion;
@property (retain, nonatomic) id<BDPSTTPKGDecompressionProtocol> compression;
@property (copy, nonatomic) NSData *keyData;
@property (retain, nonatomic) NSMutableData *headersBuffer;
@property (nonatomic) BOOL rc4Status;
@property (retain, nonatomic) NSMutableData *rc4Buffer;
@property (nonatomic) unsigned long long xorStatus;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) BDPSTTPKGHeaders *sttpkgHeaders;
@property (copy, nonatomic) id /* block */ headersCallback;
@property (copy, nonatomic) id /* block */ decryptedDataCallback;
@property (copy, nonatomic) id /* block */ errorCallback;

- (void)setPkgType:(unsigned long long)arg0;
- (unsigned long long)pkgType;
- (void)didError:(id)arg0;
- (id)mpId;
- (void)setHeadersCallback:(id /* block */)arg0;
- (void)setDecryptedDataCallback:(id /* block */)arg0;
- (id)sttpkgHeaders;
- (void)setSttpkgHeaders:(id)arg0;
- (id)headerParse:(id)arg0;
- (id /* block */)decryptedDataCallback;
- (id)decompressionInit:(unsigned long long)arg0 error:(id *)arg1;
- (id)_hashData:(id)arg0;
- (id /* block */)headersCallback;
- (id)_rc4Decrypt:(id)arg0;
- (id)_xor:(id)arg0;
- (id)initWithMpId:(id)arg0;
- (unsigned long long)spkgVersion;
- (void)setSpkgVersion:(unsigned long long)arg0;
- (id)headersBuffer;
- (void)setHeadersBuffer:(id)arg0;
- (BOOL)rc4Status;
- (void)setRc4Status:(BOOL)arg0;
- (id)rc4Buffer;
- (void)setRc4Buffer:(id)arg0;
- (unsigned long long)xorStatus;
- (void)setXorStatus:(unsigned long long)arg0;
- (void).cxx_destruct;
- (id)keyData;
- (void)setKeyData:(id)arg0;
- (id)initWithURL:(id)arg0;
- (void)setError:(id)arg0;
- (void)write:(id)arg0;
- (id)error;
- (id)compression;
- (void)setCompression:(id)arg0;
- (id)decrypt:(id)arg0;
- (id /* block */)errorCallback;
- (void)setErrorCallback:(id /* block */)arg0;

@end
