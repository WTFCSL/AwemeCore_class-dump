//
//     Generated by private class-dump
//

@protocol IESLiveNetworkTracker <NSObject>

- (void)trackNetworkBaseInfo:(id)arg0;
- (void)trackNetworkException:(id)arg0;
- (id)networkExceptionWithLimit:(long long)arg0;
- (id)topNetworkTrackFrequency:(long long)arg0;
- (id)topNetworkTrackSize:(long long)arg0;
- (long long)networkExceptionCount;
- (void)stopNetworkTrack;

@end