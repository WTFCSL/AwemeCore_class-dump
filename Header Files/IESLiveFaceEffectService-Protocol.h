//
//     Generated by private class-dump
//

@class IESPlatformPanelModel, IESEffectModel, NSMutableArray, IESLiveFaceEffectSearchModel;

@protocol IESLiveFaceEffectService <NSObject>

@property (retain, nonatomic) NSMutableArray *categoryList;
@property (retain, nonatomic) NSMutableArray *buttonModelList;
@property (retain, nonatomic) IESEffectModel *currentEffect;
@property (retain, nonatomic) IESPlatformPanelModel *panelInfo;
@property (retain, nonatomic) IESLiveFaceEffectSearchModel *searchModel;
@property (retain, nonatomic) IESEffectModel *previewEffect;

- (void)downloadEffectModel:(id)arg0 progress:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)notifyFansGroupGuideWithCompletion:(id /* block */)arg0;
- (id)panelInfo;
- (void)setPanelInfo:(id)arg0;
- (BOOL)isEffectAlreadyShown:(id)arg0;
- (void)fetchFaceEffectListFor:(id)arg0 categoryListOnly:(BOOL)arg1 cacheFirst:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)fetchFaceEffectsForPanel:(id)arg0 category:(id)arg1 index:(long long)arg2 completion:(id /* block */)arg3;
- (void)downloadEffectModelWithId:(id)arg0 completion:(id /* block */)arg1;
- (void)downloadEffectResource:(id)arg0 completion:(id /* block */)arg1;
- (void)fetchLinkageEffectIDs:(id /* block */)arg0;
- (void)updateLinkageEffectInUsed:(id)arg0 completion:(id /* block */)arg1;
- (void)insertLinkageEffectsToHotTab:(id)arg0;
- (void)removeLinkageEffects;
- (void)refreshButtonModelList;
- (void)applyFaceEffect:(id)arg0 scene:(long long)arg1;
- (void)removeFaceEffect:(id)arg0 scene:(long long)arg1;
- (void)reloadFaceEffect:(id)arg0 scene:(long long)arg1;
- (void)registerForConflictHandler:(id)arg0 scene:(long long)arg1;
- (void)updateEffect:(id)arg0 panel:(id)arg1 favorStatus:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)addEffectToFavorCategory:(id)arg0;
- (void)removeEffectToFavorCategory:(id)arg0;
- (BOOL)isEffectFavor:(id)arg0;
- (void)fetchSearchResultForPanel:(id)arg0 keyword:(id)arg1 searchId:(id)arg2 cursor:(long long)arg3 completion:(id /* block */)arg4;
- (void)fetchRecommandWordsForPanel:(id)arg0 completetion:(id /* block */)arg1;
- (void)moveToFirstPositionWithTargetEffect:(id)arg0;
- (void)switchFaceEffectRenderModel:(id)arg0 config:(int)arg1 scene:(long long)arg2;
- (void)addFaceDetectHandler:(id /* block */)arg0;
- (void)removeFaceDetectHandler;
- (void)updateSpeechRecognition:(id)arg0;
- (void)getEffectUserProfileWithId:(id)arg0 secUserId:(id)arg1 completion:(id /* block */)arg2;
- (void)getRevenueActivityEffects:(id)arg0 completion:(id /* block */)arg1;
- (void)updateRevenueActivityEffects:(id)arg0 completion:(id /* block */)arg1;
- (id)transitionRevenueActivityEffect;
- (void)markEffectAsAlreadyShown:(id)arg0;
- (id)revenueActivityCategoryKey;
- (void)handleEffectInterationMessage:(id)arg0;
- (void)restoreInterationEffectStatus:(id)arg0;
- (void)insertInterationEffectTeaLog:(id)arg0 insertDict:(id)arg1;
- (void)uploadAnchorEffect:(id)arg0 use:(BOOL)arg1 isRendering:(BOOL)arg2 type:(long long)arg3 panel:(id)arg4 completion:(id /* block */)arg5;
- (void)stopEffectImageBgRender:(id)arg0;
- (void)renderEffectBgImages:(id)arg0 effect:(id)arg1;
- (id)panelExtraInfo;
- (long long)indexForFavorCategory;
- (long long)indexForSearchCategory;
- (id)getEffectIndexPathInCategory:(id)arg0 effectIdentifier:(id)arg1;
- (void)getCategoryEffects:(id)arg0 categoryKey:(id)arg1 completion:(id /* block */)arg2;
- (id)buttonModelList;
- (void)setButtonModelList:(id)arg0;
- (id)previewEffect;
- (void)setPreviewEffect:(id)arg0;
- (id)currentEffect;
- (id)categoryList;
- (void)setCurrentEffect:(id)arg0;
- (void)setCategoryList:(id)arg0;
- (id)searchModel;
- (void)setSearchModel:(id)arg0;

@end
