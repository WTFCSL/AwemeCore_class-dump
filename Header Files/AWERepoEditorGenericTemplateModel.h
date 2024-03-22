//
//     Generated by private class-dump
//

@class NSString, CKGenericTemplateModel, NSDictionary, NSNumber;

@interface AWERepoEditorGenericTemplateModel : NSObject <ACCRepoRegister, ACCRepositoryTrackContextDeprecated, ACCRepoModelDraftProtocol, NSCopying, AWERepoEditorGenericTemplateData> {
    BOOL _isInProcessing;
    BOOL _isNeedMoveAiClip;
    NSString *_templateId;
    CKGenericTemplateModel *_templateModel;
    unsigned long long _templateType;
    NSNumber *_selectedTemplateIndex;
    NSString *_projectUUID;
    NSDictionary *_assetIdentifierDict;
    NSNumber *_enableGenericTemplate;
}

@property (copy, nonatomic) NSString *templateId;
@property (retain, nonatomic) CKGenericTemplateModel *templateModel;
@property (nonatomic) unsigned long long templateType;
@property (retain, nonatomic) NSNumber *selectedTemplateIndex;
@property (copy, nonatomic) NSString *projectUUID;
@property (nonatomic) BOOL isInProcessing;
@property (copy, nonatomic) NSDictionary *assetIdentifierDict;
@property (copy, nonatomic) NSNumber *enableGenericTemplate;
@property (nonatomic) BOOL isNeedMoveAiClip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)repo_dataProtocol;
+ (Class)draft_DTOModelClass;

- (id)musicID;
- (BOOL)isNeedMoveAiClip;
- (void)setIsNeedMoveAiClip:(BOOL)arg0;
- (id)selectedTemplateIndex;
- (void)setSelectedTemplateIndex:(id)arg0;
- (id)initWithDraft:(id)arg0;
- (void)saveWithDraft:(id)arg0;
- (void)removeTemplateModel;
- (id)projectUUID;
- (BOOL)isEffect;
- (void)setAssetIdentifierDict:(id)arg0;
- (void)updateTemplateModel:(id)arg0;
- (id)assetIdentifierDict;
- (id)draft_DTOModel;
- (void)draft_updateWithDTOModel:(id)arg0;
- (void)setProjectUUID:(id)arg0;
- (BOOL)isInProcessing;
- (void)setIsInProcessing:(BOOL)arg0;
- (id)enableGenericTemplate;
- (void)setEnableGenericTemplate:(id)arg0;
- (void)recoverTemplateModelOnly:(id)arg0;
- (BOOL)isTemplate;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setTemplateType:(unsigned long long)arg0;
- (unsigned long long)templateType;
- (id)templateId;
- (void)setTemplateId:(id)arg0;
- (id)templateModel;
- (void)setTemplateModel:(id)arg0;

@end
