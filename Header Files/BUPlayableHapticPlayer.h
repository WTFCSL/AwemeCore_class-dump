//
//     Generated by private class-dump
//

@class NSString, CHHapticEngine;
@protocol CHHapticAdvancedPatternPlayer;

@interface BUPlayableHapticPlayer : NSObject <BUPlayableHapticPlayer> {
    BOOL _engineHasError;
    BOOL _engineNeedReset;
    BOOL _engineStoped;
    BOOL _isPlaying;
    float _intensity;
    float _sharpness;
    CHHapticEngine *_hapticEngine;
    id<CHHapticAdvancedPatternPlayer> _advancedPatternPlayer;
    id /* block */ _initCompletion;
    unsigned long long _playMode;
    NSString *_jsonString;
    double _duration;
    double _playDuration;
    double _playStartTime;
    double _pauseTime;
}

@property (retain, nonatomic) CHHapticEngine *hapticEngine;
@property (retain, nonatomic) id<CHHapticAdvancedPatternPlayer> advancedPatternPlayer;
@property (copy, nonatomic) id /* block */ initCompletion;
@property (nonatomic) unsigned long long playMode;
@property (copy, nonatomic) NSString *jsonString;
@property (nonatomic) BOOL engineHasError;
@property (nonatomic) BOOL engineNeedReset;
@property (nonatomic) BOOL engineStoped;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) double duration;
@property (nonatomic) float intensity;
@property (nonatomic) float sharpness;
@property (nonatomic) double playDuration;
@property (nonatomic) double playStartTime;
@property (nonatomic) double pauseTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)playWithInnerType:(unsigned long long)arg0;
+ (BOOL)supportsHaptics;

- (void)setInitCompletion:(id /* block */)arg0;
- (void)configHapticPlayer;
- (id /* block */)initCompletion;
- (void)setEngineHasError:(BOOL)arg0;
- (BOOL)engineHasError;
- (void)setEngineStoped:(BOOL)arg0;
- (void)setEngineNeedReset:(BOOL)arg0;
- (void)playWithEventType:(id)arg0 duration:(float)arg1 intensity:(float)arg2 sharpness:(float)arg3;
- (void)playWithPattern:(id)arg0 atTime:(double)arg1;
- (BOOL)engineStoped;
- (id)advancedPatternPlayer;
- (double)playStartTime;
- (void)setPlayDuration:(double)arg0;
- (void)playContinuousWithDuration:(float)arg0 intensity:(float)arg1 sharpness:(float)arg2;
- (void)setAdvancedPatternPlayer:(id)arg0;
- (BOOL)engineNeedReset;
- (void)setPlayStartTime:(double)arg0;
- (id)initEngineWithCompletion:(id /* block */)arg0;
- (void)playTransientWithIntensity:(float)arg0 sharpness:(float)arg1;
- (void)playWithJson:(id)arg0;
- (float)sharpness;
- (void)resume;
- (void).cxx_destruct;
- (void)stop;
- (float)intensity;
- (double)duration;
- (void)invalidate;
- (BOOL)isPlaying;
- (void)dealloc;
- (void)pause;
- (void)setIsPlaying:(BOOL)arg0;
- (double)pauseTime;
- (void)setDuration:(double)arg0;
- (void)setSharpness:(float)arg0;
- (id)hapticEngine;
- (void)setHapticEngine:(id)arg0;
- (void)setIntensity:(float)arg0;
- (id)jsonString;
- (void)setJsonString:(id)arg0;
- (void)setPauseTime:(double)arg0;
- (double)playDuration;
- (void)setPlayMode:(unsigned long long)arg0;
- (unsigned long long)playMode;

@end
