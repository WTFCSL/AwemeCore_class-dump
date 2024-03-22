//
//     Generated by private class-dump
//

@protocol IESLiveNetworkQualityInfoService <NSObject>

- (long long)transportRttMs;
- (long long)httpRttMs;
- (long long)downstreamThroughputKbps;
- (double)upstreamLossRate;
- (double)downstreamLossRate;
- (unsigned long long)bitrate;
- (long long)netType;

@optional

- (id)networkFilterHeadersFromTag:(unsigned long long)arg0;

@end
