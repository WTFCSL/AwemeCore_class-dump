//
//     Generated by private class-dump
//

@class NSString;

@interface BDPVideoClipInfo : NSObject {
    float _speed;
    double _startTime;
    double _endTime;
    NSString *_transition;
    NSString *_transitionResourcePath;
    NSString *_audioMixFilePath;
    double _audioMixStartTime;
    double _audioMixEndTime;
}

@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) float speed;
@property (copy, nonatomic) NSString *transition;
@property (copy, nonatomic) NSString *transitionResourcePath;
@property (copy, nonatomic) NSString *audioMixFilePath;
@property (nonatomic) double audioMixStartTime;
@property (nonatomic) double audioMixEndTime;

- (id)transitionResourcePath;
- (void)setTransitionResourcePath:(id)arg0;
- (id)audioMixFilePath;
- (double)audioMixStartTime;
- (double)audioMixEndTime;
- (void)setAudioMixFilePath:(id)arg0;
- (void)setAudioMixStartTime:(double)arg0;
- (void)setAudioMixEndTime:(double)arg0;
- (void)setTransition:(id)arg0;
- (void)setStartTime:(double)arg0;
- (id)transition;
- (void).cxx_destruct;
- (void)setSpeed:(float)arg0;
- (double)endTime;
- (double)startTime;
- (void)setEndTime:(double)arg0;
- (float)speed;

@end
