//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDiscoverDModuleService : HTSService <AWEDiscoverDModuleService> {
    BOOL _isShowingDislikeRecommmendPanel;
}

@property (nonatomic) BOOL isShowingDislikeRecommmendPanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (BOOL)shouldUseNewCoordinatorBarInHotSpot;
+ (BOOL)shouldUseNewFeedTableViewControllerForHotSpot;
+ (BOOL)isHotSpotFeedTableViewController:(id)arg0;
+ (id)topHotSpotIcon:(long long)arg0 type:(long long)arg1;
+ (id)topHotSpotIcon:(id)arg0 otherParams:(id)arg1;
+ (id)topHotSpotIconWithHotSpotModel:(id)arg0 otherParams:(id)arg1;
+ (id)topHotSpotCoverForNewBrandWithHotListModel:(id)arg0 otherParams:(id)arg1;
+ (id)gradientTextWithHotSpotModel:(id)arg0 otherParams:(id)arg1;
+ (id)hotSpotFireIcon;
+ (id)templateSmallHotSpotFireIcon;
+ (id)gradientTextWithChineseText:(id)arg0 customTopX:(id)arg1;
+ (id)hotSearchTagWithLabelType:(unsigned long long)arg0;
+ (void)awe_addLocalSpotTrackerIfNeeded:(id)arg0 forDict:(id)arg1;
+ (void)awe_addHotSpotInnerTrackerIfNeeded:(id)arg0 forDict:(id)arg1 otherParams:(id)arg2;
+ (long long)limitHotSpotTag:(id)arg0 andCurrentHotSpotCount:(long long)arg1 otherParams:(id)arg2;
+ (id)createTTRelatedReadingBarView;
+ (id)createNewSplitHotSpotTipView;
+ (BOOL)isShowingRelatedReadingPanel;
+ (id)createHotSearchTipView;
+ (id)createNewHotSpotBottomBarView;
+ (id)createGrootSpeciesBottomBarView;
+ (id)createNewPlayletBottomBarView;
+ (id)getGrootSchemaWithKey:(id)arg0;
+ (id)hotSpotBottomBarRawDataWithModel:(id)arg0;
+ (BOOL)showFeedBottomArticleBarSuperiorToHotSearch:(id)arg0 otherParams:(id)arg1;
+ (BOOL)showFeedBottomArticleBarInferiorToHotSearch:(id)arg0 otherParams:(id)arg1;
+ (void)trackReadingBarShowEvent:(id)arg0 otherParams:(id)arg1;
+ (BOOL)isToutiaoInstalled;
+ (id)trackParamsWithOriginalParams:(id)arg0 awemeModel:(id)arg1 otherParams:(id)arg2;
+ (id)extraTrackParamsWithAwemeModel:(id)arg0 otherParams:(id)arg1;
+ (BOOL)shouldShowHotSpotTagWithAwemeModel:(id)arg0 otherParams:(id)arg1;
+ (id)getNewHotSpotSearchFeedLoadManager;
+ (id)addTintColorToImage:(id)arg0;
+ (void)preloadHotSpotVideosForAwemeModel:(id)arg0;
+ (void)savePlayletID:(id)arg0 playCurrentEpisode:(id)arg1;
+ (id)playletUserListDataController;
+ (id)userPlayletListControllerWithDataController:(id)arg0 hideNavigationBar:(BOOL)arg1;
+ (void)trackNetworkServiceName:(id)arg0 response:(id)arg1 error:(id)arg2 otherParams:(id)arg3;
+ (void)trackPlayletModelServiceName:(id)arg0 playletModels:(id)arg1;
+ (void)trackMixNetworkServiceName:(id)arg0 model:(id)arg1 error:(id)arg2;
+ (void)trackVideoPaymentServiceName:(id)arg0 mixID:(id)arg1 modelList:(id)arg2 error:(id)arg3;
+ (void)trackVideoPaymentServiceName:(id)arg0 model:(id)arg1 awemeID:(id)arg2 error:(id)arg3;
+ (id)mediumCollectTagView;
+ (void)handleRelateWordStateChange:(BOOL)arg0;
+ (BOOL)canShowBindHotSpotEntrance;
+ (void)relatedReadingJumpWithModel:(id)arg0 referString:(id)arg1;
+ (void)TrendingPageJumpWithModel:(id)arg0 referString:(id)arg1;
+ (void)playletJumpWithModel:(id)arg0 referString:(id)arg1;
+ (id)feedIdentifierAndCellClassName;
+ (void)registerCellForTableView:(id)arg0;
+ (id)cellIdentifyForModel:(id)arg0;
+ (id)viewControllerForModel:(id)arg0;
+ (void)clearHotSpotRelateCacheIfNeed;
+ (id)hotCommentLynxURL;
+ (BOOL)isHotPointPanelShowed;
+ (BOOL)isPlayletPanelShowed;
+ (void)handleAccessBilityText:(id)arg0 view:(id)arg1;
+ (id)handleHotSpotTipFooter:(id)arg0;
+ (Class)playletPaymentUtils;
+ (id)playletDataControllerWithPlayletID:(id)arg0 offset:(id)arg1;
+ (id)playletDataControllerWithPlayletID:(id)arg0 offset:(id)arg1 filterPaymentVideo:(BOOL)arg2;
+ (void)movieLocateMethodWithResult:(id)arg0 name:(id)arg1;
+ (BOOL)checkDowngradeHotSpotUseNativeBar;
+ (BOOL)canUseLynxBarWithModel:(id)arg0;
+ (void)showPaymentPopupWithMixModel:(id)arg0 params:(id)arg1 completion:(id /* block */)arg2;
+ (void)requestPaymentMixVideoWithAwemeID:(id)arg0 uploadTrack:(BOOL)arg1;
+ (void)requestPaymentVideoWithAwemeID:(id)arg0 referString:(id)arg1 playProgress:(double)arg2 uploadTrack:(BOOL)arg3;
+ (void)requestIAAPaymentVideoWithAwemeID:(id)arg0 uploadTrack:(BOOL)arg1 afterLogin:(BOOL)arg2;
+ (void)requestIAAPaymentVideoWithAwemeID:(id)arg0 referString:(id)arg1 playProgress:(double)arg2 uploadTrack:(BOOL)arg3 completion:(id /* block */)arg4;
+ (BOOL)checkMixIDHasUnlock:(id)arg0;
+ (void)cacheUnlockMixID:(id)arg0;
+ (void)cacheUnlockEpisodes:(id)arg0 ForMixID:(id)arg1;
+ (id)getUnlockEpisodesForMixID:(id)arg0;
+ (void)cacheCurrentUnlockEpisodes:(id)arg0 ForMixID:(id)arg1;
+ (id)getCurrentUnlockEpisodesForMixID:(id)arg0;
+ (BOOL)hasUnlockedVideoID:(id)arg0;
+ (void)cacheUnlockVideoID:(id)arg0;
+ (void)cacheTryUnlockFrequencyItemID:(id)arg0;
+ (id)checkItemIDTryUnlockFrequency:(id)arg0;
+ (void)cacheOpenVIPUserID:(id)arg0;
+ (BOOL)checkIsOpenVIPUser:(id)arg0;
+ (void)cacheIsRequestingVideoID:(id)arg0 isRequesting:(BOOL)arg1;
+ (BOOL)checkIsRequestingVideoID:(id)arg0;
+ (void)cacheAdViewTimesCreatorID:(id)arg0;
+ (id)checkCreatorIDAdViewTimes:(id)arg0;
+ (BOOL)enableDislikeForHotSpotChannel;
+ (id)surveyViewControllerForModel:(id)arg0;
+ (id)enterPersonalPagePlayletParamsForModel:(id)arg0;
+ (BOOL)showCommentMediumBarViewWithModel:(id)arg0;
+ (id)commentMediumViewWithModel:(id)arg0 params:(id)arg1;
+ (void)requestLoginBeforePlayletCollectWithCompleteBlock:(id /* block */)arg0;
+ (void)requestPlayletCollectWithID:(id)arg0 action:(unsigned long long)arg1 completeBlock:(id /* block */)arg2;
+ (Class)collectionManager;
+ (id)playletCollectionManager;
+ (id)transitionManagerWithHostContainer:(id)arg0;
+ (BOOL)shouldUpdateVideoIfNeedForPlayletPaidVideo:(id)arg0 error:(id)arg1;
+ (void)uploadPaymentVideoWatchRecordIfNeed:(id)arg0 seconds:(double)arg1 videoDuration:(double)arg2;
+ (BOOL)shouldShowDeleteToastForModel:(id)arg0;
+ (id)feedInformationDebugPanel;
+ (BOOL)stringOnlyContainNumber:(id)arg0;

- (id)aAWEPadModuleAdapter;
- (void)transToMediumDetailWithParams:(id)arg0;
- (id)hotSpotCommentPanelHeaderVCWithCardModel:(id)arg0 containerWidth:(double)arg1;
- (BOOL)shouldDealQRCodeStringWithBBox:(id)arg0;
- (Class)hotSearchInnerBottomBarController;
- (void)prepareHotSpotDataWithZipURI:(id)arg0;
- (void)requestTaskItemWithID:(id)arg0 completion:(id /* block */)arg1;
- (void)requestChallengeItemWithID:(id)arg0 isCommerce:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)requestChallengeItemWithName:(id)arg0 isCommerce:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)newChallengeDetailDescView;
- (id)challengeListDataController;
- (id)showChallengeDetailHalfScreenOnVC:(id)arg0 challengeID:(id)arg1 challengeName:(id)arg2 isCommerce:(BOOL)arg3 completion:(id /* block */)arg4 dismissBlock:(id /* block */)arg5;
- (id)showChallengeDetailHalfScreenMediaOnVC:(id)arg0 challengeID:(id)arg1 challengeName:(id)arg2 isCommerce:(BOOL)arg3 height:(double)arg4 completion:(id /* block */)arg5 dismissBlock:(id /* block */)arg6;
- (void)requestChallengeItemsWithIDArray:(id)arg0 completion:(id /* block */)arg1;
- (void)requestPlayletDetailInfo:(id)arg0 completeBlock:(id /* block */)arg1;
- (id)addPlayletTrackers:(id)arg0;
- (id)boardTabModelFromHotSpotModel:(id)arg0;
- (void)fetchGessedSearchKeyword:(id)arg0 useJSON:(BOOL)arg1 bizID:(id)arg2 completion:(id /* block */)arg3;
- (void)shootWithTrendingTopic:(id)arg0 challengeID:(id)arg1 musicID:(id)arg2 stickerID:(id)arg3 enterFrom:(id)arg4 shootWay:(id)arg5;
- (BOOL)isShowingDislikeRecommendPanel;
- (void)configDislikeRecommendPanelState:(BOOL)arg0;
- (id)starHitRankSharedManager;
- (id)createLiveHotPanelContainerViewController;
- (id)getHotSpotVCWithDataArray:(id)arg0 initialIndex:(long long)arg1 referString:(id)arg2 otherParams:(id)arg3;
- (id)searchTrackerTrendingTypeWithHotSpotModel:(id)arg0;
- (id)getDiscussionViewController;
- (id)detailTableViewControllerWithExamples:(id)arg0 indexPath:(id)arg1 referString:(id)arg2;
- (void)cacheHotSpotVideos:(id)arg0 keyword:(id)arg1 type:(long long)arg2 otherParams:(id)arg3;
- (void)removeAllCachesForType:(long long)arg0;
- (void)createUserSentCommentCacheWithKeyword:(id)arg0;
- (void)addHotSearchDiscussionComment:(id)arg0;
- (void)removeCommentWhenGeneralSearchDiscussionDealloc;
- (id)getCommentsArrayFromHotSearchDiscussion;
- (id)getHotSpotTrackerWithModel:(id)arg0 originDict:(id)arg1;
- (id)xTabHotSpotViewController;
- (id)playletUserProfileTabViewControllerWithUserID:(id)arg0 targetUser:(id)arg1;
- (id)getChallengeImagePriviewControllerForModel:(id)arg0;
- (BOOL)shouldShowCommentShrinkVideo:(id)arg0 referString:(id)arg1;
- (id)hotSpotAutoPlayCellManager;
- (BOOL)isCommentContainerDelegateFromNewHotSpot:(id)arg0;
- (BOOL)enableHotSpotFireTag;
- (id)feedHotListCardManager;
- (double)hotSpotCommentPanelHeaderVCHeight:(id)arg0;
- (id)commentInputContextWithHunterParams:(id)arg0;
- (BOOL)isShowingDislikeRecommmendPanel;
- (void)setIsShowingDislikeRecommmendPanel:(BOOL)arg0;

@end
