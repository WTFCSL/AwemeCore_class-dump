//
//     Generated by private class-dump
//

@class NSString;

@interface AWERelationListUserAdapterModel : AWEAdaptorUserModel {
    BOOL _isInDeactivateBufferPeriod;
    BOOL _isVSFirst;
    BOOL _isTop;
    BOOL _isCache;
    BOOL _isFriends;
    BOOL _imShowEditBtn;
}

@property (nonatomic) long long blockStatus;
@property (nonatomic) BOOL isInDeactivateBufferPeriod;
@property (copy, nonatomic) NSString *alias;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (nonatomic) BOOL enableEditAlias;
@property (readonly, nonatomic) BOOL isLiving;
@property (nonatomic) BOOL isVSFirst;
@property (nonatomic) long long topStatus;
@property (nonatomic) BOOL isTop;
@property (nonatomic) BOOL isCache;
@property (nonatomic) BOOL isFriends;
@property (readonly, nonatomic) BOOL isVerifiedEnterprise;
@property (nonatomic) BOOL imShowEditBtn;

- (long long)blockStatus;
- (void)setBlockStatus:(long long)arg0;
- (BOOL)isLiving;
- (BOOL)isCache;
- (void)setIsCache:(BOOL)arg0;
- (void)setIsTop:(BOOL)arg0;
- (BOOL)isVerifiedEnterprise;
- (void)setTopStatus:(long long)arg0;
- (long long)topStatus;
- (void)setEnableEditAlias:(BOOL)arg0;
- (BOOL)isFriends;
- (void)setIsFriends:(BOOL)arg0;
- (BOOL)isInDeactivateBufferPeriod;
- (BOOL)isVSFirst;
- (void)setIsVSFirst:(BOOL)arg0;
- (BOOL)hasLiveRoomData;
- (BOOL)enableEditAlias;
- (void)setIsInDeactivateBufferPeriod:(BOOL)arg0;
- (BOOL)imShowEditBtn;
- (void)setImShowEditBtn:(BOOL)arg0;
- (id)alias;
- (id)displayName;
- (void)setAlias:(id)arg0;
- (BOOL)isTop;

@end
