//
//     Generated by private class-dump
//

@protocol BDXVideoCorePlayerDelegate <NSObject>

- (void)bdx_player:(id)arg0 didChangePlaybackStateWithAction:(unsigned long long)arg1;
- (void)bdx_playerWillLoopPlaying:(id)arg0;
- (void)bdx_player:(id)arg0 playbackFailedWithError:(id)arg1;
- (void)bdx_playerDidReadyForDisplay:(id)arg0;
- (void)bdx_player:(id)arg0 didChangeStallState:(long long)arg1;

@optional

- (void)bdx_player:(id)arg0 fetchByResourceManager:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)bdx_player:(id)arg0 fullScreenAlone:(BOOL)arg1;

@end
