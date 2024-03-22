//
//     Generated by private class-dump
//

@class NSString, NSDictionary, DYAAwemeAccountModel, DYAPassportAccountModel;
@protocol NSCoding, AWEPassportUser;

@interface DYAAccountModel : MTLModel <MTLJSONSerializing> {
    DYAPassportAccountModel *_passportAccount;
    DYAAwemeAccountModel *_awemeAccount;
    id<NSCoding, AWEPassportUser> _businessModel;
    double _lastUpdateTime;
}

@property (retain, nonatomic) DYAPassportAccountModel *passportAccount;
@property (retain, nonatomic) DYAAwemeAccountModel *awemeAccount;
@property (retain, nonatomic) id<NSCoding, AWEPassportUser> businessModel;
@property (readonly, copy, nonatomic) NSString *userID;
@property (readonly, nonatomic) BOOL isNewUser;
@property (readonly, nonatomic) BOOL isValidAccount;
@property (readonly, copy, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) long long userAuthStatus;
@property (nonatomic) double lastUpdateTime;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceForMigrateWithPassportAccount:(id)arg0 awemeAccount:(id)arg1;
+ (id)instanceWithPassportAccount:(id)arg0 awemeAccount:(id)arg1;
+ (id)instanceWithPassportAccountOnly:(id)arg0;

- (void)setBusinessModel:(id)arg0;
- (id)businessModel;
- (id)passportAccount;
- (void)setPassportAccount:(id)arg0;
- (void)setAwemeAccount:(id)arg0;
- (id)awemeAccount;
- (BOOL)isValidAccount;
- (long long)userAuthStatus;
- (void)updateWithBusinessModel:(id)arg0 businessRawData:(id)arg1;
- (id)userID;
- (double)lastUpdateTime;
- (id)init;
- (void).cxx_destruct;
- (id)phoneNumber;
- (void)setLastUpdateTime:(double)arg0;
- (id)initWithCoder:(id)arg0;
- (BOOL)isNewUser;

@end
