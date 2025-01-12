//
//     Generated by private class-dump
//

@protocol AWEDouPlusService <HTSService>

+ (BOOL)shouldShowDouPlusEntrance;
+ (id)douPlusEntryTitleWithType:(long long)arg0;
+ (BOOL)openSpecialPayDeskWithOriginUrl:(id)arg0;
+ (void)openLiveDouPlusWithUrlString:(id)arg0;
+ (void)openLiveDouPlusWithUrlString:(id)arg0 isMonitorLiveShow:(BOOL)arg1 completion:(id /* block */)arg2 stackVCAdjust:(id /* block */)arg3;
+ (void)openLiveDouPlusWithUrlString:(id)arg0 completion:(id /* block */)arg1;
+ (void)openLiveDouPlusWithUrlString:(id)arg0 completion:(id /* block */)arg1 closeCompletion:(id /* block */)arg2;
+ (void)openLiveDouPlusWithUrlString:(id)arg0 isMonitorLiveShow:(BOOL)arg1 completion:(id /* block */)arg2;
+ (BOOL)isLimitSelfLiveDouPlus;
+ (void)queryDouPlusOrderWithParams:(id)arg0 remainCount:(long long)arg1 completion:(id /* block */)arg2;
+ (void)queryDouPlusTorchOrderWithParams:(id)arg0 remainCount:(long long)arg1 completion:(id /* block */)arg2;
+ (void)handleDouOrderResult:(BOOL)arg0;
+ (void)handleDouOrderResult:(BOOL)arg0 hostingParam:(id)arg1;
+ (void)handleDouOrderResultWithParams:(id)arg0;
+ (void)closeTopDouPlusWebVCsAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
+ (BOOL)shouldShowAdsEntryInSlidePanel;
+ (void)fetchAdsEntranceWithItemID:(id)arg0 enterFrom:(id)arg1 completeBlock:(id /* block */)arg2;
+ (BOOL)isLimitDouPlusEntryGuideAnimation;
+ (void)tryPreLoadDouPlusIAPProducts;
+ (void)monitorDouPlusLiveWithSuccess:(BOOL)arg0 isRecharge:(BOOL)arg1 params:(id)arg2;
+ (id)douplusRNURLStringWithParams:(id)arg0 originURLString:(id)arg1;
+ (BOOL)shouldDouPlusIconMoveForward;
+ (BOOL)shouldUseNewDouPlusToastAPI;
+ (BOOL)shouldUseNewDouPlusIconAPI;
+ (long long)douPlusGuideTypeInteractionScene;
+ (BOOL)shouldShowDouPlusToastInInteractionScene;
+ (BOOL)shouldShowDouPlusIconReverseInInteractionScene;
+ (BOOL)shouldShowDouPlusNewIconBreathInInteractionScene;
+ (long long)douPlusIconLogoUpgradeWithType;
+ (id)douPlusOperaterIconInScene:(id)arg0 shouldAdaptTheme:(BOOL)arg1;
+ (id)getDouPlusEntryGuideShouleReverseQueryString:(long long)arg0;
+ (id)fetchDOUPlusToastModelWithParams:(id)arg0 completionBlock:(id /* block */)arg1;
+ (id)fetchDouPlusUniqueEntranceWithCompletionBlock:(id /* block */)arg0;
+ (id)douPlusXiaoDianImageViewWithEntranceType:(long long)arg0;
+ (id)douPlusXiaoDianImageViewWithEntranceType:(long long)arg0 shareItemStyle:(unsigned long long)arg1;
+ (id)douPlusXiaoDianEntryURLPathForLive;
+ (long long)douPlusCommonToastRequestThreshold;
+ (id)douPlusXiaoDianTitle;
+ (BOOL)shouldShowDouPlusNewEntranceInSharePanel:(id)arg0;
+ (long long)sceneTypeWithType:(id)arg0;
+ (BOOL)shouldShowDouplusIconReverseInFeedScene;
+ (id)getEncodeParamsStringWithDict:(id)arg0;
+ (id)getDouPlusShowClickTrackParams:(long long)arg0 model:(id)arg1 referer:(id)arg2 servingType:(id)arg3;
+ (id)getDouPlusShowClickTrackParams:(long long)arg0 model:(id)arg1 referer:(id)arg2 servingType:(id)arg3 shouldAddClickTime:(BOOL)arg4;
+ (Class)profileExtensionAreaCardDouPLusControllerClass;
+ (BOOL)shouldShowLocalPromotionEntranceInSharePanel:(id)arg0;
+ (BOOL)shouldShowLocalPromotionEntranceInProfileSettingPanel;
+ (void)handleLocalPromotionJumpWithParamsModel:(id)arg0;
+ (id)douPlusLocalPromotionShareImageWithContext:(id)arg0;

- (void)startIAPWithParams:(id)arg0 logParams:(id)arg1 sceneType:(long long)arg2 dpbNum:(id)arg3;

@end
