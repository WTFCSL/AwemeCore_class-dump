//
//     Generated by private class-dump
//

@protocol AWEFeedPiPDelegate <NSObject>

@optional

- (double)getCurrentPlayTime;
- (void)pip_serviceWillStart:(id)arg0;
- (void)pip_serviceDidStart:(id)arg0;
- (void)pip_service:(id)arg0 willStopForRestore:(BOOL)arg1;
- (void)pip_service:(id)arg0 didStopForRestore:(BOOL)arg1;
- (void)pip_service:(id)arg0 restoreFromForeground:(BOOL)arg1;
- (void)pip_service:(id)arg0 failedToStartWithError:(id)arg1;
- (void)pip_service:(id)arg0 didTransToNewSize:(struct CGSize { double x0; double x1; })arg1;
- (void)pip_service:(id)arg0 seekToTime:(double)arg1 completion:(id /* block */)arg2;
- (void)pip_service:(id)arg0 isPlaying:(BOOL)arg1;
- (void)pip_service:(id)arg0 getPlayerContext:(id)arg1;
- (void)pip_service:(id)arg0 unbindPlayerContext:(id)arg1;
- (void)pip_service:(id)arg0 bindPlayerContext:(id)arg1;
- (void)pip_servicePreBtnClicked:(id)arg0;
- (void)pip_servicePlayBtnClicked:(id)arg0;
- (void)pip_serviceNextBtnClicked:(id)arg0;
- (void)pip_service:(id)arg0 triggeredWithType:(unsigned long long)arg1 ToScene:(id)arg2;

@end
