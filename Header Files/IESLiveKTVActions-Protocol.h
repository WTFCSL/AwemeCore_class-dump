//
//     Generated by private class-dump
//

@protocol IESLiveKTVActions <NSObject>

@optional

- (void)willStartPlayMusicWithMusicID:(id)arg0 afterTime:(long long)arg1;
- (void)didStartPlayMusicWithMusicID:(id)arg0;
- (void)willStopPlayMusicWithMusicID:(id)arg0;
- (void)didStopPlayMusicWithMusicID:(id)arg0 finished:(BOOL)arg1;
- (void)didPausePlayMusicWithMusicID:(id)arg0;
- (void)didResumePlayMusicWithMusicID:(id)arg0;
- (void)didKTVOrderListChanged;
- (void)didKTVIMOrderListChanged;
- (void)didUpdateKTVStageState:(unsigned long long)arg0;

@end
