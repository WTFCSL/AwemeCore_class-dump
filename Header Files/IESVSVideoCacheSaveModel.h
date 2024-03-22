//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface IESVSVideoCacheSaveModel : IESLiveDynamicModel {
    NSString *_videoID;
    long long _episodeStage;
}

@property (copy, nonatomic) NSString *videoID;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long episodeId;
@property (nonatomic) long long episodeStage;
@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSArray *cover;
@property (copy, nonatomic) NSString *currentPeriod;
@property (nonatomic) long long seasonId;
@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *authorId;
@property (nonatomic) long long resolution;
@property (copy, nonatomic) NSString *currentSize;
@property (copy, nonatomic) NSString *totalSize;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *mediaTitle;
@property (nonatomic) long long duration;
@property (nonatomic) BOOL isPortrait;

- (long long)episodeStage;
- (void)setEpisodeStage:(long long)arg0;
- (id)videoIdForUidCheckMapperKey;
- (id)initWithVideoID:(id)arg0;
- (id)saveKey;
- (void)setValuesWithDict:(id)arg0;
- (id)transformToDict;
- (id)initWithAlbumItem:(id)arg0;
- (void).cxx_destruct;
- (id)valueForUndefinedKey:(id)arg0;
- (void)setValue:(id)arg0 forUndefinedKey:(id)arg1;
- (id)videoID;
- (void)setVideoID:(id)arg0;
- (id)initWithEpisode:(id)arg0;
- (id)saveData;

@end