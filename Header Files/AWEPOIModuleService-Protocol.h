//
//     Generated by private class-dump
//

@protocol AWEPOIModuleService <HTSService, AWEPOIModuleServiceCommonAdapter>

- (void)registerAsResourceStore:(id)arg0;
- (void)registerAsResourceStore:(id)arg0;
- (id)getPOIResourceWithResourceID:(id)arg0;
- (id)getPOIResourceWithResourceID:(id)arg0;
- (id)getCityManager;
- (id)getPublishManager;
- (Class)feedAnchorUtils;
- (Class)feedAnchorService;
- (id)getInteractionElementManager;
- (Class)getPOITrackerUtils;
- (Class)poiResourceUtils;
- (id)tradeGoodsService;
- (id)privateCardService;
- (Class)getHalfScreenContainer;
- (BOOL)shouldShowCommentListEntryForAweme:(id)arg0;
- (BOOL)shouldShowCommentListEntryForAweme:(id)arg0;
- (BOOL)shouldShowRateTabInCommentWithAweme:(id)arg0;
- (BOOL)shouldShowRateTabInCommentWithAweme:(id)arg0;
- (BOOL)shouldAutoLandingRateTabInCommentWithAweme:(id)arg0;
- (BOOL)shouldAutoLandingRateTabInCommentWithAweme:(id)arg0;
- (id)createRateTabControllerInCommentWithAweme:(id)arg0;
- (id)createRateTabControllerInCommentWithAweme:(id)arg0;
- (id)rateTabTextInCommentWithAweme:(id)arg0;
- (id)rateTabTextInCommentWithAweme:(id)arg0;
- (long long)rateTabCountInCommentWithAweme:(id)arg0;
- (long long)rateTabCountInCommentWithAweme:(id)arg0;
- (void)trackRateTabShowInCommentWithAweme:(id)arg0 isAutoLandingTab:(BOOL)arg1 context:(id)arg2;
- (void)trackRateTabShowInCommentWithAweme:(id)arg0 isAutoLandingTab:(BOOL)arg1 context:(id)arg2;
- (void)trackRateListShowInCommentWithAweme:(id)arg0 isByTap:(BOOL)arg1 isAutoLandingTab:(BOOL)arg2 context:(id)arg3;
- (void)trackRateListShowInCommentWithAweme:(id)arg0 isByTap:(BOOL)arg1 isAutoLandingTab:(BOOL)arg2 context:(id)arg3;
- (id)createLiveLocationViewContainerWithScene:(unsigned long long)arg0 params:(id)arg1 poiIDDidChangeBlock:(id /* block */)arg2 didDismissBlock:(id /* block */)arg3;
- (id)createLiveLocationViewContainerWithScene:(unsigned long long)arg0 params:(id)arg1 poiIDDidChangeBlock:(id /* block */)arg2 didDismissBlock:(id /* block */)arg3;
- (id)createHalfScreenLocationViewContainerWithParams:(id)arg0 poiIDDidChangeBlock:(id /* block */)arg1 didDismissBlock:(id /* block */)arg2;
- (id)createHalfScreenLocationViewContainerWithParams:(id)arg0 poiIDDidChangeBlock:(id /* block */)arg1 didDismissBlock:(id /* block */)arg2;
- (BOOL)shouldShowUnusedCounponsBubble;
- (BOOL)shouldShowCouponGuideInSideBar;
- (BOOL)shouldHasAnchorViewDataForCommentList:(id)arg0;
- (BOOL)shouldHasAnchorViewDataForCommentList:(id)arg0;
- (BOOL)shouldShowPoiButton:(id)arg0 isParentChildPoi:(BOOL)arg1;
- (BOOL)shouldShowPoiExtraInfo:(id)arg0 didHasPoiPagePoiId:(BOOL)arg1 isParentChildPoi:(BOOL)arg2;
- (BOOL)shouldShowPoiDetail:(id)arg0 poiInfo:(id)arg1 didHasPoiPagePoiId:(BOOL)arg2 isParentChildPoi:(BOOL)arg3;
- (id)trackParamsWhenCommentPOIAnchorShowWithPOIInfo:(id)arg0;
- (id)trackParamsWhenCommentPOIAnchorShowWithPOIInfo:(id)arg0;
- (BOOL)isCurrentPageIsPOIRating:(id)arg0;
- (void)handleBubbleDisplayed;
- (void)handleReceiveCoupon;
- (void)handleEnterCouponPage;
- (BOOL)hasUnreadCouponStatusChanged;
- (void)handleMerchantEntryTapped;
- (void)checkMerchantEntry;
- (BOOL)geckoEnableDefaultPreload;
- (void)geckoPreloadInLocalLife;
- (id)currentCityCode;
- (id)currentSelectedCityCode;
- (long long)nearbyLocationPromptInterval;
- (id)nearbyLocationPromptDateKey;
- (id)pageOfPOIPickerWithLocationInfos:(id)arg0 splitDomains:(BOOL)arg1 isOversea:(BOOL)arg2 entrance:(unsigned long long)arg3 moreParams:(id)arg4 shouldShowAddStore:(BOOL)arg5 completion:(id /* block */)arg6 cancelBlock:(id /* block */)arg7;
- (id)pageOfPOIPickerWithLocationInfos:(id)arg0 splitDomains:(BOOL)arg1 isOversea:(BOOL)arg2 entrance:(unsigned long long)arg3 moreParams:(id)arg4 shouldShowAddStore:(BOOL)arg5 completion:(id /* block */)arg6 cancelBlock:(id /* block */)arg7;
- (void)showPOIPickerWithLocationInfos:(id)arg0 splitDomains:(BOOL)arg1 isOversea:(BOOL)arg2 entrance:(unsigned long long)arg3 moreParams:(id)arg4 shouldShowAddStore:(BOOL)arg5 completion:(id /* block */)arg6 cancelBlock:(id /* block */)arg7;
- (void)showPOIPickerWithLocationInfos:(id)arg0 splitDomains:(BOOL)arg1 isOversea:(BOOL)arg2 entrance:(unsigned long long)arg3 moreParams:(id)arg4 shouldShowAddStore:(BOOL)arg5 completion:(id /* block */)arg6 cancelBlock:(id /* block */)arg7;
- (void)requestPOIRecommendWithLocation:(id)arg0 locationInfos:(id)arg1 selectedPOIs:(id)arg2 AIRecommendPOIs:(id)arg3 topics:(id)arg4 challengeIDs:(id)arg5 microAppID:(id)arg6 shootWay:(id)arg7 creationID:(id)arg8 completion:(id /* block */)arg9;
- (void)requestPOIRecommendWithLocation:(id)arg0 locationInfos:(id)arg1 selectedPOIs:(id)arg2 AIRecommendPOIs:(id)arg3 topics:(id)arg4 challengeIDs:(id)arg5 microAppID:(id)arg6 shootWay:(id)arg7 creationID:(id)arg8 completion:(id /* block */)arg9;
- (void)ironManpreviewImageWithThumbnailURLs:(id)arg0 imageURLs:(id)arg1 startIndex:(long long)arg2;
- (void)ironManpreviewImageWithThumbnailURLs:(id)arg0 imageURLs:(id)arg1 startIndex:(long long)arg2;
- (id)trackerParamsForEnterPOIDetailWithPOIID:(id)arg0 enterFrom:(id)arg1 enterMethod:(id)arg2 extraParams:(id)arg3;
- (id)trackerParamsForEnterPOIDetailWithPOIID:(id)arg0 enterFrom:(id)arg1 enterMethod:(id)arg2 extraParams:(id)arg3;
- (id)baseTrackerParamsForPOIInfo:(id)arg0;
- (id)baseTrackerParamsForPOIInfo:(id)arg0;
- (id)baseTrackerParamsForPOIInfo:(id)arg0 enterFrom:(id)arg1;
- (id)baseTrackerParamsForPOIInfo:(id)arg0 enterFrom:(id)arg1;
- (id)displayCountForPOIInfo:(id)arg0;
- (id)displayCountForPOIInfo:(id)arg0;
- (void)showSubmitRatingPanelFromViewController:(id)arg0 poiID:(id)arg1 poiName:(id)arg2 objectID:(id)arg3 objectType:(long long)arg4 couponID:(long long)arg5 spuID:(id)arg6 trackerData:(id)arg7;
- (void)showSubmitRatingPanelFromViewController:(id)arg0 poiID:(id)arg1 poiName:(id)arg2 objectID:(id)arg3 objectType:(long long)arg4 couponID:(long long)arg5 spuID:(id)arg6 trackerData:(id)arg7;
- (id)ratingSnapshotWithRating:(double)arg0 textFont:(id)arg1 textColor:(id)arg2;
- (id)ratingSnapshotWithRating:(double)arg0 textFont:(id)arg1 textColor:(id)arg2;
- (id)createPOICollectView;
- (void)fetchRecommendPOIsWithZipURL:(id)arg0 recordLocation:(id)arg1 needSelfLocation:(BOOL)arg2 creationID:(id)arg3;
- (void)fetchRecommendPOIsWithZipURL:(id)arg0 recordLocation:(id)arg1 needSelfLocation:(BOOL)arg2 creationID:(id)arg3;
- (void)cleanAIRecommendPOIs;
- (id)AIRecommendPOIIdArray;
- (id)AIRecommendPOIIdArray;
- (id)poiTag;
- (BOOL)shouldShowEmphraseCollectAnchorView:(id)arg0;
- (id)createEmphraseCollectAnchorViewControllerWithModuleName:(id)arg0 uniqueObj:(id)arg1 anchorStyle:(unsigned long long)arg2;
- (id)createEmphraseCollectAnchorViewControllerWithModuleName:(id)arg0 uniqueObj:(id)arg1 anchorStyle:(unsigned long long)arg2;
- (void)trackBDUGConsumeWithType:(unsigned long long)arg0 POIInfo:(id)arg1 logPassback:(id)arg2;
- (void)trackBDUGConsumeWithType:(unsigned long long)arg0 POIInfo:(id)arg1 logPassback:(id)arg2;
- (void)openPOIFeedWithParams:(id)arg0;
- (void)openPOIFeedWithParams:(id)arg0;
- (void)showPicturePreviewerWithParams:(id)arg0;
- (void)showPicturePreviewerWithParams:(id)arg0;
- (void)requestPOIForSpuID:(id)arg0 completion:(id /* block */)arg1;
- (void)requestPOIForSpuID:(id)arg0 completion:(id /* block */)arg1;
- (id)newPOINearbyLynxCardManager;
- (id)newPOIPromptCardManager;
- (BOOL)shouldShowPromptCardWithAweme:(id)arg0 referString:(id)arg1;
- (BOOL)shouldShowPromptCardWithAweme:(id)arg0 referString:(id)arg1;
- (BOOL)shouldShowUGCRateBottomAnchorViewWithReferString:(id)arg0;
- (BOOL)shouldShowUGCRateBottomAnchorViewWithReferString:(id)arg0;
- (BOOL)shouldShowWriteUGCRateEntranceWithAweme:(id)arg0 referString:(id)arg1;
- (BOOL)shouldShowWriteUGCRateEntranceWithAweme:(id)arg0 referString:(id)arg1;
- (BOOL)hitEntranceFiveStarABWithAweme:(id)arg0;
- (BOOL)hitEntranceFiveStarABWithAweme:(id)arg0;
- (id)poiFeedListDataControllerWithSceneType:(unsigned long long)arg0;
- (id)poiFeedListDataControllerWithSceneType:(unsigned long long)arg0;
- (BOOL)shouldUseFullScreenShrinkTransitionToProvider:(id)arg0 withOffset:(long long)arg1 isLive:(BOOL)arg2;
- (BOOL)shouldUseFullScreenShrinkTransitionToProvider:(id)arg0 withOffset:(long long)arg1 isLive:(BOOL)arg2;
- (BOOL)shouldCustomizeShrinkTransitionWithProvider:(id)arg0;
- (BOOL)shouldCustomizeShrinkTransitionWithProvider:(id)arg0;
- (id)tradeAnchorViewManagerWithScene;
- (id)anchorBubbleManagerWithModel:(id)arg0;
- (id)anchorBubbleManagerWithModel:(id)arg0;
- (id)poiFrequencyControllerWithModel:(id)arg0 scene:(id)arg1;
- (id)poiFrequencyControllerWithModel:(id)arg0 scene:(id)arg1;
- (id)poiDetailURLWithAwemeModel:(id)arg0 entranceType:(long long)arg1 referString:(id)arg2 logExtraDic:(id)arg3;
- (id)poiDetailURLWithAwemeModel:(id)arg0 entranceType:(long long)arg1 referString:(id)arg2 logExtraDic:(id)arg3;
- (void)handleEnterPOIDetailWithAwemeModel:(id)arg0 entranceType:(long long)arg1 referString:(id)arg2 enterMethod:(id)arg3 logExtraDict:(id)arg4;
- (void)handleEnterPOIDetailWithAwemeModel:(id)arg0 entranceType:(long long)arg1 referString:(id)arg2 enterMethod:(id)arg3 logExtraDict:(id)arg4;
- (void)handleEnterPOIDetailWithAwemeModel:(id)arg0 entranceType:(long long)arg1 referString:(id)arg2 enterMethod:(id)arg3 logExtraDict:(id)arg4 playInteractionDelegate:(id)arg5;
- (void)handleEnterPOIDetailWithAwemeModel:(id)arg0 entranceType:(long long)arg1 referString:(id)arg2 enterMethod:(id)arg3 logExtraDict:(id)arg4 playInteractionDelegate:(id)arg5;
- (void)handleEnterPOIDetailWithAwemeModel:(id)arg0 entranceType:(long long)arg1 referString:(id)arg2 enterMethod:(id)arg3 logExtraDict:(id)arg4 player:(id)arg5 playInteractionDelegate:(id)arg6;
- (void)handleEnterPOIDetailWithAwemeModel:(id)arg0 entranceType:(long long)arg1 referString:(id)arg2 enterMethod:(id)arg3 logExtraDict:(id)arg4 player:(id)arg5 playInteractionDelegate:(id)arg6;
- (void)handleEnterPOIListWithAwemeModel:(id)arg0 referString:(id)arg1 enterMethod:(id)arg2 logExtraDict:(id)arg3 shouldUseModalView:(BOOL)arg4 playInteractionDelegate:(id)arg5;
- (void)handleEnterPOIListWithAwemeModel:(id)arg0 referString:(id)arg1 enterMethod:(id)arg2 logExtraDict:(id)arg3 shouldUseModalView:(BOOL)arg4 playInteractionDelegate:(id)arg5;
- (void)handleEnterPOIDetailWithRouteUrl:(id)arg0 useModalView:(BOOL)arg1 playInteractionDelegate:(id)arg2;
- (void)handleEnterPOIDetailWithRouteUrl:(id)arg0 useModalView:(BOOL)arg1 playInteractionDelegate:(id)arg2;
- (BOOL)isPOIRoutingURL:(id)arg0;
- (id)appendAdQueryToPOIRoutingURL:(id)arg0 awemeModel:(id)arg1 referString:(id)arg2;
- (id)appendAdQueryToPOIRoutingURL:(id)arg0 awemeModel:(id)arg1 referString:(id)arg2;
- (id)prefetchLocalLifeAnchorSchemaWithAwemeModel:(id)arg0 entranceType:(long long)arg1 referString:(id)arg2 enterMethod:(id)arg3 logExtraDict:(id)arg4;
- (id)prefetchLocalLifeAnchorSchemaWithAwemeModel:(id)arg0 entranceType:(long long)arg1 referString:(id)arg2 enterMethod:(id)arg3 logExtraDict:(id)arg4;
- (id)accuracyStatusParams;
- (void)jumpToDouDisountPageWithParams:(id)arg0;
- (void)jumpToDouDisountPageWithParams:(id)arg0;
- (id)createPOIDouDiscountEntryView;
- (id)createPOIDouDiscountListModalViewWithDataController:(id)arg0;
- (id)createPOIDouDiscountListModalViewWithDataController:(id)arg0;
- (id)poiRankVideoViewControllerWithAwemeList:(id)arg0 rankID:(id)arg1 initialIndex:(long long)arg2 extraParams:(id)arg3 delegate:(id)arg4;
- (id)poiRankVideoViewControllerWithAwemeList:(id)arg0 rankID:(id)arg1 initialIndex:(long long)arg2 extraParams:(id)arg3 delegate:(id)arg4;
- (id)shopSeekWorkViewControllerWithUserID:(id)arg0 secUserID:(id)arg1 poiId:(id)arg2 targetUser:(id)arg3;
- (id)shopSeekWorkViewControllerWithUserID:(id)arg0 secUserID:(id)arg1 poiId:(id)arg2 targetUser:(id)arg3;
- (BOOL)shouldShowPOICardWithAweme:(id)arg0;
- (BOOL)shouldShowPOICardWithAweme:(id)arg0;
- (id)showHalfScreenWithParams:(id)arg0 contentController:(id)arg1 completion:(id /* block */)arg2 shouldClose:(id /* block */)arg3 close:(id /* block */)arg4;
- (id)showHalfScreenWithParams:(id)arg0 contentController:(id)arg1 completion:(id /* block */)arg2 shouldClose:(id /* block */)arg3 close:(id /* block */)arg4;
- (BOOL)isReferFromPOI:(id)arg0;
- (BOOL)isReferFromPOI:(id)arg0;
- (void)appendVideoPlayParamsToDictionary:(id)arg0 refer:(id)arg1 aweme:(id)arg2 logExtra:(id)arg3;
- (void)appendVideoPlayParamsToDictionary:(id)arg0 refer:(id)arg1 aweme:(id)arg2 logExtra:(id)arg3;
- (id)getPOIFavoriteDitoViewController;
- (void)collectPOI:(id)arg0 awemeID:(id)arg1 isCollect:(BOOL)arg2 needHintToast:(BOOL)arg3 extraParams:(id)arg4 loginTrackParams:(id)arg5 loginResult:(id /* block */)arg6 completion:(id /* block */)arg7;
- (BOOL)shouldShowTagInPOIAwemeDetail;
- (void)poiAwemeDetailDeleteRateWithParams:(id)arg0 eventAttachedParams:(id)arg1 completion:(id /* block */)arg2;
- (void)poiAwemeDetailDeleteRateWithParams:(id)arg0 eventAttachedParams:(id)arg1 completion:(id /* block */)arg2;
- (Class)profilePersonalCenterEntryViewClass;
- (Class)profilePersonalCenterFlashSaleEntryViewClass;
- (BOOL)isShowingPOIModalView;
- (BOOL)shouldPreventPauseVideoWhenGoodsDetailPopup;
- (void)goodsDetailPreload;
- (void)goodsDetailPreloadWithBizCode:(id)arg0;
- (void)goodsDetailPreloadWithBizCode:(id)arg0;
- (BOOL)enablePrefetchWithBizCode:(id)arg0;
- (BOOL)enablePrefetchWithBizCode:(id)arg0;
- (BOOL)hasPrefetchCacheWithBizCode:(id)arg0 keyMap:(id)arg1;
- (BOOL)hasPrefetchCacheWithBizCode:(id)arg0 keyMap:(id)arg1;
- (void)requestWithParams:(id)arg0 bizCode:(id)arg1 activityID:(id)arg2 cacheFrom:(id)arg3 completion:(id /* block */)arg4;
- (void)requestWithParams:(id)arg0 bizCode:(id)arg1 activityID:(id)arg2 cacheFrom:(id)arg3 completion:(id /* block */)arg4;
- (void)stopAllPreRequestTask;
- (id)prefetchManager;
- (void)requestBulletMessageWithContext:(id)arg0 params:(id)arg1;
- (void)requestBulletMessageWithContext:(id)arg0 params:(id)arg1;
- (BOOL)isListAnchorFiveScreenStatus;
- (id)createSearchPOIDataManager;
- (id)createSearchPOIDataManagerWithURLString:(id)arg0;
- (id)createSearchPOIDataManagerWithURLString:(id)arg0;
- (id)POIDetailNGManager;
- (id)POIDetailNGManager;
- (Class)getPOIUtils;

@optional

- (BOOL)openPOIGoodsDetail:(id)arg0 adInfo:(id)arg1 queries:(id)arg2 liveInfo:(id)arg3;
- (BOOL)enableShowRichAwemeFullPageHeaderPOI;
- (id)createRichAwemeFullPageHeaderPOIView;
- (id)fetchPoiADTrackParamsFromModel:(id)arg0;
- (id)fetchPoiADTrackParamsFromModel:(id)arg0;
- (id)locationServiceManager;
- (id)searchLynxServiceManager;
- (id)createSearchLynxServiceManager;
- (void)openPOIMediaListWithParams:(id)arg0;
- (void)openPOIMediaListWithParams:(id)arg0;
- (void)openPOIPreviewPageWithParams:(id)arg0;
- (void)openPOIPreviewPageWithParams:(id)arg0;
- (id)fetchPoiRankTrackParams:(id)arg0;
- (BOOL)passBackLifeAnchorEntryNoticeAckEvent:(id)arg0;
- (BOOL)shouldAddRemindViewIfNeeded:(id)arg0;
- (void)trackRemindViewIfNeededWithAction:(id)arg0 scene:(id)arg1 content:(id)arg2;
- (void)trackRemindViewIfNeededWithAction:(id)arg0 scene:(id)arg1 content:(id)arg2;
- (id)multiClientQRCodeScanRulesWithSchema:(id)arg0;
- (id)multiClientQRCodeScanRulesWithSchema:(id)arg0;
- (void)storeInternalFlowInfoWith:(id)arg0;
- (void)storeInternalFlowInfoWith:(id)arg0;
- (id)takeOutInternalFlowInfo;
- (long long)isNonlocalWith:(id)arg0;
- (long long)isNonlocalWith:(id)arg0;
- (id)generateRankLabel:(id)arg0;
- (void)synthesisVideoPublishModelFromAweme:(id)arg0;
- (void)synthesisVideoPublishModelFromAweme:(id)arg0;
- (Class)rankBottomBarConfig;
- (id)getPOICommentCreationId;
- (BOOL)isNeedRemoveBase64;
- (void)uploadImages:(id)arg0 params:(id)arg1 extraTrackParams:(id)arg2 completion:(id /* block */)arg3;
- (BOOL)shouldReplacePOIGoodsDetailUrl:(id)arg0;
- (id)goodsDetailWebUrlChangeToNativeUrl:(id)arg0 shouldGenerateSessionId:(BOOL)arg1;
- (id)goodsDetailWebUrlChangeToNativeUrl:(id)arg0 shouldGenerateSessionId:(BOOL)arg1;
- (id)poiBusinessCardManager;
- (void)setForceInTheSameCityEnabled:(BOOL)arg0;
- (BOOL)isForceInTheSameCityEnabled;

@end
