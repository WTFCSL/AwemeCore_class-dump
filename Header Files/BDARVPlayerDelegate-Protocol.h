//
//     Generated by private class-dump
//

@protocol BDARVPlayerDelegate <NSObject>

@optional

- (void)playerReadyToPlay:(id)arg0;
- (void)player:(id)arg0 playbackStateDidChanged:(long long)arg1;
- (void)player:(id)arg0 didFinishedWithType:(unsigned long long)arg1 error:(id)arg2;
- (void)player:(id)arg0 playbackTimeChanged:(double)arg1;
- (void)player:(id)arg0 loadStateDidChanged:(unsigned long long)arg1;
- (void)playerReadyToDisPlay:(id)arg0;
- (void)playerReadyToDisPlay:(id)arg0 params:(id)arg1;
- (void)player:(id)arg0 hitCacheSize:(long long)arg1;
- (void)player:(id)arg0 mdlKey:(id)arg1 hitCacheSize:(long long)arg2;
- (void)player:(id)arg0 playbackType:(unsigned long long)arg1;

@end
