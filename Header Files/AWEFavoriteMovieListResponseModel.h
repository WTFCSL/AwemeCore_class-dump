//
//     Generated by private class-dump
//

@class NSArray, NSNumber;

@interface AWEFavoriteMovieListResponseModel : AWEBaseApiModel {
    BOOL _hasMore;
    NSArray *_collectionList;
    NSArray *_awemeList;
    NSNumber *_cursor;
}

@property (copy, nonatomic) NSArray *collectionList;
@property (copy, nonatomic) NSArray *awemeList;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *cursor;

+ (id)awemeListJSONTransformer;
+ (id)hasMoreJSONTransformer;
+ (id)collectionListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)awemeList;
- (void)setAwemeList:(id)arg0;
- (id)cursor;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (id)collectionList;
- (void)setCursor:(id)arg0;
- (void)setCollectionList:(id)arg0;

@end
