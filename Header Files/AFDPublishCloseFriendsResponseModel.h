//
//     Generated by private class-dump
//

@interface AFDPublishCloseFriendsResponseModel : AWEBaseApiModel {
    BOOL _hasDiff;
    long long _closeFriendVisibleCount;
    long long _closeFriendUserCount;
}

@property (nonatomic) long long closeFriendVisibleCount;
@property (nonatomic) long long closeFriendUserCount;
@property (nonatomic) BOOL hasDiff;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setHasDiff:(BOOL)arg0;
- (long long)closeFriendVisibleCount;
- (void)setCloseFriendVisibleCount:(long long)arg0;
- (long long)closeFriendUserCount;
- (void)setCloseFriendUserCount:(long long)arg0;
- (BOOL)hasDiff;

@end