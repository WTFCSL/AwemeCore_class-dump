//
//     Generated by private class-dump
//

@protocol IESLiveKTVSongListActions <NSObject>

@optional

- (void)addMuiscModel:(id)arg0 source:(id)arg1 completion:(id /* block */)arg2;
- (void)goTopActionWithMusicModel:(id)arg0;
- (void)removeMusicModel:(id)arg0 successToast:(id)arg1 completion:(id /* block */)arg2;
- (void)favoriteMusicModel:(id)arg0 cell:(id)arg1 completion:(id /* block */)arg2;
- (void)updateMusicModel:(id)arg0 isPause:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)addAllMusicModel:(id)arg0 source:(id)arg1 addCompletion:(id /* block */)arg2;
- (void)joinMultiChorusWithMusicModel:(id)arg0 completion:(id /* block */)arg1;
- (void)leaveMultiChorusWithMusicModel:(id)arg0 completion:(id /* block */)arg1;

@end