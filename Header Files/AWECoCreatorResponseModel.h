//
//     Generated by private class-dump
//

@class NSNumber, NSArray;

@interface AWECoCreatorResponseModel : AWEBaseApiModel {
    BOOL _hasMore;
    NSNumber *_minCursor;
    NSNumber *_maxCursor;
    NSArray *_awemeList;
}

@property (retain, nonatomic) NSNumber *minCursor;
@property (retain, nonatomic) NSNumber *maxCursor;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSArray *awemeList;

+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)awemeList;
- (id)minCursor;
- (id)maxCursor;
- (void)setAwemeList:(id)arg0;
- (void)setMaxCursor:(id)arg0;
- (void)setMinCursor:(id)arg0;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;

@end