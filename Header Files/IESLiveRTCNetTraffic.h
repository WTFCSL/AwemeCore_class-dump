//
//     Generated by private class-dump
//

@interface IESLiveRTCNetTraffic : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    double _remoteVideNetTraffic;
    double _localVideNetTraffic;
    double _localAudioNetTraffic;
    double _remoteAudioNetTraffic;
}

@property (nonatomic) double remoteVideNetTraffic;
@property (nonatomic) double localVideNetTraffic;
@property (nonatomic) double localAudioNetTraffic;
@property (nonatomic) double remoteAudioNetTraffic;

- (void)addRemoteVideoReceiveKBitrate:(double)arg0;
- (void)addRemoteAudioReceivedKBitrate:(double)arg0;
- (void)addLocalVideoSentKBitrate:(double)arg0;
- (void)addLocalAudioSentKBitrate:(double)arg0;
- (double)totalNetTraffic;
- (double)remoteVideNetTraffic;
- (void)setRemoteVideNetTraffic:(double)arg0;
- (double)localVideNetTraffic;
- (void)setLocalVideNetTraffic:(double)arg0;
- (double)localAudioNetTraffic;
- (void)setLocalAudioNetTraffic:(double)arg0;
- (double)remoteAudioNetTraffic;
- (void)setRemoteAudioNetTraffic:(double)arg0;
- (id)init;
- (void)dealloc;

@end