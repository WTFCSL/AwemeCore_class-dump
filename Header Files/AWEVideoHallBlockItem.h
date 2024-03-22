//
//     Generated by private class-dump
//

@class NSString, AWEVideoHallActionInfo, AWELVideoEpisodeInfoModel, AWEURLModel, AWEVideoHallHistoryInfo, AWEVideoHallBannerVideoInfo, AWELVideoAlbumInfoModel, AWETheaterEntranceGuideModel;

@interface AWEVideoHallBlockItem : MTLModel <MTLJSONSerializing> {
    NSString *_blockId;
    NSString *_albumId;
    NSString *_title;
    NSString *_subTitle;
    long long _type;
    AWEURLModel *_url;
    AWEVideoHallActionInfo *_action;
    AWELVideoAlbumInfoModel *_albumInfo;
    AWEVideoHallBannerVideoInfo *_videoInfo;
    AWEVideoHallHistoryInfo *_history;
    AWELVideoEpisodeInfoModel *_episodeInfo;
    AWETheaterEntranceGuideModel *_theaterGuideInfo;
}

@property (copy, nonatomic) NSString *blockId;
@property (copy, nonatomic) NSString *albumId;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (nonatomic) long long type;
@property (retain, nonatomic) AWEURLModel *url;
@property (retain, nonatomic) AWEVideoHallActionInfo *action;
@property (retain, nonatomic) AWELVideoAlbumInfoModel *albumInfo;
@property (retain, nonatomic) AWEVideoHallBannerVideoInfo *videoInfo;
@property (retain, nonatomic) AWEVideoHallHistoryInfo *history;
@property (retain, nonatomic) AWELVideoEpisodeInfoModel *episodeInfo;
@property (retain, nonatomic) AWETheaterEntranceGuideModel *theaterGuideInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)historyJSONTransformer;
+ (id)albumInfoJSONTransformer;
+ (id)episodeInfoJSONTransformer;
+ (id)theaterGuideInfoJSONTransformer;
+ (id)actionJSONTransformer;
+ (id)videoInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)urlJSONTransformer;

- (id)videoInfo;
- (void)setVideoInfo:(id)arg0;
- (void)setAlbumId:(id)arg0;
- (id)albumId;
- (id)albumInfo;
- (void)setAlbumInfo:(id)arg0;
- (id)episodeInfo;
- (void)setEpisodeInfo:(id)arg0;
- (id)theaterGuideInfo;
- (void)setTheaterGuideInfo:(id)arg0;
- (void).cxx_destruct;
- (id)history;
- (long long)type;
- (void)setUrl:(id)arg0;
- (void)setHistory:(id)arg0;
- (id)title;
- (void)setType:(long long)arg0;
- (void)setAction:(id)arg0;
- (id)action;
- (void)setSubTitle:(id)arg0;
- (id)subTitle;
- (id)url;
- (void)setTitle:(id)arg0;
- (id)blockId;
- (void)setBlockId:(id)arg0;

@end