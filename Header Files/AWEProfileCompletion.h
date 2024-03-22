//
//     Generated by private class-dump
//

@class NSNumber;

@interface AWEProfileCompletion : AWEBaseApiModel {
    NSNumber *_avatar;
    NSNumber *_nickname;
    NSNumber *_shortId;
    NSNumber *_gender;
    NSNumber *_birthday;
    NSNumber *_school;
    NSNumber *_signature;
    NSNumber *_location;
    NSNumber *_hometown;
}

@property (retain, nonatomic) NSNumber *avatar;
@property (retain, nonatomic) NSNumber *nickname;
@property (retain, nonatomic) NSNumber *shortId;
@property (retain, nonatomic) NSNumber *gender;
@property (retain, nonatomic) NSNumber *birthday;
@property (retain, nonatomic) NSNumber *school;
@property (retain, nonatomic) NSNumber *signature;
@property (retain, nonatomic) NSNumber *location;
@property (retain, nonatomic) NSNumber *hometown;

+ (id)JSONKeyPathsByPropertyKey;

- (id)shortId;
- (id)school;
- (void)setShortId:(id)arg0;
- (id)hometown;
- (void)setHometown:(id)arg0;
- (void)setSchool:(id)arg0;
- (void)setSignature:(id)arg0;
- (void)setBirthday:(id)arg0;
- (id)signature;
- (id)nickname;
- (void).cxx_destruct;
- (void)setNickname:(id)arg0;
- (id)birthday;
- (id)location;
- (id)gender;
- (void)setLocation:(id)arg0;
- (void)setGender:(id)arg0;
- (id)avatar;
- (void)setAvatar:(id)arg0;

@end