//
//     Generated by private class-dump
//

@class NSString;

@interface IESECRelationFansClubInfoModel : MTLModel <MTLJSONSerializing> {
    BOOL _joinStatus;
    long long _fansClubLevel;
    long long _fansClubIntimacy;
}

@property (nonatomic) long long fansClubLevel;
@property (nonatomic) long long fansClubIntimacy;
@property (nonatomic) BOOL joinStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)joinStatus;
- (void)setJoinStatus:(BOOL)arg0;
- (long long)fansClubLevel;
- (void)setFansClubLevel:(long long)arg0;
- (long long)fansClubIntimacy;
- (void)setFansClubIntimacy:(long long)arg0;

@end
