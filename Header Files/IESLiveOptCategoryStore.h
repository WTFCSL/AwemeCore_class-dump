//
//     Generated by private class-dump
//

@class HTSEventContext, IESLiveGuideModel, ListCategoryResponse_CategoryNode, IESLiveOptCategoryAPI, NSArray;

@interface IESLiveOptCategoryStore : NSObject {
    BOOL _isGame;
    HTSEventContext *_trackContext;
    IESLiveGuideModel *_guideModel;
    ListCategoryResponse_CategoryNode *_selectedSection;
    ListCategoryResponse_CategoryNode *_selectedCategory;
    NSArray *_optCategryModelList;
    NSArray *_recentModelList;
    IESLiveOptCategoryAPI *_listApi;
    id /* block */ _selectedCategoryDidChanged;
    unsigned long long _liveType;
}

@property (retain, nonatomic) IESLiveOptCategoryAPI *listApi;
@property (nonatomic) unsigned long long liveType;
@property (nonatomic) BOOL isGame;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveGuideModel *guideModel;
@property (retain, nonatomic) ListCategoryResponse_CategoryNode *selectedSection;
@property (retain, nonatomic) ListCategoryResponse_CategoryNode *selectedCategory;
@property (copy, nonatomic) NSArray *optCategryModelList;
@property (copy, nonatomic) NSArray *recentModelList;
@property (copy, nonatomic) id /* block */ selectedCategoryDidChanged;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)guideModel;
- (void)setGuideModel:(id)arg0;
- (id)selectedCategory;
- (void)setSelectedCategory:(id)arg0;
- (BOOL)isGame;
- (void)setIsGame:(BOOL)arg0;
- (void)setLiveType:(unsigned long long)arg0;
- (unsigned long long)liveType;
- (id)initWithCategoryModel:(id)arg0;
- (void)fetchOptCategoriesWithCurrentCategory:(id)arg0 liveType:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (BOOL)shouldUseCategoryOptimizeAB;
- (id)getSelectedCategory;
- (id)lastSelectedCategoryCache:(unsigned long long)arg0;
- (id)categoryModelWithId:(long long)arg0;
- (id)optCategryModelList;
- (id)recentModelList;
- (id)queryModelBy:(id)arg0;
- (void)setSelectedCategoryDidChanged:(id /* block */)arg0;
- (void)checkCurrentCategoryWithLiveType:(unsigned long long)arg0 completion:(id /* block */)arg1;
- (void)fetchOptCategoriesWithCompletion:(id /* block */)arg0;
- (id)listApi;
- (void)refreshOptCategoryListWithResponseListArray:(id)arg0;
- (id)getDefaultSelectedCategory;
- (id)matchSectionWithSectionId:(long long)arg0 sectionList:(id)arg1;
- (id)compareSecondCategoryList:(id)arg0 oldCategoryList:(id)arg1;
- (BOOL)checkSectionHasNewSubCategory:(id)arg0;
- (id)allNewWithSubCategoryList:(id)arg0;
- (id)lastCacheCategoryList;
- (void)cacheCategoryList:(id)arg0;
- (id)compareNewStatusWithCategoryList:(id)arg0 oldCategoryList:(id)arg1;
- (void)setOptCategryModelList:(id)arg0;
- (void)selectCategoryWithTargetCategory:(id)arg0;
- (void)resetSelectedSection;
- (id)lastSelectedCategoryLastCacheKeyPB:(unsigned long long)arg0;
- (id)lastCategoryListCacheKey;
- (id)lastRecentCacheKey;
- (id)getGameCategoryNodeWithDict:(id)arg0;
- (void)markCategoryID:(long long)arg0 selected:(BOOL)arg1;
- (id)lastSelectedCategoryLastCacheKeyPB;
- (id /* block */)selectedCategoryDidChanged;
- (void)cacheLiveCategory:(id)arg0;
- (id)getRecentUsage;
- (void)saveRecentUsage:(id)arg0;
- (BOOL)isCategoryLegal;
- (void)setRecentModelList:(id)arg0;
- (void)setListApi:(id)arg0;
- (void).cxx_destruct;
- (id)selectedSection;
- (void)fetchCache;
- (void)setSelectedSection:(id)arg0;

@end
