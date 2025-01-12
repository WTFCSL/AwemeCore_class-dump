//
//     Generated by private class-dump
//

@class AWERepoLiteVideoDiaryModel, ACCRepoGlobalVoiceChangerModel, AWEStudioPublishExternalModel, AWEMainPublishMediumRewardModel, AWERepoMusicModel, ACCRepoRedPacketModel, ACCRepoOneClickFilmingModel, ACCRepoOriginTextModel, ACCRepoGlobalImageTemplateModel, AWERepoImageTemplateModel, AWEStudioRepoCommercialAnchorModel, AWERepoSearchClueModel, ACCRepoSecurityInfoModel, AWEStudioPublishInternalModel, AWERepoVoiceChangerModel, AWERepoCutSameModel, AWERepoTrackModel, ACCRepoCanvasModel, NSObject, ACCRepoBirthdayModel, AWERepoTemplateInfoModel, AWERepoMediumRewardModel, ACCRepoRearResourceModel, ACCRepoGlobalCaptionModel, AWERepoPropModel, AWERepoCaptionModel, ACCRepoLivePhotoInfoInstanceModel, AWEStudioRepoLocalLifeMissionModel, AWEStudioRepoMissionModel, AWERepoScanModel, AWEStudioRepoCompanyCouponModel, AWERepoChallengeModel, AWERepoTranscodingModel, ACCRepoStickerInstanceModel, AWERepoCameraModeCustomModel, AWERepoNearbyModel, AWERepoContextModel, AWERepoUploadInfomationModel, AWERepoShareModel, AWERepoMVModel, NSMapTable, AWERepoPOIModel, AWERepoCoCreatorModel, ACCRepoGlobalImageModel, AWERepoFilterModel, AWERepoAIGCSyncModel, AWERepoKaraokeModel, ACCRepoChallengeBindModel, ACCRepoAdvanceEditorModel, AWEStudioComposerRepoModel, ACCRepoCanvasBusinessModel, AWERepoPublishConfigModel, AWEPublishVideoSyncDataModel, ACCDraftURSFileManager, NSString, NSMutableSet, ACCRepoImageInfoInstanceModel, AWEStudioRepoCommercialBridgeModel, ACCRepoMusicBeatsModel, ACCRepoImageAlbumInfoModel, AWERepoLiteRedPacketModel, ACCRepoRecorderTrackerToolModel, AWEECCommentPublishModel, AWERepoGameModel, ACCRepoGlobalTranscodingModel, ACCRepoQuickStoryModel, AWERepoHARTrackModel, ACCRepoVideoQualityModel, AWERepoRouterModel, AWERepoDuetModel, ACCRepoBeautyModel, ACCRepoCompareContextModel, AWERepoFlowControlModel, AWERepoTeenModeModel, NSArray, ACCRepoPointerTransferModel, ACCRepoTextModeModel, AWERepoVideoInfoModel, NSLock, AWEVideoPublishAwemeInfo, AWERecordInformationRepoModel, ACCRepoDynamicRecorderInfoModel, AWERepoDualCameraModel, AWERepoDraftModel, AWEStudioRepoLiveModel, AWEStudioRepoIMModel, AWERepoInstanceContextModel, ACCRepoEditEffectModel, AWERepoAuthorityModel, AWERepoStickerModel, AWEStudioRepoOpenShareModel, ACCRepoGlobalVideoModel;
@protocol AWERepoPOIModelProtocol, AWEStudioAwemeModelProtocol;

@interface AWEVideoPublishViewModel : ACCRepositoryProject <ACCRepositoryPublishContextProtocol> {
    NSLock *m_useCaseLock;
    NSMapTable *m_useCases;
    NSLock *m_scopeLock;
    NSMutableSet *m_setupScopes;
    NSMutableSet *m_allScopes;
    long long m_currentScope;
    AWEVideoPublishAwemeInfo *_awemeInfo;
}

@property (readonly, nonatomic) AWEStudioRepoCommercialAnchorModel *repoCommercialAnchor;
@property (readonly, nonatomic) AWEStudioRepoCommercialBridgeModel *repoCommercialBridge;
@property (readonly, nonatomic) AWEStudioRepoMissionModel *repoMission;
@property (readonly, nonatomic) AWEStudioRepoOpenShareModel *repoOpenShare;
@property (readonly, nonatomic) AWEECCommentPublishModel *repoCommentAnchor;
@property (readonly, nonatomic) AWEStudioRepoCompanyCouponModel *repoCompanyTools;
@property (readonly, nonatomic) id<AWERepoPOIModelProtocol> repoProtocolPOI;
@property (readonly, nonatomic) AWEStudioRepoLocalLifeMissionModel *repoLocalLifeMission;
@property (readonly, nonatomic) ACCRepoOneClickFilmingModel *repoOneClickFilming;
@property (readonly, nonatomic) AWEMainPublishMediumRewardModel *mainMediumRewardModel;
@property (readonly, nonatomic) AWEPublishVideoSyncDataModel *videoSyncModel;
@property (readonly, nonatomic) AWERepoKaraokeModel *repoKaraoke;
@property (retain, nonatomic) AWERepoLiteRedPacketModel *repoLiteRedPacket;
@property (retain, nonatomic) AWERepoLiteVideoDiaryModel *repoLiteVideoDiary;
@property (readonly, nonatomic) id<AWERepoPOIModelProtocol> repoLocation;
@property (readonly, nonatomic) AWERepoMediumRewardModel *repoMediumReward;
@property (readonly, nonatomic) AWERepoNearbyModel *repoNearby;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) AWERepoSearchClueModel *repoSearchClue;
@property (readonly, nonatomic) AWERepoTemplateInfoModel *repoTemplateInfo;
@property (readonly, nonatomic) AWEStudioRepoIMModel *repoIM;
@property (readonly, nonatomic) AWEStudioRepoLiveModel *repoLive;
@property (readonly, nonatomic) AWERepoPOIModel *repoPOI;
@property (retain, nonatomic) AWEStudioPublishExternalModel *externalModel;
@property (retain, nonatomic) AWEStudioPublishInternalModel *internalModel;
@property (readonly, nonatomic) NSArray *exclusionSecUidList;
@property (readonly, nonatomic) BOOL isExclusionSelected;
@property (retain, nonatomic) NSObject<AWEStudioAwemeModelProtocol> *aweme;
@property (readonly, nonatomic) ACCRepoAdvanceEditorModel *repoAdvanceEditor;
@property (readonly, nonatomic) ACCRepoBeautyModel *repoBeauty;
@property (readonly, nonatomic) ACCRepoBirthdayModel *repoBirthday;
@property (readonly, nonatomic) ACCRepoCanvasBusinessModel *repoCanvasBusiness;
@property (readonly, nonatomic) ACCRepoCanvasModel *repoCanvas;
@property (readonly, nonatomic) ACCRepoChallengeBindModel *repoChallengeBind;
@property (readonly, nonatomic) ACCRepoCompareContextModel *repoDiffContext;
@property (readonly, nonatomic) ACCRepoDynamicRecorderInfoModel *repoDynamicRecorderInfo;
@property (readonly, nonatomic) ACCRepoEditEffectModel *repoEditEffect;
@property (readonly, nonatomic) ACCRepoGlobalCaptionModel *repoGlobalCaption;
@property (readonly, nonatomic) ACCRepoGlobalImageModel *repoGlobalImageInfo;
@property (readonly, nonatomic) ACCRepoGlobalImageTemplateModel *repoGlobalImageTemplateModel;
@property (readonly, nonatomic) ACCRepoGlobalTranscodingModel *repoGlobalTranscoding;
@property (readonly, nonatomic) ACCRepoGlobalVideoModel *repoGlobalVideoInfo;
@property (readonly, nonatomic) ACCRepoGlobalVoiceChangerModel *repoGlobalVoiceChanger;
@property (readonly, nonatomic) ACCRepoImageAlbumInfoModel *repoImageAlbumInfo;
@property (readonly, nonatomic) ACCRepoImageInfoInstanceModel *repoImageInfoInstance;
@property (readonly, nonatomic) ACCRepoLivePhotoInfoInstanceModel *repoLivePhotoInfoInstance;
@property (readonly, nonatomic) ACCRepoMusicBeatsModel *repoMusicBeatsModel;
@property (readonly, nonatomic) ACCRepoOriginTextModel *repoOriginTextModel;
@property (readonly, nonatomic) ACCRepoPointerTransferModel *repoPointerTrans;
@property (readonly, nonatomic) ACCRepoQuickStoryModel *repoQuickStory;
@property (readonly, nonatomic) ACCRepoRearResourceModel *RepoRearResource;
@property (readonly, nonatomic) ACCRepoRecorderTrackerToolModel *repoRecorderTrackerTool;
@property (readonly, nonatomic) ACCRepoRedPacketModel *repoRedPacket;
@property (readonly, nonatomic) ACCRepoSecurityInfoModel *repoSecurityInfo;
@property (readonly, nonatomic) ACCRepoTextModeModel *repoTextMode;
@property (readonly, nonatomic) ACCRepoVideoQualityModel *repoVideoQuality;
@property (readonly, nonatomic) AWERecordInformationRepoModel *repoRecordInfo;
@property (readonly, nonatomic) AWERepoAIGCSyncModel *repoAIGCSync;
@property (readonly, nonatomic) AWERepoAuthorityModel *repoAuthority;
@property (readonly, nonatomic) AWERepoCameraModeCustomModel *repoCustomMode;
@property (readonly, nonatomic) AWERepoCaptionModel *repoCaption;
@property (readonly, nonatomic) AWERepoChallengeModel *repoChallenge;
@property (readonly, nonatomic) AWERepoCoCreatorModel *coCreatorModel;
@property (readonly, nonatomic) AWERepoContextModel *repoContext;
@property (readonly, nonatomic) AWERepoCutSameModel *repoCutSame;
@property (readonly, nonatomic) AWERepoDraftModel *repoDraft;
@property (readonly, nonatomic) AWERepoDualCameraModel *repoDualCamera;
@property (readonly, nonatomic) AWERepoDuetModel *repoDuet;
@property (readonly, nonatomic) AWERepoFilterModel *repoFilter;
@property (readonly, nonatomic) AWERepoFlowControlModel *repoFlowControl;
@property (readonly, nonatomic) AWERepoGameModel *repoGame;
@property (readonly, nonatomic) AWERepoHARTrackModel *repoHARTrack;
@property (readonly, nonatomic) AWERepoImageTemplateModel *imageTemplateInfo;
@property (readonly, nonatomic) AWERepoInstanceContextModel *instanceContextModel;
@property (readonly, nonatomic) AWERepoMusicModel *repoMusic;
@property (readonly, nonatomic) AWERepoMVModel *repoMV;
@property (readonly, nonatomic) AWERepoPropModel *repoProp;
@property (readonly, nonatomic) AWERepoPublishConfigModel *repoPublishConfig;
@property (readonly, nonatomic) AWERepoRouterModel *repoRouter;
@property (readonly, nonatomic) AWERepoScanModel *repoScan;
@property (readonly, nonatomic) AWERepoShareModel *repoShare;
@property (readonly, nonatomic) ACCRepoStickerInstanceModel *repoStickerInstance;
@property (readonly, nonatomic) AWERepoStickerModel *repoSticker;
@property (readonly, nonatomic) AWERepoTeenModeModel *repoTeenMode;
@property (readonly, nonatomic) AWERepoTrackModel *repoTrack;
@property (readonly, nonatomic) AWERepoTranscodingModel *repoTranscoding;
@property (readonly, nonatomic) AWERepoUploadInfomationModel *repoUploadInfo;
@property (readonly, nonatomic) AWERepoVideoInfoModel *repoVideoInfo;
@property (readonly, nonatomic) AWERepoVoiceChangerModel *repoVoiceChanger;
@property (nonatomic) BOOL preMergeInProcess;
@property (nonatomic) BOOL backFromEditPage;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } originalPlayerFrame;
@property (readonly, nonatomic) AWEStudioComposerRepoModel *repoComposer;
@property (readonly, nonatomic) ACCDraftURSFileManager *draftURSFileManager;
@property (retain, nonatomic) AWEVideoPublishAwemeInfo *awemeInfo;

+ (id)createIDWithTaskID:(id)arg0 deviceID:(id)arg1 UUID:(id)arg2;
+ (id)instanceWithTaskId:(id)arg0;
+ (id)instanceWithExtensionModels:(id)arg0;
+ (void)_aweLazyRegisterLoad_Studio;
+ (Class)projectClass;

- (long long)sharePlatform;
- (id)aweme;
- (id)repoContext;
- (void)setAweme:(id)arg0;
- (id)awemeInfo;
- (BOOL)isStory;
- (id)repoPublishConfig;
- (id)coCreatorModel;
- (id)instanceContextModel;
- (BOOL)isPublishExclusion;
- (id)exclusionSecUidList;
- (void)setAwemeInfo:(id)arg0;
- (id)repoCommercialAnchor;
- (id)repoTrack;
- (id)repoMission;
- (id)repoCommercialBridge;
- (id)repoChallenge;
- (id)repoUploadInfo;
- (id)repoMusic;
- (id)repoVideoInfo;
- (id)repoOpenShare;
- (id)repoOriginTextModel;
- (id)repoCommentAnchor;
- (id)repoCanvas;
- (id)repoDraft;
- (id)repoFlowControl;
- (id)repoGame;
- (id)repoSticker;
- (id)repoReshoot;
- (id)repoDuet;
- (id)repoCompanyTools;
- (BOOL)isRepoModelModified;
- (id)repoAuthority;
- (id)repoRedPacket;
- (BOOL)routerToNearbyValidFromPOIPublishTask;
- (id)repoQuickStory;
- (id)repoRecorderTrackerTool;
- (BOOL)isExclusionSelected;
- (id)repoProp;
- (id)repoImageAlbumInfo;
- (BOOL)multiProjects;
- (id)repoShare;
- (id)repoLive;
- (BOOL)needsSaveToAlbum;
- (id)repoNearby;
- (id)repoMV;
- (id)repoCutSame;
- (id)repoImageInfoInstance;
- (id)useCaseOfProtocol:(id)arg0;
- (id)repoPOI;
- (id)repoLastGroup;
- (id)repoIM;
- (id)repoBirthday;
- (BOOL)isImageUnify;
- (id)repoCustomMode;
- (id)repoScan;
- (id)externalModel;
- (void)initializeRepoIfNeededWithClass:(Class)arg0;
- (id)repoRouter;
- (id)repoSecurityInfo;
- (id)repoComposer;
- (id)repoLiteRedPacket;
- (id)RepoRearResource;
- (id)repoChallengeBind;
- (id)repoAIGCSync;
- (id)repoFilter;
- (void)appendHotSpotInfoToTitleIfNeeded;
- (id)repoRecordInfo;
- (id)repoStickerInstance;
- (id)draftURSFileManager;
- (id)currentProjectUUID;
- (void)updatePrepareScopeWithContainer:(id)arg0;
- (void)syncTitleChallengeInfosToTitleExtraInfo;
- (void)updateRepoModelWithAweme:(id)arg0;
- (id)repoDualCamera;
- (id)draftImagePath;
- (id)repoEditEffect;
- (id)repoTranscoding;
- (id)repoBeauty;
- (id)repoLivePhotoInfoInstance;
- (id)videoFragmentInfoDictionary;
- (void)appendHashtag:(id)arg0 asSticker:(BOOL)arg1;
- (void)setShareIronMan:(id)arg0;
- (id)repoGlobalVoiceChanger;
- (id)repoHARTrack;
- (id)repoDiffContext;
- (void)draft_addObserver:(id)arg0 forProtocol:(id)arg1 canHandle:(id /* block */)arg2 handle:(id /* block */)arg3;
- (id)repoVoiceChanger;
- (id)repoCaption;
- (id)repoDynamicRecorderInfo;
- (void)setBackFromEditPage:(BOOL)arg0;
- (void)syncMentionUserToTitleIfNeed;
- (id)reedit_trackInfo;
- (BOOL)disableEditAuthority;
- (id)projectAtIndex:(unsigned long long)arg0;
- (void)setExternalModel:(id)arg0;
- (id)videoSyncModel;
- (id)mainMediumRewardModel;
- (BOOL)needsAssetVideoURL;
- (BOOL)needsSandboxVideoURL;
- (id)repoCanvasBusiness;
- (id)repoProtocolPOI;
- (id)repoLiteVideoDiary;
- (void)copyPublishModelFrom:(id)arg0;
- (id)repoLocation;
- (id)repoMediumReward;
- (id)repoTeenMode;
- (id)repoSearchClue;
- (id)imageTemplateInfo;
- (id)repoTextMode;
- (void)draft_removeObserver:(id)arg0;
- (id)repoAdvanceEditor;
- (id)repoGlobalImageInfo;
- (void)trackPostEvent:(id)arg0 enterMethod:(id)arg1 extraInfo:(id)arg2;
- (id)repoPointerTrans;
- (id)repoLocalLifeMission;
- (id)currentProject;
- (void)setCreationScope:(long long)arg0;
- (id)repoOneClickFilming;
- (id)repoTrimCropModel;
- (id)repoMusicBeatsModel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })originalPlayerFrame;
- (id)repoVideoQuality;
- (id)createContainerWithReuseScopes:(id)arg0;
- (id)repoKaraoke;
- (void)recoverWithDraftInteractionProps:(id)arg0;
- (void)handleLoadFromDraftWithCompletion:(id /* block */)arg0;
- (BOOL)backFromEditPage;
- (BOOL)preMergeInProcess;
- (void)handleMVErrorWithCompletion:(id /* block */)arg0;
- (void)p_generateVideoDataWithMVModelPath:(id)arg0 selectedAssetNames:(id)arg1 completion:(id /* block */)arg2;
- (id)generateAlgorithmResultFromAssetName:(id)arg0 serverMaterials:(id)arg1;
- (void)configMusicForAudioBeatTrackOfMV:(id)arg0 effectModel:(id)arg1 userResources:(id)arg2 completion:(id /* block */)arg3;
- (void)p_handleGenerateVideoDataResult:(BOOL)arg0 error:(id)arg1 videoData:(id)arg2 completion:(id /* block */)arg3;
- (BOOL)isImageAlbumStyle;
- (BOOL)isRepoModelModified:(id)arg0;
- (id)repoSystemLivePhoto;
- (id)prepareExtraMetaInfoForComposer;
- (void)setPreMergeInProcess:(BOOL)arg0;
- (id)repoGlobalCaption;
- (id)effectTrackStringWithFilter:(id /* block */)arg0;
- (BOOL)needsWatermark;
- (void)setRepoLiteRedPacket:(id)arg0;
- (void)setRepoLiteVideoDiary:(id)arg0;
- (id)getInteractionProps;
- (id)repoTemplateInfo;
- (BOOL)videoUploadAddSourceInfoForItem:(id)arg0 withKey:(id)arg1;
- (void)appendStickerLocation:(id)arg0 pts:(double)arg1;
- (void)startRecordStickerLocationsWithSticker:(id)arg0;
- (void)endRecordStickerLocations;
- (void)setOriginalPlayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)studio_copyWithZone:(struct _NSZone { } *)arg0;
- (BOOL)isPureImageAlbum;
- (void)removeAllSegmentStickerLocations;
- (void)removeLastSegmentStickerLocations;
- (void)trackPostEvent:(id)arg0 enterMethod:(id)arg1 extraInfo:(id)arg2 isForceSend:(BOOL)arg3;
- (BOOL)isEqual:(id)arg0 dataCategory:(long long)arg1 scene:(long long)arg2 includeRepoClassArray:(id)arg3 excludeRepoClassArray:(id)arg4;
- (BOOL)isEqual:(id)arg0 dataCategory:(long long)arg1 scene:(long long)arg2;
- (BOOL)isEqual:(id)arg0 dataCategory:(long long)arg1 scene:(long long)arg2 includeRepoClassArray:(id)arg3;
- (BOOL)isEqual:(id)arg0 dataCategory:(long long)arg1 scene:(long long)arg2 excludeRepoClassArray:(id)arg3;
- (id)repoGlobalImageTemplateModel;
- (id)repoGlobalTranscoding;
- (id)repoGlobalVideoInfo;
- (BOOL)draft_isWorkspace;
- (void)removeChallengesFromTitleWithNames:(id)arg0;
- (id)generateSnapshotWithServiceProvider:(id)arg0;
- (void)trackPostEvent:(id)arg0 enterMethod:(id)arg1;
- (id)p_nonullMutableTitle;
- (void)removeChallengeFromTitleWithName:(id)arg0;
- (void)resetDraftURSFileManager;
- (id)initForInstance;
- (long long)currentScope;
- (id)allScopes;
- (void)assignCopyPublishViewModelTo:(id)arg0 from:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setup;
- (id)internalModel;
- (void)setInternalModel:(id)arg0;
- (void)p_init;

@end
