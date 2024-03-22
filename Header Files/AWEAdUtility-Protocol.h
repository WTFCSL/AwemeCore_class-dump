//
//     Generated by private class-dump
//

@protocol AWEAdUtility <HTSService>

+ (void)fetchShortAdVideoQCPXCouponWithModel:(id)arg0 extraInfo:(id)arg1;
+ (void)fetchShortAdVideoQCPXCouponWithModel:(id)arg0 extraInfo:(id)arg1;
+ (id)starAtlasParamsWithModel:(id)arg0;
+ (id)starAtlasParamsWithModel:(id)arg0;
+ (void)handleBrandSafetyModel:(id)arg0 previous:(id)arg1 next:(id)arg2 requestID:(id)arg3;
+ (void)updateTopLiveStatusWithAweme:(id)arg0;
+ (void)updateTopLiveStatusWithAweme:(id)arg0;
+ (BOOL)hasFormURL:(id)arg0;
+ (BOOL)hasRedPacket:(id)arg0;
+ (BOOL)hasRedPacketSticker:(id)arg0;
+ (BOOL)hasKOLPendant:(id)arg0;
+ (BOOL)shouldShowRedPacketWithModel:(id)arg0;
+ (BOOL)shouldShowRedPacketWithModel:(id)arg0;
+ (BOOL)shouldShowAdOptimizeWithModel:(id)arg0;
+ (BOOL)shouldShowAdOptimizeWithModel:(id)arg0;
+ (BOOL)isWebOperationGuideViewFollowOrMultiMatrialWithModel:(id)arg0;
+ (BOOL)isWebOperationGuideViewFollowOrMultiMatrialWithModel:(id)arg0;
+ (BOOL)shouldShowLearnMoreViewWithModel:(id)arg0;
+ (BOOL)shouldShowLearnMoreViewWithModel:(id)arg0;
+ (BOOL)shouldShowLearnMoreNormalViewWithModel:(id)arg0;
+ (BOOL)shouldShowLearnMoreNormalViewWithModel:(id)arg0;
+ (BOOL)shouldShowLearnMoreLynxButtonWithModel:(id)arg0;
+ (BOOL)shouldShowLearnMoreLynxButtonWithModel:(id)arg0;
+ (BOOL)shouldShowWebBottomLynxButtonWithModel:(id)arg0;
+ (BOOL)shouldShowWebBottomLynxButtonWithModel:(id)arg0;
+ (BOOL)canLearnMoreNormalViewBeFallbackStyleWithModel:(id)arg0;
+ (BOOL)canLearnMoreNormalViewBeFallbackStyleWithModel:(id)arg0;
+ (BOOL)shouldShowAdOperationViewWithModel:(id)arg0;
+ (BOOL)shouldShowAdOperationViewWithModel:(id)arg0;
+ (BOOL)shouldShowAdModalWithModel:(id)arg0;
+ (BOOL)shouldShowAdModalWithModel:(id)arg0;
+ (long long)getTimesToShowAdOperationMask:(id)arg0;
+ (unsigned long long)adTagStyleOnAvatarWithModel:(id)arg0;
+ (unsigned long long)adTagStyleOnAvatarWithModel:(id)arg0;
+ (BOOL)shouldShowAvatarDecorationView:(id)arg0;
+ (BOOL)shouldOpenAdLynxLandingPageWithAdModel:(id)arg0;
+ (BOOL)shouldOpenAdLynxLandingPageWithAdModel:(id)arg0;
+ (BOOL)isNormalAdAndMusicOffline:(id)arg0;
+ (BOOL)isTrialExperimentOpen:(id)arg0;
+ (BOOL)showTrialLearnmoreButton:(id)arg0;
+ (BOOL)shouldShowRewardView:(id)arg0;
+ (BOOL)useNewAnimation:(id)arg0;
+ (BOOL)shouldAutoCloseAdOperationGuideView:(id)arg0;
+ (void)makeSmartPhoneCallWithModel:(id)arg0 event:(id)arg1;
+ (void)makeSmartPhoneCallWithModel:(id)arg0 event:(id)arg1;
+ (void)trackWithCollectionButton:(BOOL)arg0 enterFrom:(id)arg1 enterMethod:(id)arg2 awemeModel:(id)arg3;
+ (void)trackWithCollectionButton:(BOOL)arg0 enterFrom:(id)arg1 enterMethod:(id)arg2 awemeModel:(id)arg3;
+ (BOOL)shouldTrackAdEventWithLabelName:(id)arg0;
+ (BOOL)shouldTrackAdEventWithLabelName:(id)arg0;
+ (void)adTrackVideoAnchorClickWithModel:(id)arg0 tag:(id)arg1 refer:(id)arg2;
+ (void)adTrackVideoAnchorClickWithModel:(id)arg0 tag:(id)arg1 refer:(id)arg2;
+ (BOOL)shouldBlockCoreAdEventReportWithAwemeModel:(id)arg0;
+ (BOOL)shouldBlockCoreAdEventReportWithAwemeModel:(id)arg0;
+ (BOOL)shouldShowAdNativeAnchor:(id)arg0;
+ (id)processPoiAdEventWithAwemeModel:(id)arg0;
+ (id)processPoiAdEventWithAwemeModel:(id)arg0;
+ (id)processAdEventDataWithAwemeModel:(id)arg0 andScence:(id)arg1;
+ (id)processAdEventDataWithAwemeModel:(id)arg0 andScence:(id)arg1;
+ (void)trackShowWhenPoiDetailShow;
+ (BOOL)canPassUlinkOpenOtherApp:(id)arg0;
+ (void)trackAudioPlaybackDeviceWithModel:(id)arg0;
+ (void)trackAudioPlaybackDeviceWithModel:(id)arg0;
+ (BOOL)preferRecognizingAdLongPressGestureWithModel:(id)arg0 onPointLocation:(struct CGPoint { double x0; double x1; })arg1 interactionView:(id)arg2;
+ (BOOL)preferRecognizingAdLongPressGestureWithModel:(id)arg0 onPointLocation:(struct CGPoint { double x0; double x1; })arg1 interactionView:(id)arg2;
+ (void)updateSessionBeginTime:(double)arg0;
+ (double)sessionBeginTime;
+ (double)lastRequestFeedTime:(long long)arg0;
+ (void)updateLastRequestFeedTimeWithScene:(long long)arg0 requestTime:(double)arg1;
+ (void)updateLastRequestFeedTimeWithScene:(long long)arg0 requestTime:(double)arg1;
+ (BOOL)performSegueWithModel:(id)arg0 onAweme:(id)arg1;
+ (BOOL)performSegueWithModel:(id)arg0 onAweme:(id)arg1;
+ (void)trackHideNativeUnexpectedWithModel:(id)arg0 scene:(id)arg1;
+ (void)trackHideNativeUnexpectedWithModel:(id)arg0 scene:(id)arg1;
+ (void)trackFeedAdCommentWithLabel:(id)arg0 refer:(id)arg1 keyWord:(id)arg2 aweModel:(id)arg3 needNewParams:(BOOL)arg4;
+ (void)trackFeedAdCommentWithLabel:(id)arg0 refer:(id)arg1 keyWord:(id)arg2 aweModel:(id)arg3 needNewParams:(BOOL)arg4;
+ (BOOL)isFeedAdComponentRefactor;
+ (BOOL)openSearchAdFeedbackWithAweme:(id)arg0 schemaUrl:(id)arg1 topView:(id)arg2;
+ (BOOL)openSearchAdFeedbackWithAweme:(id)arg0 schemaUrl:(id)arg1 topView:(id)arg2;
+ (void)openSearchAdSharePanelWithAweme:(id)arg0 scene:(id)arg1 isFromShareChannel:(BOOL)arg2;
+ (void)openSearchAdSharePanelWithAweme:(id)arg0 scene:(id)arg1 isFromShareChannel:(BOOL)arg2;
+ (void)trackAdFailWithResaon:(id)arg0 error:(id)arg1 dynamicPatch:(id)arg2;
+ (void)trackAdFailWithResaon:(id)arg0 error:(id)arg1 dynamicPatch:(id)arg2;
+ (id)componentOpenURLWithAweme:(id)arg0;
+ (id)componentOpenURLWithAweme:(id)arg0;
+ (id)getFeedBackURLWithModel:(id)arg0;
+ (id)getFeedBackURLWithModel:(id)arg0;
+ (id)searchMonitorDataWithModel:(id)arg0;
+ (id)searchMonitorDataWithModel:(id)arg0;
+ (id)addSearchLynxAdExtraDataWith:(id)arg0 adExtraData:(id)arg1 logExtra:(id)arg2 event:(id)arg3 label:(id)arg4;
+ (id)addSearchLynxAdExtraDataWith:(id)arg0 adExtraData:(id)arg1 logExtra:(id)arg2 event:(id)arg3 label:(id)arg4;
+ (BOOL)isNewSearchBrandDisplayType:(id)arg0;
+ (BOOL)referStringIsSearch:(id)arg0;
+ (BOOL)isSearchBrandAD:(id)arg0;
+ (BOOL)isAdGrowGrass:(id)arg0;
+ (id)getSearchAdLynxTemplateSchemaWithModel:(id)arg0;
+ (id)getSearchAdLynxTemplateSchemaWithModel:(id)arg0;
+ (void)getChannelAndBundleWithSchema:(id)arg0 channel:(id *)arg1 bundle:(id *)arg2;
+ (void)getChannelAndBundleWithSchema:(id)arg0 channel:(id *)arg1 bundle:(id *)arg2;
+ (BOOL)isContainedInPrerenderWhiteList:(id)arg0;
+ (BOOL)isContainedInPrerenderWhiteList:(id)arg0;
+ (id)adCommonParamsInLiveScene:(id)arg0;
+ (id)adCommonParamsInLiveScene:(id)arg0;
+ (id)addEcommerceParamsToOpenURL:(id)arg0 WithModel:(id)arg1 WithProductID:(id)arg2 WithOtherInfo:(id)arg3;
+ (id)addEcommerceParamsToOpenURL:(id)arg0 WithModel:(id)arg1 WithProductID:(id)arg2 WithOtherInfo:(id)arg3;
+ (id)addSearchEcommerceParamsToOpenURL:(id)arg0 withModel:(id)arg1;
+ (id)addSearchEcommerceParamsToOpenURL:(id)arg0 withModel:(id)arg1;
+ (id)addSearchParamsToOpenURL:(id)arg0 withModel:(id)arg1 withParams:(id)arg2 outerParams:(id)arg3;
+ (id)addSearchParamsToOpenURL:(id)arg0 withModel:(id)arg1 withParams:(id)arg2 outerParams:(id)arg3;
+ (void)ecomSearchadCouponListViewTapped:(id)arg0 referString:(id)arg1 meteIDList:(id)arg2;
+ (BOOL)isFromMissionQuickStartWithPublishViewModel:(id)arg0;
+ (BOOL)isFromMissionQuickStartWithPublishViewModel:(id)arg0;
+ (BOOL)hasDouLinkInfo:(id)arg0;
+ (void)trackShowDouPlusIconFailReason:(long long)arg0 model:(id)arg1;
+ (BOOL)adjusmentCommentCountIfNeeded:(id)arg0;
+ (BOOL)shouldInsertAdComment:(id)arg0;
+ (BOOL)shouldShowGeneralViewAnchorInComment:(id)arg0;
+ (BOOL)shouldShowGeneralViewAnchorInComment:(id)arg0;
+ (BOOL)shouldCommentCountAddOneWithAweme:(id)arg0;
+ (BOOL)shouldCommentCountAddOneWithAweme:(id)arg0;
+ (BOOL)shouldIronManOpenedFollowPanGesture:(id)arg0;
+ (BOOL)canOpenIronManApp:(id)arg0;
+ (BOOL)enableIronManJumpCheck;
+ (BOOL)trackBatManEvent:(id)arg0 withAweme:(id)arg1;
+ (BOOL)openBatManWithAweme:(id)arg0;
+ (BOOL)openBatManWithAweme:(id)arg0;
+ (id)connectMusicsOfCMCChallenge:(id)arg0;
+ (id)connectMusicsOfCMCChallenge:(id)arg0;
+ (BOOL)startImpression:(id)arg0;
+ (BOOL)endImpression:(id)arg0;
+ (BOOL)startImpressionWithModel:(id)arg0 tag:(id)arg1;
+ (BOOL)startImpressionWithModel:(id)arg0 tag:(id)arg1;
+ (BOOL)endImpressionWithModel:(id)arg0 tag:(id)arg1;
+ (BOOL)endImpressionWithModel:(id)arg0 tag:(id)arg1;
+ (void)addComplianceDataWithModel:(id)arg0;
+ (void)addComplianceDataWithModel:(id)arg0;
+ (BOOL)shouldShowAdComplianceAlertWithModel:(id)arg0;
+ (BOOL)shouldShowAdComplianceAlertWithModel:(id)arg0;
+ (id)produceComplianceDataWithScene:(id)arg0 appstorePermit:(id)arg1;
+ (id)produceComplianceDataWithScene:(id)arg0 appstorePermit:(id)arg1;
+ (id)getComplianceDataWithModel:(id)arg0;
+ (id)getComplianceDataWithModel:(id)arg0;
+ (BOOL)shouldPreloadCard:(id)arg0;
+ (BOOL)shouldLoadCardNormal;
+ (BOOL)shouldDelayLoadCard;
+ (long long)quickSlideLoadTime;
+ (void)trackEcommerceFeedsLiveAdEvent:(id)arg0 withAwemeModel:(id)arg1;
+ (void)trackEcommerceFeedsLiveAdEvent:(id)arg0 withAwemeModel:(id)arg1;
+ (BOOL)isEmptyArray:(id)arg0;
+ (BOOL)isEmptyArray:(id)arg0;
+ (BOOL)canOpenInApp:(id)arg0;
+ (BOOL)canOpenInApp:(id)arg0;
+ (id)getInjectionJavaScriptWithAdModel:(id)arg0;
+ (id)getInjectionJavaScriptWithAdModel:(id)arg0;
+ (id)processOpenURL:(id)arg0 withAweme:(id)arg1 referString:(id)arg2 eventName:(id)arg3;
+ (void)processAdParamsWhenTransferToChatWithSchema:(id)arg0;
+ (void)processAdParamsWhenTransferToChatWithSchema:(id)arg0;
+ (void)recordAdParamsInIMSceneWithParams:(id)arg0 conversationID:(id)arg1;
+ (void)recordAdParamsInIMSceneWithParams:(id)arg0 conversationID:(id)arg1;
+ (BOOL)isDSPExternalLink:(id)arg0;
+ (void)showNotSupportByAdToast;
+ (BOOL)didOpenPoliticalControl;
+ (void)addParamstoDictionary:(id)arg0 awemeModel:(id)arg1;
+ (id)addCommerceDataWithAweme:(id)arg0;
+ (id)addCommerceDataWithAweme:(id)arg0;
+ (BOOL)canOpenAppStoreWithCreativeID:(id)arg0 logExtra:(id)arg1 appID:(id)arg2 URL:(id *)arg3;
+ (BOOL)canOpenAppStoreWithCreativeID:(id)arg0 logExtra:(id)arg1 appID:(id)arg2 URL:(id *)arg3;
+ (void)deleteCommercePostWithAwemeID:(id)arg0 success:(id /* block */)arg1 failure:(id /* block */)arg2;
+ (void)deleteCommercePostWithAwemeID:(id)arg0 success:(id /* block */)arg1 failure:(id /* block */)arg2;
+ (void)preprocessAdAwemes:(id)arg0 withAwemeType:(long long)arg1;
+ (void)preprocessAdAwemes:(id)arg0 withAwemeType:(long long)arg1;
+ (id)getAppIDFromDownloadURL:(id)arg0;
+ (id)getAppIDFromDownloadURL:(id)arg0;
+ (double)calculateSplashFeedInteractionViewHeightWithOriginHeight:(double)arg0;
+ (double)calculateSplashFeedInteractionViewHeightWithOriginHeight:(double)arg0;
+ (void)useBPEADownloadApi;
+ (void)addGlobalPreviewTextWaterMarkViewWithViewController:(id)arg0 text:(id)arg1;
+ (void)addGlobalPreviewTextWaterMarkViewWithViewController:(id)arg0 text:(id)arg1;
+ (BOOL)canOneJumpOpenWeChatMiniAppWithModel:(id)arg0;
+ (BOOL)canOneJumpOpenWeChatMiniAppWithModel:(id)arg0;
+ (BOOL)shouldBrandAdOpenWeChatMiniAppWithModel:(id)arg0;
+ (BOOL)shouldBrandAdOpenWeChatMiniAppWithModel:(id)arg0;
+ (BOOL)shouldSearchAdOpenWeChatMiniAppWithModel:(id)arg0;
+ (BOOL)shouldSearchAdOpenWeChatMiniAppWithModel:(id)arg0;
+ (BOOL)canOpenWechat;
+ (id)generateGlobalPreviewTextWaterMarkViewWithText:(id)arg0 fontColor:(id)arg1;
+ (id)generateGlobalPreviewTextWaterMarkViewWithText:(id)arg0 fontColor:(id)arg1;
+ (void)addParamForDoubleStockWithModel:(id)arg0 param:(id)arg1;
+ (void)addParamForDoubleStockWithModel:(id)arg0 param:(id)arg1;
+ (void)tryParseAdChallengeRoomData:(id)arg0;
+ (id)getCommerceImageFromGeckoWithName:(id)arg0;
+ (id)getCommerceImageFromGeckoWithName:(id)arg0;
+ (void)asyncSetCommerceImageFromGeckoWithName:(id)arg0 imageView:(id)arg1;
+ (void)asyncSetCommerceImageFromGeckoWithName:(id)arg0 imageView:(id)arg1;
+ (void)asyncSetCommerceImageFromGeckoWithName:(id)arg0 button:(id)arg1 state:(unsigned long long)arg2;
+ (void)asyncSetCommerceImageFromGeckoWithName:(id)arg0 button:(id)arg1 state:(unsigned long long)arg2;
+ (void)handleLandingPageExitWithAwemeModel:(id)arg0 duration:(double)arg1;
+ (void)handleLandingPageExitWithAwemeModel:(id)arg0 duration:(double)arg1;
+ (BOOL)popupShowing;
+ (BOOL)isShakeAd:(id)arg0;
+ (BOOL)checkIsDynamicIslandScreen;
+ (id)handleColdSplashContinuousAdWithArray:(id)arg0 extraData:(id)arg1;
+ (id)handleColdSplashContinuousAdWithArray:(id)arg0 extraData:(id)arg1;
+ (id)modifyWebUrlForEEcommerceMixWithUrl:(id)arg0 cid:(id)arg1;
+ (id)modifyWebUrlForEEcommerceMixWithUrl:(id)arg0 cid:(id)arg1;
+ (id)modifyOpenUrlForEEcommerceWithUrl:(id)arg0 cid:(id)arg1 logExtra:(id)arg2;
+ (id)modifyOpenUrlForEEcommerceWithUrl:(id)arg0 cid:(id)arg1 logExtra:(id)arg2;
+ (id)addMessageChattingDataWithOpenURL:(id)arg0 awemeModel:(id)arg1 referString:(id)arg2 commentScene:(BOOL)arg3 floatMode:(BOOL)arg4;
+ (id)addMessageChattingDataWithOpenURL:(id)arg0 awemeModel:(id)arg1 referString:(id)arg2 commentScene:(BOOL)arg3 floatMode:(BOOL)arg4;
+ (unsigned long long)landingPageOptForIpad:(id)arg0;
+ (unsigned long long)landingPageOptForIpad:(id)arg0;
+ (double)resizeLandingPageWidthForIpad;
+ (BOOL)isMultiWindowAbleAdLandingPage:(id)arg0;
+ (BOOL)shouldCommerceTrackWhenNonAdWithModel:(id)arg0;
+ (BOOL)shouldCommerceTrackWhenNonAdWithModel:(id)arg0;
+ (BOOL)shouldShowOpenGuideViewWithModel:(id)arg0;
+ (BOOL)shouldShowOpenGuideViewWithModel:(id)arg0;
+ (id)addCommerceDataWhenNonAdWithOpenURL:(id)arg0 model:(id)arg1;
+ (id)addCommerceDataWhenNonAdWithOpenURL:(id)arg0 model:(id)arg1;
+ (void)trackNonAdAnchorActionWithModel:(id)arg0 label:(id)arg1 refer:(id)arg2;
+ (void)trackNonAdAnchorActionWithModel:(id)arg0 label:(id)arg1 refer:(id)arg2;
+ (BOOL)shouldPreventVideoPauseWithAnchorModel:(id)arg0;
+ (BOOL)shouldPreventVideoPauseWithAnchorModel:(id)arg0;
+ (BOOL)isCompanyAnchorWithModel:(id)arg0;
+ (BOOL)isCompanyAnchorWithModel:(id)arg0;
+ (BOOL)shouldAdTrackFollowSuccessWithModel:(id)arg0;
+ (BOOL)shouldAdTrackFollowSuccessWithModel:(id)arg0;
+ (BOOL)shouldAddBTMTrackWithModel:(id)arg0;
+ (BOOL)shouldAddBTMTrackWithModel:(id)arg0;
+ (id)getBTMChainStringWithSceneType:(unsigned long long)arg0 currentView:(id)arg1 enterNewPage:(BOOL)arg2 btmInfo:(id)arg3;
+ (id)getBTMChainStringWithSceneType:(unsigned long long)arg0 currentView:(id)arg1 enterNewPage:(BOOL)arg2 btmInfo:(id)arg3;
+ (id)getLiveCardIDWithAdCardWithModel:(id)arg0;
+ (id)getLiveCardIDWithAdCardWithModel:(id)arg0;
+ (id)multiPlatformPreferredModelWithAwemeModel:(id)arg0;
+ (id)multiPlatformPreferredModelWithAwemeModel:(id)arg0;
+ (id)otherChannelValueWithModel:(id)arg0;
+ (id)otherChannelValueWithModel:(id)arg0;
+ (id)getCommonAdTrackInfoOnBtmWithModel:(id)arg0 btmInfo:(id)arg1 clickedView:(id)arg2;
+ (id)getCommonAdTrackInfoOnBtmWithModel:(id)arg0 btmInfo:(id)arg1 clickedView:(id)arg2;
+ (BOOL)shouldDisablePromotionLearnMoreViewWithModel:(id)arg0;
+ (BOOL)shouldDisablePromotionLearnMoreViewWithModel:(id)arg0;
+ (void)shootWithChallengeIDInSearchScene:(id)arg0 enterFrom:(id)arg1;
+ (void)shootWithChallengeIDInSearchScene:(id)arg0 enterFrom:(id)arg1;
+ (BOOL)shouldExcuteCommerceController:(id)arg0;
+ (BOOL)hasAdComponent:(id)arg0;
+ (BOOL)isOthersProfileLiveAwemeModel:(id)arg0;
+ (BOOL)isOthersProfileLiveAwemeModel:(id)arg0;
+ (void)feedBenefitMeApply:(id)arg0;
+ (void)benefitMeApply:(id)arg0 requestCompletion:(id /* block */)arg1;
+ (void)requestChallengeNameWithID:(id)arg0 completion:(id /* block */)arg1;
+ (void)requestChallengeNameWithID:(id)arg0 completion:(id /* block */)arg1;
+ (void)sendLynxAdTrackURLWithParams:(id)arg0 model:(id)arg1;
+ (void)sendLynxAdTrackURLWithParams:(id)arg0 model:(id)arg1;
+ (id)appendPrePullParams:(id)arg0 model:(id)arg1 extra:(id)arg2;
+ (BOOL)isAdCellInFeedScene;
+ (id)appendAdLiveParams:(id)arg0 withModel:(id)arg1 enterLiveNeedAutoOpenGoodDeatil:(BOOL)arg2;
+ (id)appendAdLiveParams:(id)arg0 withModel:(id)arg1 enterLiveNeedAutoOpenGoodDeatil:(BOOL)arg2;
+ (BOOL)isProfileAutoLandingEnable:(id)arg0;
+ (BOOL)syncGetFeedUseNewTaskManager:(id)arg0;
+ (BOOL)checkIsNewRichContent;
+ (id)networkType;
+ (long long)netType;

@end