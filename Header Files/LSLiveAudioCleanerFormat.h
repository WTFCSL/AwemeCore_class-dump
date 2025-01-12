//
//     Generated by private class-dump
//

@interface LSLiveAudioCleanerFormat : NSObject <NSCopying> {
    BOOL _bAGC;
    BOOL _bANS;
    BOOL _bAEC;
    BOOL _bLimiter;
    BOOL _bHighNoiseMode;
    BOOL _bBeam;
    double _sampleRate;
    unsigned long long _transformType;
}

@property (nonatomic) double sampleRate;
@property (nonatomic) unsigned long long transformType;
@property (nonatomic) BOOL bAGC;
@property (nonatomic) BOOL bANS;
@property (nonatomic) BOOL bAEC;
@property (nonatomic) BOOL bLimiter;
@property (nonatomic) BOOL bHighNoiseMode;
@property (nonatomic) BOOL bBeam;

- (BOOL)bAGC;
- (void)setBAGC:(BOOL)arg0;
- (BOOL)bANS;
- (void)setBANS:(BOOL)arg0;
- (BOOL)bAEC;
- (void)setBAEC:(BOOL)arg0;
- (BOOL)bLimiter;
- (void)setBLimiter:(BOOL)arg0;
- (BOOL)bHighNoiseMode;
- (void)setBHighNoiseMode:(BOOL)arg0;
- (BOOL)bBeam;
- (void)setBBeam:(BOOL)arg0;
- (id)init;
- (double)sampleRate;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setSampleRate:(double)arg0;
- (unsigned long long)transformType;
- (void)setTransformType:(unsigned long long)arg0;

@end
