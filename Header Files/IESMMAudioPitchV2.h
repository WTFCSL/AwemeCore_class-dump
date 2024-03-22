//
//     Generated by private class-dump
//

@class IESMMAudioPitchConfigV2, IESMMAudioProcessorEx;

@interface IESMMAudioPitchV2 : VEAudioEffectBase {
    IESMMAudioPitchConfigV2 *_config;
    IESMMAudioProcessorEx *_audioProcess;
}

@property (retain, nonatomic) IESMMAudioPitchConfigV2 *config;
@property (retain, nonatomic) IESMMAudioProcessorEx *audioProcess;

- (int)process:(float **)arg0 inChannel:(int)arg1 inSamplesPerChannel:(int)arg2 atTime:(double)arg3;
- (void)initAudioProcess;
- (void)changeEffectPath:(id)arg0 preprocessInfo:(id)arg1;
- (void)setAudioProcess:(id)arg0;
- (id)audioProcess;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)initWithConfig:(id)arg0;
- (void)dealloc;
- (void)reset;
- (void)seekToTime:(double)arg0;

@end