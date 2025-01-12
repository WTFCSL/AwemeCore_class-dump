//
//     Generated by private class-dump
//

@class NSArray;

@interface AWEAdFeedCommentsListResponse : AWEBaseApiModel {
    BOOL _hasMore;
    NSArray *_commentList;
    NSArray *_filterList;
    long long _totalCount;
}

@property (copy, nonatomic) NSArray *commentList;
@property (copy, nonatomic) NSArray *filterList;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long totalCount;

+ (id)commentListJSONTransformer;
+ (id)filterListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)commentList;
- (void)setCommentList:(id)arg0;
- (id)filterList;
- (void)setFilterList:(id)arg0;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (long long)totalCount;
- (void)setTotalCount:(long long)arg0;

@end
