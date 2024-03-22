//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface TTAccountPlatformEntity : NSObject <NSCopying, NSSecureCoding> {
    NSNumber *_userID;
    NSString *_platformUID;
    NSString *_platform;
    NSString *_platformScreenName;
    NSString *_profileImageURL;
    NSNumber *_modifyTime;
    NSNumber *_expiredIn;
    NSNumber *_expiredTime;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *userID;
@property (copy, nonatomic) NSString *platformUID;
@property (copy, nonatomic) NSString *platform;
@property (copy, nonatomic) NSString *platformScreenName;
@property (copy, nonatomic) NSString *profileImageURL;
@property (retain, nonatomic) NSNumber *modifyTime;
@property (retain, nonatomic) NSNumber *expiredIn;
@property (retain, nonatomic) NSNumber *expiredTime;

+ (BOOL)supportsSecureCoding;

- (id)modifyTime;
- (id)platformScreenName;
- (id)expiredTime;
- (void)setExpiredTime:(id)arg0;
- (void)setModifyTime:(id)arg0;
- (void)setPlatformScreenName:(id)arg0;
- (id)platformUID;
- (void)setPlatformUID:(id)arg0;
- (id)expiredIn;
- (void)setExpiredIn:(id)arg0;
- (id)initWithThirdAccountModel:(id)arg0;
- (id)userID;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setUserID:(id)arg0;
- (void)setPlatform:(id)arg0;
- (id)platform;
- (id)toDictionary;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (id)profileImageURL;
- (void)setProfileImageURL:(id)arg0;

@end