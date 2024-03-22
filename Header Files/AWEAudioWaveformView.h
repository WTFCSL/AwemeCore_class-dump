//
//     Generated by private class-dump
//

@class NSArray, AVAsset, UIColor;

@interface AWEAudioWaveformView : UIView {
    double _hasRecordedLocation;
    double _playingLocation;
    double _toBePlayedLocation;
    NSArray *_filteredSamples;
    AVAsset *_asset;
    UIColor *_hasRecordedColor;
    UIColor *_playingColor;
    UIColor *_toBePlayedColor;
    UIColor *_notPlayedColor;
}

@property (retain, nonatomic) NSArray *filteredSamples;
@property (retain, nonatomic) AVAsset *asset;
@property (retain, nonatomic) UIColor *hasRecordedColor;
@property (retain, nonatomic) UIColor *playingColor;
@property (retain, nonatomic) UIColor *toBePlayedColor;
@property (retain, nonatomic) UIColor *notPlayedColor;
@property (nonatomic) double hasRecordedLocation;
@property (nonatomic) double playingLocation;
@property (nonatomic) double toBePlayedLocation;

- (double)toBePlayedLocation;
- (void)setToBePlayedLocation:(double)arg0;
- (void)setHasRecordedLocation:(double)arg0;
- (void)setPlayingLocation:(double)arg0;
- (double)hasRecordedLocation;
- (id)filteredSamples;
- (id)hasRecordedColor;
- (void)drawWithStartLocation:(double)arg0 endLocation:(double)arg1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg2 filterSamples:(id)arg3 context:(struct CGContext { } *)arg4 color:(id)arg5;
- (double)playingLocation;
- (id)playingColor;
- (id)toBePlayedColor;
- (id)notPlayedColor;
- (void)setFilteredSamples:(id)arg0;
- (void)setHasRecordedColor:(id)arg0;
- (void)setPlayingColor:(id)arg0;
- (void)setToBePlayedColor:(id)arg0;
- (void)setNotPlayedColor:(id)arg0;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)asset;
- (void)setAsset:(id)arg0;

@end
