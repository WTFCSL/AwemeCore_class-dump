//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEPublishCoCreatorSettingsModel : MTLModel <MTLJSONSerializing> {
    long long _entryStatus;
    long long _certStatus;
    long long _albumEntryStatus;
    long long _albumCertStatus;
    long long _externalContributeStatus;
    NSString *_externalRestrictionMsg;
    NSArray *_roles;
    NSArray *_albumRoles;
    long long _maxRoleNum;
    long long _currentType;
    NSString *_restrictionMsg;
}

@property (nonatomic) long long entryStatus;
@property (nonatomic) long long certStatus;
@property (nonatomic) long long albumEntryStatus;
@property (nonatomic) long long albumCertStatus;
@property (nonatomic) long long externalContributeStatus;
@property (copy, nonatomic) NSString *externalRestrictionMsg;
@property (copy, nonatomic) NSArray *roles;
@property (copy, nonatomic) NSArray *albumRoles;
@property (nonatomic) long long maxRoleNum;
@property (nonatomic) long long currentType;
@property (copy, nonatomic) NSString *restrictionMsg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rolesJSONTransformer;
+ (id)albumRolesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)certStatus;
- (void)setCertStatus:(long long)arg0;
- (void)setCurrentType:(long long)arg0;
- (long long)maxRoleNum;
- (id)albumRoles;
- (long long)albumCertStatus;
- (long long)albumEntryStatus;
- (long long)entryStatus;
- (id)restrictionMsg;
- (long long)externalContributeStatus;
- (void)setEntryStatus:(long long)arg0;
- (void)setAlbumEntryStatus:(long long)arg0;
- (void)setAlbumCertStatus:(long long)arg0;
- (void)setExternalContributeStatus:(long long)arg0;
- (id)externalRestrictionMsg;
- (void)setExternalRestrictionMsg:(id)arg0;
- (void)setAlbumRoles:(id)arg0;
- (void)setMaxRoleNum:(long long)arg0;
- (void)setRestrictionMsg:(id)arg0;
- (void).cxx_destruct;
- (void)setRoles:(id)arg0;
- (id)roles;
- (long long)currentType;

@end
