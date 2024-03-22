//
//     Generated by private class-dump
//

@class NSString;

@interface DYARelationUserModel : MTLModel <MTLJSONSerializing> {
    BOOL _assistRegister;
    NSString *_name;
    NSString *_avatarURL;
    NSString *_userID;
    NSString *_secUserID;
    long long _appID;
    NSString *_relationUserToken;
    NSString *_phoneNumber;
    NSString *_safeMobile;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *avatarURL;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUserID;
@property (nonatomic) long long appID;
@property (copy, nonatomic) NSString *relationUserToken;
@property (nonatomic) BOOL assistRegister;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *safeMobile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)userIDJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)secUserID;
- (void)setSecUserID:(id)arg0;
- (id)avatarURL;
- (void)setAvatarURL:(id)arg0;
- (id)relationUserToken;
- (void)setRelationUserToken:(id)arg0;
- (BOOL)assistRegister;
- (void)setAssistRegister:(BOOL)arg0;
- (id)safeMobile;
- (void)setSafeMobile:(id)arg0;
- (id)userID;
- (void)setAppID:(long long)arg0;
- (void).cxx_destruct;
- (id)phoneNumber;
- (void)setPhoneNumber:(id)arg0;
- (void)setUserID:(id)arg0;
- (long long)appID;
- (void)setName:(id)arg0;
- (id)name;

@end
