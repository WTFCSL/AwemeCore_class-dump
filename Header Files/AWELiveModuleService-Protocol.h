//
//     Generated by private class-dump
//

@protocol AWELiveModuleService <HTSService, BCAAInstanceService, AWELiveModuleServiceCommonAdaper, AWELiveModuleServiceDOUYINAdaper, AWELiveModuleServiceDOUYINLiteAdaper>

- (Class)profileExtensionAreaCardControllerClass;
- (id)currentRoomID;
- (void)removeLiveGuideBubbleIfNeeded;
- (BOOL)isLiving;
- (BOOL)canBeLivePodcast;
- (void)checkLivePermission:(id /* block */)arg0;
- (BOOL)isAudienceDuringLive;
- (void)getLiveStatusWithUserList:(id)arg0 sceneParam:(id)arg1 completion:(id /* block */)arg2;
- (void)getLiveStatusWithUserList:(id)arg0 sceneParam:(id)arg1 completion:(id /* block */)arg2;
- (id)getLiveDetailTableViewCellWithReuseIdentifier:(id)arg0 bottomOffset:(double)arg1 showLandscape:(BOOL)arg2;
- (id)getLiveDetailTableViewCellWithReuseIdentifier:(id)arg0 bottomOffset:(double)arg1 showLandscape:(BOOL)arg2;
- (id)getFeedLandscapeLiveCollectionViewCell;
- (id)getFeedLandscapeLiveModelFilter;
- (void)setTableView:(id)arg0 edgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg1;
- (id)getFeedLiveStreamViewControllerWithAvatarClick:(id /* block */)arg0;
- (id)getFeedLiveStreamViewControllerWithAvatarClick:(id /* block */)arg0;
- (id)getFeedLiveStreamVCForAFDWithUserClick:(id /* block */)arg0;
- (id)getFeedLiveStreamVCForAFDWithUserClick:(id /* block */)arg0;
- (id)getFeedVSLiveStreamViewControllerWithAvatarClick:(id /* block */)arg0;
- (id)getFeedVSLiveStreamViewControllerWithAvatarClick:(id /* block */)arg0;
- (id)getAcquaintanceViewControllerWithAvatarClick:(id /* block */)arg0;
- (id)getAcquaintanceViewControllerWithAvatarClick:(id /* block */)arg0;
- (id)getFeedLiveCardViewControllerWithUserClick:(id /* block */)arg0;
- (id)getFeedLiveCardViewControllerWithUserClick:(id /* block */)arg0;
- (BOOL)enableLifeCycleOptimize;
- (void)transitionToWalletPageFrom:(BOOL)arg0;
- (void)transitionToWalletPageFrom:(BOOL)arg0;
- (BOOL)live_walletShouldShowYellowDot;
- (void)live_walletYellowDotHasClicked;
- (void)clearLiveCache;
- (BOOL)canDirectEnterLiveRoom;
- (void)enterLiveRoomWithOwner:(id)arg0 roomLog:(id)arg1 enterFrom:(id)arg2;
- (void)enterLiveRoomWithOwner:(id)arg0 roomLog:(id)arg1 enterFrom:(id)arg2;
- (void)enterLiveRoomWithOwner:(id)arg0 roomLog:(id)arg1 enterFrom:(id)arg2 completion:(id /* block */)arg3;
- (void)enterLiveRoomWithOwner:(id)arg0 roomLog:(id)arg1 enterFrom:(id)arg2 completion:(id /* block */)arg3;
- (void)enterLiveOwners:(id)arg0 defaultOwner:(id)arg1 delegate:(id)arg2 roomLog:(id)arg3 enterFrom:(id)arg4 completion:(id /* block */)arg5;
- (void)checkFeedLiveStatus:(id)arg0 referString:(id)arg1 force:(BOOL)arg2;
- (void)checkRoomAndUserStatusWithModel:(id)arg0 withBlock:(id /* block */)arg1;
- (void)checkRoomAndUserStatusWithModel:(id)arg0 withBlock:(id /* block */)arg1;
- (void)checkRoomAndUserStatusWithRoomID:(id)arg0 userID:(id)arg1 referString:(id)arg2 isPreView:(BOOL)arg3 extraParams:(id)arg4 withBlock:(id /* block */)arg5;
- (void)checkRoomAndUserStatusWithRoomID:(id)arg0 userID:(id)arg1 referString:(id)arg2 isPreView:(BOOL)arg3 extraParams:(id)arg4 withBlock:(id /* block */)arg5;
- (void)checkVSBarRoomAndUserStatusWithRoomID:(id)arg0 userID:(id)arg1 withBlock:(id /* block */)arg2;
- (void)checkVSBarRoomAndUserStatusWithRoomID:(id)arg0 userID:(id)arg1 withBlock:(id /* block */)arg2;
- (void)checkLiveRoomStatusWithUserIDs:(id)arg0 extraParamas:(id)arg1 completion:(id /* block */)arg2;
- (void)checkLiveRoomStatusWithUserIDs:(id)arg0 extraParamas:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchRoomInfoWithUserList:(id)arg0 completion:(id /* block */)arg1;
- (void)fetchRoomInfoWithUserList:(id)arg0 completion:(id /* block */)arg1;
- (void)fetchVSVideoInfoWithEpisodeIDs:(id)arg0 params:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchVSVideoInfoWithEpisodeIDs:(id)arg0 params:(id)arg1 completion:(id /* block */)arg2;
- (void)showLiveShareTicketWithParams:(id)arg0;
- (void)showLiveShareTicketWithParams:(id)arg0;
- (void)requestForTicket:(id)arg0 completion:(id /* block */)arg1;
- (void)requestForTicket:(id)arg0 completion:(id /* block */)arg1;
- (void)requestForTicket:(long long)arg0 stageID:(long long)arg1 completion:(id /* block */)arg2;
- (void)requestForTicket:(long long)arg0 stageID:(long long)arg1 completion:(id /* block */)arg2;
- (BOOL)isCurrentLivePlaying:(id)arg0;
- (id)fullLinkMonitorData;
- (long long)timeGapOfAutoUpdateLiveState;
- (BOOL)shouldShowLiveOnUserRecommendCard;
- (id)getRoomFinishedHelper;
- (void)buyProductWithIapID:(id)arg0 productID:(id)arg1 orderID:(id)arg2 completion:(id /* block */)arg3;
- (void)buyProductWithIapID:(id)arg0 productID:(id)arg1 orderID:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchUsers:(BOOL)arg0 offset:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)anchorSettingEnabled;
- (long long)whenToPush;
- (void)pushOpenType:(id /* block */)arg0;
- (id)getLiveEntranceViewControllerWithHolderController:(id)arg0 containerView:(id)arg1 sourceParam:(id)arg2;
- (id)getLiveEntranceViewControllerWithHolderController:(id)arg0 containerView:(id)arg1 sourceParam:(id)arg2;
- (id)liveCameraWithRecorder:(id)arg0;
- (id)liveCameraWithRecorder:(id)arg0;
- (void)trackEnterLiveMode:(id)arg0;
- (id)gurdLiveChannels;
- (id)gurdLivePatterns;
- (void)openScreenShotInLiveRoomWithParams:(id)arg0;
- (void)openScreenShotInLiveRoomWithParams:(id)arg0;
- (void)playVSVideo;
- (void)pauseVSVideo;
- (BOOL)isAudioThemeEnableForPreview;
- (id)getLiveRoomFactory;
- (id)liveURL:(id)arg0 addQueryItems:(id)arg1;
- (void)openLiveScheme:(id)arg0;
- (void)openLiveScheme:(id)arg0 fromInside:(BOOL)arg1;
- (void)openLiveScheme:(id)arg0 fromInside:(BOOL)arg1 openResult:(id /* block */)arg2;
- (id)scheduleViewConfigModel;
- (void)transitionToLiveVerifyPageFrom:(id)arg0;
- (void)transitionToLiveVerifyPageFrom:(id)arg0;
- (void)transitionToLiveVerifyPageFrom:(id)arg0 params:(id)arg1;
- (void)transitionToLiveVerifyPageFrom:(id)arg0 params:(id)arg1;
- (void)transitionToLiveVerifyPageFrom:(id)arg0 params:(id)arg1 enableOptimization:(BOOL)arg2;
- (void)transitionToLiveVerifyPageFrom:(id)arg0 params:(id)arg1 enableOptimization:(BOOL)arg2;
- (void)transitionToLiveVerifyPageFrom:(id)arg0 params:(id)arg1 enableOptimization:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)transitionToLiveVerifyPageFrom:(id)arg0 params:(id)arg1 enableOptimization:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)transitionToLiveVerifyPageTrack:(id)arg0;
- (void)transitionToLiveVerifyPageTrack:(id)arg0;
- (void)transitionToWithdrawVerifyPage;
- (void)openLivingBodyProcess:(id)arg0 completion:(id /* block */)arg1;
- (void)openByteCertWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)openByteCertWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)ocrTakePhoto:(id)arg0 completion:(id /* block */)arg1;
- (void)uploadOCRPhoto:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)enableZYFaceCertification;
- (BOOL)enableEnterFinishPage;
- (id)vsCenterDeepLink;
- (BOOL)isRelactionTagEnable;
- (void)getFeedInteractListWith:(id)arg0 isAudio:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)getFeedInteractListWith:(id)arg0 isAudio:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)getFeedInteractListWith:(id)arg0 anchorID:(id)arg1 isAudio:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)getFeedInteractListWith:(id)arg0 anchorID:(id)arg1 isAudio:(BOOL)arg2 completion:(id /* block */)arg3;
- (id)liveFeedStatusChecker;
- (void)stopLivePictureInPicture;
- (BOOL)disableFeedMixLiveRouterCheck:(id)arg0;
- (id)live_imageWithName:(id)arg0;
- (id)live_imageWithName:(id)arg0;
- (void)subscribeLiveStatusWithAwemeModels:(id)arg0;
- (void)subscribeLiveStatusWithAwemeModels:(id)arg0;
- (void)subscribeLiveStatusWithAwemeModels:(id)arg0 complete:(id /* block */)arg1;
- (void)subscribeLiveStatusWithAwemeModels:(id)arg0 complete:(id /* block */)arg1;
- (long long)lastConnMs;
- (long long)lastDisconnMs;
- (BOOL)isLiveFeedItem:(id)arg0;
- (void)preloadVirtualBgImageWithAwemeModel:(id)arg0;
- (void)preloadVirtualBgImageWithAwemeModel:(id)arg0;
- (void)preloadVirtualBgImageWithLiveRoomeModel:(id)arg0;
- (void)preloadVirtualBgImageWithLiveRoomeModel:(id)arg0;
- (BOOL)isExtremeWeakNetwork;
- (id)weakNetworkNotDistributeConfig;
- (void)nodeOptWithPrasedItems:(id)arg0;
- (void)nodeOptWithPrasedItems:(id)arg0;
- (void)fetchSkylightDataWithURL:(id)arg0 parmas:(id)arg1 finished:(id /* block */)arg2;
- (void)fetchSkylightDataWithURL:(id)arg0 parmas:(id)arg1 finished:(id /* block */)arg2;
- (void)fetchSkylightPageDataWithURL:(id)arg0 params:(id)arg1 finished:(id /* block */)arg2;
- (void)fetchSkylightPageDataWithURL:(id)arg0 params:(id)arg1 finished:(id /* block */)arg2;
- (void)fetchRecommendDataWithURL:(id)arg0 parmas:(id)arg1 finished:(id /* block */)arg2;
- (void)fetchRecommendDataWithURL:(id)arg0 parmas:(id)arg1 finished:(id /* block */)arg2;
- (id)getConcernSkylightTrackParamsWithModel:(id)arg0;
- (id)getConcernSkylightTrackParamsWithModel:(id)arg0;
- (void)setConcernSkylightLinkUserID:(id)arg0;
- (id)getConcernSkylightAdInfoDictWithModel:(id)arg0;
- (id)getConcernSkylightAdInfoDictWithModel:(id)arg0;
- (void)enterLiveWithModel:(id)arg0 deduplicationItems:(id)arg1 delegate:(id)arg2 roomLog:(id)arg3 enterFrom:(id)arg4 completion:(id /* block */)arg5;
- (void)enterLiveWithModel:(id)arg0 deduplicationItems:(id)arg1 delegate:(id)arg2 roomLog:(id)arg3 enterFrom:(id)arg4 completion:(id /* block */)arg5;
- (BOOL)isConcernSkylightModelExist:(id)arg0;
- (id)getConcernSkylightRequestURL;
- (id)getConcernSkylightPageRequestURL;
- (void)setKVStoreDate:(id)arg0 forKey:(id)arg1;
- (void)setKVStoreDate:(id)arg0 forKey:(id)arg1;
- (id)getKVStoreDateforKey:(id)arg0;
- (long long)getDisplayedRoomidsGapTime;
- (void)setGlobalMute:(BOOL)arg0;
- (void)detachWindowPlayer;
- (void)atachWindow:(id)arg0;
- (void)muteWindow:(BOOL)arg0;
- (struct CGSize { double x0; double x1; })currentVideoSize;
- (id)currentLivingAwemeModel;
- (id)liveTopicStreamingManager;
- (id)liveSmallWindowManager;
- (void)muteLiveRoom:(BOOL)arg0 stopLivePlay:(BOOL)arg1;
- (BOOL)isInteractLinkingMicSmallWindowShowingWithErrorToast:(id)arg0;
- (BOOL)hasInteractLinkingMicSmallWindowSwtichedAudioScenarioToCommunication;
- (id)trackWithInteractSmallWindowType;
- (void)fetchCNYRoomByUid:(id)arg0 secUid:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchCNYRoomByUid:(id)arg0 secUid:(id)arg1 completion:(id /* block */)arg2;
- (void)enterLiveRoom:(id)arg0 roomLog:(id)arg1;
- (void)fetchTopviewRoomByUid:(id)arg0 secUid:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchTopviewRoomByUid:(id)arg0 secUid:(id)arg1 completion:(id /* block */)arg2;
- (void)checkBlessingStickerExistsWithCompleteBlock:(id /* block */)arg0;
- (void)checkBlessingStickerExistsWithCompleteBlock:(id /* block */)arg0;
- (void)checkHasSameStickerWithSticker:(id)arg0 completeBlock:(id /* block */)arg1;
- (void)checkHasSameStickerWithSticker:(id)arg0 completeBlock:(id /* block */)arg1;
- (void)performReportActionForHostCompletion:(id /* block */)arg0;
- (void)performReportActionForHostCompletion:(id /* block */)arg0;
- (id)getReportCachedRoomIDs:(id)arg0;
- (id)webpViewWithName:(id)arg0;
- (id)webpViewWithName:(id)arg0;
- (id)webpImageViewWithName:(id)arg0;
- (id)webpImageViewWithName:(id)arg0;
- (id)dataWithFileName:(id)arg0;
- (id)dataWithFileName:(id)arg0;
- (void)openAnchorTimeNoticeSettingPanelCompletion:(id /* block */)arg0;
- (void)openAnchorTimeScheduleWithConfig:(id)arg0 extra:(id)arg1 Completion:(id /* block */)arg2;
- (void)openAnchorTimeScheduleWithConfig:(id)arg0 extra:(id)arg1 Completion:(id /* block */)arg2;
- (void)showAnnouncementPanelWithConfig:(id)arg0 extra:(id)arg1 completion:(id /* block */)arg2;
- (void)showAnnouncementPanelWithConfig:(id)arg0 extra:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchAnnouncementTextWithSecAnchorId:(id)arg0 completion:(id /* block */)arg1;
- (void)fetchAnnouncementTextWithSecAnchorId:(id)arg0 completion:(id /* block */)arg1;
- (void)liveAnnouncementChangeSubscribeState:(BOOL)arg0 secAnchorId:(id)arg1 completion:(id /* block */)arg2;
- (void)goodsLiveAppointmentChangeSubscribeState:(BOOL)arg0 authorID:(id)arg1 secAnchorId:(id)arg2 appointmentID:(id)arg3 completion:(id /* block */)arg4;
- (void)makeLiveAppointmentWithAppointmentID:(long long)arg0 completion:(id /* block */)arg1;
- (void)makeLiveAppointmentWithAppointmentID:(long long)arg0 completion:(id /* block */)arg1;
- (void)cancelLiveAppointmentWithAppointmentID:(long long)arg0 completion:(id /* block */)arg1;
- (void)cancelLiveAppointmentWithAppointmentID:(long long)arg0 completion:(id /* block */)arg1;
- (void)makeLiveAppointmentWithAppointmentID:(long long)arg0 enterFromMerge:(id)arg1 enterMethod:(id)arg2 completion:(id /* block */)arg3;
- (void)makeLiveAppointmentWithAppointmentID:(long long)arg0 enterFromMerge:(id)arg1 enterMethod:(id)arg2 completion:(id /* block */)arg3;
- (void)cancelLiveAppointmentWithAppointmentID:(long long)arg0 enterFromMerge:(id)arg1 enterMethod:(id)arg2 completion:(id /* block */)arg3;
- (void)cancelLiveAppointmentWithAppointmentID:(long long)arg0 enterFromMerge:(id)arg1 enterMethod:(id)arg2 completion:(id /* block */)arg3;
- (void)dealWithDoubleInterationSEI:(id)arg0 isPreview:(BOOL)arg1 isExternalScene:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)dealWithDoubleInterationSEI:(id)arg0 isPreview:(BOOL)arg1 isExternalScene:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)dealShareWithDoubleInterationSEI:(id)arg0 isExternalScene:(BOOL)arg1 containerView:(id)arg2 completion:(id /* block */)arg3;
- (void)dealShareWithDoubleInterationSEI:(id)arg0 isExternalScene:(BOOL)arg1 containerView:(id)arg2 completion:(id /* block */)arg3;
- (void)parseBigPartySEI:(id)arg0 completion:(id /* block */)arg1;
- (id)guestListViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 maxGuestNum:(long long)arg1 listModel:(id)arg2;
- (id)guestListViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 maxGuestNum:(long long)arg1 listModel:(id)arg2;
- (BOOL)enableNearbyAudioPreviewChanged;
- (id)feedAudioPreviewViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 userModel:(id)arg1 listModel:(id)arg2 roomModel:(id)arg3 awemeModel:(id)arg4 smallModel:(BOOL)arg5;
- (id)feedAudioPreviewViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 userModel:(id)arg1 listModel:(id)arg2 roomModel:(id)arg3 awemeModel:(id)arg4 smallModel:(BOOL)arg5;
- (BOOL)resolutionSwitch;
- (id)resolutionForPullData:(id)arg0 source:(long long)arg1 room:(id)arg2;
- (id)resolutionForPullData:(id)arg0 source:(long long)arg1 room:(id)arg2;
- (BOOL)nearbyPreviewVideotalkRoomEnable;
- (void)fetchDidEnableShakeInNearbyMatchPage:(id /* block */)arg0;
- (void)fetchDidEnableShakeInNearbyMatchPage:(id /* block */)arg0;
- (void)setUserPreferDarkModeStyle:(long long)arg0;
- (void)switchUIConfigWithDefaultSetting;
- (void)setHostUserPreferStype:(long long)arg0;
- (Class)challengeLiveDetailCellIdentifier;
- (BOOL)enableShowChallenge;
- (void)showSoloKTVDetailViewWithSongId:(id)arg0 extra:(id)arg1;
- (void)showSoloKTVDetailViewWithSongId:(id)arg0 extra:(id)arg1;
- (void)enterLiveRoomWithLiveInfo:(id)arg0 roomLog:(id)arg1;
- (void)enterLiveRoomWithLiveInfo:(id)arg0 roomLog:(id)arg1;
- (BOOL)forceCloseCurrentRoom;
- (BOOL)isInInteractiveScene;
- (void)forceUpdateToPortraitComplete:(id /* block */)arg0;
- (void)forceUpdateToPortraitComplete:(id /* block */)arg0;
- (void)requestReuseLivePlayer:(id)arg0;
- (unsigned long long)getCleanSizeInBackground;
- (unsigned long long)getCleanSizeInForeground;
- (BOOL)cleanCacheInBackground;
- (BOOL)cleanCacheInForeground;
- (void)cleanLiveGiftCacheInBackground;
- (BOOL)enableShowMyDownloadEntrance;
- (BOOL)vsEnableSameFeedFromProfile;
- (void)willEnterFullScreen:(id)arg0;
- (void)didEnterFullScreen:(id)arg0;
- (void)timorVCWillAppear:(id)arg0;
- (void)timorVCDidAppear:(id)arg0;
- (void)timorVCDidAppear:(id)arg0 screenRate:(double)arg1;
- (void)timorVCWillDisappear:(id)arg0;
- (void)timorVCDidDisappear:(id)arg0;
- (void)timorVCWillEnterSmallScreen:(id)arg0;
- (void)timorVCDidEnterSmallScreen:(id)arg0;
- (void)timorWillCloseXScreenWindow:(id)arg0;
- (void)timorVCWillAppear:(id)arg0 withoutLivePause:(BOOL)arg1;
- (void)openExplainCardSettingDialogWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)openExplainCardSettingDialogWithParams:(id)arg0 completion:(id /* block */)arg1;
- (id)liveAnchorInnerPushURLString;
- (BOOL)showAlertOpenOtherWithAdInfo:(id)arg0 openURL:(id)arg1 actionHandler:(id /* block */)arg2;
- (BOOL)showAlertOpenOtherWithAdInfo:(id)arg0 openURL:(id)arg1 actionHandler:(id /* block */)arg2;
- (BOOL)routeToWebURL:(id)arg0 playableURLIfNeed:(id)arg1 adInfo:(id)arg2 queries:(id)arg3;
- (BOOL)routeToWebURL:(id)arg0 playableURLIfNeed:(id)arg1 adInfo:(id)arg2 queries:(id)arg3;
- (BOOL)routeToLynxURL:(id)arg0 adInfo:(id)arg1 queries:(id)arg2;
- (BOOL)routeToLynxURL:(id)arg0 adInfo:(id)arg1 queries:(id)arg2;
- (BOOL)enableScrollWithMessageList;
- (void)slideRoomEnter;
- (void)slideRoomExit;
- (BOOL)messageListScrolling;
- (BOOL)slideEnableScrollWhenScrollMessageList;
- (void)setSlideEnableScrollWhenScrollMessageList:(BOOL)arg0;
- (void)feedCollectionViewWillBeginDragging:(id)arg0;
- (void)feedCollectionViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)feedCollectionViewDidEndDecelerating:(id)arg0;
- (void)feedCollectionViewScrollBack;
- (id)rechargeCenter;
- (void)buyWithBizParams:(id)arg0 business:(id)arg1 completion:(id /* block */)arg2;
- (void)buyWithBizParams:(id)arg0 business:(id)arg1 completion:(id /* block */)arg2;
- (void)openChargeViewFrom:(id)arg0 info:(id)arg1 completion:(id /* block */)arg2 dismiss:(id /* block */)arg3;
- (void)openChargeViewFrom:(id)arg0 info:(id)arg1 completion:(id /* block */)arg2 dismiss:(id /* block */)arg3;
- (id)liveCurrencyName;
- (id)commomTrackParamForVSLiveRoom:(id)arg0;
- (id)commomTrackParamForVSLiveRoom:(id)arg0;
- (id)trackingLiveTypeWithLiveRoom:(id)arg0;
- (id)trackingLiveTypeWithLiveRoom:(id)arg0;
- (id)trackingInteractTypeWithLiveRoom:(id)arg0;
- (id)trackingInteractTypeWithLiveRoom:(id)arg0;
- (id)trackingLiveTypeWithAWELiveRoom:(id)arg0;
- (id)trackingLiveTypeWithAWELiveRoom:(id)arg0;
- (id)trackingInteractTypeWithAWELiveRoom:(id)arg0;
- (id)trackingInteractTypeWithAWELiveRoom:(id)arg0;
- (id)trackingLiveEnterFromAdTypeWithLiveRoom:(id)arg0;
- (id)trackingLiveEnterFromAdTypeWithLiveRoom:(id)arg0;
- (id)trackingLiveRequestIdWithRoom:(id)arg0;
- (id)trackingLiveRequestIdWithRoom:(id)arg0;
- (id)trackingLiveLogpbWithRoom:(id)arg0;
- (id)trackingLiveLogpbWithRoom:(id)arg0;
- (id)innerPushManager;
- (void)uploadBellPushStrategyWithToUserID:(id)arg0 secUid:(id)arg1 liveStrategy:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)uploadBellPushStrategyWithToUserID:(id)arg0 secUid:(id)arg1 liveStrategy:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (BOOL)isEnableAudioCaptureInBackground;
- (id)enjoyFeedTogetherUserService;
- (id)enjoyFeedTogetherService;
- (void)enjoyFeedTogetherCloseRoom;
- (BOOL)isAudienceInEnjoyFeedTogetherRoom;
- (BOOL)isAnchorInEnjoyFeedTogetherRoom;
- (void)logLocalInfo:(id)arg0;
- (void)fullLinkMonitorService:(id)arg0 code:(long long)arg1 category:(id)arg2 metric:(id)arg3 extra:(id)arg4;
- (Class)newProfileExtensionAreaCardControllerClass;
- (Class)profilePersonalCenterLiveEntryClass;
- (BOOL)shouldShowLivePrivacySettingEntry;
- (id)makeLinkmicDistributionSettingPanelWithInitialOption:(long long)arg0 showAction:(id /* block */)arg1 dismissAction:(id /* block */)arg2 remoteOptionSetupCallback:(id /* block */)arg3 selectionAction:(id /* block */)arg4 showRulePageAction:(id /* block */)arg5 closeRulePageAction:(id /* block */)arg6;
- (id)makeLinkmicDistributionSettingPanelWithInitialOption:(long long)arg0 showAction:(id /* block */)arg1 dismissAction:(id /* block */)arg2 remoteOptionSetupCallback:(id /* block */)arg3 selectionAction:(id /* block */)arg4 showRulePageAction:(id /* block */)arg5 closeRulePageAction:(id /* block */)arg6;
- (id)mappedDistributionTrackStringFromOption:(long long)arg0;
- (id)mappedDistributionTrackStringFromOption:(long long)arg0;
- (id)VSTabViewControllerForUserID:(id)arg0;
- (id)VSTabViewControllerForUserID:(id)arg0;
- (void)showInvitePanelWithView:(id)arg0 showCompletion:(id /* block */)arg1 hideCompletion:(id /* block */)arg2;
- (void)showInvitePanelWithView:(id)arg0 showCompletion:(id /* block */)arg1 hideCompletion:(id /* block */)arg2;
- (BOOL)isScreenshotLiving;
- (void)postUnreadRoom:(id)arg0 unreadExtra:(id)arg1;
- (void)postUnreadRoom:(id)arg0 unreadExtra:(id)arg1 withCompletionCallback:(id /* block */)arg2;
- (void)postUnreadWithAwemeModels:(id)arg0 extra:(id)arg1;
- (void)postUnreadWithAwemeModels:(id)arg0 extra:(id)arg1;
- (id)liveHybirdContainerVCWithURL:(id)arg0;
- (id)liveHybirdContainerVCWithURL:(id)arg0;
- (void)showLiveGuideBubbleIfNeeded;
- (id)castVideoService;
- (id)liveAcqIntimateABConfigForEnterFrom:(id)arg0;
- (id)liveAcqIntimateABConfigForEnterFrom:(id)arg0;
- (void)fetchLastGuestWithCompletion:(id /* block */)arg0;
- (void)fetchLastGuestWithCompletion:(id /* block */)arg0;
- (void)showAnnouncementPanelViewForAWEIMWithhostVC:(id)arg0 completion:(id /* block */)arg1;
- (void)showAnnouncementPanelViewForAWEIMWithhostVC:(id)arg0 completion:(id /* block */)arg1;
- (void)showAnnouncementEditPanelViewForIMWithHostVC:(id)arg0 announcementID:(long long)arg1 completion:(id /* block */)arg2;
- (void)showAnnouncementEditPanelViewForIMWithHostVC:(id)arg0 announcementID:(long long)arg1 completion:(id /* block */)arg2;
- (id)createShareFansGrouopComposerViewWithConfig:(id)arg0;
- (id)createShareFansGrouopComposerViewWithConfig:(id)arg0;
- (void)updateShareFansGrouopComposerView:(id)arg0 withConfig:(id)arg1;
- (id)getLiveFeedDataContoller;
- (void)requestPaiedInfoForRoom:(id)arg0 ticketID:(id)arg1 type:(long long)arg2 complection:(id /* block */)arg3;
- (void)requestPaiedInfoForRoom:(id)arg0 ticketID:(id)arg1 type:(long long)arg2 complection:(id /* block */)arg3;
- (void)requestAnchorLivePushStatusWithRoomID:(id)arg0 uid:(id)arg1 secUid:(id)arg2 anchorID:(id)arg3 secAnchorID:(id)arg4 completion:(id /* block */)arg5;
- (void)requestAnchorLivePushStatusWithRoomID:(id)arg0 uid:(id)arg1 secUid:(id)arg2 anchorID:(id)arg3 secAnchorID:(id)arg4 completion:(id /* block */)arg5;
- (id)castVideoPanelWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 viewModel:(id)arg1;
- (id)castVideoPanelWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 viewModel:(id)arg1;
- (id)searchCastVideoPanelWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 viewModel:(id)arg1 cancelBlock:(id /* block */)arg2;
- (id)searchCastVideoPanelWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 viewModel:(id)arg1 cancelBlock:(id /* block */)arg2;
- (id)castVideoControllerWithType:(long long)arg0 viewModel:(id)arg1;
- (id)castVideoControllerWithType:(long long)arg0 viewModel:(id)arg1;
- (void)fetchCastVideoSearchSetting:(id)arg0 completion:(id /* block */)arg1;
- (id)createCastPanelLiveStreamDataControllerWithRoomID:(id)arg0;
- (id)createCastPanelLiveStreamDataControllerWithRoomID:(id)arg0;
- (unsigned long long)getVSResolution:(id)arg0;
- (long long)getVSVideoFirstHighlight:(id)arg0;
- (float)getVSPreloadSizeMultiplier:(unsigned long long)arg0;
- (void)userActionWithType:(long long)arg0;
- (void)userActionWithType:(long long)arg0;
- (void)addPreloadTaskWithVideoModel:(id)arg0 resolution:(long long)arg1 preloadSize:(long long)arg2 preloadOffset:(long long)arg3;
- (void)addPreloadTaskWithVideoModel:(id)arg0 resolution:(long long)arg1 preloadSize:(long long)arg2 preloadOffset:(long long)arg3;
- (void)cancelAllPreloadTasks;
- (BOOL)enableLiveVsShowPreloadEpisode;
- (long long)liveVsShowPreloadEpisodeSize;
- (void)fetchVSBarPostpositionRoomWithRoomID:(id)arg0 withBlock:(id /* block */)arg1;
- (void)fetchVSBarPostpositionRoomWithRoomID:(id)arg0 withBlock:(id /* block */)arg1;
- (void)fetchRoomWithScene:(id)arg0 roomID:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchRoomWithScene:(id)arg0 roomID:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchRoomWithScene:(id)arg0 roomID:(id)arg1 extraParams:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchRoomWithScene:(id)arg0 roomID:(id)arg1 extraParams:(id)arg2 completion:(id /* block */)arg3;
- (id)getLiveHYPopupControllerConfigUrlWith:(id)arg0;
- (id)getLiveHYPopupControllerConfigUrlWith:(id)arg0;
- (id)getLiveHybridViewControllerConfigUrlWith:(id)arg0;
- (id)getLiveHybridViewControllerConfigUrlWith:(id)arg0;
- (BOOL)isLiveHybridViewControllerWebviewType:(id)arg0;
- (BOOL)enableStreamDataLoad;
- (void)fetchPreStreamAICutWithStreamId:(id)arg0 Completion:(id /* block */)arg1;
- (void)fetchPreStreamAICutWithStreamId:(id)arg0 Completion:(id /* block */)arg1;
- (id)getChatGroupOnlineUserViewController:(id)arg0 extraParams:(id)arg1;
- (id)vsWatermarkFromDict:(id)arg0;
- (id)vsWatermarkFromDict:(id)arg0;
- (BOOL)isInEcommerceRoom;
- (id)currentAnchorID;
- (BOOL)flower_isInLiveScene;
- (BOOL)flower_canShowAlert;
- (void)registerCameraPermissionHandler:(id)arg0;
- (void)removeCameraPermissionHandler:(id)arg0;
- (void)stopVideoCaptureWithCompletion:(id /* block */)arg0 privacyCert:(id)arg1;
- (void)stopVideoCaptureWithCompletion:(id /* block */)arg0 privacyCert:(id)arg1;
- (void)stopAudioCaptureWithCompletion:(id /* block */)arg0 privacyCert:(id)arg1;
- (void)stopAudioCaptureWithCompletion:(id /* block */)arg0 privacyCert:(id)arg1;
- (void)showGameAlertWithSchema:(id)arg0 userID:(id)arg1 description:(id)arg2;
- (void)showGameAlertWithSchema:(id)arg0 userID:(id)arg1 description:(id)arg2;
- (void)onAppModuleWillBecomeActive;
- (id)vsFormatLiveStreamingView;
- (id)createVSVideoPlayerWithVsEpisode:(id)arg0;
- (id)createVSVideoPlayerWithVsEpisode:(id)arg0;
- (void)enterVSVideoRoomWithEnterParams:(id)arg0 player:(id)arg1;
- (void)enterVSVideoRoomWithEnterParams:(id)arg0 player:(id)arg1;
- (id)createPlaybackPlayerWithEpisode:(id)arg0;
- (id)createPlaybackPlayerWithEpisode:(id)arg0;
- (id)createPlaybackPlayerWithEpisode:(id)arg0 andLiveSource:(long long)arg1;
- (id)createPlaybackPlayerWithEpisode:(id)arg0 andLiveSource:(long long)arg1;
- (void)enterPlaybackRoomWithEnterParams:(id)arg0 player:(id)arg1;
- (void)enterPlaybackRoomWithEnterParams:(id)arg0 player:(id)arg1;
- (void)enterPlaybackRoomWithEnterParams:(id)arg0 extraParams:(id)arg1 player:(id)arg2;
- (void)enterPlaybackRoomWithEnterParams:(id)arg0 extraParams:(id)arg1 player:(id)arg2;
- (BOOL)disableVSBarForPaidLive;
- (id)getLiveLynxContainerForIMWithURL:(id)arg0 fallBackURL:(id)arg1 preferredSize:(struct CGSize { double x0; double x1; })arg2 changeBlock:(id /* block */)arg3;
- (id)getLiveLynxContainerForIMWithURL:(id)arg0 fallBackURL:(id)arg1 preferredSize:(struct CGSize { double x0; double x1; })arg2 changeBlock:(id /* block */)arg3;
- (id)streamAbnormalImageUrl;
- (id)liveEnterRoomParamsList;
- (id)liveXTabViewController;
- (id)xTabSkyLightService;
- (id)liveMultiTabViewControllerWithParams:(id)arg0;
- (id)liveMultiTabViewControllerWithParams:(id)arg0;
- (id)vsTabService;
- (id)vsMessageService;
- (id)imShareLiveMessageService;
- (id)liveProfileMessageService;
- (id)liveCustomMessageService;
- (BOOL)enableInstallSearchMessageChannel;
- (BOOL)enableInstallIMShareMessageChannel;
- (BOOL)enableInstallProfileMessageChannel;
- (void)reportECEventWithCouponId:(long long)arg0 roomId:(id)arg1;
- (void)reportECEventWithCouponId:(long long)arg0 roomId:(id)arg1;
- (BOOL)allowDegradeLiveHeadAnimation;
- (void)enterLiveWithUserModels:(id)arg0 defaultUserModelIndex:(long long)arg1 delegate:(id)arg2 roomLog:(id)arg3 completion:(id /* block */)arg4;
- (void)enterLiveWithUserModels:(id)arg0 defaultUserModelIndex:(long long)arg1 delegate:(id)arg2 roomLog:(id)arg3 completion:(id /* block */)arg4;
- (void)enterLiveWithItems:(id)arg0 defaultItemIndex:(long long)arg1 delegate:(id)arg2 roomLog:(id)arg3 completion:(id /* block */)arg4;
- (void)enterLiveWithItems:(id)arg0 defaultItemIndex:(long long)arg1 delegate:(id)arg2 roomLog:(id)arg3 completion:(id /* block */)arg4;
- (void)directEnterLiveFrom:(id)arg0 roomLog:(id)arg1 completion:(id /* block */)arg2;
- (void)directEnterLiveFrom:(id)arg0 roomLog:(id)arg1 completion:(id /* block */)arg2;
- (void)preloadPlayerStreamWithFeedItem:(id)arg0;
- (void)preloadPlayerStreamWithFeedItem:(id)arg0;
- (void)cancelPreloadPlayerStream;
- (id)currentPreloadStreamRoomID;
- (id)episodePurchaseSchema;
- (id)VSLivePurchaseOptimizedSchema;
- (id)VSLivePurchaseOptimizedSchema;
- (BOOL)enablePaidLiveVisibilityEntrance;
- (id)livePaidVisibilityEntranceConfig;
- (id)vsTracker;
- (void)vsFormatLatestWatchWithUserId:(id)arg0 completion:(id /* block */)arg1;
- (void)vsFormatLatestWatchWithUserId:(id)arg0 completion:(id /* block */)arg1;
- (void)getProfileSidebarMyCacheVideo;
- (BOOL)enableProfileSideShowMyCacheEntry;
- (id)liveTracker;
- (id)createTrackerConfigInfo:(id)arg0 pageName:(id)arg1 blockName:(id)arg2;
- (void)showHUD:(id)arg0;
- (void)fetchRoomInfoWithUid:(id)arg0 completion:(id /* block */)arg1;
- (void)fetchRoomInfoWithUid:(id)arg0 completion:(id /* block */)arg1;
- (void)fetchRoomInfoAndRoomDicWithUid:(id)arg0 completion:(id /* block */)arg1;
- (void)fetchRoomInfoAndRoomDicWithUid:(id)arg0 completion:(id /* block */)arg1;
- (void)fetchPKInfoWithAnchorId:(id)arg0 roomId:(id)arg1 battleId:(id)arg2 channelId:(id)arg3 rivalRoomId:(id)arg4 completion:(id /* block */)arg5;
- (void)fetchPKInfoWithAnchorId:(id)arg0 roomId:(id)arg1 battleId:(id)arg2 channelId:(id)arg3 rivalRoomId:(id)arg4 completion:(id /* block */)arg5;
- (void)fetchLiveRoomStatusWithRoomId:(id)arg0 completion:(id /* block */)arg1;
- (void)fetchLiveRoomStatusWithRoomId:(id)arg0 completion:(id /* block */)arg1;
- (void)fetchRoomInfoWithSecuid:(id)arg0 completion:(id /* block */)arg1;
- (void)fetchRoomInfoWithSecuid:(id)arg0 completion:(id /* block */)arg1;
- (void)fetchRoomInfoAndRoomDicWithUid:(id)arg0 secUid:(id)arg1 scene:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchRoomInfoAndRoomDicWithUid:(id)arg0 secUid:(id)arg1 scene:(id)arg2 completion:(id /* block */)arg3;
- (id)ieslive_roomModelWithJsonDict:(id)arg0;
- (id)ieslive_roomModelWithJsonDict:(id)arg0;
- (id)parmasWithAdSkyLightLive:(id)arg0;
- (id)parmasWithAdSkyLightLive:(id)arg0;
- (id)getBaseURL;
- (id)getGeneralParamsWithUrlString:(id)arg0;
- (id)getGeneralParamsWithUrlString:(id)arg0;
- (void)fetchRelatedGameRoomListWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)fetchRelatedGameRoomListWithParams:(id)arg0 completion:(id /* block */)arg1;
- (double)calculateWithFontSize:(double)arg0;
- (double)calculateWithFontSize:(double)arg0;
- (double)currentFontScale;
- (BOOL)shouldCheckLiveStatusChange;
- (BOOL)isDOUYIN;
- (id)interactGameMorePanelAdditionalItemsWithAppId:(id)arg0 extraInfo:(id)arg1;
- (id)interactGameMorePanelAdditionalItemsWithAppId:(id)arg0 extraInfo:(id)arg1;
- (void)receiveShareChannelEvent:(id)arg0 platform:(id)arg1 liveShareModel:(id)arg2 extraParams:(id)arg3;
- (void)receiveShareChannelEvent:(id)arg0 platform:(id)arg1 liveShareModel:(id)arg2 extraParams:(id)arg3;
- (void)hideLandscapePannelContainer;
- (void)forceDeviceSwitchOrientation:(long long)arg0 completion:(id /* block */)arg1;
- (void)forceDeviceSwitchOrientation:(long long)arg0 completion:(id /* block */)arg1;
- (void)trackLivesdkShareWithParams:(id)arg0;
- (void)trackLivesdkShareWithParams:(id)arg0;
- (void)shareTaskFinished:(id)arg0 withResult:(id)arg1;
- (id)activityXTabViewControllerWithSchema:(id)arg0 extraParams:(id)arg1;
- (id)activityXTabViewControllerWithSchema:(id)arg0 extraParams:(id)arg1;
- (void)openRaceHighLightVCWithData:(id)arg0 index:(long long)arg1 roomID:(id)arg2 episodeID:(id)arg3;
- (void)openRaceHighLightVCWithData:(id)arg0 index:(long long)arg1 roomID:(id)arg2 episodeID:(id)arg3;
- (void)viewDidAppearController:(id)arg0;
- (void)viewDidAppearController:(id)arg0;
- (void)executePostLaunchTask;
- (void)transferAwemeModelForLive:(id)arg0 withIsFirstFetchByColdLaunch:(BOOL)arg1;
- (void)transferAwemeModelForLive:(id)arg0 withIsFirstFetchByColdLaunch:(BOOL)arg1;
- (void)shareCurrentLiveRoomToStory;
- (void)shareLiveRoomWithShareModel:(id)arg0 awemeRoomModel:(id)arg1 trackParams:(id)arg2 dismiss:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)shareLiveRoomWithShareModel:(id)arg0 awemeRoomModel:(id)arg1 trackParams:(id)arg2 dismiss:(id /* block */)arg3 completion:(id /* block */)arg4;
- (id)liveStatusManager;
- (Class)liveStatusInfoABConfigImpl;
- (void)setPowerSaveClearType:(long long)arg0;
- (void)loadServiceByPuzzle;
- (void)loadServiceByPuzzle;
- (void)joinMatrixWithToken:(id)arg0 completed:(id /* block */)arg1;
- (void)joinMatrixWithToken:(id)arg0 completed:(id /* block */)arg1;
- (void)gameViewWillAppear:(id)arg0 mpID:(id)arg1;
- (void)gameViewDidAppear:(id)arg0 mpID:(id)arg1;
- (void)gameViewWillDisappear:(id)arg0 mpID:(id)arg1;
- (void)gameViewDidDisappear:(id)arg0 mpID:(id)arg1;
- (void)gameInterfaceOrientationChange:(long long)arg0 mpID:(id)arg1;
- (void)preloadEffectIfNeeded:(id /* block */)arg0;
- (id)getUserAvatarLivePreviewManager;
- (void)shareItemWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)shareItemWithParams:(id)arg0 completion:(id /* block */)arg1;
- (id)liveViewControllerWithUserID:(id)arg0 secUserID:(id)arg1 targetUser:(id)arg2 delegate:(id)arg3;
- (id)liveViewControllerWithUserID:(id)arg0 secUserID:(id)arg1 targetUser:(id)arg2 delegate:(id)arg3;
- (BOOL)enableLivePreview0vvRecord;
- (void)check0vvFeedPostUnreadWithCurrentIndex:(unsigned long long)arg0 withCompleteCallback:(id /* block */)arg1;
- (void)check0vvFeedPostUnreadWithCurrentIndex:(unsigned long long)arg0 withCompleteCallback:(id /* block */)arg1;
- (id)getFeedLabelTagView;
- (void)addLiveRoomFeedLabelWithAwemeModel:(id)arg0;
- (void)addLiveRoomFeedLabelWithAwemeModel:(id)arg0;
- (void)removeLiveRoomFeedLabelWithAwemeModel:(id)arg0;
- (void)removeLiveRoomFeedLabelWithAwemeModel:(id)arg0;
- (BOOL)hasRecoomendToFriends:(id)arg0;
- (BOOL)hasRecoomendToFriends:(id)arg0;
- (BOOL)liveIMChatLiveStatusCheck;
- (void)requestSoloKTVBulletMsgWithVideoId:(id)arg0 videoSchema:(id)arg1 completion:(id /* block */)arg2;
- (void)requestSoloKTVBulletMsgWithVideoId:(id)arg0 videoSchema:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)liveAppointmentStatusSwitch;
- (id)showLongPressPanelForNewConcernWithAweme:(id)arg0 trackContext:(id)arg1;
- (id)showLongPressPanelForNewConcernWithAweme:(id)arg0 trackContext:(id)arg1;
- (id)liveStrategyService;
- (BOOL)innerFeedRerankOptEnable;
- (BOOL)innerFeedRerankOptV2Enable;
- (void)trackLiveTerminateData:(id)arg0;
- (id)liveTerminateCacheData;
- (void)clearLiveTerminateCacheData;
- (void)trackLiveFirstRequestCommand:(id)arg0;
- (void)fetchVIPVideoInfoWithCompletion:(id /* block */)arg0;
- (void)fetchVIPVideoInfoWithCompletion:(id /* block */)arg0;
- (id)theaterHotLiveSchema;
- (void)setupIMEnvironment;
- (void)traceStartWatchRoom:(id)arg0 watchScene:(long long)arg1 params:(id)arg2;
- (void)traceEndWatchRoom:(id)arg0 watchScene:(long long)arg1 params:(id)arg2;
- (void)traceEnterBackgroundRoom:(id)arg0 watchScene:(long long)arg1 params:(id)arg2;
- (void)traceEnterForegroundRoom:(id)arg0 watchScene:(long long)arg1 params:(id)arg2;
- (void)trackLiveEventWithEvent:(id)arg0 params:(id)arg1;
- (void)trackLiveEventWithEvent:(id)arg0 params:(id)arg1;
- (BOOL)openLynxURL:(id)arg0 adInfo:(id)arg1 queries:(id)arg2 liveInfo:(id)arg3;
- (void)registerBDADSDKMediator;
- (id)getLiveDomain;
- (id)createLiveShowTagViewModel;
- (BOOL)livePush;
- (void)updateSettingsWithFieldType:(id)arg0 status:(BOOL)arg1 requestPage:(id)arg2 errorBlock:(id /* block */)arg3 successBlock:(id /* block */)arg4;
- (void)updateSettingsWithFieldType:(id)arg0 status:(BOOL)arg1 requestPage:(id)arg2 errorBlock:(id /* block */)arg3 successBlock:(id /* block */)arg4;
- (BOOL)isPushNotificationEnabled;
- (id)imageWithName:(id)arg0;
- (id)imageWithName:(id)arg0;

@end