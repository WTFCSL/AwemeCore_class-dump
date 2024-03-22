//
//     Generated by private class-dump
//

@class NSDate;

@protocol AWENoxusPlayerInfoRecorder <NSObject>

+ (id)sharedInstance;

@property (nonatomic) long long pixelType;
@property (retain, nonatomic) NSDate *playerTipDate;
@property (nonatomic) long long speedType;

- (double)getPlayTime:(id)arg0;
- (long long)speedType;
- (void)setSpeedType:(long long)arg0;
- (void)recordModel:(id)arg0 playTime:(double)arg1;
- (id)getLatestEpisode:(id)arg0;
- (id)getLatestEpisodeAlbumID:(id)arg0;
- (id)playerTipDate;
- (void)setPlayerTipDate:(id)arg0;
- (long long)pixelType;
- (void)setPixelType:(long long)arg0;

@end