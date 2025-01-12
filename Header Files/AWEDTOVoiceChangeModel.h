//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEDTOVoiceChangeModel : MTLModel <MTLJSONSerializing> {
    NSString *_voiceChangerId;
    NSString *_challengeId;
    NSString *_challengeName;
    NSArray *_voiceEffects;
    long long _isVoiceConversion;
    NSString *_voiceConversionSpeakerId;
    NSArray *_voiceConversionAudioPaths;
    NSArray *_voiceConversionPlayRanges;
}

@property (copy, nonatomic) NSString *voiceChangerId;
@property (copy, nonatomic) NSString *challengeId;
@property (copy, nonatomic) NSString *challengeName;
@property (copy, nonatomic) NSArray *voiceEffects;
@property (nonatomic) long long isVoiceConversion;
@property (copy, nonatomic) NSString *voiceConversionSpeakerId;
@property (copy, nonatomic) NSArray *voiceConversionAudioPaths;
@property (copy, nonatomic) NSArray *voiceConversionPlayRanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)voiceEffectsJSONTransformer;
+ (id)voiceConversionPlayRangesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)challengeName;
- (void)setChallengeName:(id)arg0;
- (id)challengeId;
- (void)setChallengeId:(id)arg0;
- (id)voiceChangerId;
- (void)setVoiceChangerId:(id)arg0;
- (id)voiceEffects;
- (void)setVoiceEffects:(id)arg0;
- (long long)isVoiceConversion;
- (void)setIsVoiceConversion:(long long)arg0;
- (id)voiceConversionSpeakerId;
- (void)setVoiceConversionSpeakerId:(id)arg0;
- (id)voiceConversionAudioPaths;
- (void)setVoiceConversionAudioPaths:(id)arg0;
- (id)voiceConversionPlayRanges;
- (void)setVoiceConversionPlayRanges:(id)arg0;
- (void).cxx_destruct;

@end
