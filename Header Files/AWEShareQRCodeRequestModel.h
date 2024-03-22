//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSArray;

@interface AWEShareQRCodeRequestModel : NSObject <NSSecureCoding> {
    BOOL _useRebrandStyle;
    NSString *_itemId;
    NSDictionary *_extraInfo;
    NSDictionary *_activityInfo;
    NSString *_shareScene;
    NSString *_editionID;
    unsigned long long _qrCodeShapeType;
    unsigned long long _qrCodeType;
    NSArray *_urlList;
    NSArray *_avatarList;
    long long _expireTimeInSecond;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (copy, nonatomic) NSDictionary *activityInfo;
@property (copy, nonatomic) NSString *shareScene;
@property (nonatomic) BOOL useRebrandStyle;
@property (copy, nonatomic) NSString *editionID;
@property (nonatomic) unsigned long long qrCodeShapeType;
@property (nonatomic) unsigned long long qrCodeType;
@property (copy, nonatomic) NSArray *urlList;
@property (copy, nonatomic) NSArray *avatarList;
@property (nonatomic) long long expireTimeInSecond;

+ (BOOL)supportsSecureCoding;

- (void)setExtraInfo:(id)arg0;
- (id)urlList;
- (void)setUrlList:(id)arg0;
- (void)setShareScene:(id)arg0;
- (void)setActivityInfo:(id)arg0;
- (unsigned long long)qrCodeType;
- (void)setQrCodeType:(unsigned long long)arg0;
- (long long)expireTimeInSecond;
- (void)setExpireTimeInSecond:(long long)arg0;
- (id)shareScene;
- (id)avatarList;
- (void)setAvatarList:(id)arg0;
- (id)editionID;
- (void)setEditionID:(id)arg0;
- (void)setUseRebrandStyle:(BOOL)arg0;
- (BOOL)isEqualToQRCodeRequestModel:(id)arg0;
- (BOOL)useRebrandStyle;
- (unsigned long long)qrCodeShapeType;
- (void)setQrCodeShapeType:(unsigned long long)arg0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg0;
- (BOOL)isEqual:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (id)itemId;
- (void)setItemId:(id)arg0;
- (id)extraInfo;
- (id)activityInfo;

@end
