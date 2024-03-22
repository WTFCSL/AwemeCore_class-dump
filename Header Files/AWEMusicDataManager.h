//
//     Generated by private class-dump
//

@interface AWEMusicDataManager : NSObject

+ (void)requestCollectionListWithPlaylistID:(id)arg0 userID:(id)arg1 cursor:(id)arg2 count:(id)arg3 scene:(id)arg4 completion:(id /* block */)arg5;
+ (void)createPlaylistWithTitle:(id)arg0 picUrl:(id)arg1 des:(id)arg2 privacySetting:(unsigned long long)arg3 musicInfo:(id)arg4 completion:(id /* block */)arg5;
+ (void)requestCollectMusicWithID:(id)arg0 videoID:(id)arg1 type:(unsigned long long)arg2 completion:(id /* block */)arg3;
+ (void)requestCollectAndRecommendMusicWithUserID:(id)arg0 cursor:(id)arg1 count:(id)arg2 recommendCount:(id)arg3 onlyRecommend:(id)arg4 completion:(id /* block */)arg5;
+ (void)requestPlaylistCollectWithPlaylistID:(id)arg0 targetCollectionType:(BOOL)arg1 completion:(id /* block */)arg2;
+ (void)requestFeedListWithFrontIds:(id)arg0 playlistID:(id)arg1 count:(id)arg2 responseBlock:(id /* block */)arg3 completion:(id /* block */)arg4;
+ (void)requestCollectMusicWithID:(id)arg0 videoID:(id)arg1 scene:(id)arg2 type:(unsigned long long)arg3 completion:(id /* block */)arg4;
+ (void)requestCollectToLunaMusicID:(id)arg0 mediaType:(unsigned long long)arg1 actionType:(unsigned long long)arg2 completion:(id /* block */)arg3;
+ (void)requstPlaylistAddSongWithPlaylistID:(id)arg0 musicModels:(id)arg1 completion:(id /* block */)arg2;
+ (void)requestFeedListWithCount:(id)arg0 playlistID:(id)arg1 completion:(id /* block */)arg2;
+ (void)requestFeedListWithFrontIds:(id)arg0 count:(id)arg1 responseBlock:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (void)requestCollectionListWithUserID:(id)arg0 cursor:(id)arg1 count:(id)arg2 completion:(id /* block */)arg3;
+ (void)requestValidCollectionListWithPlaylistID:(id)arg0 userID:(id)arg1 cursor:(id)arg2 count:(id)arg3 completion:(id /* block */)arg4;
+ (void)createMiniLunaPlaylistWithTitle:(id)arg0 isprivate:(BOOL)arg1 trackIDs:(id)arg2 completion:(id /* block */)arg3;
+ (void)requstPlaylistAddSongWithPlaylistID:(id)arg0 musicID:(id)arg1 videoID:(id)arg2 completion:(id /* block */)arg3;
+ (void)requestMiniLunaPlaylistCollectWithPlaylistIDs:(id)arg0 completion:(id /* block */)arg1;
+ (void)requestMiniLunaPlaylistCancelCollectWithPlaylistIDs:(id)arg0 completion:(id /* block */)arg1;

@end
