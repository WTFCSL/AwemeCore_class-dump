//
//     Generated by private class-dump
//

@class NSString, AWELVideoPreviewConfig, AWELVideoEpisodeInfoModel, AWELVideoStateInFeed, AWELVideoXiguaGuideModel, NSDictionary, AWELVideoAlbumInfoModel, AWELVideoHighLight, NSNumber;

@interface AWELVideoBriefInfoModel : MTLModel <MTLJSONSerializing> {
    AWELVideoAlbumInfoModel *_albumInfo;
    AWELVideoEpisodeInfoModel *_episodeInfo;
    AWELVideoXiguaGuideModel *_xiguaGuide;
    NSDictionary *_trackParams;
    AWELVideoHighLight *_highlightInfo;
    AWELVideoPreviewConfig *_previewConfig;
    AWELVideoStateInFeed *_feedState;
    long long _containerType;
    NSNumber *_cursor;
    NSString *_authorRoleTitle;
}

@property (retain, nonatomic) AWELVideoAlbumInfoModel *albumInfo;
@property (retain, nonatomic) AWELVideoEpisodeInfoModel *episodeInfo;
@property (retain, nonatomic) AWELVideoXiguaGuideModel *xiguaGuide;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (retain, nonatomic) AWELVideoHighLight *highlightInfo;
@property (retain, nonatomic) AWELVideoPreviewConfig *previewConfig;
@property (retain, nonatomic) AWELVideoStateInFeed *feedState;
@property (nonatomic) long long containerType;
@property (retain, nonatomic) NSNumber *cursor;
@property (retain, nonatomic) NSString *authorRoleTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)xiguaGuideJSONTransformer;
+ (id)albumInfoJSONTransformer;
+ (id)episodeInfoJSONTransformer;
+ (id)highlightInfoJSONTransformer;
+ (id)previewConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)trackParams;
- (void)setTrackParams:(id)arg0;
- (id)xiguaGuide;
- (void)setXiguaGuide:(id)arg0;
- (id)feedState;
- (id)albumInfo;
- (void)setAlbumInfo:(id)arg0;
- (id)episodeInfo;
- (void)setEpisodeInfo:(id)arg0;
- (void)setHighlightInfo:(id)arg0;
- (id)previewConfig;
- (void)setPreviewConfig:(id)arg0;
- (void)setFeedState:(id)arg0;
- (id)authorRoleTitle;
- (void)setAuthorRoleTitle:(id)arg0;
- (id)cursor;
- (void).cxx_destruct;
- (void)setCursor:(id)arg0;
- (long long)containerType;
- (void)setContainerType:(long long)arg0;
- (id)highlightInfo;

@end
