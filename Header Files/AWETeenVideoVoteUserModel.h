//
//     Generated by private class-dump
//

@interface AWETeenVideoVoteUserModel : AWEBaseApiModel {
    long long _videoCount;
    double _lastFetchVoteVideoTimeStamp;
}

@property (nonatomic) long long videoCount;
@property (nonatomic) double lastFetchVoteVideoTimeStamp;

- (double)lastFetchVoteVideoTimeStamp;
- (void)setLastFetchVoteVideoTimeStamp:(double)arg0;
- (long long)videoCount;
- (void)setVideoCount:(long long)arg0;

@end
