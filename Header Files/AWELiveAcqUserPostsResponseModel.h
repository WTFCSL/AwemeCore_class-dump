//
//     Generated by private class-dump
//

@class NSNumber, NSArray;

@interface AWELiveAcqUserPostsResponseModel : AWEBaseApiModel {
    BOOL _hasMore;
    BOOL _hasLocateItem;
    NSNumber *_minCursor;
    NSNumber *_maxCursor;
    NSArray *_awemes;
    NSNumber *_total;
}

@property (retain, nonatomic) NSNumber *minCursor;
@property (retain, nonatomic) NSNumber *maxCursor;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSArray *awemes;
@property (retain, nonatomic) NSNumber *total;
@property (nonatomic) BOOL hasLocateItem;

+ (id)awemesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)minCursor;
- (id)maxCursor;
- (id)awemes;
- (void)setMaxCursor:(id)arg0;
- (void)setMinCursor:(id)arg0;
- (void)setAwemes:(id)arg0;
- (BOOL)hasLocateItem;
- (void)setHasLocateItem:(BOOL)arg0;
- (id)total;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setTotal:(id)arg0;

@end