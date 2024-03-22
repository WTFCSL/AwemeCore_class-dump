//
//     Generated by private class-dump
//

@class AWENewURLModel;

@interface AWEKaraokeAudioModel : AWEBaseDataModel {
    int _playURLStart;
    int _playURLDuration;
    double _volumeLoudness;
    double _volumePeak;
    AWENewURLModel *_playURL;
}

@property (nonatomic) double volumeLoudness;
@property (nonatomic) double volumePeak;
@property (nonatomic) int playURLStart;
@property (retain, nonatomic) AWENewURLModel *playURL;
@property (nonatomic) int playURLDuration;

+ (id)JSONKeyPathsByPropertyKey;

- (double)volumeLoudness;
- (void)setVolumeLoudness:(double)arg0;
- (double)volumePeak;
- (void)setVolumePeak:(double)arg0;
- (int)playURLStart;
- (void)setPlayURLStart:(int)arg0;
- (int)playURLDuration;
- (void)setPlayURLDuration:(int)arg0;
- (void).cxx_destruct;
- (id)playURL;
- (void)setPlayURL:(id)arg0;

@end