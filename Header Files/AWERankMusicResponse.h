//
//     Generated by private class-dump
//

@class AWESearchNilTextModel, NSArray, NSNumber, AWESearchNilInfoModel;

@interface AWERankMusicResponse : AWEBaseApiModel {
    BOOL _hasMore;
    NSNumber *_cursor;
    NSArray *_musicList;
    AWESearchNilInfoModel *_searchNilInfoModel;
    AWESearchNilTextModel *_searchNilTextModel;
}

@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSArray *musicList;
@property (retain, nonatomic) AWESearchNilInfoModel *searchNilInfoModel;
@property (retain, nonatomic) AWESearchNilTextModel *searchNilTextModel;

+ (id)hasMoreJSONTransformer;
+ (id)searchNilInfoModelTransformer;
+ (id)searchNilTextModelTransformer;
+ (id)musicListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)searchNilInfoModel;
- (void)setSearchNilInfoModel:(id)arg0;
- (id)searchNilTextModel;
- (void)setSearchNilTextModel:(id)arg0;
- (id)musicList;
- (void)setMusicList:(id)arg0;
- (id)cursor;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setCursor:(id)arg0;

@end