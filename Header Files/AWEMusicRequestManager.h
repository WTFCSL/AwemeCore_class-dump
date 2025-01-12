//
//     Generated by private class-dump
//

@interface AWEMusicRequestManager : NSObject

+ (id)dictionaryToJson:(id)arg0;
+ (void)requestOpenPlatformShareIdWithSourceStyleId:(id)arg0 trackId:(id)arg1 completion:(id /* block */)arg2;
+ (id)postWithURLString:(id)arg0 params:(id)arg1 modelClass:(Class)arg2 completion:(id /* block */)arg3;
+ (id)getWithURLString:(id)arg0 params:(id)arg1 modelClass:(Class)arg2 completion:(id /* block */)arg3;
+ (void)requestDirtyWordCheckWithContent:(id)arg0 completion:(id /* block */)arg1;
+ (id)getWithURLString:(id)arg0 params:(id)arg1 modelClass:(Class)arg2 responseBlock:(id /* block */)arg3 completionBlock:(id /* block */)arg4;
+ (void)deletePlaylistWithPlaylistIDs:(id)arg0 completion:(id /* block */)arg1;
+ (void)createPlaylistWithTitle:(id)arg0 picUrl:(id)arg1 des:(id)arg2 privacySetting:(unsigned long long)arg3 musicInfo:(id)arg4 completion:(id /* block */)arg5;
+ (id)postWithURLString:(id)arg0 params:(id)arg1 modelClass:(Class)arg2 responseBlock:(id /* block */)arg3 completionBlock:(id /* block */)arg4;
+ (void)p_etReportNetPerformance:(id)arg0 params:(id)arg1 parseModelDuration:(double)arg2 netDuration:(double)arg3 error:(id)arg4;
+ (void)updatePlaylistInfoWithPlaylistID:(id)arg0 title:(id)arg1 desc:(id)arg2 picURL:(id)arg3 privacyStatus:(unsigned long long)arg4 completion:(id /* block */)arg5;
+ (void)requestMusicChartDetailWithChartId:(id)arg0 version:(id)arg1 musicId:(id)arg2 cursor:(id)arg3 count:(id)arg4 needMusicRank:(BOOL)arg5 needMusic:(BOOL)arg6 withChartMeta:(BOOL)arg7 itemId:(id)arg8 loadType:(id)arg9 completion:(id /* block */)arg10;
+ (void)requestMusicListWithChartId:(id)arg0 version:(id)arg1 cursor:(id)arg2 count:(id)arg3 itemCount:(id)arg4 withDetailUrl:(BOOL)arg5 withChartMeta:(BOOL)arg6 completion:(id /* block */)arg7;
+ (void)requestPlaylistWithSecUid:(id)arg0 scene:(unsigned long long)arg1 myCount:(long long)arg2 myCursor:(long long)arg3 count:(long long)arg4 cursor:(long long)arg5 completion:(id /* block */)arg6;
+ (void)requestCollectAndRecommendMusicWithUserID:(id)arg0 cursor:(id)arg1 count:(id)arg2 recommendCount:(id)arg3 onlyRecommend:(id)arg4 completion:(id /* block */)arg5;
+ (void)requestPlaylistCollectWithPlaylistID:(id)arg0 targetCollectionType:(BOOL)arg1 completion:(id /* block */)arg2;
+ (void)requestFeedListWithScene:(id)arg0 relativeMusicId:(id)arg1 playlistID:(id)arg2 frontIds:(id)arg3 count:(id)arg4 responseBlock:(id /* block */)arg5 completion:(id /* block */)arg6;
+ (void)requestCollectionListWithPlaylistID:(id)arg0 userID:(id)arg1 scene:(id)arg2 cursor:(id)arg3 count:(id)arg4 completion:(id /* block */)arg5;
+ (void)requestCollectMusicWithID:(id)arg0 videoID:(id)arg1 action:(unsigned long long)arg2 scene:(id)arg3 completion:(id /* block */)arg4;
+ (void)requestCollectToLunaMusicID:(id)arg0 mediaType:(unsigned long long)arg1 actionType:(unsigned long long)arg2 completion:(id /* block */)arg3;
+ (void)requestPlaylistAddorDeleteSongWithPlaylistID:(id)arg0 musicModels:(id)arg1 scene:(id)arg2 action:(unsigned long long)arg3 completion:(id /* block */)arg4;
+ (void)requestDetailWithScene:(id)arg0 musicId:(id)arg1 responseBlock:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (void)batchRequestMusicLiteInfoWithScene:(id)arg0 musicIds:(id)arg1 responseBlock:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (void)requestDiversionLunaSongInfoWithSongID:(id)arg0 scene:(id)arg1 infoType:(long long)arg2 completion:(id /* block */)arg3;
+ (void)requestPlaylistBannerInfoWithCompletion:(id /* block */)arg0;
+ (void)requestPlaylistReorderSongsWithPlaylistId:(id)arg0 reorderedMusicIds:(id)arg1 completion:(id /* block */)arg2;
+ (void)requestPlaylistAddorDeleteSongWithPlaylistID:(id)arg0 musicID:(id)arg1 videoID:(id)arg2 scene:(id)arg3 action:(unsigned long long)arg4 completion:(id /* block */)arg5;
+ (void)requestPlaylistAddorDeleteSongWithPlaylistID:(id)arg0 musicID:(id)arg1 songID:(id)arg2 videoID:(id)arg3 scene:(id)arg4 action:(unsigned long long)arg5 completion:(id /* block */)arg6;
+ (void)requestPlaylistDetailWithPlaylistID:(id)arg0 cursor:(id)arg1 scene:(unsigned long long)arg2 count:(id)arg3 needPlaylistInfo:(BOOL)arg4 completion:(id /* block */)arg5;
+ (void)addSongWithPlaylistID:(id)arg0 musicID:(id)arg1 videoID:(id)arg2 completion:(id /* block */)arg3;
+ (void)addSongWithPlaylistID:(id)arg0 musicID:(id)arg1 videoID:(id)arg2 scene:(id)arg3 completion:(id /* block */)arg4;
+ (void)deleteSongWithPlaylistID:(id)arg0 musicID:(id)arg1 videoID:(id)arg2 completion:(id /* block */)arg3;
+ (void)requestMusicWithSearchText:(id)arg0 inPlaylist:(id)arg1 cursor:(id)arg2 scene:(id)arg3 searchID:(id)arg4 completion:(id /* block */)arg5;
+ (void)createPlaylistVideoWithPlaylistId:(id)arg0 scene:(id)arg1 completion:(id /* block */)arg2;
+ (void)checkPlaylistVideoGenerateStatusWithTaskId:(id)arg0 playlistId:(id)arg1 completion:(id /* block */)arg2;
+ (void)requestLunaMusicianInfoWithUserID:(id)arg0 completion:(id /* block */)arg1;

@end
