//
//     Generated by private class-dump
//

@class NSDictionary, NSString, AWELiveSoloKTVDetailHeaderInfoDiffableModel, AWELiveSoloKTVDetailApi, AWELiveSoloKTVDetailListDiffableModel, AWELiveSoloKTVDetailListDataController, NSArray;

@interface AWELiveSoloKTVDetailViewModel : NSObject {
    BOOL _awemeListUpdated;
    BOOL _didTrackEnterSoloKTVDetail;
    NSString *_songId;
    AWELiveSoloKTVDetailHeaderInfoDiffableModel *_headerInfoObject;
    AWELiveSoloKTVDetailListDiffableModel *_awemeListObject;
    AWELiveSoloKTVDetailListDataController *_awemeListDataController;
    long long _awemeListFetchState;
    long long _detailInfoFetchState;
    NSDictionary *_trackExtra;
    AWELiveSoloKTVDetailApi *_api;
    NSArray *_cachedObjectArray;
}

@property (retain, nonatomic) AWELiveSoloKTVDetailApi *api;
@property (copy, nonatomic) NSString *songId;
@property (retain, nonatomic) AWELiveSoloKTVDetailHeaderInfoDiffableModel *headerInfoObject;
@property (retain, nonatomic) AWELiveSoloKTVDetailListDiffableModel *awemeListObject;
@property (retain, nonatomic) AWELiveSoloKTVDetailListDataController *awemeListDataController;
@property (copy, nonatomic) NSArray *cachedObjectArray;
@property (nonatomic) long long detailInfoFetchState;
@property (nonatomic) long long awemeListFetchState;
@property (copy, nonatomic) NSDictionary *trackExtra;
@property (nonatomic) BOOL didTrackEnterSoloKTVDetail;
@property (readonly, copy, nonatomic) NSArray *sectionControllerModelObjectArray;
@property (nonatomic) BOOL awemeListUpdated;

- (id)songId;
- (id)trackExtra;
- (void)setTrackExtra:(id)arg0;
- (void)setSongId:(id)arg0;
- (id)awemeListDataController;
- (void)fetchAwemeList;
- (id)sectionControllerModelObjectArray;
- (id)headerInfoObject;
- (id)awemeListObject;
- (long long)detailInfoFetchState;
- (long long)awemeListFetchState;
- (BOOL)awemeListUpdated;
- (void)setAwemeListUpdated:(BOOL)arg0;
- (void)setDetailInfoFetchState:(long long)arg0;
- (void)setCachedObjectArray:(id)arg0;
- (void)setHeaderInfoObject:(id)arg0;
- (void)setAwemeListFetchState:(long long)arg0;
- (id)cachedObjectArray;
- (void)setAwemeListObject:(id)arg0;
- (void)setAwemeListDataController:(id)arg0;
- (id)initWithSongId:(id)arg0 extra:(id)arg1;
- (void)setupParamsWithSongId:(id)arg0;
- (void)fetchDetailInfoWithSongId:(id)arg0;
- (void)trackEnterSoloKTVDetailIfNeed;
- (BOOL)didTrackEnterSoloKTVDetail;
- (void)setDidTrackEnterSoloKTVDetail:(BOOL)arg0;
- (void).cxx_destruct;
- (id)api;
- (void)setApi:(id)arg0;

@end
