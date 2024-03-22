//
//     Generated by private class-dump
//

@interface IESMMAudioFade : NSObject {
    void *_fadingHandle;
    double _totalDuration;
    double _fadeInDuration;
    double _fadeOutDuration;
    long long _fadeInCurve;
    long long _fadeOutCurve;
}

@property (nonatomic) double fadeInDuration;
@property (nonatomic) double fadeOutDuration;
@property (nonatomic) long long fadeInCurve;
@property (nonatomic) long long fadeOutCurve;
@property (nonatomic) double totalDuration;

- (long long)fadeInCurve;
- (void)setFadeInCurve:(long long)arg0;
- (long long)fadeOutCurve;
- (void)setFadeOutCurve:(long long)arg0;
- (id)initWithConfig:(id)arg0 samplerate:(int)arg1 channels:(int)arg2;
- (void)processInput:(float **)arg0 output:(float **)arg1 samplesPerChannel:(int)arg2 timestamp:(double)arg3;
- (void)processInputMono:(float *)arg0 output:(float *)arg1 samplesPerChannel:(int)arg2 timestamp:(double)arg3;
- (double)totalDuration;
- (id)init;
- (double)fadeOutDuration;
- (void)setFadeOutDuration:(double)arg0;
- (void)updateWithConfig:(id)arg0;
- (void)setFadeInDuration:(double)arg0;
- (double)fadeInDuration;
- (void)dealloc;
- (void)setTotalDuration:(double)arg0;

@end
