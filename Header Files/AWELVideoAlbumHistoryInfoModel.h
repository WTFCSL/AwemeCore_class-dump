//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface AWELVideoAlbumHistoryInfoModel : AWEBaseApiModel {
    NSString *_albumID;
    NSString *_episodeID;
    long long _watchedRank;
    NSNumber *_watchedDuration;
}

@property (copy, nonatomic) NSString *albumID;
@property (copy, nonatomic) NSString *episodeID;
@property (nonatomic) long long watchedRank;
@property (retain, nonatomic) NSNumber *watchedDuration;

+ (id)JSONKeyPathsByPropertyKey;

- (id)watchedDuration;
- (void)setAlbumID:(id)arg0;
- (void)setEpisodeID:(id)arg0;
- (long long)watchedRank;
- (void)setWatchedRank:(long long)arg0;
- (void)setWatchedDuration:(id)arg0;
- (void).cxx_destruct;
- (id)albumID;
- (id)episodeID;

@end
