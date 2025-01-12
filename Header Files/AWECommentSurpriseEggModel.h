//
//     Generated by private class-dump
//

@class NSArray, NSString, AWECommentSurpriseEggSpecialEmojiModel, NSNumber;

@interface AWECommentSurpriseEggModel : AWEBaseApiModel {
    NSArray *_imageUrlList;
    NSString *_keyword;
    NSString *_emojiKey;
    long long _particleNum;
    NSArray *_particleSize;
    NSArray *_particleCenterX;
    NSNumber *_particleProDelay;
    NSArray *_particleFallX;
    NSArray *_particleFallY;
    NSArray *_particleFallCurveX;
    NSArray *_particleFallCurveY;
    NSArray *_particleFallSpeed;
    NSArray *_particleAlpha;
    NSNumber *_particleAlphaStartTime;
    NSNumber *_particleAlphaTotalTime;
    NSNumber *_randomRotationAngle;
    NSString *_showCount;
    NSString *_showText;
    NSString *_lightBGColor;
    NSString *_darkBGColor;
    unsigned long long _surpriseEggType;
    AWECommentSurpriseEggSpecialEmojiModel *_specialEmojiSurprise;
}

@property (copy, nonatomic) NSArray *imageUrlList;
@property (copy, nonatomic) NSString *keyword;
@property (copy, nonatomic) NSString *emojiKey;
@property (nonatomic) long long particleNum;
@property (copy, nonatomic) NSArray *particleSize;
@property (copy, nonatomic) NSArray *particleCenterX;
@property (retain, nonatomic) NSNumber *particleProDelay;
@property (copy, nonatomic) NSArray *particleFallX;
@property (copy, nonatomic) NSArray *particleFallY;
@property (copy, nonatomic) NSArray *particleFallCurveX;
@property (copy, nonatomic) NSArray *particleFallCurveY;
@property (copy, nonatomic) NSArray *particleFallSpeed;
@property (copy, nonatomic) NSArray *particleAlpha;
@property (retain, nonatomic) NSNumber *particleAlphaStartTime;
@property (retain, nonatomic) NSNumber *particleAlphaTotalTime;
@property (retain, nonatomic) NSNumber *randomRotationAngle;
@property (copy, nonatomic) NSString *showCount;
@property (copy, nonatomic) NSString *showText;
@property (copy, nonatomic) NSString *lightBGColor;
@property (copy, nonatomic) NSString *darkBGColor;
@property (nonatomic) unsigned long long surpriseEggType;
@property (retain, nonatomic) AWECommentSurpriseEggSpecialEmojiModel *specialEmojiSurprise;

+ (id)JSONKeyPathsByPropertyKey;

- (id)imageUrlList;
- (long long)particleNum;
- (void)setParticleNum:(long long)arg0;
- (id)particleProDelay;
- (void)setParticleProDelay:(id)arg0;
- (id)particleFallX;
- (void)setParticleFallX:(id)arg0;
- (id)particleFallY;
- (void)setParticleFallY:(id)arg0;
- (id)particleFallCurveX;
- (id)particleFallSpeed;
- (void)setParticleFallSpeed:(id)arg0;
- (id)particleAlphaStartTime;
- (unsigned long long)surpriseEggType;
- (id)specialEmojiSurprise;
- (void)setSpecialEmojiSurprise:(id)arg0;
- (void)setShowText:(id)arg0;
- (void)setImageUrlList:(id)arg0;
- (id)emojiKey;
- (void)setEmojiKey:(id)arg0;
- (id)particleCenterX;
- (void)setParticleCenterX:(id)arg0;
- (void)setParticleFallCurveX:(id)arg0;
- (id)particleFallCurveY;
- (void)setParticleFallCurveY:(id)arg0;
- (void)setParticleAlphaStartTime:(id)arg0;
- (id)particleAlphaTotalTime;
- (void)setParticleAlphaTotalTime:(id)arg0;
- (id)randomRotationAngle;
- (void)setRandomRotationAngle:(id)arg0;
- (id)lightBGColor;
- (void)setLightBGColor:(id)arg0;
- (id)darkBGColor;
- (void)setDarkBGColor:(id)arg0;
- (void)setSurpriseEggType:(unsigned long long)arg0;
- (void).cxx_destruct;
- (void)setKeyword:(id)arg0;
- (id)keyword;
- (id)showCount;
- (void)setShowCount:(id)arg0;
- (void)setParticleSize:(id)arg0;
- (id)particleSize;
- (id)showText;
- (void)setParticleAlpha:(id)arg0;
- (id)particleAlpha;

@end
