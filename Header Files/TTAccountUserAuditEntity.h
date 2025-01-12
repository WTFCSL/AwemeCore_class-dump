//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface TTAccountUserAuditEntity : NSObject <NSCopying, NSSecureCoding> {
    NSString *_name;
    NSString *_userDescription;
    NSString *_avatarURL;
    NSNumber *_gender;
    NSString *_birthday;
    NSString *_industry;
    NSString *_area;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *userDescription;
@property (copy, nonatomic) NSString *avatarURL;
@property (retain, nonatomic) NSNumber *gender;
@property (copy, nonatomic) NSString *birthday;
@property (copy, nonatomic) NSString *industry;
@property (copy, nonatomic) NSString *area;

+ (BOOL)supportsSecureCoding;

- (id)avatarURL;
- (void)setAvatarURL:(id)arg0;
- (id)industry;
- (void)setIndustry:(id)arg0;
- (id)toOriginalDictionary;
- (id)initWithAuditModel:(id)arg0;
- (void)setBirthday:(id)arg0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)birthday;
- (id)gender;
- (id)toDictionary;
- (id)initWithCoder:(id)arg0;
- (void)setName:(id)arg0;
- (void)setGender:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (id)name;
- (id)area;
- (void)setArea:(id)arg0;
- (id)userDescription;
- (void)setUserDescription:(id)arg0;

@end
