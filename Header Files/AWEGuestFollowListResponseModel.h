//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWEGuestFollowListResponseModel : AWEBaseApiModel {
    BOOL _hasMore;
    NSArray *_authorList;
    long long _totalCount;
    NSString *_nextPageToken;
}

@property (copy, nonatomic) NSArray *authorList;
@property (nonatomic) long long totalCount;
@property (copy, nonatomic) NSString *nextPageToken;
@property (nonatomic) BOOL hasMore;

+ (id)authorListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)authorList;
- (void)setAuthorList:(id)arg0;
- (id)nextPageToken;
- (void)setNextPageToken:(id)arg0;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (long long)totalCount;
- (void)setTotalCount:(long long)arg0;

@end
