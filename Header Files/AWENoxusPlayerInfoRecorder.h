//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSDate;

@interface AWENoxusPlayerInfoRecorder : NSObject <AWENoxusPlayerInfoRecorder> {
    long long _pixelType;
    NSDate *_playerTipDate;
    long long _speedType;
    NSMutableDictionary *_timeDic;
    NSMutableDictionary *_episodeDic;
}

@property (retain, nonatomic) NSMutableDictionary *timeDic;
@property (retain, nonatomic) NSMutableDictionary *episodeDic;
@property (nonatomic) long long pixelType;
@property (retain, nonatomic) NSDate *playerTipDate;
@property (nonatomic) long long speedType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (double)getPlayTime:(id)arg0;
- (void)setTimeDic:(id)arg0;
- (id)timeDic;
- (long long)speedType;
- (void)setSpeedType:(long long)arg0;
- (id)episodeDic;
- (void)cacheTimeDict:(id)arg0 epiDict:(id)arg1;
- (void)recordModel:(id)arg0 playTime:(double)arg1;
- (id)getLatestEpisode:(id)arg0;
- (id)getLatestEpisodeAlbumID:(id)arg0;
- (id)playerTipDate;
- (void)setPlayerTipDate:(id)arg0;
- (void)setEpisodeDic:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (long long)pixelType;
- (void)setPixelType:(long long)arg0;

@end
