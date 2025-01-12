//
//     Generated by private class-dump
//

@class NSNumber;

@interface IESVSTopBannerApi : HTSLiveApi {
    unsigned long long _bannerRole;
    NSNumber *_roomID;
    NSNumber *_episodeID;
    NSNumber *_liveAdType;
}

@property (nonatomic) unsigned long long bannerRole;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) NSNumber *episodeID;
@property (retain, nonatomic) NSNumber *liveAdType;

- (id)liveAdType;
- (void)setLiveAdType:(id)arg0;
- (void)setEpisodeID:(id)arg0;
- (unsigned long long)bannerRole;
- (void)setBannerRole:(unsigned long long)arg0;
- (id)initWithRole:(unsigned long long)arg0 roomID:(id)arg1 episodeID:(id)arg2;
- (void)fetchVSVideoTopBannersCallback:(id /* block */)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)roomID;
- (void)setRoomID:(id)arg0;
- (id)episodeID;

@end
