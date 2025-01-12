//
//     Generated by private class-dump
//

@class NSString, NSArray, AWEMusicPlayerQueue, AWEPlaylistInfoModel, NSNumber, AWEMusicDSPEventModel;
@protocol AWEPlaylistDataControllerBatchManageDelegate, AWEPlaylistDataControllerDelegate;

@interface AWEPlaylistDataController : NSObject <AWEMusicDispatchPlaylistProtocol, AWEMusicStreamingQueueHandlerDelegate, AWEMusicStreamingQueueDelegate> {
    BOOL _hasMore;
    BOOL _isMiniLuna;
    BOOL _isRequesting;
    BOOL _needPlaylistInfo;
    id<AWEPlaylistDataControllerDelegate> _delegate;
    id<AWEPlaylistDataControllerBatchManageDelegate> _batchManageDelegate;
    AWEMusicPlayerQueue *_queue;
    NSArray *_songList;
    NSArray *_manageSongList;
    AWEPlaylistInfoModel *_playlistInfo;
    unsigned long long _totalCount;
    unsigned long long _playlistCategory;
    AWEMusicDSPEventModel *_eventModel;
    NSNumber *_cursor;
    NSString *_playlistID;
    NSString *_secUserID;
}

@property (nonatomic) BOOL isRequesting;
@property (retain, nonatomic) NSNumber *cursor;
@property (copy, nonatomic) NSString *playlistID;
@property (retain, nonatomic) AWEMusicPlayerQueue *queue;
@property (nonatomic) BOOL needPlaylistInfo;
@property (copy, nonatomic) NSString *secUserID;
@property (weak, nonatomic) id<AWEPlaylistDataControllerDelegate> delegate;
@property (weak, nonatomic) id<AWEPlaylistDataControllerBatchManageDelegate> batchManageDelegate;
@property (retain, nonatomic) NSArray *songList;
@property (retain, nonatomic) NSArray *manageSongList;
@property (readonly, nonatomic) NSArray *queueList;
@property (retain, nonatomic) AWEPlaylistInfoModel *playlistInfo;
@property (nonatomic) unsigned long long totalCount;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL isMiniLuna;
@property (nonatomic) unsigned long long playlistCategory;
@property (retain, nonatomic) AWEMusicDSPEventModel *eventModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)secUserID;
- (void)setSecUserID:(id)arg0;
- (BOOL)isMiniLuna;
- (id)playlistInfo;
- (void)setPlaylistInfo:(id)arg0;
- (void)setIsMiniLuna:(BOOL)arg0;
- (void)setIsRequesting:(BOOL)arg0;
- (BOOL)isRequesting;
- (void)setPlaylistID:(id)arg0;
- (void)playlistModelChangedWithType:(unsigned long long)arg0 changeModels:(id)arg1 from:(id)arg2;
- (void)playlistSongsChangedWithType:(unsigned long long)arg0 playlistId:(id)arg1 changeModels:(id)arg2 from:(id)arg3;
- (id)eventModel;
- (id)queueHandler;
- (void)setEventModel:(id)arg0;
- (void)loadMoreCompletion:(id /* block */)arg0;
- (BOOL)hasMoreOfScene:(id)arg0;
- (void)loadMoreScene:(id)arg0 responseBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (BOOL)needRecordLoopMode:(id)arg0;
- (void)loadMoreAppend:(id)arg0 original:(id)arg1;
- (id)titleForPlayerOfQueueId:(id)arg0;
- (void)filterModelsWithModels:(id)arg0 handler:(id /* block */)arg1;
- (void)queueHandler:(id)arg0 changedOf:(id)arg1 scene:(unsigned long long)arg2;
- (id)songList;
- (void)setManageSongList:(id)arg0;
- (id)manageSongList;
- (id)reorderedMusics;
- (void)applyThenCleanReorderedSongs;
- (void)cleanManageSongList;
- (void)deleteBatchManagedSongsAtIndexes:(id)arg0 eventUtil:(id)arg1 completion:(id /* block */)arg2;
- (void)setBatchManageDelegate:(id)arg0;
- (void)setSongList:(id)arg0;
- (id)initWithPlaylistId:(id)arg0 secUserID:(id)arg1;
- (void)addOriginalSongModel:(id)arg0;
- (void)deleteLocalSongModel:(id)arg0;
- (id)queueList;
- (void)deleteSongAtIndex:(long long)arg0 completion:(id /* block */)arg1;
- (void)setNeedPlaylistInfo:(BOOL)arg0;
- (id)p_getCoverPicURL;
- (void)deleteLocalSongModels:(id)arg0;
- (unsigned long long)playlistCategory;
- (id)batchManageDelegate;
- (BOOL)needPlaylistInfo;
- (id)p_queueName;
- (id)p_sceneName;
- (id)p_getPlayerList:(id)arg0;
- (void)deletePlaylistCompletion:(id /* block */)arg0;
- (void)playlistCollectionStatusChangedTo:(BOOL)arg0;
- (void)reloadCollectionCountWhenCollectTrrigerLogin;
- (void)setPlaylistCategory:(unsigned long long)arg0;
- (id)cursor;
- (void).cxx_destruct;
- (id)delegate;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (id)queue;
- (void)setDelegate:(id)arg0;
- (unsigned long long)totalCount;
- (void)setQueue:(id)arg0;
- (void)setCursor:(id)arg0;
- (id)playlistID;
- (void)setTotalCount:(unsigned long long)arg0;
- (id)loadCount;

@end
