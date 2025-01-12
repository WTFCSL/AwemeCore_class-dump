//
//     Generated by private class-dump
//

@class BDARFirstFrameTime;

@protocol BDARVPlayerState <NSObject>

@property (nonatomic) unsigned long long playStatus;
@property (weak, nonatomic) BDARFirstFrameTime *firstFrameTime;
@property (nonatomic) double inspirePlayTime;

- (unsigned long long)playStatus;
- (double)inspirePlayTime;
- (void)setInspirePlayTime:(double)arg0;
- (id)firstFrameTime;
- (unsigned long long)playDurationStatus;
- (double)playPercent;
- (BOOL)isPlaybackEnded;
- (void)setPlayStatus:(unsigned long long)arg0;
- (double)totalWatchTime;
- (id)playerStatusInfo;
- (void)setFirstFrameTime:(id)arg0;
- (double)currentPlaybackTime;
- (double)duration;
- (unsigned long long)currentResolution;

@end
