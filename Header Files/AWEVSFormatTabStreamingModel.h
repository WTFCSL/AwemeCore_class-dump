//
//     Generated by private class-dump
//

@class NSString, NSArray, HTSLiveVSWatermark;
@protocol AWELiveRoomModelProtocol, AWELiveHTSLiveEpisode;

@interface AWEVSFormatTabStreamingModel : NSObject {
    BOOL _isVSLiveMerge;
    unsigned long long _type;
    NSString *_title;
    NSString *_subTitle;
    NSArray *_darkCover;
    NSArray *_lightCover;
    NSArray *_playURLs;
    NSString *_videoPlayInfo;
    NSString *_liveStreamData;
    NSString *_liveSDKKey;
    NSString *_roomID;
    NSString *_episodeID;
    NSString *_authorID;
    NSArray *_coverURLs;
    NSString *_seasonID;
    NSString *_seasonTag;
    NSString *_itemID;
    NSString *_vsEpisodeType;
    NSString *_vsEpisodeSubType;
    unsigned long long _directionType;
    HTSLiveVSWatermark *_watermark;
    id<AWELiveRoomModelProtocol> _roomModel;
    id<AWELiveHTSLiveEpisode> _episodeModel;
}

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (retain, nonatomic) NSArray *darkCover;
@property (retain, nonatomic) NSArray *lightCover;
@property (retain, nonatomic) NSArray *playURLs;
@property (copy, nonatomic) NSString *videoPlayInfo;
@property (copy, nonatomic) NSString *liveStreamData;
@property (copy, nonatomic) NSString *liveSDKKey;
@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *episodeID;
@property (copy, nonatomic) NSString *authorID;
@property (retain, nonatomic) NSArray *coverURLs;
@property (copy, nonatomic) NSString *seasonID;
@property (copy, nonatomic) NSString *seasonTag;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *vsEpisodeType;
@property (copy, nonatomic) NSString *vsEpisodeSubType;
@property (nonatomic) unsigned long long directionType;
@property (retain, nonatomic) HTSLiveVSWatermark *watermark;
@property (nonatomic) BOOL isVSLiveMerge;
@property (retain, nonatomic) id<AWELiveRoomModelProtocol> roomModel;
@property (retain, nonatomic) id<AWELiveHTSLiveEpisode> episodeModel;

- (id)roomModel;
- (void)setDirectionType:(unsigned long long)arg0;
- (void)setWatermark:(id)arg0;
- (id)playURLs;
- (void)setPlayURLs:(id)arg0;
- (void)setEpisodeID:(id)arg0;
- (id)coverURLs;
- (void)setCoverURLs:(id)arg0;
- (void)setRoomModel:(id)arg0;
- (BOOL)isVSLiveMerge;
- (void)setSeasonID:(id)arg0;
- (void)setVsEpisodeType:(id)arg0;
- (void)setVsEpisodeSubType:(id)arg0;
- (id)liveStreamData;
- (void)setLiveStreamData:(id)arg0;
- (id)liveSDKKey;
- (void)setLiveSDKKey:(id)arg0;
- (id)seasonID;
- (id)darkCover;
- (void)setDarkCover:(id)arg0;
- (id)lightCover;
- (void)setLightCover:(id)arg0;
- (void)configLiveWithRoom:(id)arg0 darkCover:(id)arg1 lightCover:(id)arg2;
- (void)setEpisodeModel:(id)arg0;
- (void)setIsVSLiveMerge:(BOOL)arg0;
- (void)setVideoPlayInfo:(id)arg0;
- (void)setSeasonTag:(id)arg0;
- (void)configVideoWithEpisode:(id)arg0 darkCover:(id)arg1 lightCover:(id)arg2;
- (id)seasonTag;
- (id)vsEpisodeType;
- (id)vsEpisodeSubType;
- (id)episodeModel;
- (BOOL)isVSVerticalStream;
- (id)vsEpisodeStageString;
- (id)vsPlayStatusString;
- (id)videoPlayInfo;
- (void).cxx_destruct;
- (id)watermark;
- (unsigned long long)type;
- (id)itemID;
- (void)setItemID:(id)arg0;
- (id)title;
- (void)setType:(unsigned long long)arg0;
- (void)setSubTitle:(id)arg0;
- (id)subTitle;
- (void)setTitle:(id)arg0;
- (id)roomID;
- (void)setRoomID:(id)arg0;
- (id)authorID;
- (void)setAuthorID:(id)arg0;
- (id)episodeID;
- (unsigned long long)directionType;

@end