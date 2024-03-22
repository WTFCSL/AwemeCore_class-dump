//
//     Generated by private class-dump
//

@class NSString;

@interface XPlayQualityStatsModel : NSObject <XPLayQualityStats, NSCopying> {
    float _videoLossRate;
    unsigned long long _fps;
    unsigned long long _showDelay;
    unsigned long long _rxKBps;
    unsigned long long _blockCount;
    unsigned long long _blockDuration;
    unsigned long long _blockStatisticDuration;
    long long _codecType;
    long long _networkQuality;
    unsigned long long _jitter;
}

@property (nonatomic) unsigned long long fps;
@property (nonatomic) unsigned long long showDelay;
@property (nonatomic) unsigned long long rxKBps;
@property (nonatomic) float videoLossRate;
@property (nonatomic) unsigned long long blockCount;
@property (nonatomic) unsigned long long blockDuration;
@property (nonatomic) unsigned long long blockStatisticDuration;
@property (nonatomic) long long codecType;
@property (nonatomic) long long networkQuality;
@property (nonatomic) unsigned long long jitter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setVideoLossRate:(float)arg0;
- (void)setNetworkQuality:(long long)arg0;
- (unsigned long long)blockDuration;
- (void)setBlockDuration:(unsigned long long)arg0;
- (void)setBlockCount:(unsigned long long)arg0;
- (void)setBlockStatisticDuration:(unsigned long long)arg0;
- (void)setRxKBps:(unsigned long long)arg0;
- (void)setShowDelay:(unsigned long long)arg0;
- (float)videoLossRate;
- (unsigned long long)showDelay;
- (unsigned long long)rxKBps;
- (unsigned long long)blockStatisticDuration;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setJitter:(unsigned long long)arg0;
- (id)description;
- (unsigned long long)jitter;
- (unsigned long long)fps;
- (long long)networkQuality;
- (void)setFps:(unsigned long long)arg0;
- (long long)codecType;
- (void)setCodecType:(long long)arg0;
- (unsigned long long)blockCount;

@end