//
//     Generated by private class-dump
//

@class NSString;

@interface AWEACCVideoMusicImpl : NSObject <ACCVideoMusicProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchLocalURLForMusic:(id)arg0 withProgress:(id /* block */)arg1 completion:(id /* block */)arg2;
- (BOOL)downloadedMusic:(id)arg0;
- (id)localURLForMusic:(id)arg0;
- (id)localLyricURLForMusic:(id)arg0;
- (void)fetchLocalURLForMusic:(id)arg0 enableDownloadOpt:(BOOL)arg1 withProgress:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)fetchLocalURLForMusic:(id)arg0 lyricURL:(id)arg1 extraTrack:(id)arg2 withProgress:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)fetchLocalURLForMusic:(id)arg0 lyricURL:(id)arg1 withProgress:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)fetchLocalURLForMusic:(id)arg0 lyricURL:(id)arg1 enableDownloadOpt:(BOOL)arg2 withProgress:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)downloadMusicModel:(id)arg0 params:(id)arg1 extraTrack:(id)arg2 progress:(id /* block */)arg3 playingHandler:(id /* block */)arg4 completion:(id /* block */)arg5;
- (void)requestMusicItemWithID:(id)arg0 completion:(id /* block */)arg1;
- (void)requestMusicItemWithID:(id)arg0 additionalParams:(id)arg1 completion:(id /* block */)arg2;
- (void)refreshMusicItem:(id)arg0 completion:(id /* block */)arg1;
- (void)dislikeMusicWithMusicID:(id)arg0 channelID:(id)arg1 completion:(id /* block */)arg2;
- (void)requestCollectingMusicsWithCursor:(id)arg0 count:(id)arg1 channelID:(id)arg2 completion:(id /* block */)arg3;
- (void)downloadMusicModel:(id)arg0 extraTrack:(id)arg1 playingHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)requestCollectingMusicWithID:(id)arg0 collect:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)downloadMusicModel:(id)arg0 playingHandler:(id /* block */)arg1 completion:(id /* block */)arg2;

@end
