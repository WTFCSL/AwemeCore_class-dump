//
//     Generated by private class-dump
//

@interface AWECommentAudioContentViewModel : NSObject

+ (id)averageWaveArrWithWave:(id)arg0;
+ (id)audioWaveHeightArrWithAverageWaveArr:(id)arg0 duration:(long long)arg1;
+ (struct CGSize { double x0; double x1; })audioWavePathSizeWithAverageWaveArr:(id)arg0 duration:(long long)arg1;
+ (id)audioWavePathWithWaveHeightArr:(id)arg0;
+ (long long)p_audioPowerCountWithPowerArr:(id)arg0 duration:(double)arg1;
+ (id)__forgeAudioPowersFromRealPowers:(id)arg0;
+ (id)__calculateMaximalValueFromArray:(id)arg0 threshold:(unsigned long long)arg1;

@end
