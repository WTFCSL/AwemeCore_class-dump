//
//     Generated by private class-dump
//

@class NSString;

@interface AWEMinorAlbumStatus : MTLModel <MTLJSONSerializing, AWEMinorAlbumStatusProtocol> {
    NSString *recordEpisodeID;
    long long _currentEpisode;
    long long _totalEpisodes;
    long long _recordEpisode;
    long long _progress;
    long long _playTimes;
}

@property (nonatomic) long long currentEpisode;
@property (nonatomic) long long totalEpisodes;
@property (nonatomic) long long recordEpisode;
@property (nonatomic) long long progress;
@property (nonatomic) long long playTimes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *recordEpisodeID;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setPlayTimes:(long long)arg0;
- (long long)playTimes;
- (long long)totalEpisodes;
- (void)setTotalEpisodes:(long long)arg0;
- (long long)recordEpisode;
- (void)setRecordEpisode:(long long)arg0;
- (id)recordEpisodeID;
- (void)setRecordEpisodeID:(id)arg0;
- (void).cxx_destruct;
- (long long)progress;
- (void)setProgress:(long long)arg0;
- (long long)currentEpisode;
- (void)setCurrentEpisode:(long long)arg0;

@end
