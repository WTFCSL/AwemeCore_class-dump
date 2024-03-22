//
//     Generated by private class-dump
//

@class NSNumber, NSArray;

@interface AWEAwemeOlympicResponseModel : AWEBaseApiModel {
    BOOL _hasMore;
    NSNumber *_offset;
    NSArray *_awemeList;
}

@property (retain, nonatomic) NSNumber *offset;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSArray *awemeList;

+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)awemeList;
- (void)setAwemeList:(id)arg0;
- (void).cxx_destruct;
- (void)setOffset:(id)arg0;
- (id)offset;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;

@end
