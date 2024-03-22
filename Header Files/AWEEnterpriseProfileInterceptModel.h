//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEEnterpriseProfileInterceptModel : MTLModel <MTLJSONSerializing> {
    BOOL _needLimitEditProfile;
    NSString *_nicknameEditLimitToast;
    NSString *_avatarEditLimitToast;
    NSArray *_alternativeNickNames;
}

@property (nonatomic) BOOL needLimitEditProfile;
@property (copy, nonatomic) NSString *nicknameEditLimitToast;
@property (copy, nonatomic) NSString *avatarEditLimitToast;
@property (copy, nonatomic) NSArray *alternativeNickNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)needLimitEditProfile;
- (void)setNeedLimitEditProfile:(BOOL)arg0;
- (id)nicknameEditLimitToast;
- (void)setNicknameEditLimitToast:(id)arg0;
- (id)avatarEditLimitToast;
- (void)setAvatarEditLimitToast:(id)arg0;
- (id)alternativeNickNames;
- (void)setAlternativeNickNames:(id)arg0;
- (void).cxx_destruct;

@end