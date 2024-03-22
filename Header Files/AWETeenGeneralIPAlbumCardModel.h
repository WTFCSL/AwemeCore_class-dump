//
//     Generated by private class-dump
//

@class AWEMinorAlbum, NSArray, NSString;

@interface AWETeenGeneralIPAlbumCardModel : AWEBaseApiModel {
    AWEMinorAlbum *_specificAlbum;
    NSArray *_seriesAlbumList;
    long long _seriesAlbumCount;
    NSString *_alias;
    NSString *_keyWord;
    NSString *_keyWordAlias;
}

@property (retain, nonatomic) AWEMinorAlbum *specificAlbum;
@property (retain, nonatomic) NSArray *seriesAlbumList;
@property (nonatomic) long long seriesAlbumCount;
@property (copy, nonatomic) NSString *alias;
@property (copy, nonatomic) NSString *keyWord;
@property (copy, nonatomic) NSString *keyWordAlias;

+ (id)specificAlbumJSONTransformer;
+ (id)seriesAlbumListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)keyWord;
- (void)setKeyWord:(id)arg0;
- (id)specificAlbum;
- (void)setSpecificAlbum:(id)arg0;
- (id)seriesAlbumList;
- (void)setSeriesAlbumList:(id)arg0;
- (long long)seriesAlbumCount;
- (void)setSeriesAlbumCount:(long long)arg0;
- (id)keyWordAlias;
- (void)setKeyWordAlias:(id)arg0;
- (id)alias;
- (void).cxx_destruct;
- (void)setAlias:(id)arg0;

@end
