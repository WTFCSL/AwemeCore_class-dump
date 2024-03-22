//
//     Generated by private class-dump
//

@class NSString;

@interface CJPayMemAuthInfo : JSONModel {
    BOOL _isSetPWD;
    BOOL _isAuthed;
    BOOL _isOpenAccount;
    BOOL _isIdPhotoUploaded;
    NSString *_payUID;
    long long _memberLevel;
    long long _memberType;
    NSString *_customerID;
    NSString *_mobileMask;
    NSString *_contactAddress;
    NSString *_country;
    NSString *_countryName;
    NSString *_idCodeMask;
    NSString *_idExpireDate;
    NSString *_idNameMask;
    NSString *_idPhotoStatus;
    NSString *_idType;
    NSString *_identityCodeMask;
    NSString *_job;
    NSString *_sex;
    NSString *_sexName;
}

@property (copy, nonatomic) NSString *payUID;
@property (nonatomic) long long memberLevel;
@property (nonatomic) long long memberType;
@property (nonatomic) BOOL isSetPWD;
@property (nonatomic) BOOL isAuthed;
@property (nonatomic) BOOL isOpenAccount;
@property (copy, nonatomic) NSString *customerID;
@property (copy, nonatomic) NSString *mobileMask;
@property (copy, nonatomic) NSString *contactAddress;
@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSString *countryName;
@property (copy, nonatomic) NSString *idCodeMask;
@property (copy, nonatomic) NSString *idExpireDate;
@property (copy, nonatomic) NSString *idNameMask;
@property (copy, nonatomic) NSString *idPhotoStatus;
@property (copy, nonatomic) NSString *idType;
@property (nonatomic) BOOL isIdPhotoUploaded;
@property (copy, nonatomic) NSString *identityCodeMask;
@property (copy, nonatomic) NSString *job;
@property (copy, nonatomic) NSString *sex;
@property (copy, nonatomic) NSString *sexName;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (BOOL)isAuthed;
- (void)setIsAuthed:(BOOL)arg0;
- (long long)memberLevel;
- (void)setMemberLevel:(long long)arg0;
- (id)idNameMask;
- (id)idCodeMask;
- (id)mobileMask;
- (void)setMobileMask:(id)arg0;
- (id)identityCodeMask;
- (void)setIdentityCodeMask:(id)arg0;
- (void)setIdCodeMask:(id)arg0;
- (void)setIdNameMask:(id)arg0;
- (id)payUID;
- (void)setPayUID:(id)arg0;
- (BOOL)isSetPWD;
- (void)setIsSetPWD:(BOOL)arg0;
- (BOOL)isOpenAccount;
- (void)setIsOpenAccount:(BOOL)arg0;
- (id)contactAddress;
- (void)setContactAddress:(id)arg0;
- (id)idExpireDate;
- (void)setIdExpireDate:(id)arg0;
- (id)idPhotoStatus;
- (void)setIdPhotoStatus:(id)arg0;
- (BOOL)isIdPhotoUploaded;
- (void)setIsIdPhotoUploaded:(BOOL)arg0;
- (id)sexName;
- (void)setSexName:(id)arg0;
- (id)country;
- (id)job;
- (void).cxx_destruct;
- (id)countryName;
- (void)setCountry:(id)arg0;
- (void)setCountryName:(id)arg0;
- (long long)memberType;
- (void)setMemberType:(long long)arg0;
- (id)idType;
- (id)sex;
- (void)setSex:(id)arg0;
- (void)setIdType:(id)arg0;
- (void)setJob:(id)arg0;
- (id)customerID;
- (void)setCustomerID:(id)arg0;

@end