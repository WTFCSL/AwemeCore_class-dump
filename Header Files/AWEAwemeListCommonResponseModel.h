//
//     Generated by private class-dump
//

@class NSArray, NSNumber;

@interface AWEAwemeListCommonResponseModel : AWEBaseApiModel {
    BOOL _hasMore;
    NSArray *_awemeList;
    NSNumber *_offset;
    NSNumber *_maxCursor;
}

@property (copy, nonatomic) NSArray *awemeList;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *offset;
@property (retain, nonatomic) NSNumber *maxCursor;

+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)awemeList;
- (id)maxCursor;
- (void)setAwemeList:(id)arg0;
- (void)setMaxCursor:(id)arg0;
- (void).cxx_destruct;
- (void)setOffset:(id)arg0;
- (id)offset;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;

@end
