//
//     Generated by private class-dump
//

@protocol CSJVideoAdReportor <NSObject>

- (void)startPlayVideo;
- (void)didStartPlayVideoWithVideoDuration:(double)arg0;
- (void)didAutoStartPlayWithVideoDuration:(double)arg0;
- (void)didFinishVideo;
- (void)didPauseVideoWithCurrentDuration:(double)arg0;
- (void)didResumeVideoWithCurrentDuration:(double)arg0;
- (void)didBreakVideoWithCurrentDuration:(double)arg0;
- (void)didClickVideoViewWithCurrentDuration:(double)arg0;
- (void)didPlayFailedWithError:(id)arg0;
- (void)didPlayStartFailedWithError:(id)arg0;
- (void)didPlayBufferStart;
- (void)didPlayBufferEnd;

@end