//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDTONoteEditModel : MTLModel <MTLJSONSerializing> {
    BOOL _skipEditToPublish;
    BOOL _isParsedTemplateCategory;
    NSString *_templateId;
    NSString *_templateCategoryId;
    NSString *_templateType;
    NSString *_templateName;
}

@property (nonatomic) BOOL skipEditToPublish;
@property (copy, nonatomic) NSString *templateId;
@property (copy, nonatomic) NSString *templateCategoryId;
@property (copy, nonatomic) NSString *templateType;
@property (copy, nonatomic) NSString *templateName;
@property (nonatomic) BOOL isParsedTemplateCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)skipEditToPublish;
- (void)setSkipEditToPublish:(BOOL)arg0;
- (id)templateCategoryId;
- (void)setTemplateCategoryId:(id)arg0;
- (BOOL)isParsedTemplateCategory;
- (void)setIsParsedTemplateCategory:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setTemplateType:(id)arg0;
- (id)templateType;
- (id)templateId;
- (void)setTemplateId:(id)arg0;
- (id)templateName;
- (void)setTemplateName:(id)arg0;

@end