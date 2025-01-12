//
//     Generated by private class-dump
//

@class NSNumber, NSArray;

@interface AWEUserDynamicListResponse : AWEBaseApiModel {
    BOOL _hasMore;
    NSNumber *_minCursor;
    NSNumber *_maxCursor;
    NSArray *_dynamicList;
}

@property (retain, nonatomic) NSNumber *minCursor;
@property (retain, nonatomic) NSNumber *maxCursor;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSArray *dynamicList;

+ (id)hasMoreJSONTransformer;
+ (id)dynamicListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)minCursor;
- (id)maxCursor;
- (void)setMaxCursor:(id)arg0;
- (void)setMinCursor:(id)arg0;
- (id)dynamicList;
- (void)setDynamicList:(id)arg0;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;

@end
