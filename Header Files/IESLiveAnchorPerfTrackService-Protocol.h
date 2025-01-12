//
//     Generated by private class-dump
//

@protocol IESLiveAnchorPerfTrackService <NSObject>

- (void)setupGuideLaunchTime;
- (long long)currentTimeFromGuideLaunchTime;
- (void)trackDurationFromGuideLaunchTimeWithStage:(id)arg0 params:(id)arg1;
- (void)setupStartLiveTime;
- (long long)currentTimeFromStartLiveTime;
- (void)trackDurationFromStartLiveTimeWithStage:(id)arg0 params:(id)arg1;
- (void)setupCloseLiveTime;
- (long long)currentTimeFromCloseLiveTime;
- (void)trackDurationFromCloseLiveTimeWithStage:(id)arg0 params:(id)arg1;
- (void)trackStage:(id)arg0 duration:(long long)arg1 params:(id)arg2;
- (void)trackStage:(id)arg0 params:(id)arg1;
- (void)trackPerfWithStage:(id)arg0 params:(id)arg1;

@end
