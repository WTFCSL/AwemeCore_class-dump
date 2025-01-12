//
//     Generated by private class-dump
//

@class NSArray, ACCPicTemplateModel, NSMutableDictionary, ACCPicTemplateCategoryModel;

@protocol ACCPicTemplatePanelDataProtocol <NSObject>

@property (readonly, copy, nonatomic) NSArray *categoryModels;
@property (retain, nonatomic) ACCPicTemplateCategoryModel *curCategoryModel;
@property (retain, nonatomic) ACCPicTemplateModel *curTemplateModel;
@property (retain, nonatomic) ACCPicTemplateModel *initialTemplateMode;
@property (retain, nonatomic) NSMutableDictionary *shouldApplyTemplateProjectMap;

- (void)fetchCategoryEffectsWithCategory:(id)arg0 completion:(id /* block */)arg1;
- (void)fetchPanelCategoriesWithCompletion:(id /* block */)arg0;
- (void)preFetchNeighbourCategoriesWithIndex:(long long)arg0;
- (void)preDownloadNeihbourTemplateWithIndex:(long long)arg0;
- (void)cacheCurProjectTemplate:(id)arg0;
- (id)projectTemplateIndexPath;
- (long long)indexOfCurTemplateModel;
- (id)getOriginTemplateMap;
- (BOOL)hasChangedTemplate;
- (long long)totalTemplateCount;
- (id)curCategoryModel;
- (void)setCurCategoryModel:(id)arg0;
- (id)curTemplateModel;
- (void)setCurTemplateModel:(id)arg0;
- (id)initialTemplateMode;
- (void)setInitialTemplateMode:(id)arg0;
- (id)shouldApplyTemplateProjectMap;
- (void)setShouldApplyTemplateProjectMap:(id)arg0;
- (id)initialIndexPath;
- (id)categoryModels;

@end
