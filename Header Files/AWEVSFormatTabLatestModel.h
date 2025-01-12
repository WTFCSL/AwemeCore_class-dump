//
//     Generated by private class-dump
//

@class NSString;

@interface AWEVSFormatTabLatestModel : NSObject {
    NSString *_episodeID;
    NSString *_currentPeriod;
    NSString *_watchedPeriodText;
    double _watchDuration;
    double _watchRatio;
    NSString *_seasonID;
    NSString *_itemID;
    NSString *_roomID;
    NSString *_vsEpisodeType;
    NSString *_vsEpisodeSubType;
    NSString *_authorID;
    unsigned long long _directionType;
}

@property (copy, nonatomic) NSString *episodeID;
@property (copy, nonatomic) NSString *currentPeriod;
@property (copy, nonatomic) NSString *watchedPeriodText;
@property (nonatomic) double watchDuration;
@property (nonatomic) double watchRatio;
@property (copy, nonatomic) NSString *seasonID;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *vsEpisodeType;
@property (copy, nonatomic) NSString *vsEpisodeSubType;
@property (copy, nonatomic) NSString *authorID;
@property (nonatomic) unsigned long long directionType;

- (void)setDirectionType:(unsigned long long)arg0;
- (void)setEpisodeID:(id)arg0;
- (double)watchRatio;
- (double)watchDuration;
- (void)setWatchDuration:(double)arg0;
- (void)setWatchedPeriodText:(id)arg0;
- (void)setWatchRatio:(double)arg0;
- (void)setSeasonID:(id)arg0;
- (void)setVsEpisodeType:(id)arg0;
- (void)setVsEpisodeSubType:(id)arg0;
- (id)seasonID;
- (id)vsEpisodeType;
- (id)vsEpisodeSubType;
- (id)watchedPeriodText;
- (void).cxx_destruct;
- (id)itemID;
- (void)setItemID:(id)arg0;
- (id)roomID;
- (void)setRoomID:(id)arg0;
- (id)currentPeriod;
- (void)setCurrentPeriod:(id)arg0;
- (id)authorID;
- (void)setAuthorID:(id)arg0;
- (id)episodeID;
- (unsigned long long)directionType;

@end
