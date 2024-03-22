//
//     Generated by private class-dump
//

@class NSArray;

@interface AWEConcernBellPushVideoStrategyListResponse : AWEBaseApiModel {
    BOOL _hasMore;
    NSArray *_userList;
    long long _nextCursor;
}

@property (retain, nonatomic) NSArray *userList;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long nextCursor;

+ (id)userListJSONTransformer;
+ (id)hasMoreJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)nextCursor;
- (void)setNextCursor:(long long)arg0;
- (void)setUserList:(id)arg0;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (id)userList;

@end