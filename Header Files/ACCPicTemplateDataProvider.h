//
//     Generated by private class-dump
//

@class NSArray, NSString, NSDictionary;

@interface ACCPicTemplateDataProvider : NSObject {
    NSArray *_cacheCategories;
    NSString *_defalutHotKey;
    NSDictionary *_imageParsedResultCacheDic;
}

@property (copy, nonatomic) NSArray *cacheCategories;
@property (copy, nonatomic) NSString *defalutHotKey;
@property (copy, nonatomic) NSDictionary *imageParsedResultCacheDic;

+ (void)fetchPanelCategoriesWithRepository:(id)arg0 completion:(id /* block */)arg1;
+ (void)fetchCategoryEffectsWithCategory:(id)arg0 completion:(id /* block */)arg1;
+ (id)categoriesList;
+ (id)recommendTagMap;
+ (void)fetchPanelCategoriesWithCompletion:(id /* block */)arg0;
+ (id)fetchPanelCategoryList;
+ (id)appendDefaultTemplates:(id)arg0 to:(id)arg1;
+ (void)parseCategoryKeyFromRepository:(id)arg0 completion:(id /* block */)arg1;
+ (id)buildTemplatesWithEffects:(id)arg0 categoryId:(id)arg1 categoryName:(id)arg2;
+ (id)buildCategoriesWithResponse:(id)arg0;
+ (id)buildCategoriesWithOldResponse:(id)arg0;
+ (id)shareInstance;
+ (id)panelName;

- (id)imageParsedResultCacheDic;
- (void)setImageParsedResultCacheDic:(id)arg0;
- (id)cacheCategories;
- (id)defalutHotKey;
- (void)setCacheCategories:(id)arg0;
- (void)setDefalutHotKey:(id)arg0;
- (void).cxx_destruct;

@end