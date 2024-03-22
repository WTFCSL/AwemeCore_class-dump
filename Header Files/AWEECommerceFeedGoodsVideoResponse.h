//
//     Generated by private class-dump
//

@class NSArray, NSDictionary;

@interface AWEECommerceFeedGoodsVideoResponse : AWEBaseApiModel {
    BOOL _hasMore;
    NSArray *_awemeList;
    NSDictionary *_sourceTypeDic;
    long long _totalCount;
}

@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSArray *awemeList;
@property (copy, nonatomic) NSDictionary *sourceTypeDic;
@property (nonatomic) long long totalCount;

+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)awemeList;
- (void)setAwemeList:(id)arg0;
- (id)sourceTypeDic;
- (void)setSourceTypeDic:(id)arg0;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (long long)totalCount;
- (void)setTotalCount:(long long)arg0;

@end