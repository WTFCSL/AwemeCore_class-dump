//
//     Generated by private class-dump
//

@protocol IESLiveVideoPreviewStreamPlayerDelegate <NSObject>

@optional

- (void)playerController:(id)arg0 currentPlayTime:(double)arg1 playableTime:(double)arg2 duration:(double)arg3;
- (void)playerController:(id)arg0 playStateDidChange:(long long)arg1;
- (void)playerController:(id)arg0 playError:(id)arg1;
- (void)playerControllerPlayFinished:(id)arg0;
- (void)onStalledStart:(id)arg0 actionType:(long long)arg1 reason:(unsigned long long)arg2;
- (void)onStalledEnd:(id)arg0;
- (void)videoPlayerDidLoadFirstFrame:(id)arg0;

@end