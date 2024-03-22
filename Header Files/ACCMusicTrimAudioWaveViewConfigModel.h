//
//     Generated by private class-dump
//

@class NSString, NSURL;

@interface ACCMusicTrimAudioWaveViewConfigModel : NSObject {
    BOOL _enableUserDrag;
    NSString *_musicID;
    NSURL *_audioURL;
    double _totalAudioDuration;
    double _audioLengthEachPointStandFor;
    double _audioWaveViewWidth;
    double _audioWaveViewHeight;
}

@property (retain, nonatomic) NSString *musicID;
@property (retain, nonatomic) NSURL *audioURL;
@property (nonatomic) double totalAudioDuration;
@property (nonatomic) double audioLengthEachPointStandFor;
@property (nonatomic) BOOL enableUserDrag;
@property (nonatomic) double audioWaveViewWidth;
@property (nonatomic) double audioWaveViewHeight;

- (id)musicID;
- (void)setMusicID:(id)arg0;
- (double)totalAudioDuration;
- (void)setAudioLengthEachPointStandFor:(double)arg0;
- (double)audioLengthEachPointStandFor;
- (void)setTotalAudioDuration:(double)arg0;
- (void)setEnableUserDrag:(BOOL)arg0;
- (void)setAudioWaveViewWidth:(double)arg0;
- (void)setAudioWaveViewHeight:(double)arg0;
- (BOOL)enableUserDrag;
- (double)audioWaveViewWidth;
- (double)audioWaveViewHeight;
- (void).cxx_destruct;
- (id)audioURL;
- (void)setAudioURL:(id)arg0;

@end
