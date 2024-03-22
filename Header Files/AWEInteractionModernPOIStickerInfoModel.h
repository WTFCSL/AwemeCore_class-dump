//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWEInteractionModernPOIStickerInfoModel : MTLModel <MTLJSONSerializing> {
    unsigned long long _currentEffectIndex;
    NSArray *_effects;
    NSString *_currentPath;
    unsigned long long _loadingEffectIndex;
}

@property (nonatomic) unsigned long long currentEffectIndex;
@property (copy, nonatomic) NSArray *effects;
@property (copy, nonatomic) NSString *currentPath;
@property (nonatomic) unsigned long long loadingEffectIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)effectsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (unsigned long long)currentEffectIndex;
- (void)setCurrentEffectIndex:(unsigned long long)arg0;
- (void)setLoadingEffectIndex:(unsigned long long)arg0;
- (unsigned long long)loadingEffectIndex;
- (void).cxx_destruct;
- (id)effects;
- (id)currentPath;
- (void)setCurrentPath:(id)arg0;
- (void)setEffects:(id)arg0;

@end