//
//     Generated by private class-dump
//

@class HTSLiveMoreHighlight, HTSLivePaidLiveInfo, HTSLiveShowDistributionInfo, HTSLiveEpisodeStartHighLight, HTSLiveEpisodeStats, HTSLiveEpisodePaidInfo, HTSLiveOnlyTaInfo, NSMutableArray, HTSLiveWatermark, HTSLiveVSPannelIcon, HTSLiveUser, HTSLiveEpisodeExtraBasicInfo, HTSLiveUserStatistics, HTSLiveSeasonExtraBasicInfo, HTSLiveShowGeneralInfo, HTSLiveShowSupplyInfo, HTSLiveVSLinkInfo, HTSLiveVSCameraInfo, HTSLiveItemComment, HTSLiveTopicMeta, HTSLiveVSBar, HTSLiveSearchInfo, HTSLiveWatchInfo, HTSLiveEpisodePreviewImage, HTSLiveImage, HTSLiveEpisodePreviewBottom, HTSLiveMoreHighLightList, HTSLiveShare, HTSLiveRoomCart, HTSLiveEpisodeCorrelationSeasonInfo, HTSLiveCommentTcsInfo, HTSLiveRoomAuthStatus, HTSLiveSeasonBasicInfo, HTSLiveEpisodeMod, HTSLiveStatistics, HTSLivePCInfo, HTSLiveVideoInfo, HTSLiveShowExperienceInfo, NSString, HTSLiveCommentConfig, HTSLiveFilterInfo, HTSLiveEpisodeBasicInfo, GPBInt32ObjectDictionary, HTSLiveEpisodePremierePlay, HTSLiveVSGiftPannel, HTSLiveToolbarBackgroundConfig, HTSLiveVSWatermark;

@interface HTSLiveEpisode : IESLivePBBaseMessage <AWEShareLiveRoomModelProtocol, AWELiveHTSLiveEpisode, IESLiveVideoPreviewPlayerData>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *requestId;
@property (copy, nonatomic) NSString *logpb;
@property (retain, nonatomic) HTSLiveMoreHighlight *completeMoreLight;
@property (nonatomic) BOOL vidIsInValid;
@property (nonatomic) BOOL notReportPv;
@property (readonly, nonatomic, getter=isVerticalStream) BOOL verticalStream;
@property (readonly, nonatomic, getter=isMainCamera) BOOL mainCamera;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long episodeId;
@property (copy, nonatomic) NSString *episodeIdStr;
@property (copy, nonatomic) NSString *itemId;
@property (nonatomic) int status;
@property (retain, nonatomic) HTSLiveUser *owner;
@property (nonatomic) BOOL hasOwner;
@property (nonatomic) long long ownerUserId;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) HTSLiveWatchInfo *watchInfo;
@property (nonatomic) BOOL hasWatchInfo;
@property (retain, nonatomic) HTSLiveImage *background;
@property (nonatomic) BOOL hasBackground;
@property (copy, nonatomic) NSString *releaseTime;
@property (nonatomic) long long attachRoomId;
@property (copy, nonatomic) NSString *attachRoomIdStr;
@property (nonatomic) long long liveId;
@property (copy, nonatomic) NSString *currentPeriod;
@property (nonatomic) long long seasonId;
@property (retain, nonatomic) HTSLiveImage *cover;
@property (nonatomic) BOOL hasCover;
@property (retain, nonatomic) HTSLiveImage *coverVertical;
@property (nonatomic) BOOL hasCoverVertical;
@property (retain, nonatomic) HTSLiveShare *share;
@property (nonatomic) BOOL hasShare;
@property (retain, nonatomic) HTSLiveVideoInfo *videoInfo;
@property (nonatomic) BOOL hasVideoInfo;
@property (retain, nonatomic) NSMutableArray *highlightsArray;
@property (readonly, nonatomic) unsigned long long highlightsArray_Count;
@property (retain, nonatomic) HTSLiveMoreHighLightList *moreHighLightList;
@property (nonatomic) BOOL hasMoreHighLightList;
@property (retain, nonatomic) HTSLiveStatistics *statistics;
@property (nonatomic) BOOL hasStatistics;
@property (retain, nonatomic) HTSLiveEpisodeMod *episodeType;
@property (nonatomic) BOOL hasEpisodeType;
@property (retain, nonatomic) HTSLiveUserStatistics *userStatistics;
@property (nonatomic) BOOL hasUserStatistics;
@property (retain, nonatomic) HTSLiveOnlyTaInfo *onlyTa;
@property (nonatomic) BOOL hasOnlyTa;
@property (copy, nonatomic) NSString *selectionURL;
@property (retain, nonatomic) NSMutableArray *toolbarListArray;
@property (readonly, nonatomic) unsigned long long toolbarListArray_Count;
@property (copy, nonatomic) NSString *relationPlaceText;
@property (retain, nonatomic) NSMutableArray *operationPlaceTextListArray;
@property (readonly, nonatomic) unsigned long long operationPlaceTextListArray_Count;
@property (copy, nonatomic) NSString *showName;
@property (copy, nonatomic) NSString *briefInfoJson;
@property (retain, nonatomic) NSMutableArray *topicListArray;
@property (readonly, nonatomic) unsigned long long topicListArray_Count;
@property (retain, nonatomic) HTSLiveRoomAuthStatus *roomAuth;
@property (nonatomic) BOOL hasRoomAuth;
@property (nonatomic) BOOL collected;
@property (nonatomic) long long roomId;
@property (copy, nonatomic) NSString *topicInfoURL;
@property (nonatomic) long long watchPeriod;
@property (nonatomic) long long latestPeriod;
@property (retain, nonatomic) HTSLiveCommentTcsInfo *commentTcsInfo;
@property (nonatomic) BOOL hasCommentTcsInfo;
@property (copy, nonatomic) NSString *seasonIdStr;
@property (nonatomic) int currentPeriodRaw;
@property (nonatomic) BOOL hasCommerceGoods;
@property (retain, nonatomic) HTSLiveRoomCart *roomCart;
@property (nonatomic) BOOL hasRoomCart;
@property (nonatomic) int lastWatchPeriod;
@property (copy, nonatomic) NSString *watchPvRaw;
@property (nonatomic) long long nextSpecialEpisodeId;
@property (nonatomic) int style;
@property (retain, nonatomic) HTSLiveEpisodePremierePlay *playControl;
@property (nonatomic) BOOL hasPlayControl;
@property (retain, nonatomic) HTSLiveEpisodePreviewImage *previewImage;
@property (nonatomic) BOOL hasPreviewImage;
@property (retain, nonatomic) HTSLiveVSGiftPannel *giftPannel;
@property (nonatomic) BOOL hasGiftPannel;
@property (retain, nonatomic) HTSLiveVSPannelIcon *pannelIcon;
@property (nonatomic) BOOL hasPannelIcon;
@property (retain, nonatomic) HTSLiveTopicMeta *topicMeta;
@property (nonatomic) BOOL hasTopicMeta;
@property (copy, nonatomic) NSString *lynxTopicInfoURL;
@property (retain, nonatomic) NSMutableArray *pannelToolbarArray;
@property (readonly, nonatomic) unsigned long long pannelToolbarArray_Count;
@property (retain, nonatomic) HTSLiveEpisodePreviewBottom *previewBottom;
@property (nonatomic) BOOL hasPreviewBottom;
@property (copy, nonatomic) NSString *drawSubTitle;
@property (nonatomic) long long seasonPv;
@property (retain, nonatomic) HTSLiveImage *seasonCoverVertical;
@property (nonatomic) BOOL hasSeasonCoverVertical;
@property (copy, nonatomic) NSString *playerExtentionConfig;
@property (retain, nonatomic) NSMutableArray *cameraInfosArray;
@property (readonly, nonatomic) unsigned long long cameraInfosArray_Count;
@property (nonatomic) long long defaultCameraId;
@property (copy, nonatomic) NSString *defaultCameraIdStr;
@property (copy, nonatomic) NSString *playerExtentionConfigH5;
@property (retain, nonatomic) HTSLiveImage *previewBackground;
@property (nonatomic) BOOL hasPreviewBackground;
@property (nonatomic) BOOL startHlFirst;
@property (retain, nonatomic) HTSLiveEpisodeStartHighLight *startHl;
@property (nonatomic) BOOL hasStartHl;
@property (copy, nonatomic) NSString *watchPeriodTextV2;
@property (nonatomic) long long priorityCameraId;
@property (retain, nonatomic) HTSLiveVSCameraInfo *priorityCamera;
@property (nonatomic) BOOL hasPriorityCamera;
@property (copy, nonatomic) NSString *multiSeasonTag;
@property (retain, nonatomic) HTSLiveImage *seasonCover;
@property (nonatomic) BOOL hasSeasonCover;
@property (copy, nonatomic) NSString *latestPeriodStr;
@property (nonatomic) int seasonUpdateStatus;
@property (retain, nonatomic) HTSLiveImage *itemCommentIcon;
@property (nonatomic) BOOL hasItemCommentIcon;
@property (retain, nonatomic) HTSLiveItemComment *itemComment;
@property (nonatomic) BOOL hasItemComment;
@property (retain, nonatomic) HTSLiveWatermark *watermark;
@property (nonatomic) BOOL hasWatermark;
@property (retain, nonatomic) HTSLiveVSWatermark *vsWatermark;
@property (nonatomic) BOOL hasVsWatermark;
@property (nonatomic) long long versionForWebcastRoom;
@property (retain, nonatomic) HTSLiveEpisodePaidInfo *paidInfo;
@property (nonatomic) BOOL hasPaidInfo;
@property (nonatomic) BOOL extentionUsingCollect;
@property (copy, nonatomic) NSString *seasonTypeName;
@property (retain, nonatomic) HTSLiveToolbarBackgroundConfig *toolbarBackgroundConfig;
@property (nonatomic) BOOL hasToolbarBackgroundConfig;
@property (retain, nonatomic) HTSLiveVSBar *vsBar;
@property (nonatomic) BOOL hasVsBar;
@property (retain, nonatomic) HTSLiveSearchInfo *searchInfo;
@property (nonatomic) BOOL hasSearchInfo;
@property (retain, nonatomic) HTSLiveWatchInfo *seasonWatchInfo;
@property (nonatomic) BOOL hasSeasonWatchInfo;
@property (nonatomic) BOOL isForceInsert;
@property (nonatomic) long long indexInAlbumList;
@property (retain, nonatomic) HTSLivePCInfo *pcInfo;
@property (nonatomic) BOOL hasPcInfo;
@property (retain, nonatomic) HTSLiveVSLinkInfo *linkRoomInfo;
@property (nonatomic) BOOL hasLinkRoomInfo;
@property (retain, nonatomic) HTSLiveEpisodeCorrelationSeasonInfo *episodeCorrelationSeasonInfo;
@property (nonatomic) BOOL hasEpisodeCorrelationSeasonInfo;
@property (retain, nonatomic) HTSLiveCommentConfig *commentConfig;
@property (nonatomic) BOOL hasCommentConfig;
@property (copy, nonatomic) NSString *cameraInfosTableTitle;
@property (nonatomic) BOOL needRecord;
@property (copy, nonatomic) NSString *introduction;
@property (copy, nonatomic) NSString *liuyanConfig;
@property (retain, nonatomic) HTSLivePaidLiveInfo *paidLive;
@property (nonatomic) BOOL hasPaidLive;
@property (retain, nonatomic) HTSLiveEpisodeStats *stats;
@property (nonatomic) BOOL hasStats;
@property (retain, nonatomic) GPBInt32ObjectDictionary *privilegeInfo;
@property (readonly, nonatomic) unsigned long long privilegeInfo_Count;
@property (retain, nonatomic) HTSLiveEpisodeBasicInfo *episodeBasicInfo;
@property (nonatomic) BOOL hasEpisodeBasicInfo;
@property (retain, nonatomic) HTSLiveEpisodeExtraBasicInfo *episodeExtraBasicInfo;
@property (nonatomic) BOOL hasEpisodeExtraBasicInfo;
@property (retain, nonatomic) HTSLiveSeasonBasicInfo *seasonBasicInfo;
@property (nonatomic) BOOL hasSeasonBasicInfo;
@property (retain, nonatomic) HTSLiveSeasonExtraBasicInfo *seasonExtraBasicInfo;
@property (nonatomic) BOOL hasSeasonExtraBasicInfo;
@property (retain, nonatomic) HTSLiveShowGeneralInfo *showGeneralInfo;
@property (nonatomic) BOOL hasShowGeneralInfo;
@property (retain, nonatomic) HTSLiveShowExperienceInfo *showExperienceInfo;
@property (nonatomic) BOOL hasShowExperienceInfo;
@property (retain, nonatomic) HTSLiveShowDistributionInfo *showDistributionInfo;
@property (nonatomic) BOOL hasShowDistributionInfo;
@property (retain, nonatomic) HTSLiveShowSupplyInfo *showSupplyInfo;
@property (nonatomic) BOOL hasShowSupplyInfo;
@property (retain, nonatomic) HTSLiveFilterInfo *filterInfo;
@property (nonatomic) BOOL hasFilterInfo;

+ (id)descriptor;

- (id)anchorShareText;
- (id)userShareText;
- (BOOL)isPaywallRoom;
- (BOOL)isMainCamera;
- (id)logpb;
- (void)setLogpb:(id)arg0;
- (id)vipPrivilegeInfo;
- (id)awes_ownerAvatarURLString;
- (id)awes_ownerDisplayID;
- (id)awes_ownerNickname;
- (id)awes_ownerSignature;
- (int)episodeStage;
- (id)videoJson;
- (BOOL)isVerticalStream;
- (int)ies_paidType;
- (BOOL)ies_paidPlayback;
- (long long)ies_ticketID;
- (int)ies_viewRight;
- (void)ies_setViewRight:(int)arg0;
- (BOOL)ies_delivery;
- (void)ies_setDelivery:(BOOL)arg0;
- (double)ies_maxTrialDuration;
- (id)ies_ticketPanelSixJumpURL;
- (long long)ies_attachRoomId;
- (id)ies_attachRoomIdStr;
- (long long)ies_ownerUserId;
- (long long)ies_seasonId;
- (int)ies_modEpisodeType;
- (int)ies_style;
- (id)ies_vid;
- (BOOL)isVIPPlayback;
- (BOOL)isPlayback;
- (id)completeMoreLight;
- (BOOL)vidIsInValid;
- (BOOL)notReportPv;
- (void)setCompleteMoreLight:(id)arg0;
- (void)setVidIsInValid:(BOOL)arg0;
- (void)setNotReportPv:(BOOL)arg0;
- (BOOL)hasVideoInfoURL;
- (BOOL)hasVideoReplayStreamURL;
- (BOOL)isPaywallCamera;
- (BOOL)isPaywallEpisode;
- (BOOL)isUnPaiedUserInPaywall;
- (BOOL)unDeliveriedUserInPaywall;
- (BOOL)isPaiedUserInPaywall;
- (BOOL)isWhiteListUserInPaywall;
- (BOOL)deliveriedUserInPaywall;
- (BOOL)isUnFullViewRightInPaywall;
- (BOOL)permissionDeniedForPaywall;
- (id)dbPriceInfo;
- (BOOL)isVSPrivilegeCamera;
- (id)VSPrivilegeCameraInfo;
- (BOOL)paidAllVSPrivileges;
- (BOOL)paidForVSPrivilegeCamera;
- (BOOL)paidForVIPPlayback;
- (BOOL)isCompleted;
- (long long)duration;
- (id)requestId;
- (id)roomID;
- (void)setRequestId:(id)arg0;
- (id)updateInfo:(id)arg0;

@end
