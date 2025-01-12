//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSMutableArray;

@interface AWEImageTemplateModelDataRequestManager : NSObject {
    NSMutableDictionary *_insertTemplateModelCacheDic;
    NSMutableDictionary *_pannelResponseModellCacheDic;
    NSMutableDictionary *_categoryResponseModelCacheDic;
    NSMutableDictionary *_templateCategoriesCacheDic;
    NSMutableDictionary *_templateFintuningResultCacheDic;
    NSMutableArray *_allInsertModelCallback;
    NSMutableArray *_allPannelModelCallback;
    NSMutableArray *_allCategoryModelCallback;
}

@property (retain, nonatomic) NSMutableDictionary *insertTemplateModelCacheDic;
@property (retain, nonatomic) NSMutableDictionary *pannelResponseModellCacheDic;
@property (retain, nonatomic) NSMutableDictionary *categoryResponseModelCacheDic;
@property (retain, nonatomic) NSMutableDictionary *templateCategoriesCacheDic;
@property (retain, nonatomic) NSMutableDictionary *templateFintuningResultCacheDic;
@property (retain, nonatomic) NSMutableArray *allInsertModelCallback;
@property (retain, nonatomic) NSMutableArray *allPannelModelCallback;
@property (retain, nonatomic) NSMutableArray *allCategoryModelCallback;

+ (id)errorOfImageTemplateFetch;
+ (void)fetchCategoryInfoAndDefaultTemplateListResourcePreloadWithParams:(id)arg0 completion:(id /* block */)arg1;
+ (void)fetchTemplateListsOfOtherCategoriesResourceWithParams:(id)arg0 completion:(id /* block */)arg1;
+ (id)sharedInstance;

- (void)requestPannelResponseModelWithCommonParams:(id)arg0 currentImageSize:(struct CGSize { double x0; double x1; })arg1 templateScene:(long long)arg2 currentImageURI:(id)arg3 cropImageInfo:(id)arg4 trackParams:(id)arg5;
- (void)addPannelResponseModelCallback:(id /* block */)arg0;
- (void)cleanTemplateListDataCache;
- (void)cleanTemplateFinetuningResultCache;
- (void)requestCategoryResponseModelWithCommonParams:(id)arg0 templateScene:(long long)arg1 categoryArray:(id)arg2 trackParams:(id)arg3;
- (id)getPannelResponseModelWithImageURI:(id)arg0;
- (id)getCategoriesArrayWithTemplateScene:(long long)arg0;
- (id)getCategoryResponseModelWithTemplateScene:(long long)arg0;
- (void)addCategoryResponseModelCallback:(id /* block */)arg0;
- (id)getInsertTemplateModelWithTemplateID:(id)arg0;
- (void)requestInsertTemplateModelWithTemplateID:(id)arg0;
- (void)addFetchInsertModelCallback:(id /* block */)arg0;
- (void)insertTemplateModelCallBackWithModel:(id)arg0 success:(BOOL)arg1;
- (id)insertTemplateModelCacheDic;
- (id)panelKeyForTemplateScene:(long long)arg0;
- (void)pannelResponseModelCallBackWithModel:(id)arg0 success:(BOOL)arg1;
- (id)pannelResponseModellCacheDic;
- (void)categoryResponseModelCallBackWithModel:(id)arg0 success:(BOOL)arg1;
- (id)templateCategoriesCacheDic;
- (id)categoryResponseModelCacheDic;
- (id)allInsertModelCallback;
- (id)allPannelModelCallback;
- (id)allCategoryModelCallback;
- (void)setPannelResponseModellCacheDic:(id)arg0;
- (void)setCategoryResponseModelCacheDic:(id)arg0;
- (void)setTemplateFintuningResultCacheDic:(id)arg0;
- (id)templateFintuningResultCacheDic;
- (void)adjustTemplatePositionByBachAlgorithmWithParams:(id)arg0 completion:(id /* block */)arg1;
- (id)getTemplateFinetuningResultWithParams:(id)arg0;
- (void)setInsertTemplateModelCacheDic:(id)arg0;
- (void)setTemplateCategoriesCacheDic:(id)arg0;
- (void)setAllInsertModelCallback:(id)arg0;
- (void)setAllPannelModelCallback:(id)arg0;
- (void)setAllCategoryModelCallback:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
