//
//     Generated by private class-dump
//

@class NSArray;

@interface ACCEditCommerceSearchResponse : ACCBaseApiModel {
    BOOL _hasMore;
    NSArray *_commerceTags;
    long long _cursor;
}

@property (retain, nonatomic) NSArray *commerceTags;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long cursor;

+ (id)categoriesJSONTransformer;
+ (id)commerceTagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)commerceTags;
- (void)setCommerceTags:(id)arg0;
- (long long)cursor;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setCursor:(long long)arg0;

@end
