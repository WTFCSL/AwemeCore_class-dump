//
//     Generated by private class-dump
//

@class AWETheaterEntranceGuideModel, NSArray, AWELVideoAlbumHistoryInfoModel, AWELVideoMetaBlockInfoModel, AWELVideoAppointmentInfoModel, AWELVideoAlbumInfoModel, AWELVideoSideBarGuideResponse;

@interface AWELongVideoAlbumModel : NSObject {
    AWELVideoAlbumInfoModel *_albumInfo;
    NSArray *_episodeList;
    long long _lastPlayIndex;
    AWELVideoAlbumHistoryInfoModel *_historyInfo;
    NSArray *_anchorInfoList;
    AWELVideoAppointmentInfoModel *_appointmentInfo;
    AWELVideoMetaBlockInfoModel *_metaBlockInfo;
    AWETheaterEntranceGuideModel *_theaterGuideInfo;
    AWELVideoSideBarGuideResponse *_revisitGuideInfo;
}

@property (retain, nonatomic) AWELVideoAlbumInfoModel *albumInfo;
@property (copy, nonatomic) NSArray *episodeList;
@property (nonatomic) long long lastPlayIndex;
@property (retain, nonatomic) AWELVideoAlbumHistoryInfoModel *historyInfo;
@property (copy, nonatomic) NSArray *anchorInfoList;
@property (retain, nonatomic) AWELVideoAppointmentInfoModel *appointmentInfo;
@property (retain, nonatomic) AWELVideoMetaBlockInfoModel *metaBlockInfo;
@property (retain, nonatomic) AWETheaterEntranceGuideModel *theaterGuideInfo;
@property (retain, nonatomic) AWELVideoSideBarGuideResponse *revisitGuideInfo;

- (id)episodeList;
- (void)setEpisodeList:(id)arg0;
- (id)albumInfo;
- (void)setAlbumInfo:(id)arg0;
- (long long)lastPlayIndex;
- (void)setLastPlayIndex:(long long)arg0;
- (id)historyInfo;
- (void)setHistoryInfo:(id)arg0;
- (id)anchorInfoList;
- (void)setAnchorInfoList:(id)arg0;
- (id)appointmentInfo;
- (void)setAppointmentInfo:(id)arg0;
- (id)metaBlockInfo;
- (void)setMetaBlockInfo:(id)arg0;
- (id)theaterGuideInfo;
- (void)setTheaterGuideInfo:(id)arg0;
- (id)revisitGuideInfo;
- (void)setRevisitGuideInfo:(id)arg0;
- (void).cxx_destruct;

@end