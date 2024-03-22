//
//     Generated by private class-dump
//

@class UIColor, NSMutableArray;

@interface AWEMusicSongWaveView : UIView {
    BOOL _isPlaying;
    int _lineCount;
    UIColor *_waveColor;
    NSMutableArray *_animationlayers;
    double _gapWidth;
    double _lineWidth;
}

@property (retain, nonatomic) NSMutableArray *animationlayers;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) double gapWidth;
@property (nonatomic) double lineWidth;
@property (nonatomic) int lineCount;
@property (retain, nonatomic) UIColor *waveColor;

- (void)awe_themeReload;
- (id)animationlayers;
- (id)waveColor;
- (void)p_refreshWaveColorIfNeeded;
- (void)setAnimationlayers:(id)arg0;
- (double)p_getHeightFromValueWithIndex:(long long)arg0;
- (double)p_getHeightToValueWithIndex:(long long)arg0;
- (id)initWithLineWidth:(double)arg0 LineCount:(int)arg1;
- (void)setWaveColor:(id)arg0;
- (void).cxx_destruct;
- (double)lineWidth;
- (void)setLineWidth:(double)arg0;
- (int)lineCount;
- (BOOL)isPlaying;
- (void)layoutSubviews;
- (void)play;
- (void)pause;
- (void)reset;
- (void)setIsPlaying:(BOOL)arg0;
- (double)gapWidth;
- (void)setGapWidth:(double)arg0;
- (void)setupView;
- (void)setLineCount:(int)arg0;

@end