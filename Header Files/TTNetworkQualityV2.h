//
//     Generated by private class-dump
//

@interface TTNetworkQualityV2 : NSObject {
    int _level;
    int _effectivHttpRttMs;
    int _effectiveTransportRttMs;
    int _effectiveRxThroughputKbps;
}

@property (nonatomic) int level;
@property (nonatomic) int effectivHttpRttMs;
@property (nonatomic) int effectiveTransportRttMs;
@property (nonatomic) int effectiveRxThroughputKbps;

- (void)setEffectivHttpRttMs:(int)arg0;
- (void)setEffectiveTransportRttMs:(int)arg0;
- (void)setEffectiveRxThroughputKbps:(int)arg0;
- (int)effectivHttpRttMs;
- (int)effectiveTransportRttMs;
- (int)effectiveRxThroughputKbps;
- (void)setLevel:(int)arg0;
- (id)init;
- (int)level;

@end