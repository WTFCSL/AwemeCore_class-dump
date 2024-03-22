//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWELikeListResponseModel : AWEBaseApiModel {
    BOOL _hasMore;
    NSArray *_userList;
    long long _maxCursor;
    long long _minCursor;
    long long _filteredCount;
    NSString *_hotsoonText;
    long long _hotsoonFilterCount;
    long long _hotsoonHasMore;
    long long _bottomPrivacyTextType;
    NSString *_bottomPrivacyText;
    long long _totalCount;
    long long _insertDiggCanceled;
}

@property (retain, nonatomic) NSArray *userList;
@property (nonatomic) long long maxCursor;
@property (nonatomic) long long minCursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long filteredCount;
@property (copy, nonatomic) NSString *hotsoonText;
@property (nonatomic) long long hotsoonFilterCount;
@property (nonatomic) long long hotsoonHasMore;
@property (nonatomic) long long bottomPrivacyTextType;
@property (copy, nonatomic) NSString *bottomPrivacyText;
@property (nonatomic) long long totalCount;
@property (nonatomic) long long insertDiggCanceled;

+ (id)userListJSONTransformer;
+ (id)bottomPrivacyTextTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)hotsoonText;
- (void)setHotsoonText:(id)arg0;
- (long long)hotsoonFilterCount;
- (void)setHotsoonFilterCount:(long long)arg0;
- (long long)hotsoonHasMore;
- (void)setHotsoonHasMore:(long long)arg0;
- (long long)minCursor;
- (long long)maxCursor;
- (void)setMaxCursor:(long long)arg0;
- (void)setMinCursor:(long long)arg0;
- (void)setUserList:(id)arg0;
- (long long)filteredCount;
- (long long)insertDiggCanceled;
- (void)setInsertDiggCanceled:(long long)arg0;
- (long long)bottomPrivacyTextType;
- (id)bottomPrivacyText;
- (void)setBottomPrivacyText:(id)arg0;
- (void)setFilteredCount:(long long)arg0;
- (void)setBottomPrivacyTextType:(long long)arg0;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (long long)totalCount;
- (id)userList;
- (void)setTotalCount:(long long)arg0;

@end
