//
//     Generated by private class-dump
//

@class UIView, NSString, AWEEffectEditorManager, NSArray, UIImage, AWEDTOAIGCSyncModel, AWEAssetModel, NSMutableDictionary, NSDictionary, IESEffectModel;
@protocol CAKAlbumBottomViewProtocol, CAKAlbumNavigationViewProtocol;

@interface AWERepoAIGCSyncModel : NSObject <NSCopying, ACCRepositoryDraftContextDeprecated, ACCRepositoryTrackContextDeprecated, ACCRepositoryRequestParamsDeprecated, ACCRepoModelDraftProtocol, ACCRepoRegister, AWERepoAIGCSyncData> {
    BOOL _isAIGCSync;
    BOOL _saveLocalVodeo;
    BOOL _isEditPageSelectOriginalPublish;
    BOOL _isMarkEditSelectsaveLocal;
    BOOL _isAISuite;
    BOOL _isAblumDissEnterEditPage;
    BOOL _firstPropTry;
    NSArray *_selectKeys;
    AWEAssetModel *_assetModel;
    IESEffectModel *_effectModel;
    NSString *_effectIdentifier;
    NSString *_resourceID;
    NSString *_originalEffectID;
    NSString *_sourceIdentifier;
    double _videoDuration;
    NSString *_customStickerId;
    NSString *_currentCustomPropExportPath;
    NSString *_currentCustomPropIconExportPath;
    NSString *_currentCustomPropCoverExportPath;
    AWEEffectEditorManager *_effectEditor;
    UIImage *_originalImage;
    NSString *_renderImagePath;
    NSString *_aigcOriginalImagePath;
    NSMutableDictionary *_editorGenerateInfos;
    NSString *_isAIGCSyncFrom;
    NSString *_aigcCreateWay;
    NSDictionary *_trackDic;
    NSString *_trackAIGCSyncEnterFrom;
    long long _currentIndex;
    NSArray *_slotStatus;
    NSString *_AIType;
    NSString *_AISuiteType;
    NSString *_AISuitePanelKey;
    NSString *_AISuiteCategoryKey;
    NSArray *_AISuiteEffects;
    NSArray *_AISuiteMusicIDs;
    NSArray *_AISuiteChallengeIDs;
    NSArray *_AISuiteEffectNames;
    NSArray *_AISuiteCommonInfo;
    NSString *_AISuiteRealEffectId;
    IESEffectModel *_AISuiteRealEffect;
    long long _asyncQueueStatus;
    NSString *_asyncQueueMarkCurrentProjectUUID;
    NSString *_asyncQueueRenderImageLocalPath;
    NSString *_asyncQueueRenderImageDownLoadPath;
    long long _aiCreationMaxCount;
    long long _aiCreationPreloadCount;
    unsigned long long _currentAIEffectSource;
    UIView<CAKAlbumNavigationViewProtocol> *_customNavigationView;
    UIView<CAKAlbumBottomViewProtocol> *_customBottomView;
    AWEDTOAIGCSyncModel *_DTOModel;
}

@property (retain, nonatomic) AWEDTOAIGCSyncModel *DTOModel;
@property (nonatomic) BOOL isAIGCSync;
@property (copy, nonatomic) NSArray *selectKeys;
@property (copy, nonatomic) AWEAssetModel *assetModel;
@property (retain, nonatomic) IESEffectModel *effectModel;
@property (copy, nonatomic) NSString *effectIdentifier;
@property (copy, nonatomic) NSString *resourceID;
@property (copy, nonatomic) NSString *originalEffectID;
@property (copy, nonatomic) NSString *sourceIdentifier;
@property (nonatomic) double videoDuration;
@property (copy, nonatomic) NSString *customStickerId;
@property (copy, nonatomic) NSString *currentCustomPropExportPath;
@property (copy, nonatomic) NSString *currentCustomPropIconExportPath;
@property (copy, nonatomic) NSString *currentCustomPropCoverExportPath;
@property (retain, nonatomic) AWEEffectEditorManager *effectEditor;
@property (copy, nonatomic) NSString *fromPropId;
@property (copy, nonatomic) NSString *fromMusicId;
@property (retain, nonatomic) UIImage *originalImage;
@property (nonatomic) BOOL saveLocalVodeo;
@property (copy, nonatomic) NSString *renderImagePath;
@property (copy, nonatomic) NSString *aigcOriginalImagePath;
@property (retain, nonatomic) NSMutableDictionary *editorGenerateInfos;
@property (copy, nonatomic) NSString *isAIGCSyncFrom;
@property (copy, nonatomic) NSString *aigcCreateWay;
@property (copy, nonatomic) NSDictionary *trackDic;
@property (copy, nonatomic) NSString *trackAIGCSyncEnterFrom;
@property (nonatomic) BOOL isEditPageSelectOriginalPublish;
@property (nonatomic) BOOL isMarkEditSelectsaveLocal;
@property (nonatomic) long long currentIndex;
@property (copy, nonatomic) NSArray *slotStatus;
@property (nonatomic) BOOL isAISuite;
@property (copy, nonatomic) NSString *AIType;
@property (copy, nonatomic) NSString *AISuiteType;
@property (copy, nonatomic) NSString *AISuitePanelKey;
@property (copy, nonatomic) NSString *AISuiteCategoryKey;
@property (copy, nonatomic) NSArray *AISuiteEffects;
@property (copy, nonatomic) NSArray *AISuiteMusicIDs;
@property (copy, nonatomic) NSArray *AISuiteChallengeIDs;
@property (copy, nonatomic) NSArray *AISuiteEffectNames;
@property (copy, nonatomic) NSArray *AISuiteCommonInfo;
@property (copy, nonatomic) NSString *AISuiteRealEffectId;
@property (retain, nonatomic) IESEffectModel *AISuiteRealEffect;
@property (nonatomic) long long asyncQueueStatus;
@property (copy, nonatomic) NSString *asyncQueueMarkCurrentProjectUUID;
@property (copy, nonatomic) NSString *asyncQueueRenderImageLocalPath;
@property (copy, nonatomic) NSString *asyncQueueRenderImageDownLoadPath;
@property (nonatomic) long long aiCreationMaxCount;
@property (nonatomic) long long aiCreationPreloadCount;
@property (nonatomic) unsigned long long currentAIEffectSource;
@property (readonly, nonatomic) BOOL isGlobalEffect;
@property (retain, nonatomic) UIView<CAKAlbumNavigationViewProtocol> *customNavigationView;
@property (retain, nonatomic) UIView<CAKAlbumBottomViewProtocol> *customBottomView;
@property (nonatomic) BOOL isAblumDissEnterEditPage;
@property (nonatomic) BOOL firstPropTry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)repo_dataProtocol;
+ (Class)draft_DTOModelClass;

- (void)setCustomBottomView:(id)arg0;
- (id)fromPropId;
- (void)setFromPropId:(id)arg0;
- (id)fromMusicId;
- (void)setFromMusicId:(id)arg0;
- (BOOL)isEditPageSelectOriginalPublish;
- (void)setIsEditPageSelectOriginalPublish:(BOOL)arg0;
- (id)renderImagePath;
- (void)setRenderImagePath:(id)arg0;
- (id)slotStatus;
- (void)setSlotStatus:(id)arg0;
- (long long)aiCreationMaxCount;
- (void)setAiCreationMaxCount:(long long)arg0;
- (long long)aiCreationPreloadCount;
- (void)setAiCreationPreloadCount:(long long)arg0;
- (id)propId;
- (id)customNavigationView;
- (void)setCustomNavigationView:(id)arg0;
- (id)effectModel;
- (id)originalEffectID;
- (void)setOriginalEffectID:(id)arg0;
- (void)setEffectModel:(id)arg0;
- (id)assetModel;
- (void)setAssetModel:(id)arg0;
- (void)setTrackDic:(id)arg0;
- (id)trackDic;
- (id)acc_publishRequestParams:(id)arg0;
- (id)acc_publishTrackEventParams:(id)arg0;
- (void)draftWillBeSavedWithID:(id)arg0;
- (id)commonTrackDict;
- (id)customBottomView;
- (BOOL)isAIGCSync;
- (void)setIsAIGCSync:(BOOL)arg0;
- (id)aigcOriginalImagePath;
- (void)setIsAIGCSyncFrom:(id)arg0;
- (void)setTrackAIGCSyncEnterFrom:(id)arg0;
- (id)commonTrackDictWithPost;
- (void)setSelectKeys:(id)arg0;
- (void)setAigcCreateWay:(id)arg0;
- (void)setAsyncQueueRenderImageLocalPath:(id)arg0;
- (void)setAsyncQueueRenderImageDownLoadPath:(id)arg0;
- (unsigned long long)currentAIEffectSource;
- (id)customStickerId;
- (id)currentCustomPropExportPath;
- (id)currentCustomPropCoverExportPath;
- (id)currentCustomPropIconExportPath;
- (id)selectKeys;
- (id)aigcCreateWay;
- (void)setIsMarkEditSelectsaveLocal:(BOOL)arg0;
- (BOOL)isGlobalEffect;
- (BOOL)saveLocalVodeo;
- (void)setCustomStickerId:(id)arg0;
- (id)draft_DTOModel;
- (void)draft_updateWithDTOModel:(id)arg0;
- (void)draft_updateWithDTOModel:(id)arg0 draftModel:(id)arg1;
- (void)setCurrentCustomPropExportPath:(id)arg0;
- (void)setCurrentCustomPropIconExportPath:(id)arg0;
- (id)DTOModel;
- (void)setDTOModel:(id)arg0;
- (long long)asyncQueueStatus;
- (void)setAsyncQueueMarkCurrentProjectUUID:(id)arg0;
- (BOOL)isAISuite;
- (void)setEditorGenerateInfos:(id)arg0;
- (id)AIType;
- (id)AISuiteType;
- (id)AISuiteEffects;
- (void)setAISuiteEffects:(id)arg0;
- (void)setAISuiteMusicIDs:(id)arg0;
- (void)setAISuiteChallengeIDs:(id)arg0;
- (void)setIsAISuite:(BOOL)arg0;
- (void)setAIType:(id)arg0;
- (void)setAISuitePanelKey:(id)arg0;
- (void)setAISuiteCategoryKey:(id)arg0;
- (void)setAISuiteType:(id)arg0;
- (id)AISuiteRealEffectId;
- (id)editorGenerateInfos;
- (void)setCurrentCustomPropCoverExportPath:(id)arg0;
- (id)asyncQueueRenderImageLocalPath;
- (id)asyncQueueRenderImageDownLoadPath;
- (void)setAsyncQueueStatus:(long long)arg0;
- (void)setIsAblumDissEnterEditPage:(BOOL)arg0;
- (void)setAigcOriginalImagePath:(id)arg0;
- (id)trackAIGCSyncEnterFrom;
- (void)clearAISuiteData;
- (id)isAIGCSyncFrom;
- (id)AISuiteMusicIDs;
- (void)setCurrentAIEffectSource:(unsigned long long)arg0;
- (id)asyncQueueMarkCurrentProjectUUID;
- (BOOL)isMarkEditSelectsaveLocal;
- (void)setSaveLocalVodeo:(BOOL)arg0;
- (BOOL)isAblumDissEnterEditPage;
- (BOOL)firstPropTry;
- (void)setFirstPropTry:(BOOL)arg0;
- (void)setAISuiteRealEffectId:(id)arg0;
- (id)AISuiteCommonInfo;
- (void)setAISuiteRealEffect:(id)arg0;
- (id)AISuiteEffectNames;
- (void)setAISuiteCommonInfo:(id)arg0;
- (void)setAISuiteEffectNames:(id)arg0;
- (void)cacheEditorHaveGenerateInfo:(id)arg0 forkey:(id)arg1;
- (id)AISuitePanelKey;
- (id)AISuiteCategoryKey;
- (id)AISuiteChallengeIDs;
- (id)AISuiteRealEffect;
- (id)getAISuiteOriginalPropId;
- (id)originalPropId;
- (void)setResourceID:(id)arg0;
- (void)setOriginalImage:(id)arg0;
- (void).cxx_destruct;
- (long long)currentIndex;
- (id)resourceID;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setCurrentIndex:(long long)arg0;
- (void)setSourceIdentifier:(id)arg0;
- (id)sourceIdentifier;
- (double)videoDuration;
- (id)originalImage;
- (void)setVideoDuration:(double)arg0;
- (id)effectIdentifier;
- (id)effectEditor;
- (void)setEffectEditor:(id)arg0;
- (void)setEffectIdentifier:(id)arg0;

@end
