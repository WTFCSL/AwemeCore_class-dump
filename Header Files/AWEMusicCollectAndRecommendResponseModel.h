//
//     Generated by private class-dump
//

@class NSNumber, NSArray, AWECollectDiversionModel;

@interface AWEMusicCollectAndRecommendResponseModel : AWEBaseApiModel {
    BOOL _hasMore;
    NSNumber *_cursor;
    NSNumber *_totalCount;
    NSArray *_mediaList;
    NSArray *_recommendList;
    AWECollectDiversionModel *_collectDiversionModel;
}

@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *cursor;
@property (retain, nonatomic) NSNumber *totalCount;
@property (retain, nonatomic) NSArray *mediaList;
@property (retain, nonatomic) NSArray *recommendList;
@property (readonly, nonatomic) AWECollectDiversionModel *collectDiversionModel;

+ (id)hasMoreJSONTransformer;
+ (id)recommendListJSONTransformer;
+ (id)mediaListJSONTransformer;
+ (id)collectDiversionModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)mediaList;
- (void)setMediaList:(id)arg0;
- (id)collectDiversionModel;
- (id)recommendList;
- (void)setRecommendList:(id)arg0;
- (id)cursor;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (id)totalCount;
- (void)setCursor:(id)arg0;
- (void)setTotalCount:(id)arg0;

@end
