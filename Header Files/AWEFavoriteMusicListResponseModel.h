//
//     Generated by private class-dump
//

@class NSArray, NSNumber;

@interface AWEFavoriteMusicListResponseModel : AWEBaseApiModel {
    BOOL _hasMore;
    NSArray *_mcList;
    NSNumber *_cursor;
}

@property (copy, nonatomic) NSArray *mcList;
@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;

+ (id)hasMoreJSONTransformer;
+ (id)mcListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)mcList;
- (void)setMcList:(id)arg0;
- (id)cursor;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setCursor:(id)arg0;

@end
