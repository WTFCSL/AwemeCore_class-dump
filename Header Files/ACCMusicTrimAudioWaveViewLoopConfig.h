//
//     Generated by private class-dump
//

@interface ACCMusicTrimAudioWaveViewLoopConfig : NSObject {
    BOOL _enableLoop;
    double _loopStartTime;
    double _loopEndTime;
    double _loopTimes;
}

@property (nonatomic) BOOL enableLoop;
@property (nonatomic) double loopStartTime;
@property (nonatomic) double loopEndTime;
@property (nonatomic) double loopTimes;

- (double)loopTimes;
- (double)loopEndTime;
- (void)setLoopEndTime:(double)arg0;
- (void)setLoopTimes:(double)arg0;
- (double)loopStartTime;
- (void)setLoopStartTime:(double)arg0;
- (void)setEnableLoop:(BOOL)arg0;
- (BOOL)enableLoop;

@end
