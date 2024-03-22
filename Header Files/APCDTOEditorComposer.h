//
//     Generated by private class-dump
//

@class APCDTOEditorAIGCEffect, NSArray, APCDTOGlobalStickersConfig, APCDTOEditorEffect, APCDTOMusic, NSString;

@interface APCDTOEditorComposer : MTLModel <MTLJSONSerializing> {
    NSArray *_instances;
    APCDTOMusic *_music;
    APCDTOGlobalStickersConfig *_globalStickers;
    APCDTOEditorEffect *_effect;
    APCDTOEditorAIGCEffect *_aigcEffect;
}

@property (copy, nonatomic) NSArray *instances;
@property (retain, nonatomic) APCDTOMusic *music;
@property (retain, nonatomic) APCDTOGlobalStickersConfig *globalStickers;
@property (retain, nonatomic) APCDTOEditorEffect *effect;
@property (retain, nonatomic) APCDTOEditorAIGCEffect *aigcEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)musicJSONTransformer;
+ (id)effectJSONTransformer;
+ (id)instancesJSONTransformer;
+ (id)globalStickersJSONTransformer;
+ (id)aigcEffectJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setGlobalStickers:(id)arg0;
- (id)globalStickers;
- (id)aigcEffect;
- (void)setAigcEffect:(id)arg0;
- (void)syncToPublishViewModel:(id)arg0;
- (id)music;
- (id)effect;
- (void).cxx_destruct;
- (void)setEffect:(id)arg0;
- (void)setMusic:(id)arg0;
- (id)instances;
- (void)setInstances:(id)arg0;

@end
