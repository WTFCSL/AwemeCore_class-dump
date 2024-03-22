//
//     Generated by private class-dump
//

@class NSArray, NSString, ACCImageTemplateLimitationsModel, ACCTemplateAuthorModel;

@interface ACCImageTemplateExtModel : MTLModel <MTLJSONSerializing> {
    ACCTemplateAuthorModel *_author;
    long long _fragmentCount;
    ACCImageTemplateLimitationsModel *_limitations;
    NSArray *_qualityTags;
}

@property (retain, nonatomic) ACCTemplateAuthorModel *author;
@property (nonatomic) long long fragmentCount;
@property (retain, nonatomic) ACCImageTemplateLimitationsModel *limitations;
@property (copy, nonatomic) NSArray *qualityTags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)authorJSONTransformer;
+ (id)limitationsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setFragmentCount:(long long)arg0;
- (id)limitations;
- (void)setLimitations:(id)arg0;
- (id)qualityTags;
- (void)setQualityTags:(id)arg0;
- (long long)fragmentCount;
- (void).cxx_destruct;
- (id)author;
- (void)setAuthor:(id)arg0;

@end
