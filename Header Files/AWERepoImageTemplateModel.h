//
//     Generated by private class-dump
//

@class NSString, NSArray, AWETemplateListTemplateInfoResponseModel;

@interface AWERepoImageTemplateModel : NSObject <AWERepositoryDraftProtocol, ACCRepositoryDraftContextDeprecated, ACCRepositoryTrackContextDeprecated, ACCRepositoryRequestParamsDeprecated> {
    BOOL _didEdit;
    BOOL _isFromTemplateAnchor;
    BOOL _templateHasApplyed;
    NSArray *_templateList;
    AWETemplateListTemplateInfoResponseModel *_editorTemplateModel;
    unsigned long long _templateRequestDetailStatus;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *templateList;
@property (nonatomic) BOOL didEdit;
@property (copy, nonatomic) AWETemplateListTemplateInfoResponseModel *editorTemplateModel;
@property (nonatomic) BOOL isFromTemplateAnchor;
@property (readonly, nonatomic) BOOL hasEditorTemplate;
@property (nonatomic) unsigned long long templateRequestDetailStatus;
@property (nonatomic) BOOL templateHasApplyed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDraft:(id)arg0;
- (id)templateList;
- (void)setTemplateList:(id)arg0;
- (id)acc_publishRequestParams:(id)arg0;
- (void)saveWithDraft:(id)arg0;
- (void)draftWillBeSavedWithID:(id)arg0;
- (id)acc_referExtraParams;
- (id)editorTemplateModel;
- (void)setEditorTemplateModel:(id)arg0;
- (BOOL)isFromTemplateAnchor;
- (void)setIsFromTemplateAnchor:(BOOL)arg0;
- (BOOL)hasEditorTemplate;
- (void)setTemplateRequestDetailStatus:(unsigned long long)arg0;
- (unsigned long long)templateRequestDetailStatus;
- (void)setDidEdit:(BOOL)arg0;
- (BOOL)templateHasApplyed;
- (void)setTemplateHasApplyed:(BOOL)arg0;
- (BOOL)didEdit;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;

@end
