//
//     Generated by private class-dump
//

@class NSArray;

@interface AFDRecentlyRemovedRecommendResponseModel : AWEBaseApiModel {
    BOOL _hasMore;
    NSArray *_userList;
    long long _cursor;
    long long _total;
}

@property (retain, nonatomic) NSArray *userList;
@property (nonatomic) long long cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long total;

+ (id)userListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setUserList:(id)arg0;
- (long long)cursor;
- (long long)total;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setCursor:(long long)arg0;
- (id)userList;
- (void)setTotal:(long long)arg0;

@end
