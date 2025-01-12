//
//     Generated by private class-dump
//

@class NSArray, NSString, AWELongVideoPlusEpisodeListResponse, AWELVideoAlbumInfoModel;

@interface AWELongVideoPlusMetaResponse : MTLModel <MTLJSONSerializing> {
    AWELVideoAlbumInfoModel *_albumInfo;
    AWELongVideoPlusEpisodeListResponse *_episodeListInfo;
    NSArray *_albumListSeries;
    long long _episodePageType;
}

@property (retain, nonatomic) AWELVideoAlbumInfoModel *albumInfo;
@property (retain, nonatomic) AWELongVideoPlusEpisodeListResponse *episodeListInfo;
@property (copy, nonatomic) NSArray *albumListSeries;
@property (nonatomic) long long episodePageType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)albumInfoJSONTransformer;
+ (id)episodeListInfoJSONTransformer;
+ (id)albumListSeriesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)albumInfo;
- (void)setAlbumInfo:(id)arg0;
- (id)episodeListInfo;
- (long long)episodePageType;
- (void)setEpisodePageType:(long long)arg0;
- (void)setEpisodeListInfo:(id)arg0;
- (id)albumListSeries;
- (void)setAlbumListSeries:(id)arg0;
- (void).cxx_destruct;

@end
