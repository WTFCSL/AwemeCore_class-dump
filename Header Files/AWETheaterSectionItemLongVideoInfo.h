//
//     Generated by private class-dump
//

@class AWETheaterSectionItemHighlightInfo, AWELVideoEpisodeInfoModel, NSString, AWELVideoAlbumInfoModel;

@interface AWETheaterSectionItemLongVideoInfo : MTLModel <MTLJSONSerializing> {
    AWELVideoAlbumInfoModel *_albumInfo;
    AWELVideoEpisodeInfoModel *_episodeInfo;
    AWETheaterSectionItemHighlightInfo *_highlightInfo;
}

@property (retain, nonatomic) AWELVideoAlbumInfoModel *albumInfo;
@property (retain, nonatomic) AWELVideoEpisodeInfoModel *episodeInfo;
@property (retain, nonatomic) AWETheaterSectionItemHighlightInfo *highlightInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)albumInfoJSONTransformer;
+ (id)episodeInfoJSONTransformer;
+ (id)highlightInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)albumInfo;
- (void)setAlbumInfo:(id)arg0;
- (id)episodeInfo;
- (void)setEpisodeInfo:(id)arg0;
- (void)setHighlightInfo:(id)arg0;
- (void).cxx_destruct;
- (id)highlightInfo;

@end
