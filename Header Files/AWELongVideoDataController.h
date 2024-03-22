//
//     Generated by private class-dump
//

@class NSString, AWELVideoAlbumHistoryInfoModel, NSArray, NSMutableDictionary, NSDictionary, AWELongVideoPrefetchAwemeBundle, AWELongVideoPrefetchMetaInfoBundle, AWELongVideoAlbumModel;
@protocol AWEHttpTask;

@interface AWELongVideoDataController : AWEListDataController <AWELongVideoDataControllerProtocol> {
    BOOL _isLoadingAlbum;
    AWELongVideoAlbumModel *_currentAlbumModel;
    AWELVideoAlbumHistoryInfoModel *_albumWatchHistory;
    NSArray *_albumModelList;
    NSDictionary *_screenCastUiSettings;
    NSDictionary *_metaLogPassback;
    id /* block */ _willStartRequestLongVideoAwemeBlock;
    id /* block */ _didFinishRequestLongVideoAwemeBlock;
    id /* block */ _willStartRequestLongVideoMetaBlock;
    id /* block */ _didFinishRequestLongVideoMetaBlock;
    id /* block */ _requestLongVideoAwemeHitPrefetchBlock;
    Class _longVideoDataService;
    id<AWEHttpTask> _updateMetaInfoTask;
    id<AWEHttpTask> _requestAwemeModelTask;
    id<AWEHttpTask> _requestWidgetListTask;
    NSArray *_widgetList;
    NSMutableDictionary *_preloadEpisodeMapAwemeDict;
    NSString *_currentEpisodeID;
    AWELongVideoPrefetchAwemeBundle *_prefetchAwemeBundle;
    AWELongVideoPrefetchMetaInfoBundle *_prefetchMetaInfoBundle;
}

@property (retain, nonatomic) Class longVideoDataService;
@property (weak, nonatomic) id<AWEHttpTask> updateMetaInfoTask;
@property (weak, nonatomic) id<AWEHttpTask> requestAwemeModelTask;
@property (weak, nonatomic) id<AWEHttpTask> requestWidgetListTask;
@property (retain, nonatomic) AWELongVideoAlbumModel *currentAlbumModel;
@property (retain, nonatomic) AWELVideoAlbumHistoryInfoModel *albumWatchHistory;
@property (copy, nonatomic) NSArray *albumModelList;
@property (copy, nonatomic) NSArray *widgetList;
@property (retain, nonatomic) NSMutableDictionary *preloadEpisodeMapAwemeDict;
@property (retain, nonatomic) NSString *currentEpisodeID;
@property (retain, nonatomic) AWELongVideoPrefetchAwemeBundle *prefetchAwemeBundle;
@property (retain, nonatomic) AWELongVideoPrefetchMetaInfoBundle *prefetchMetaInfoBundle;
@property (copy, nonatomic) NSDictionary *metaLogPassback;
@property (copy, nonatomic) NSDictionary *screenCastUiSettings;
@property (nonatomic) BOOL isLoadingAlbum;
@property (readonly, nonatomic) long long albumEpisodeType;
@property (copy, nonatomic) id /* block */ willStartRequestLongVideoAwemeBlock;
@property (copy, nonatomic) id /* block */ didFinishRequestLongVideoAwemeBlock;
@property (copy, nonatomic) id /* block */ willStartRequestLongVideoMetaBlock;
@property (copy, nonatomic) id /* block */ didFinishRequestLongVideoMetaBlock;
@property (copy, nonatomic) id /* block */ requestLongVideoAwemeHitPrefetchBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)longVideoDataService;
- (id)updateMetaInfoTask;
- (id)requestWidgetListTask;
- (void)setUpdateMetaInfoTask:(id)arg0;
- (void)setRequestWidgetListTask:(id)arg0;
- (void)clearLongVideoData;
- (void)setLongVideoDataService:(Class)arg0;
- (id)widgetList;
- (void)setWidgetList:(id)arg0;
- (id)screenCastUiSettings;
- (long long)albumEpisodeType;
- (void)submitVideoHistoryWithModel:(id)arg0 time:(double)arg1;
- (id)currentEpisodeWithCurrentEpisodeID:(id)arg0;
- (id)currentAlbumModel;
- (void)loadScreenCastUiSettingWith:(id)arg0;
- (void)loadAwemeModelWithEpisodeID:(id)arg0 completion:(id /* block */)arg1;
- (void)fetchLongVideoWidgetMetaInfoWithAlbumID:(id)arg0 episodeID:(id)arg1 completion:(id /* block */)arg2;
- (id)nextEpisodeWithCurrentEpisodeID:(id)arg0;
- (id)currentEpisodeID;
- (void)setCurrentAlbumModel:(id)arg0;
- (void)setCurrentEpisodeID:(id)arg0;
- (id)requestAwemeModelTask;
- (void)setAlbumWatchHistory:(id)arg0;
- (void)setAlbumModelList:(id)arg0;
- (void)cleanPreloadAwemeModel;
- (id)prefetchMetaInfoBundle;
- (void)setPrefetchMetaInfoBundle:(id)arg0;
- (id /* block */)willStartRequestLongVideoMetaBlock;
- (id /* block */)didFinishRequestLongVideoMetaBlock;
- (void)setMetaLogPassback:(id)arg0;
- (void)preloadAwemeModel;
- (id)albumModelList;
- (void)setScreenCastUiSettings:(id)arg0;
- (id)getAwemeIds:(id)arg0 modelNum:(long long)arg1;
- (void)loadAwemeModelWithEpisodeID:(id)arg0 albumID:(id)arg1 awemeIDs:(id)arg2 bizParams:(id)arg3 completion:(id /* block */)arg4;
- (id)getPreloadAwemeModel:(id)arg0;
- (void)loadNextAwemeModelIfNeededWithCurrentEpisodeID:(id)arg0 albumID:(id)arg1 awemeIDs:(id)arg2 bizParams:(id)arg3;
- (id)albumWatchHistory;
- (void)savePreloadAwemeModel:(id)arg0;
- (id)loadAwemeModelListWithActionType:(long long)arg0 albumID:(id)arg1 bizParams:(id)arg2 completion:(id /* block */)arg3;
- (id)prefetchAwemeBundle;
- (void)setPrefetchAwemeBundle:(id)arg0;
- (id /* block */)requestLongVideoAwemeHitPrefetchBlock;
- (id /* block */)willStartRequestLongVideoAwemeBlock;
- (id /* block */)didFinishRequestLongVideoAwemeBlock;
- (void)setRequestAwemeModelTask:(id)arg0;
- (id)preloadEpisodeMapAwemeDict;
- (id)updateMetaInfoWithAlbumID:(id)arg0 isFromTheater:(BOOL)arg1 requestFrom:(long long)arg2 completion:(id /* block */)arg3;
- (void)loadAwemeModelWithAlbumID:(id)arg0 completion:(id /* block */)arg1;
- (void)loadAwemeModelForLanguageWithAlbumID:(id)arg0 lastAlbumID:(id)arg1 lastEpisodeID:(id)arg2 completion:(id /* block */)arg3;
- (void)loadAwemeModelWithHighLightEpisodeID:(id)arg0 albumID:(id)arg1 episodeID:(id)arg2 awemeIDs:(id)arg3 completion:(id /* block */)arg4;
- (unsigned long long)currentEpisodeIndexWithCurrentEpisodeID:(id)arg0;
- (id)getSeriesAlbumInfoWithAlbumID:(id)arg0;
- (void)loadLongVideoWatchHistoryWithAlbumID:(id)arg0 completion:(id /* block */)arg1;
- (void)prefetchLongVideoAwemeModelWithAwemeID:(id)arg0 albumID:(id)arg1 episodeID:(id)arg2 highlightEpisodeID:(id)arg3;
- (void)prefetchLongVideoAlbumModelWithAlbumID:(id)arg0 isFromTheater:(BOOL)arg1 requestFrom:(long long)arg2;
- (BOOL)isLoadingAlbum;
- (void)setIsLoadingAlbum:(BOOL)arg0;
- (id)metaLogPassback;
- (void)setWillStartRequestLongVideoAwemeBlock:(id /* block */)arg0;
- (void)setDidFinishRequestLongVideoAwemeBlock:(id /* block */)arg0;
- (void)setWillStartRequestLongVideoMetaBlock:(id /* block */)arg0;
- (void)setDidFinishRequestLongVideoMetaBlock:(id /* block */)arg0;
- (void)setRequestLongVideoAwemeHitPrefetchBlock:(id /* block */)arg0;
- (void)setPreloadEpisodeMapAwemeDict:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
