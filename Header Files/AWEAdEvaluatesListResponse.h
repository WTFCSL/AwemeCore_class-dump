//
//     Generated by private class-dump
//

@class NSArray;

@interface AWEAdEvaluatesListResponse : AWEBaseApiModel {
    BOOL _hasMore;
    NSArray *_commentList;
    long long _totalCount;
    long long _nextPage;
}

@property (copy, nonatomic) NSArray *commentList;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long totalCount;
@property (nonatomic) long long nextPage;

+ (id)commentListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)commentList;
- (void)setCommentList:(id)arg0;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (long long)totalCount;
- (void)setTotalCount:(long long)arg0;
- (long long)nextPage;
- (void)setNextPage:(long long)arg0;

@end
