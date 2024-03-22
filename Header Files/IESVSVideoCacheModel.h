//
//     Generated by private class-dump
//

@class TTVideoEngineDownloadVidTask, NSString, IESVSVideoCacheCellModel, HTSLiveAlbumItem, HTSLiveEpisode, IESVSVideoCacheSaveModel, TTVideoEngineModel;

@interface IESVSVideoCacheModel : IESLiveDynamicModel {
    float _netSpeed;
    NSString *_episodeID;
    NSString *_videoID;
    NSString *_seasonId;
    TTVideoEngineModel *_videoModel;
    TTVideoEngineDownloadVidTask *_task;
    IESVSVideoCacheSaveModel *_saveModel;
    HTSLiveEpisode *_episode;
    HTSLiveAlbumItem *_albumItem;
}

@property (retain, nonatomic) IESVSVideoCacheSaveModel *saveModel;
@property (retain, nonatomic) HTSLiveAlbumItem *albumItem;
@property (readonly, copy, nonatomic) NSString *episodeID;
@property (readonly, copy, nonatomic) NSString *videoID;
@property (readonly, copy, nonatomic) NSString *seasonId;
@property (copy, nonatomic) NSString *mediaTitle;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) TTVideoEngineModel *videoModel;
@property (readonly, copy, nonatomic) NSString *dataToSaveKey;
@property (readonly, copy, nonatomic) NSString *dataToSave;
@property (readonly, copy, nonatomic) NSString *videoIdMapperKey;
@property (readonly, copy, nonatomic) NSString *videoIdMapperData;
@property (readonly, copy, nonatomic) NSString *videoIdForUidCheckMapperKey;
@property (retain, nonatomic) IESVSVideoCacheCellModel *cellModel;
@property (retain, nonatomic) TTVideoEngineDownloadVidTask *task;
@property (retain, nonatomic) HTSLiveEpisode *episode;
@property (nonatomic) float netSpeed;
@property (nonatomic) unsigned long long resolutionType;
@property (nonatomic) BOOL isPlaying;

+ (id)formatSizeWithBytes:(long long)arg0;
+ (id)formatNetworkTitleWithBytes:(long long)arg0;

- (id)videoModel;
- (void)setNetSpeed:(float)arg0;
- (id)videoIdForUidCheckMapperKey;
- (void)updateTitleWithIcon:(id)arg0;
- (id)dataToSaveKey;
- (id)initWithAlbumItem:(id)arg0;
- (void)p_configureCellModel;
- (void)updateTitleWithIcon:(id)arg0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (BOOL)containsVideoResolution:(long long)arg0;
- (id)videoIdMapperKey;
- (id)videoIdMapperData;
- (void)setSaveModel:(id)arg0;
- (float)netSpeed;
- (id)albumItem;
- (void)setAlbumItem:(id)arg0;
- (id)initWithTask:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)state;
- (void)setTask:(id)arg0;
- (BOOL)isPlaying;
- (id)task;
- (void)setIsPlaying:(BOOL)arg0;
- (id)dataToSave;
- (id)saveModel;
- (void)setEpisode:(id)arg0;
- (id)episode;
- (id)videoID;
- (unsigned long long)resolutionType;
- (void)setResolutionType:(unsigned long long)arg0;
- (id)seasonId;
- (id)mediaTitle;
- (void)setMediaTitle:(id)arg0;
- (id)episodeID;
- (id)initWithEpisode:(id)arg0;

@end
