//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSString, AWEAwemeModel, NSNumber;
@protocol AWEHttpTask;

@interface AWELongVideoPlusDataController : AWEListDataController <AWELongVideoPlusDataControllerProtocol> {
    AWEAwemeModel *_currentModel;
    NSMutableDictionary *_awemeModelListMap;
    NSMutableDictionary *_metaInfoMap;
    NSMutableDictionary *_episodeListMap;
    NSMutableDictionary *_awemeListCursorMap;
    NSMutableDictionary *_episodeListCursorMap;
    NSNumber *_minCursor;
    NSNumber *_maxCursor;
    Class _longVideoDataService;
    id<AWEHttpTask> _updateMetaInfoTask;
    id<AWEHttpTask> _requestAwemodelTask;
    id<AWEHttpTask> _requestWidgetListTask;
    NSMutableDictionary *_isUpdateAwemeHasMoreMap;
    NSMutableDictionary *_isUpdateEpisodeHasMoreMap;
}

@property (retain, nonatomic) Class longVideoDataService;
@property (weak, nonatomic) id<AWEHttpTask> updateMetaInfoTask;
@property (weak, nonatomic) id<AWEHttpTask> requestAwemodelTask;
@property (weak, nonatomic) id<AWEHttpTask> requestWidgetListTask;
@property (retain, nonatomic) NSMutableDictionary *awemeModelListMap;
@property (retain, nonatomic) NSMutableDictionary *metaInfoMap;
@property (retain, nonatomic) NSMutableDictionary *episodeListMap;
@property (retain, nonatomic) NSMutableDictionary *awemeListCursorMap;
@property (retain, nonatomic) NSMutableDictionary *episodeListCursorMap;
@property (retain, nonatomic) NSMutableDictionary *isUpdateAwemeHasMoreMap;
@property (retain, nonatomic) NSMutableDictionary *isUpdateEpisodeHasMoreMap;
@property (retain, nonatomic) AWEAwemeModel *currentModel;
@property (retain, nonatomic) NSNumber *minCursor;
@property (retain, nonatomic) NSNumber *maxCursor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)minCursor;
- (id)maxCursor;
- (void)setMaxCursor:(id)arg0;
- (void)setMinCursor:(id)arg0;
- (Class)longVideoDataService;
- (void)didReceivePaidNotification:(id)arg0;
- (id)updateMetaInfoTask;
- (id)requestAwemodelTask;
- (id)requestWidgetListTask;
- (void)setAwemeModelListMap:(id)arg0;
- (void)setMetaInfoMap:(id)arg0;
- (void)setEpisodeListMap:(id)arg0;
- (void)setAwemeListCursorMap:(id)arg0;
- (void)setEpisodeListCursorMap:(id)arg0;
- (void)setIsUpdateAwemeHasMoreMap:(id)arg0;
- (void)setIsUpdateEpisodeHasMoreMap:(id)arg0;
- (id)metaInfoMap;
- (id)episodeListMap;
- (void)setEpisodeListCursorMapWithAlbumID:(id)arg0 cursor:(id)arg1 minCursor:(id)arg2 hasMore:(BOOL)arg3;
- (void)setUpdateMetaInfoTask:(id)arg0;
- (id)episodeListCursorMap;
- (id)isUpdateEpisodeHasMoreMap;
- (id)awemeModelListMap;
- (id)sortArrayByRank:(id)arg0;
- (id)sortSeriesByRank:(id)arg0;
- (id)awemeListCursorMap;
- (id)isUpdateAwemeHasMoreMap;
- (void)setRequestAwemodelTask:(id)arg0;
- (id)filterEpisodeListArrayWithFirst:(id)arg0 second:(id)arg1;
- (id)sortArrayByEpisodeRank:(id)arg0;
- (void)setRequestWidgetListTask:(id)arg0;
- (void)clearLongVideoData;
- (void)updateMetaInfoWithAlbumID:(id)arg0 episodeID:(id)arg1 awemeID:(id)arg2 cursor:(long long)arg3 count:(long long)arg4 completion:(id /* block */)arg5;
- (void)updateAwemeModelListInfoWithAlbumID:(id)arg0 seriesID:(id)arg1 cursor:(long long)arg2 count:(long long)arg3 completion:(id /* block */)arg4;
- (void)updateEpisodeListInfoWithAlbumID:(id)arg0 cursor:(long long)arg1 count:(long long)arg2 completion:(id /* block */)arg3;
- (void)cancelAllTask;
- (long long)getLVPMetaCount;
- (long long)getLVPEpisodeCount;
- (long long)getLVPAwemeListCount;
- (void)setLongVideoDataService:(Class)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setCurrentModel:(id)arg0;
- (id)currentModel;

@end