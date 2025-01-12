//
//     Generated by private class-dump
//

@class NSString, IESEffectModel, IESEffectSampleVideoModel;

@interface IESCategorySampleEffectModel : MTLModel <MTLJSONSerializing> {
    NSString *_version;
    NSString *_categoryKey;
    IESEffectModel *_effect;
    IESEffectSampleVideoModel *_video;
}

@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *categoryKey;
@property (copy, nonatomic) IESEffectModel *effect;
@property (copy, nonatomic) IESEffectSampleVideoModel *video;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)arg0;

- (void)setCategoryKey:(id)arg0;
- (id)effect;
- (void)setVersion:(id)arg0;
- (void).cxx_destruct;
- (void)setEffect:(id)arg0;
- (void)setVideo:(id)arg0;
- (id)version;
- (id)video;
- (id)categoryKey;

@end
