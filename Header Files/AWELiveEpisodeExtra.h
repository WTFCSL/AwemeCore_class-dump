//
//     Generated by private class-dump
//

@class NSNumber, AWELiveEpisodeMod;

@interface AWELiveEpisodeExtra : AWEBaseApiModel {
    NSNumber *_episodeId;
    NSNumber *_seasonId;
    AWELiveEpisodeMod *_mod;
}

@property (retain, nonatomic) NSNumber *episodeId;
@property (retain, nonatomic) NSNumber *seasonId;
@property (retain, nonatomic) AWELiveEpisodeMod *mod;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)seasonId;
- (void)setSeasonId:(id)arg0;
- (id)episodeId;
- (void)setEpisodeId:(id)arg0;
- (id)mod;
- (void)setMod:(id)arg0;

@end
