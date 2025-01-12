//
//     Generated by private class-dump
//

@class NSNumber;

@interface AWEPlayletStatisticsModel : AWEBaseApiModel {
    NSNumber *_playCount;
    NSNumber *_collectCount;
    NSNumber *_currentEpisode;
    NSNumber *_maxEpisode;
    NSNumber *_totalCount;
    NSNumber *_lastAddedItemTime;
}

@property (retain, nonatomic) NSNumber *playCount;
@property (retain, nonatomic) NSNumber *collectCount;
@property (retain, nonatomic) NSNumber *currentEpisode;
@property (retain, nonatomic) NSNumber *maxEpisode;
@property (retain, nonatomic) NSNumber *totalCount;
@property (retain, nonatomic) NSNumber *lastAddedItemTime;

+ (id)JSONKeyPathsByPropertyKey;

- (id)maxEpisode;
- (id)collectCount;
- (void)setCollectCount:(id)arg0;
- (void)setMaxEpisode:(id)arg0;
- (id)lastAddedItemTime;
- (void)setLastAddedItemTime:(id)arg0;
- (id)playCount;
- (void)setPlayCount:(id)arg0;
- (void).cxx_destruct;
- (id)totalCount;
- (void)setTotalCount:(id)arg0;
- (id)currentEpisode;
- (void)setCurrentEpisode:(id)arg0;

@end
