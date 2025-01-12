//
//     Generated by private class-dump
//

@protocol AWEMusicServiceDelegate <NSObject>

@optional

- (void)musicService:(id)arg0 didFinishedWithError:(id)arg1;
- (void)musicService:(id)arg0 playStatusChanged:(long long)arg1;
- (void)musicServicePreparedToPlay:(id)arg0;
- (void)musicServicePreparedToPlay:(id)arg0;
- (void)musicServiceReadyToDisPlay:(id)arg0;
- (void)musicServiceReadyToDisPlay:(id)arg0;
- (void)musicServiceReadyToPlay:(id)arg0;
- (void)musicServiceReadyToPlay:(id)arg0;
- (void)musicServiceWillPlay:(id)arg0;
- (void)musicServiceDidPlay:(id)arg0;
- (void)musicServiceDidPause:(id)arg0 pauseType:(long long)arg1;
- (void)musicServiceDidStop:(id)arg0;
- (void)musicServiceDidStop:(id)arg0 type:(long long)arg1;
- (void)musicServiceDidSeek:(id)arg0;
- (void)musicServiceInPlaying:(id)arg0;
- (void)musicServiceInPlaying:(id)arg0;
- (void)musicServiceMusicWillChange:(id)arg0;
- (void)musicServiceMusicChanged:(id)arg0;
- (void)musicServicePlaybackTimeChanged:(id)arg0;
- (void)musicService:(id)arg0 didChangeStallState:(long long)arg1 actionType:(long long)arg2 reason:(unsigned long long)arg3;
- (void)musicServiceWillGoPrevFromRemote:(id)arg0;
- (void)musicServiceWillGoPrevFromRemote:(id)arg0;
- (void)musicServiceWillGoNextFromRemote:(id)arg0;
- (void)musicServiceWillGoNextFromRemote:(id)arg0;
- (void)musicServiceDidGoPrevFromRemote:(id)arg0;
- (void)musicServiceDidGoPrevFromRemote:(id)arg0;
- (void)musicServiceDidGoNextFromRemote:(id)arg0;
- (void)musicServiceDidGoNextFromRemote:(id)arg0;
- (void)musicServiceUserStopped:(id)arg0;
- (void)onAutoNext:(id)arg0 completion:(id /* block */)arg1;
- (void)onWillPrev:(id)arg0;
- (void)onDidPrev:(id)arg0;
- (void)onWillNext:(id)arg0 isManual:(BOOL)arg1 isFinished:(BOOL)arg2;
- (void)onDidNext:(id)arg0 isManual:(BOOL)arg1 isFinished:(BOOL)arg2;
- (void)onWillUpdateTo:(id)arg0 service:(id)arg1 withoutPlay:(BOOL)arg2 method:(long long)arg3;
- (void)onWillUpdateTo:(id)arg0 service:(id)arg1 withoutPlay:(BOOL)arg2 method:(long long)arg3;
- (void)onDidUpdateTo:(id)arg0 service:(id)arg1 withoutPlay:(BOOL)arg2 method:(long long)arg3;
- (void)onDidUpdateTo:(id)arg0 service:(id)arg1 withoutPlay:(BOOL)arg2 method:(long long)arg3;
- (void)onStartPlay:(id)arg0;
- (void)onSeekOver:(id)arg0;
- (void)onManualAudioOver:(id)arg0;
- (void)onAudioPlay:(id)arg0 model:(id)arg1;
- (void)onAudioOver:(id)arg0 model:(id)arg1 duration:(double)arg2;
- (void)onNextFail:(id)arg0 isManual:(BOOL)arg1 isFinished:(BOOL)arg2;

@end
