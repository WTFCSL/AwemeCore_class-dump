//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEDTOAIGCSyncModel : MTLModel <MTLJSONSerializing> {
    BOOL _isSync;
    BOOL _isEditPageSelectOriginalPublish;
    BOOL _saveLocalVideo;
    BOOL _isAiSuite;
    NSString *_propPath;
    NSString *_propIconPath;
    NSString *_propCoverPath;
    NSArray *_keywords;
    NSString *_currentPropIdentifier;
    NSString *_isSyncFrom;
    NSString *_fromPropId;
    NSString *_createWay;
    NSString *_fromMusicId;
    NSString *_effect;
    NSString *_originalImagePath;
    NSString *_renderImagePath;
    NSString *_aigcOriginalimagePath;
    NSString *_trackAigcsyncEnterFrom;
    NSArray *_slotStatus;
    NSString *_aiType;
    NSString *_aiSuiteType;
    NSString *_aiSuitePanelKey;
    NSString *_aiSuiteCategoryKey;
    NSArray *_aiSuiteMusicids;
    NSArray *_aiSuiteChallengeIDs;
    NSArray *_aiSuiteCommonInfo;
    NSArray *_aiSuiteEffectnames;
    NSString *_aiSuiteRealEffectid;
    NSString *_aiSuiteRealEffect;
    long long _aiCreationMaxCount;
    long long _aiCreationPreloadCount;
    long long _selectAigcEffectSource;
    NSString *_asyncqueueRenderimageLocalpath;
    NSString *_asyncqueueRenderimageDownloadpath;
    NSString *_asyncqueueMarkCurrentProjectuuid;
    long long _asyncqueueStatus;
}

@property (nonatomic) BOOL isSync;
@property (copy, nonatomic) NSString *propPath;
@property (copy, nonatomic) NSString *propIconPath;
@property (copy, nonatomic) NSString *propCoverPath;
@property (copy, nonatomic) NSArray *keywords;
@property (copy, nonatomic) NSString *currentPropIdentifier;
@property (copy, nonatomic) NSString *isSyncFrom;
@property (copy, nonatomic) NSString *fromPropId;
@property (copy, nonatomic) NSString *createWay;
@property (copy, nonatomic) NSString *fromMusicId;
@property (copy, nonatomic) NSString *effect;
@property (copy, nonatomic) NSString *originalImagePath;
@property (nonatomic) BOOL isEditPageSelectOriginalPublish;
@property (copy, nonatomic) NSString *renderImagePath;
@property (copy, nonatomic) NSString *aigcOriginalimagePath;
@property (copy, nonatomic) NSString *trackAigcsyncEnterFrom;
@property (nonatomic) BOOL saveLocalVideo;
@property (copy, nonatomic) NSArray *slotStatus;
@property (copy, nonatomic) NSString *aiType;
@property (copy, nonatomic) NSString *aiSuiteType;
@property (copy, nonatomic) NSString *aiSuitePanelKey;
@property (copy, nonatomic) NSString *aiSuiteCategoryKey;
@property (copy, nonatomic) NSArray *aiSuiteMusicids;
@property (copy, nonatomic) NSArray *aiSuiteChallengeIDs;
@property (nonatomic) BOOL isAiSuite;
@property (copy, nonatomic) NSArray *aiSuiteCommonInfo;
@property (copy, nonatomic) NSArray *aiSuiteEffectnames;
@property (copy, nonatomic) NSString *aiSuiteRealEffectid;
@property (copy, nonatomic) NSString *aiSuiteRealEffect;
@property (nonatomic) long long aiCreationMaxCount;
@property (nonatomic) long long aiCreationPreloadCount;
@property (nonatomic) long long selectAigcEffectSource;
@property (copy, nonatomic) NSString *asyncqueueRenderimageLocalpath;
@property (copy, nonatomic) NSString *asyncqueueRenderimageDownloadpath;
@property (copy, nonatomic) NSString *asyncqueueMarkCurrentProjectuuid;
@property (nonatomic) long long asyncqueueStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)slotStatusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setIsSync:(BOOL)arg0;
- (id)propPath;
- (void)setPropPath:(id)arg0;
- (id)propIconPath;
- (void)setPropIconPath:(id)arg0;
- (id)propCoverPath;
- (void)setPropCoverPath:(id)arg0;
- (id)currentPropIdentifier;
- (void)setCurrentPropIdentifier:(id)arg0;
- (id)isSyncFrom;
- (void)setIsSyncFrom:(id)arg0;
- (id)fromPropId;
- (void)setFromPropId:(id)arg0;
- (id)createWay;
- (void)setCreateWay:(id)arg0;
- (id)fromMusicId;
- (void)setFromMusicId:(id)arg0;
- (id)originalImagePath;
- (void)setOriginalImagePath:(id)arg0;
- (BOOL)isEditPageSelectOriginalPublish;
- (void)setIsEditPageSelectOriginalPublish:(BOOL)arg0;
- (id)renderImagePath;
- (void)setRenderImagePath:(id)arg0;
- (id)aigcOriginalimagePath;
- (void)setAigcOriginalimagePath:(id)arg0;
- (id)trackAigcsyncEnterFrom;
- (void)setTrackAigcsyncEnterFrom:(id)arg0;
- (BOOL)saveLocalVideo;
- (void)setSaveLocalVideo:(BOOL)arg0;
- (id)slotStatus;
- (void)setSlotStatus:(id)arg0;
- (id)aiType;
- (void)setAiType:(id)arg0;
- (id)aiSuiteType;
- (void)setAiSuiteType:(id)arg0;
- (id)aiSuitePanelKey;
- (void)setAiSuitePanelKey:(id)arg0;
- (id)aiSuiteCategoryKey;
- (void)setAiSuiteCategoryKey:(id)arg0;
- (id)aiSuiteMusicids;
- (void)setAiSuiteMusicids:(id)arg0;
- (id)aiSuiteChallengeIDs;
- (void)setAiSuiteChallengeIDs:(id)arg0;
- (BOOL)isAiSuite;
- (void)setIsAiSuite:(BOOL)arg0;
- (id)aiSuiteCommonInfo;
- (void)setAiSuiteCommonInfo:(id)arg0;
- (id)aiSuiteEffectnames;
- (void)setAiSuiteEffectnames:(id)arg0;
- (id)aiSuiteRealEffectid;
- (void)setAiSuiteRealEffectid:(id)arg0;
- (id)aiSuiteRealEffect;
- (void)setAiSuiteRealEffect:(id)arg0;
- (long long)aiCreationMaxCount;
- (void)setAiCreationMaxCount:(long long)arg0;
- (long long)aiCreationPreloadCount;
- (void)setAiCreationPreloadCount:(long long)arg0;
- (long long)selectAigcEffectSource;
- (void)setSelectAigcEffectSource:(long long)arg0;
- (id)asyncqueueRenderimageLocalpath;
- (void)setAsyncqueueRenderimageLocalpath:(id)arg0;
- (id)asyncqueueRenderimageDownloadpath;
- (void)setAsyncqueueRenderimageDownloadpath:(id)arg0;
- (id)asyncqueueMarkCurrentProjectuuid;
- (void)setAsyncqueueMarkCurrentProjectuuid:(id)arg0;
- (long long)asyncqueueStatus;
- (void)setAsyncqueueStatus:(long long)arg0;
- (BOOL)isSync;
- (id)effect;
- (void).cxx_destruct;
- (void)setEffect:(id)arg0;
- (id)keywords;
- (void)setKeywords:(id)arg0;

@end
