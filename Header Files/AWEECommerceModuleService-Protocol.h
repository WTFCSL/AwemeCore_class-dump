//
//     Generated by private class-dump
//

@class AWEECFeedEntranceRequest;

@protocol AWEECommerceModuleService <HTSService>

+ (void)addTaskBannerOnView:(id)arg0 request:(id)arg1 completion:(id /* block */)arg2;
+ (void)addTaskBannerOnView:(id)arg0 request:(id)arg1 completion:(id /* block */)arg2;
+ (BOOL)removeTaskBannerWithContainerID:(id)arg0;
+ (BOOL)removeTaskBannerWithContainerID:(id)arg0;

@property (nonatomic) BOOL xTabAlertShouldShow;
@property (nonatomic, retain) AWEECFeedEntranceRequest *currentAnchorRequest;
@property (nonatomic) BOOL anchorShowExtraInfo;
@property (nonatomic) BOOL isJumpTabAction;
@property (nonatomic) BOOL kolVideoBottomViewShow;

- (id)goodsListInAweme:(id)arg0;
- (id)goodsListInAweme:(id)arg0;
- (void)prepareToVisitGoods:(id)arg0 completion:(id /* block */)arg1 failure:(id /* block */)arg2;
- (void)prepareToVisitGoods:(id)arg0 completion:(id /* block */)arg1 failure:(id /* block */)arg2;
- (BOOL)showOpenUrlPageWithRequestBlock:(id /* block */)arg0;
- (BOOL)showOpenUrlPageWithRequestBlock:(id /* block */)arg0;
- (BOOL)canOpenInternalFeedWithAwemeModel:(id)arg0 referString:(id)arg1;
- (BOOL)canOpenInternalFeedWithAwemeModel:(id)arg0 referString:(id)arg1;
- (BOOL)shouldOpenInternalFeedFromCommentAnchor;
- (void)showInternalFeedPageWithRequestBlock:(id /* block */)arg0;
- (void)showInternalFeedPageWithRequestBlock:(id /* block */)arg0;
- (void)handleEntranceRequest:(id)arg0;
- (void)handleEntranceRequest:(id)arg0;
- (BOOL)xTabAlertShouldShow;
- (void)setXTabAlertShouldShow:(BOOL)arg0;
- (id)createLiveFloatOnTopManagerPlayOnViewController:(id)arg0;
- (id)createLiveFloatOnTopManagerPlayOnViewController:(id)arg0;
- (id)createLiveFloatOnTopManagerPlayOnViewController:(id)arg0 fromViewController:(id)arg1 logExtra:(id)arg2;
- (id)createLiveFloatOnTopManagerPlayOnViewController:(id)arg0 fromViewController:(id)arg1 logExtra:(id)arg2;
- (void)fetchUserTaobaoKeStatusIfUserLogin;
- (BOOL)hasGoodsStrictlyWithAwemeModel:(id)arg0;
- (BOOL)hasGoodsStrictlyWithAwemeModel:(id)arg0;
- (BOOL)isShareOrderGoodsWithAwemeModel:(id)arg0;
- (BOOL)isShareOrderGoodsWithAwemeModel:(id)arg0;
- (long long)fromSearchEntranceStyleWithReferString:(id)arg0 withAwemeModel:(id)arg1;
- (long long)fromSearchEntranceStyleWithReferString:(id)arg0 withAwemeModel:(id)arg1;
- (void)setFirstShowInFeedwithAwemeModel:(id)arg0 initialIndex:(long long)arg1 modelIndex:(long long)arg2;
- (BOOL)isFirstToutiaoGoodsWithAwemeModel:(id)arg0;
- (BOOL)isFirstToutiaoGoodsWithAwemeModel:(id)arg0;
- (BOOL)anchorInfoIsValidForShoppingForAweme:(id)arg0;
- (BOOL)anchorInfoIsValidForShoppingForAweme:(id)arg0;
- (BOOL)shouldShowShoppingEntranceForAweme:(id)arg0;
- (BOOL)shouldShowShoppingEntranceForAweme:(id)arg0;
- (BOOL)hasShopEntry:(id)arg0;
- (unsigned long long)awemeGoodsCount:(id)arg0;
- (id)goodsInAweme:(id)arg0 promotionID:(id)arg1;
- (id)goodsInAweme:(id)arg0 promotionID:(id)arg1;
- (long long)goodsIndexInAweme:(id)arg0 promotionID:(id)arg1;
- (long long)goodsIndexInAweme:(id)arg0 promotionID:(id)arg1;
- (BOOL)shouldShowGoodsPromotionCardViewWithModel:(id)arg0;
- (BOOL)shouldShowGoodsPromotionCardViewWithModel:(id)arg0;
- (BOOL)shouldShowGoodsPromotionViewWithModel:(id)arg0 currentPalyTime:(double)arg1 sourcePage:(id)arg2;
- (BOOL)shouldShowGoodsPromotionViewWithModel:(id)arg0 currentPalyTime:(double)arg1 sourcePage:(id)arg2;
- (BOOL)shouldShowShoppingCardAnchorForAweme:(id)arg0;
- (BOOL)shouldShowShoppingCardAnchorForAweme:(id)arg0;
- (BOOL)shouldShowARAnchorForAweme:(id)arg0;
- (BOOL)shouldShowARAnchorForAweme:(id)arg0;
- (id)personPageEcomRecommmandParams:(id)arg0;
- (BOOL)shouldPauseFeedPlayer;
- (BOOL)isEcomHybridPageInModalView;
- (id)generalCodeInsertWithObject:(id)arg0;
- (id)generalCodeInsertWithObject:(id)arg0;
- (BOOL)isBelongToCommercedAnchorWithType:(unsigned long long)arg0;
- (BOOL)isBelongToCommercedAnchorWithType:(unsigned long long)arg0;
- (BOOL)shouldShowBulletAnchorWithType:(unsigned long long)arg0;
- (BOOL)shouldShowBulletAnchorWithType:(unsigned long long)arg0;
- (BOOL)needJumpWithSchema:(unsigned long long)arg0;
- (BOOL)needJumpWithSchema:(unsigned long long)arg0;
- (void)openNewWindowInstrumentBoxFromPage:(id)arg0 enterMethod:(id)arg1 completion:(id /* block */)arg2;
- (void)openNewWindowInstrumentBoxFromPage:(id)arg0 enterMethod:(id)arg1 completion:(id /* block */)arg2;
- (void)openNewShopInstrumentBoxFromPage:(id)arg0 enterMethod:(id)arg1 completion:(id /* block */)arg2;
- (void)openNewShopInstrumentBoxFromPage:(id)arg0 enterMethod:(id)arg1 completion:(id /* block */)arg2;
- (void)openGoodsManageWithDraftID:(id)arg0;
- (void)openGoodsManageWithDraftID:(id)arg0;
- (void)openGoodsManageWithDraftID:(id)arg0 trackParams:(id)arg1;
- (void)openGoodsManageWithDraftID:(id)arg0 trackParams:(id)arg1;
- (void)goodsPageWithDraftID:(id)arg0 completion:(id /* block */)arg1;
- (void)goodsPageWithDraftID:(id)arg0 completion:(id /* block */)arg1;
- (void)goodsPageWithDraftID:(id)arg0 trackParams:(id)arg1 completion:(id /* block */)arg2;
- (void)goodsPageWithDraftID:(id)arg0 trackParams:(id)arg1 completion:(id /* block */)arg2;
- (void)openGoodsGuideOnViewcontroller:(id)arg0 entryPage:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)openGoodsGuideOnViewcontroller:(id)arg0 entryPage:(id)arg1 completionBlock:(id /* block */)arg2;
- (BOOL)openThirdPlatformWithoutGoodsDetailForUrl:(id)arg0 promotionSource:(long long)arg1;
- (BOOL)openThirdPlatformWithoutGoodsDetailForUrl:(id)arg0 promotionSource:(long long)arg1;
- (void)requestShophelperHintWithParams:(id)arg0 Completion:(id /* block */)arg1;
- (void)requestShophelperHintWithParams:(id)arg0 Completion:(id /* block */)arg1;
- (void)quiteAgreeDisclaimerForPromotionSource:(long long)arg0;
- (void)quiteAgreeDisclaimerForPromotionSource:(long long)arg0;
- (id)makeNewAWEGoodsCardPromptManager;
- (id)makePlayGoodsBackgroundVideoManager;
- (id)goodsServiceManager;
- (id)liveReplayManager;
- (id)getECommerceInnerDataController;
- (id)getECommerceFeedDataController;
- (id)getECommerceMallFeedDetailDataController;
- (id)getECommerceMallShopMomentDataController;
- (void)reportImpressionIfNeededWithAwemeModel:(id)arg0 referString:(id)arg1;
- (void)reportImpressionIfNeededWithAwemeModel:(id)arg0 referString:(id)arg1;
- (Class)getFollowEcomGroupControllerFactoryClass;
- (id)makeFavoriteViewController;
- (void)shopMessageListWithCompletion:(id /* block */)arg0;
- (void)shopMessageListWithCompletion:(id /* block */)arg0;
- (id)makeCollectionAwemeCellPlayerManager;
- (void)uploadPhotosWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)uploadPhotosWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)uploadMediaWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)uploadMediaWithParams:(id)arg0 completion:(id /* block */)arg1;
- (id)showTokenAlerContainerViewWithPrice:(id)arg0 sale:(id)arg1 maxPrice:(id)arg2;
- (id)showTokenAlerContainerViewWithPrice:(id)arg0 sale:(id)arg1 maxPrice:(id)arg2;
- (void)chooseContactWithCompletion:(id /* block */)arg0;
- (void)chooseContactWithCompletion:(id /* block */)arg0;
- (void)showFeedEntranceWithRequestBlock:(id /* block */)arg0;
- (void)showFeedEntranceWithRequestBlock:(id /* block */)arg0;
- (id)currentAnchorRequest;
- (void)setCurrentAnchorRequest:(id)arg0;
- (void)preLoadInternalFeed;
- (void)preLoadInnernalFeedWithAwemeID:(id)arg0 playBackTime:(double)arg1;
- (void)preLoadInnernalFeedWithAwemeID:(id)arg0 playBackTime:(double)arg1;
- (void)setFeedPopoverContainerViewController:(id)arg0;
- (id)getFeedPopoverContainerViewController;
- (BOOL)anchorShowExtraInfo;
- (void)setAnchorShowExtraInfo:(BOOL)arg0;
- (void)showGoodsPageWithRequestBlock:(id /* block */)arg0;
- (void)showGoodsPageWithRequestBlock:(id /* block */)arg0;
- (void)showGoodsPanelUseSchemaWithParameters:(id)arg0 fullscreen:(BOOL)arg1 successBlock:(id /* block */)arg2 failureBlock:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)showGoodsPanelUseSchemaWithParameters:(id)arg0 fullscreen:(BOOL)arg1 successBlock:(id /* block */)arg2 failureBlock:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)preConnectGoodsDetailServiceWithRequestBlock:(id /* block */)arg0;
- (void)preConnectGoodsDetailServiceWithRequestBlock:(id /* block */)arg0;
- (BOOL)liteLiveEntranceEnabled;
- (id)eCommerceAlertManager;
- (id)shoppingAnchorView;
- (id)instantAnchorView;
- (id)commentInstantAnchorView;
- (BOOL)isPanelShowing;
- (id)fullPageGoodAnchorView;
- (id)feedGoodsElementView;
- (id)feedGoodsCardElementView;
- (id)mallFeedDetailGoodsCardView;
- (id)goodsCardDataController;
- (id)feedPopoverContainerViewController;
- (id)ecommerceEntryView;
- (id)ecommerceTagViewWithType:(long long)arg0;
- (id)ecommerceTagViewWithType:(long long)arg0;
- (void)showGoodsDetailfromAweme:(id)arg0 withExtra:(id)arg1;
- (void)showGoodsDetailfromAweme:(id)arg0 withExtra:(id)arg1 fullScreenScene:(BOOL)arg2;
- (id)getEcomAwemeLiteShopping;
- (BOOL)showInternalFeedCardFullStyle;
- (BOOL)isEnterFromECommerceComment:(id)arg0;
- (BOOL)isEnterFromECommerceComment:(id)arg0;
- (BOOL)isEnterFromECommerceProductShare:(id)arg0;
- (BOOL)isEnterFromECommerceProductShare:(id)arg0;
- (BOOL)needEnterECommerceEditController:(id)arg0;
- (id)ecomEditConfigurationWithInputData:(id)arg0;
- (id)ecomEditConfigurationWithInputData:(id)arg0;
- (id)firstTabLynxViewController;
- (void)configFirstTab:(id)arg0 withRouterParams:(id)arg1;
- (void)configMainPageHiddenSearchAction:(id /* block */)arg0;
- (BOOL)isMallFirstTabLynxViewController:(id)arg0;
- (BOOL)hasHomePageMallTab;
- (id)mallBubbleManager;
- (id)mallChannelConfig;
- (void)initBubbleTrigger:(id)arg0 extra:(id)arg1;
- (BOOL)isSupportTopMall;
- (BOOL)isTopMallShowing;
- (void)registBubbleAndRedDotHandler:(id)arg0;
- (BOOL)enableMallMessageUpgradedListStyle;
- (BOOL)enableMallMessageSplit;
- (void)slideInMallVC:(id)arg0;
- (void)slideInMallVC:(id)arg0;
- (void)slideOutMallVC:(id)arg0;
- (void)enterMallVC:(id)arg0 withParams:(id)arg1;
- (BOOL)isNativeMall;
- (BOOL)isNativeImmersiveFullMall;
- (id)mallGeckoResourceChannel;
- (id)mallBundleConfigDefaultUrl;
- (BOOL)shouldMallEnableForceTheme;
- (BOOL)isHalfPageLynxMallVersion;
- (id)mallLiteBackgroundView;
- (void)initMallPopupTrigger;
- (void)presenceValidationWithObjects:(id)arg0 validatorNameArray:(id)arg1 trackerEventName:(id)arg2 trackerParams:(id)arg3;
- (void)presenceValidationWithObjects:(id)arg0 validatorNameArray:(id)arg1 trackerEventName:(id)arg2 trackerParams:(id)arg3;
- (void)presenceValidationWithObject:(id)arg0 validatorName:(id)arg1 trackerEventName:(id)arg2 trackerParams:(id)arg3;
- (void)presenceValidationWithObject:(id)arg0 validatorName:(id)arg1 trackerEventName:(id)arg2 trackerParams:(id)arg3;
- (void)equalStringValidationWithObject:(id)arg0 targetString:(id)arg1 validatorName:(id)arg2 trackerEventName:(id)arg3 trackerParams:(id)arg4;
- (void)equalStringValidationWithObject:(id)arg0 targetString:(id)arg1 validatorName:(id)arg2 trackerEventName:(id)arg3 trackerParams:(id)arg4;
- (void)ecomShareSuccessWithParams:(id)arg0 shareType:(id)arg1;
- (void)ecomShareSuccessWithParams:(id)arg0 shareType:(id)arg1;
- (void)ecomShareQRSuccessWithParams:(id)arg0;
- (void)ecomShareQRSuccessWithParams:(id)arg0;
- (void)ecomShareH5SuccessWithParams:(id)arg0 shareType:(id)arg1;
- (void)ecomShareH5SuccessWithParams:(id)arg0 shareType:(id)arg1;
- (void)ecomShareStorySuccessWithModel:(id)arg0;
- (void)ecomShareStorySuccessWithModel:(id)arg0;
- (BOOL)supportGoodsShareToStory;
- (id)getEcomReflowParamsFromSchema:(id)arg0 longUrl:(id)arg1;
- (id)getEcomReflowParamsFromSchema:(id)arg0 longUrl:(id)arg1;
- (id)urlstringByRemovingEcomShareTrackParamsFromUrl:(id)arg0;
- (id)urlstringByRemovingEcomShareTrackParamsFromUrl:(id)arg0;
- (void)openGrantCouponPanelOnView:(id)arg0 withParams:(id)arg1 grantHandler:(id /* block */)arg2;
- (void)openGrantCouponPanelOnView:(id)arg0 withParams:(id)arg1 grantHandler:(id /* block */)arg2;
- (BOOL)shouldShowCommentAreaGuidePanel;
- (BOOL)isShowingCommentAreaGuidePanel;
- (void)openCommentAreaAutorizationToastPanel;
- (void)setFindSimilarityUserAuthorizationAlertState:(BOOL)arg0;
- (void)openFindSimilarityPanel:(id)arg0;
- (void)recordTappedBottomBarWithAwemeID:(id)arg0;
- (void)recordTappedBottomBarWithAwemeID:(id)arg0;
- (BOOL)getCommentTopBarShouldShowWithAwemeID:(id)arg0;
- (BOOL)getCommentTopBarShouldShowWithAwemeID:(id)arg0;
- (void)recordCommentTopBarShowedWithAwemeID:(id)arg0;
- (void)recordCommentTopBarShowedWithAwemeID:(id)arg0;
- (void)removeCommentTopBarShowedWithAwemeID:(id)arg0;
- (void)removeCommentTopBarShowedWithAwemeID:(id)arg0;
- (BOOL)getCommentTopBarShowedWithAwemeID:(id)arg0;
- (BOOL)getCommentTopBarShowedWithAwemeID:(id)arg0;
- (BOOL)shouldShowOrderBubble;
- (id)updateEcomSceneID:(id)arg0 withType:(long long)arg1;
- (BOOL)shouldShowProductCommentWithAwemeModel:(id)arg0;
- (BOOL)shouldShowProductCommentWithAwemeModel:(id)arg0;
- (id)getProductCommentCountWithAwemeModel:(id)arg0;
- (id)getProductCommentCountWithAwemeModel:(id)arg0;
- (void)trackProductCommentViewShow:(id)arg0 enterByTap:(id)arg1;
- (void)trackProductCommentViewShowDefault:(id)arg0;
- (void)trackProductCommentTabShow:(id)arg0;
- (id)productCommentViewControllerWithAwemeModel:(id)arg0 extraParams:(id)arg1;
- (id)productCommentViewControllerWithAwemeModel:(id)arg0 extraParams:(id)arg1;
- (id)adProductCommentViewControllerWithAwemeModel:(id)arg0;
- (id)adProductCommentViewControllerWithAwemeModel:(id)arg0;
- (void)fetchGoodsDetailURLWithScanBarCode:(id)arg0 completionBlock:(id /* block */)arg1;
- (void)fetchGoodsDetailURLWithScanBarCode:(id)arg0 completionBlock:(id /* block */)arg1;
- (id)getTrendGoodsExtraDict:(id)arg0;
- (id)getFriendTag:(id)arg0;
- (id)makeFeedGoodsVideoDataControllerWithProductID:(id)arg0;
- (id)makeFeedGoodsVideoDataControllerWithProductID:(id)arg0;
- (id)goodPriceInfoDictWithAweme:(id)arg0;
- (id)goodPriceInfoDictWithAweme:(id)arg0;
- (id)goodPriceTrackingInfoDictWithAweme:(id)arg0;
- (id)goodPriceTrackingInfoDictWithAweme:(id)arg0;
- (id)extraEcomInfoWithAweme:(id)arg0;
- (id)extraEcomInfoWithAweme:(id)arg0;
- (id)extraEcomPlayEndInfoWithAweme:(id)arg0;
- (id)extraEcomPlayEndInfoWithAweme:(id)arg0;
- (id)storeSourceParamsWithExtraInfoDic:(id)arg0;
- (id)storeSourceParamsWithExtraInfoDic:(id)arg0;
- (id)appendEventParams:(id)arg0 responder:(id)arg1;
- (id)appendEntranceInfoWithString:(id)arg0 responder:(id)arg1;
- (id)appendEntranceInfoWithString:(id)arg0 responder:(id)arg1;
- (id)appendEntranceInfoWithDictionary:(id)arg0 responder:(id)arg1;
- (id)appendEntranceInfoWithDictionary:(id)arg0 responder:(id)arg1;
- (id)appendEntranceInfoWithString:(id)arg0 responder:(id)arg1 scene:(id)arg2;
- (id)appendEntranceInfoWithString:(id)arg0 responder:(id)arg1 scene:(id)arg2;
- (id)appendEntranceInfoWithDictionary:(id)arg0 responder:(id)arg1 scene:(id)arg2;
- (id)appendEntranceInfoWithDictionary:(id)arg0 responder:(id)arg1 scene:(id)arg2;
- (id)appendEntranceInfoWhenCartAddWithString:(id)arg0 btmModel:(id)arg1;
- (id)appendEntranceInfoWhenCartAddWithString:(id)arg0 btmModel:(id)arg1;
- (id)appendEntranceInfoWhenCartAddWithDictionary:(id)arg0 btmModel:(id)arg1;
- (id)appendEntranceInfoWhenCartAddWithDictionary:(id)arg0 btmModel:(id)arg1;
- (id)appendEntranceInfoWhenCartAddWithString:(id)arg0 sourceBtmToken:(id)arg1;
- (id)appendEntranceInfoWhenCartAddWithString:(id)arg0 sourceBtmToken:(id)arg1;
- (id)appendEntranceInfoWhenCartAddWithDictionary:(id)arg0 sourceBtmToken:(id)arg1;
- (id)appendEntranceInfoWhenCartAddWithDictionary:(id)arg0 sourceBtmToken:(id)arg1;
- (id)appendEntranceInfoWhenBuyNowWithString:(id)arg0 sourceBtmToken:(id)arg1;
- (id)appendEntranceInfoWhenBuyNowWithString:(id)arg0 sourceBtmToken:(id)arg1;
- (id)appendEntranceInfoWhenBuyNowWithDictionary:(id)arg0 sourceBtmToken:(id)arg1;
- (id)appendEntranceInfoWhenBuyNowWithDictionary:(id)arg0 sourceBtmToken:(id)arg1;
- (id)extraParamsForEvent:(id)arg0 params:(id)arg1 responder:(id)arg2;
- (id)extraParamsForEvent:(id)arg0 params:(id)arg1 responder:(id)arg2;
- (BOOL)isEcomShareSchema:(id)arg0;
- (void)verifyEcomDeepLink:(id)arg0 completion:(id /* block */)arg1;
- (void)verifyShareSecretWithSchema:(id)arg0 requestPage:(unsigned long long)arg1 shareChannel:(unsigned long long)arg2 ecS:(id)arg3 bizParams:(id)arg4 extraDic:(id)arg5 completion:(id /* block */)arg6;
- (void)verifyShareSecretWithSchema:(id)arg0 requestPage:(unsigned long long)arg1 shareChannel:(unsigned long long)arg2 ecS:(id)arg3 bizParams:(id)arg4 extraDic:(id)arg5 completion:(id /* block */)arg6;
- (void)requesetSafeTokenWithSchema:(id)arg0 requestPage:(unsigned long long)arg1 destinationPage:(unsigned long long)arg2 extraDic:(id)arg3 completion:(id /* block */)arg4;
- (void)requesetSafeTokenWithSchema:(id)arg0 requestPage:(unsigned long long)arg1 destinationPage:(unsigned long long)arg2 extraDic:(id)arg3 completion:(id /* block */)arg4;
- (void)requestEcomGoodsInfoBeforeReturnWithRequestPage:(unsigned long long)arg0 itemType:(unsigned long long)arg1 itemId:(id)arg2 userId:(id)arg3 marketingChannel:(id)arg4 extraDic:(id)arg5 schema:(id)arg6 extraInfo:(id)arg7 completion:(id /* block */)arg8;
- (void)requestEcomGoodsInfoBeforeReturnWithRequestPage:(unsigned long long)arg0 itemType:(unsigned long long)arg1 itemId:(id)arg2 userId:(id)arg3 marketingChannel:(id)arg4 extraDic:(id)arg5 schema:(id)arg6 extraInfo:(id)arg7 completion:(id /* block */)arg8;
- (id)aweec_iesec_imageNamed:(id)arg0;
- (id)ecomShareTagsStackView:(id)arg0 shouldHideBoundsView:(BOOL)arg1 maxWidth:(double)arg2 needCoupon:(BOOL)arg3;
- (id)ecomShareGoodsLynxUrl:(id)arg0;
- (unsigned long long)ecommerceVideoTypeWithAwemeModel:(id)arg0;
- (unsigned long long)ecommerceVideoTypeWithAwemeModel:(id)arg0;
- (id)tagVideoTypeWithEcommerceVideoType:(unsigned long long)arg0;
- (id)tagVideoTypeWithEcommerceVideoType:(unsigned long long)arg0;
- (id)ecomCommunityShareFriendBuyFrequencyConfigForShop;
- (id)ecomCommunityShareFriendBuyFrequencyConfigForWindow;
- (id)ecomShareSaveToAlbumImageWithSharedImage:(id)arg0 bgColorImage:(id)arg1 shareScene:(id)arg2;
- (id)ecomShareSaveToAlbumImageWithSharedImage:(id)arg0 bgColorImage:(id)arg1 shareScene:(id)arg2;
- (void)trackEcomShareReflowWithUrl:(id)arg0;
- (void)trackEcomShareReflowWithUrl:(id)arg0;
- (BOOL)isEcomShareVideoForBTMWithAweme:(id)arg0;
- (BOOL)isEcomShareVideoForBTMWithAweme:(id)arg0;
- (id)shopIdFromAweme:(id)arg0;
- (id)shopIdFromAweme:(id)arg0;
- (id)mallTabLynxDefaultUrl;
- (id)mallBubbleDefaultPath;
- (id)mallBullbleExposeDefaultPath;
- (long long)mallBubbleBusinessId;
- (id)objectRepository;
- (id)lastPlayer;
- (BOOL)enableFeedVideoZoomForShopAnchor;
- (void)preloadImagesFormData:(id)arg0 withECPreloadConfig:(id)arg1 imageConfigTag:(id)arg2 bizTag:(id)arg3 sceneTag:(id)arg4;
- (void)addPrefetchParamsToDictory:(id)arg0;
- (void)addPrefetchParamsToDictory:(id)arg0;
- (void)registerMallLogAppendDictionary;
- (void)preconnectImageHosts;
- (void)preloadBackgroundImageWithTheme:(id)arg0;
- (void)preloadBackgroundImageWithTheme:(id)arg0;
- (id)currentFeedVideoMallContextWithEnterFrom:(id)arg0 enterMethod:(id)arg1 extra:(id)arg2;
- (id)currentFeedVideoMallContextWithEnterFrom:(id)arg0 enterMethod:(id)arg1 extra:(id)arg2;
- (void)setJumpMallBasicObject:(id)arg0;
- (void)setJumpMallBasicObject:(id)arg0;
- (id)getJumpToMallTrackParamsWithMethod:(id)arg0;
- (id)getJumpToMallTrackParamsWithMethod:(id)arg0;
- (void)trackJumpGuideMallShow;
- (void)trackJumpGuideMallClick;
- (id)currentFeedVideoMallContextForInflowFeed;
- (id)getGuideJumpTabInfo;
- (BOOL)isJumpTabAction;
- (void)setIsJumpTabAction:(BOOL)arg0;
- (id)createFeedGoodsCardViewController:(id)arg0;
- (void)getFeedGoodsCardAwemeModelWithParmas:(id)arg0 completion:(id /* block */)arg1;
- (void)getFeedGoodsCardAwemeModelWithParmas:(id)arg0 completion:(id /* block */)arg1;
- (void)currentPlayBackTime:(double)arg0 awemeID:(id)arg1;
- (void)cpsTrackWithUrl:(id)arg0;
- (void)cpsTrackWithUrl:(id)arg0;
- (id)pageCardLynxSchemaDefault;
- (void)updateLocationIfNeed;
- (BOOL)needCheckLogin;
- (id)convertFenToYuan:(id)arg0;
- (id)convertFenToYuan:(id)arg0;
- (BOOL)ecChooseMediaUpdate;
- (id)liteMallTabJumpGuideManager;
- (void)videoSharefetchBeforeShareInfo:(id)arg0 context:(id)arg1;
- (void)videoSharefetchBeforeShareInfo:(id)arg0 context:(id)arg1;
- (void)liveSharefetchBeforeShareInfo:(id)arg0 context:(id)arg1 enterFrom:(id)arg2;
- (void)liveSharefetchBeforeShareInfo:(id)arg0 context:(id)arg1 enterFrom:(id)arg2;
- (void)transferToURLSchema:(id)arg0 byAddingEntranceInfoDic:(id)arg1;
- (void)transferToURLSchema:(id)arg0 byAddingEntranceInfoDic:(id)arg1;
- (BOOL)isDouyin;
- (BOOL)isDouyinLite;
- (void)showBubbleWithModel:(id)arg0 completion:(id /* block */)arg1;
- (void)showBubbleWithModel:(id)arg0 completion:(id /* block */)arg1;
- (void)hideBubbleWithModel:(id)arg0;
- (void)hideBubbleWithModel:(id)arg0;
- (BOOL)isHomePageMallTopMall;
- (void)conflictBubbleHasShowedInnerCycle;
- (id)kolBottomBarAvatarList:(id)arg0;
- (long long)kolBottomBarVideoCount:(id)arg0;
- (id)productDetailBaseParams:(id)arg0;
- (id)pitayaTraitHub;
- (BOOL)kolVideoBottomViewShow;
- (void)setKolVideoBottomViewShow:(BOOL)arg0;
- (void)mallDesktopChannelGuideManagerInit;
- (void)showMallDesktopChannelGuide;
- (void)preloadShopForAdWithQuery:(id)arg0;
- (void)preloadShopForAdWithQuery:(id)arg0;
- (void)handleAddressInfoWithAweModel:(id)arg0 liveLogModel:(id)arg1;
- (void)handleAddressInfoWithAweModel:(id)arg0 liveLogModel:(id)arg1;
- (id)addressInfoTrackParamsWithModel:(id)arg0;
- (id)addressInfoTrackParamsWithModel:(id)arg0;
- (void)track:(id)arg0;
- (BOOL)isLogin;

@end
