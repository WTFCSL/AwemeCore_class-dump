//
//     Generated by private class-dump
//

@class NSString, AWEMusicPlayerQueue, AWEUserModel, LunaForceInsertRecord, NSDictionary, NSMutableArray, AWEStorage, AWEMusicFeedViewModel, AWEMusicStreamingQueueHandler;
@protocol MusicService;

@interface LunaRecommendDataSource : NSObject <AWEMusicStreamingQueueDelegate, AWEMusicServiceDelegate, AWEMusicDispatchLunaV2Protocol, AWEMusicDispatchCollectionProtocol, AWEMusicPlayerQueueDelegate, LunaVipServiceDelegate> {
    BOOL _hasCache;
    BOOL _hasMore;
    BOOL _isForceInsertVideo;
    BOOL _isFirstRequest;
    BOOL _isUseCache;
    AWEMusicPlayerQueue *_queue;
    AWEMusicFeedViewModel *_lastPlayingModel;
    AWEUserModel *_userModel;
    id<MusicService> _musicService;
    NSString *_cursor;
    unsigned long long _feedRequestCount;
    long long _maxSongCount;
    NSString *_forceInsertTrackId;
    NSString *_forceInsertVideoID;
    NSString *_forceInsertSongCoverAnchorType;
    AWEMusicFeedViewModel *_forceInsertModel;
    LunaForceInsertRecord *_forceInsertRecord;
    AWEStorage *_lunaStorage;
    NSMutableArray *_diversionList;
    long long _currentPlayCount;
    NSDictionary *_extraInfo;
}

@property (retain, nonatomic) AWEMusicPlayerQueue *queue;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (weak, nonatomic) id<MusicService> musicService;
@property (retain, nonatomic) NSString *cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) unsigned long long feedRequestCount;
@property (nonatomic) BOOL hasCache;
@property (nonatomic) long long maxSongCount;
@property (copy, nonatomic) NSString *forceInsertTrackId;
@property (copy, nonatomic) NSString *forceInsertVideoID;
@property (nonatomic) BOOL isForceInsertVideo;
@property (copy, nonatomic) NSString *forceInsertSongCoverAnchorType;
@property (retain, nonatomic) AWEMusicFeedViewModel *forceInsertModel;
@property (retain, nonatomic) LunaForceInsertRecord *forceInsertRecord;
@property (retain, nonatomic) AWEStorage *lunaStorage;
@property (nonatomic) BOOL isFirstRequest;
@property (retain, nonatomic) AWEMusicFeedViewModel *lastPlayingModel;
@property (nonatomic) BOOL isUseCache;
@property (retain, nonatomic) NSMutableArray *diversionList;
@property (nonatomic) long long currentPlayCount;
@property (retain, nonatomic) NSDictionary *extraInfo;
@property (readonly, nonatomic) AWEMusicStreamingQueueHandler *queueHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recommendRequestQueueParams:(id)arg0;

- (void)setExtraInfo:(id)arg0;
- (void)musicServiceReadyToPlay:(id)arg0;
- (void)musicServiceMusicWillChange:(id)arg0;
- (BOOL)isFirstRequest;
- (void)setIsFirstRequest:(BOOL)arg0;
- (BOOL)isUseCache;
- (void)queueDidUpdatePlayList:(id)arg0;
- (BOOL)enableCycleToFirst;
- (id)musicService;
- (void)setMusicService:(id)arg0;
- (void)setIsUseCache:(BOOL)arg0;
- (void)setHasCache:(BOOL)arg0;
- (id)initWithUserModel:(id)arg0 musicService:(id)arg1 extraInfo:(id)arg2;
- (id)p_request;
- (void)resetWithModels:(id)arg0 currentModel:(id)arg1;
- (id)queueHandler;
- (id)lastPlayingModel;
- (void)modelCollectionTypeChanged:(id)arg0;
- (BOOL)hasMoreOfScene:(id)arg0;
- (void)loadMoreScene:(id)arg0 responseBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (BOOL)needRecordLoopMode:(id)arg0;
- (void)reactLoadMoreFeedWithResponseCount:(long long)arg0 responseFilteredCount:(long long)arg1 queueName:(id)arg2;
- (id)titleForPlayerOfQueueId:(id)arg0;
- (id)subTitleForPlayerOfQueueId:(id)arg0;
- (BOOL)hasForceInsert;
- (void)filterModelsWithModels:(id)arg0 handler:(id /* block */)arg1;
- (void)lunaV2Update:(id)arg0 isFromCache:(BOOL)arg1;
- (void)lunaV2UpdateFinish:(id)arg0 isFromCache:(BOOL)arg1;
- (void)luna_onUserVipStatusChanged:(unsigned long long)arg0;
- (id)viewModelsFromResponse:(id)arg0 forPlay:(BOOL)arg1;
- (unsigned long long)feedRequestCount;
- (void)setFeedRequestCount:(unsigned long long)arg0;
- (void)requestSongModelsCompletion:(id /* block */)arg0;
- (void)setForceInsertTrackId:(id)arg0;
- (void)setForceInsertVideoID:(id)arg0;
- (id)forceInsertTrackId;
- (id)forceInsertVideoID;
- (void)setIsForceInsertVideo:(BOOL)arg0;
- (void)setForceInsertSongCoverAnchorType:(id)arg0;
- (void)setCurrentPlayCount:(long long)arg0;
- (long long)maxSongCount;
- (id)diversionList;
- (void)setLunaStorage:(id)arg0;
- (void)setDiversionList:(id)arg0;
- (void)updateStorage;
- (id)forceInsertModel;
- (void)updateCurrentModel:(id)arg0 needPlay:(BOOL)arg1;
- (id)queryListFromCache;
- (id)p_currentDay;
- (id)lunaStorage;
- (BOOL)isForceInsertVideo;
- (id)forceInsertSongCoverAnchorType;
- (void)queryFeedListResponseBlock:(id /* block */)arg0 completion:(id /* block */)arg1;
- (void)setForceInsertModel:(id)arg0;
- (void)queryTrackId:(id)arg0 showDiversionAnchor:(id)arg1 responseBlock:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)p_queryCachedList;
- (void)queryRecommendResponseBlock:(id /* block */)arg0 completion:(id /* block */)arg1;
- (id)p_queueParams;
- (id)forceInsertRecord;
- (void)setForceInsertRecord:(id)arg0;
- (long long)maxSongCountLimit;
- (long long)currentPlayCount;
- (id)p_buildDiversionModel;
- (void)resetAndForceInsert:(id)arg0 needPlay:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)setLastPlayingModel:(id)arg0;
- (void)setMaxSongCount:(long long)arg0;
- (id)cursor;
- (void).cxx_destruct;
- (void)setup;
- (id)userModel;
- (void)setUserModel:(id)arg0;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (id)queue;
- (void)dealloc;
- (void)reset;
- (void)setQueue:(id)arg0;
- (void)setCursor:(id)arg0;
- (void)viewDidDisappear;
- (id)extraInfo;
- (BOOL)hasCache;

@end