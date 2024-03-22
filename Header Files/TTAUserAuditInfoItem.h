//
//     Generated by private class-dump
//

@class NSString, NSNumber, NSDictionary;

@interface TTAUserAuditInfoItem : TTADataRespModel {
    NSString *_name;
    NSString *_user_description;
    NSString *_avatar_url;
    NSNumber *_gender;
    NSString *_birthday;
    NSString *_industry;
    NSString *_area;
    NSDictionary *_expend_attrs;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *user_description;
@property (copy, nonatomic) NSString *avatar_url;
@property (retain, nonatomic) NSNumber *gender;
@property (copy, nonatomic) NSString *birthday;
@property (copy, nonatomic) NSString *industry;
@property (copy, nonatomic) NSString *area;
@property (copy, nonatomic) NSDictionary *expend_attrs;

+ (id)tta_modelCustomPropertyMapper;

- (id)industry;
- (void)setIndustry:(id)arg0;
- (id)avatar_url;
- (void)setAvatar_url:(id)arg0;
- (id)user_description;
- (void)setUser_description:(id)arg0;
- (id)expend_attrs;
- (void)setExpend_attrs:(id)arg0;
- (void)setBirthday:(id)arg0;
- (void).cxx_destruct;
- (id)birthday;
- (id)gender;
- (void)setName:(id)arg0;
- (void)setGender:(id)arg0;
- (id)name;
- (id)area;
- (void)setArea:(id)arg0;

@end
