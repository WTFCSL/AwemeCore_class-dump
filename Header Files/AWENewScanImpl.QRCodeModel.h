//
//     Generated by private class-dump
//

@interface AWENewScanImpl.QRCodeModel : AWEBaseApiModel {
    void /* unknown type, empty encoding */ qrcodeURL;
    void /* unknown type, empty encoding */ qrCodeType;
    void /* unknown type, empty encoding */ avatarURL;
    void /* unknown type, empty encoding */ expireTimeInSecond;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ qrcodeURL;
@property (nonatomic, retain) void /* unknown type, empty encoding */ qrCodeType;
@property (nonatomic, retain) void /* unknown type, empty encoding */ avatarURL;
@property (nonatomic) void /* unknown type, empty encoding */ expireTimeInSecond;

+ (id)JSONKeyPathsByPropertyKey;

- (id)avatarURL;
- (void)setAvatarURL:(id)arg0;
- (id)qrcodeURL;
- (void)setQrcodeURL:(id)arg0;
- (id)qrCodeType;
- (void)setQrCodeType:(id)arg0;
- (long long)expireTimeInSecond;
- (void)setExpireTimeInSecond:(long long)arg0;
- (id)qrcodeURLJSONTransformer;
- (id)avatarURLJSONTransformer;
- (id)init;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg0;

@end
