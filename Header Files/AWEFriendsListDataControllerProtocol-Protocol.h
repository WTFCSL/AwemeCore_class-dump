//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@protocol AWEFriendsListDataControllerProtocol <NSObject>

@property (readonly, nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *hotsoonText;
@property (nonatomic) long long vcdCount;
@property (nonatomic) long long hotsoonHasMore;
@property (copy, nonatomic) NSNumber *recommendType;
@property (nonatomic) long long total;
@property (nonatomic) BOOL totalAccurate;

- (id)recommendType;
- (id)hotsoonText;
- (void)setHotsoonText:(id)arg0;
- (long long)hotsoonHasMore;
- (void)setHotsoonHasMore:(long long)arg0;
- (void)setRecommendType:(id)arg0;
- (long long)vcdCount;
- (void)setVcdCount:(long long)arg0;
- (BOOL)totalAccurate;
- (void)setTotalAccurate:(BOOL)arg0;
- (void)useServerSortedWithIsFetchNumber:(BOOL)arg0;
- (void)refreshAllFriendWithCompletion:(id /* block */)arg0;
- (long long)total;
- (id)initWithCount:(long long)arg0;
- (BOOL)hasMore;
- (void)setTotal:(long long)arg0;

@end