//
//     Generated by private class-dump
//

@interface XIGQualityDroppedFrameInfo : NSObject {
    BOOL _isScrolling;
    float _fps;
    float _scrollFPS;
    float _staticFPS;
    float _newFps;
    float _newScrollFPS;
    float _newStaticFPS;
    float _scrollHitch;
    float _staticHitch;
    float _scrollHitchDurationForDrop3;
    float _staticHitchDurationForDrop3;
    double _droppedFrameRate;
    double _lightDroppedFrameRate;
    double _seriousDroppedFrameRare;
    double _averageDroppedFrames;
    double _averageDroppedFramesMoreThan3;
    double _drop3Rate;
    double _drop7Rate;
    double _drop25Rate;
    unsigned long long _dropXCount;
    unsigned long long _jank;
    unsigned long long _bigJank;
    unsigned long long _drop1To2Count;
    unsigned long long _drop3To6Count;
    unsigned long long _drop7To13Count;
    unsigned long long _dropOver14Count;
}

@property (nonatomic) double droppedFrameRate;
@property (nonatomic) double lightDroppedFrameRate;
@property (nonatomic) double seriousDroppedFrameRare;
@property (nonatomic) float fps;
@property (nonatomic) float scrollFPS;
@property (nonatomic) float staticFPS;
@property (nonatomic) double averageDroppedFrames;
@property (nonatomic) double averageDroppedFramesMoreThan3;
@property (nonatomic) double drop3Rate;
@property (nonatomic) double drop7Rate;
@property (nonatomic) double drop25Rate;
@property (nonatomic) unsigned long long dropXCount;
@property (nonatomic) unsigned long long jank;
@property (nonatomic) unsigned long long bigJank;
@property (nonatomic) unsigned long long drop1To2Count;
@property (nonatomic) unsigned long long drop3To6Count;
@property (nonatomic) unsigned long long drop7To13Count;
@property (nonatomic) unsigned long long dropOver14Count;
@property (nonatomic) BOOL isScrolling;
@property (nonatomic) float newFps;
@property (nonatomic) float newScrollFPS;
@property (nonatomic) float newStaticFPS;
@property (nonatomic) float scrollHitch;
@property (nonatomic) float staticHitch;
@property (nonatomic) float scrollHitchDurationForDrop3;
@property (nonatomic) float staticHitchDurationForDrop3;

- (unsigned long long)jank;
- (void)setJank:(unsigned long long)arg0;
- (void)setDrop1To2Count:(unsigned long long)arg0;
- (void)setDrop3To6Count:(unsigned long long)arg0;
- (void)setDrop7To13Count:(unsigned long long)arg0;
- (void)setDropOver14Count:(unsigned long long)arg0;
- (void)setBigJank:(unsigned long long)arg0;
- (void)setScrollHitchDurationForDrop3:(float)arg0;
- (void)setStaticHitchDurationForDrop3:(float)arg0;
- (void)setDroppedFrameRate:(double)arg0;
- (void)setLightDroppedFrameRate:(double)arg0;
- (void)setSeriousDroppedFrameRare:(double)arg0;
- (void)setScrollFPS:(float)arg0;
- (void)setStaticFPS:(float)arg0;
- (void)setAverageDroppedFrames:(double)arg0;
- (void)setAverageDroppedFramesMoreThan3:(double)arg0;
- (void)setDrop3Rate:(double)arg0;
- (void)setDrop7Rate:(double)arg0;
- (void)setDrop25Rate:(double)arg0;
- (void)setDropXCount:(unsigned long long)arg0;
- (void)setNewFps:(float)arg0;
- (void)setNewScrollFPS:(float)arg0;
- (void)setNewStaticFPS:(float)arg0;
- (void)setScrollHitch:(float)arg0;
- (void)setStaticHitch:(float)arg0;
- (float)staticFPS;
- (float)scrollFPS;
- (double)droppedFrameRate;
- (double)lightDroppedFrameRate;
- (double)seriousDroppedFrameRare;
- (double)averageDroppedFrames;
- (double)averageDroppedFramesMoreThan3;
- (double)drop3Rate;
- (double)drop7Rate;
- (double)drop25Rate;
- (unsigned long long)dropXCount;
- (unsigned long long)bigJank;
- (unsigned long long)drop1To2Count;
- (unsigned long long)drop3To6Count;
- (unsigned long long)drop7To13Count;
- (unsigned long long)dropOver14Count;
- (float)newFps;
- (float)newStaticFPS;
- (float)newScrollFPS;
- (float)scrollHitch;
- (float)staticHitch;
- (float)scrollHitchDurationForDrop3;
- (float)staticHitchDurationForDrop3;
- (void)setIsScrolling:(BOOL)arg0;
- (BOOL)isScrolling;
- (id)description;
- (float)fps;
- (void)setFps:(float)arg0;

@end
