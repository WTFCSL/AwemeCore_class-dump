//
//     Generated by private class-dump
//

@interface AWEPlayVideoDefaultTracker : AWEPlayVideoBaseTracker

- (id)paramsForVideoPlayInPlayer:(id)arg0 paramsModel:(id)arg1;
- (id)paramsForVideoPlayTimeInPlayer:(id)arg0 paramsModel:(id)arg1;
- (id)paramsForVideoPlayPauseInPlayer:(id)arg0 paramsModel:(id)arg1;
- (id)paramsForVideoPlayFinishInPlayer:(id)arg0 paramsModel:(id)arg1;
- (void)didTrackForTrackerInPlayer:(id)arg0 type:(long long)arg1 paramsModel:(id)arg2 trackParams:(id)arg3;
- (void)addMixInfoParamsToEventIfNeed:(id)arg0 player:(id)arg1;
- (void)addCSRCampainTaskParamsToEventIfNeed:(id)arg0 player:(id)arg1;
- (void)addTabJumpInfoParamsIfNeed:(id)arg0 player:(id)arg1;
- (void)didTrackPlayInPlayer:(id)arg0 paramsModel:(id)arg1 params:(id)arg2;
- (void)didTrackPlayTimeInPlayer:(id)arg0 paramsModel:(id)arg1 params:(id)arg2;
- (void)trackReviseLastPlayingAwemeIDIfNeed:(id)arg0;
- (id)paramsForVideoPauseTimeInPlayer:(id)arg0 paramsModel:(id)arg1;
- (id)paramsForVideoPlayForSubClassInPlayer:(id)arg0 playerExtraParams:(id)arg1;

@end
