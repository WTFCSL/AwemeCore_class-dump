//
//     Generated by private class-dump
//

@class NSArray;

@interface AWETeenRecommendAuthorResponseModel : AWEBaseApiModel {
    BOOL _hasMore;
    NSArray *_authorList;
}

@property (copy, nonatomic) NSArray *authorList;
@property (nonatomic) BOOL hasMore;

+ (id)hasMoreJSONTransformer;
+ (id)authorListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)authorList;
- (void)setAuthorList:(id)arg0;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;

@end