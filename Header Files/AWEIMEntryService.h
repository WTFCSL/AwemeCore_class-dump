//
//     Generated by private class-dump
//

@class NSString, AWEIMMessageTabLifeCircleModel, UIViewController;
@protocol AWEIMEntryServiceCommonAdapter;

@interface AWEIMEntryService : HTSService <AWEIMEntryService, AWEUserMessage> {
    AWEIMMessageTabLifeCircleModel *_messageTabLifeModel;
    UIViewController *_weakMessageTabViewController;
    id<AWEIMEntryServiceCommonAdapter> _imEntryAdapter;
    NSString *_landingReasonStore;
}

@property (retain, nonatomic) id<AWEIMEntryServiceCommonAdapter> imEntryAdapter;
@property (copy) NSString *landingReasonStore;
@property (weak, nonatomic) AWEIMMessageTabLifeCircleModel *messageTabLifeModel;
@property (weak, nonatomic) UIViewController *weakMessageTabViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableStrongifyIMShareFormFeed;
+ (void)resetDisplayedDays;
+ (void)checkUnavailableInfoForAwemeModel:(id)arg0 completion:(id /* block */)arg1;
+ (BOOL)enableFriendsFastCommentChangeToSendMessage;
+ (BOOL)enableModuleInterfaceLog;
+ (Class)aAWEIMEntryServiceCommonAdapterClass;

- (void)onServiceInit;
- (BOOL)couldExcludeEnterpriseNoticeFromServiceNotice;
- (BOOL)shouldExcludeEnterpriseNoticeFromServiceNotice;
- (BOOL)feedCanAutoPlayWithPresentedViewController:(id)arg0;
- (BOOL)isNoticePushViewShowing;
- (void)dismissToast;
- (id)userManager;
- (BOOL)imQuickReplyIsDormant;
- (id)extractEnterIMGroupTokenWithText:(id)arg0;
- (id)imFeedShareFromLowActiveUserMap;
- (BOOL)isGroupReverseCreat;
- (id)messageTabLifeModel;
- (void)setMessageTabLifeModel:(id)arg0;
- (id)weakMessageTabViewController;
- (void)setWeakMessageTabViewController:(id)arg0;
- (BOOL)canShowEnterpriseModes;
- (BOOL)isQualifiedForEnterpriseModes;
- (BOOL)enableIMMoveToFriendTab;
- (BOOL)enableIMMoveToFeed;
- (int)leftToRightPanToIMEdgeWidth;
- (int)imRightToLeftDismissWidth;
- (int)imLeftToRightDismissWidth;
- (BOOL)currentIsShowingHomeSkylight;
- (BOOL)currentIsShowingHomeSkylightInFamiliarFeed;
- (BOOL)messageTabInitializedWhenNotHasMessageTab;
- (BOOL)tabbarHasNotificationTab;
- (long long)enableIMMoveToGlobalType;
- (BOOL)enableOtherMoveTestIfIMAirplaneOpen;
- (BOOL)enableIMGlobalSkylight;
- (BOOL)enableIMGlobalAirplane;
- (BOOL)enableIMGlobalAirplaneInSelfProfile;
- (BOOL)isAirplaneIMPageShowing;
- (id)getIMMoveToHomeAlert;
- (id)feedEnterIMGuideViewController;
- (id)saveIMUnreadCountSnapshot:(long long)arg0;
- (id)imUnreadCountSnapshot;
- (BOOL)currentUserMaxFollowerCountLess:(int)arg0;
- (BOOL)cachedShouldDisableVajra;
- (BOOL)isIMFeatureEnable;
- (BOOL)isIMDylibLoaded;
- (BOOL)enableAndPrepareDefaultLandingToIMTab;
- (BOOL)enableColdLaunchDefaultLandingToIMTab;
- (BOOL)enableIMLaunchForbiddenSplash;
- (BOOL)enableIMLaunchForbiddenNonFirstBrushSplash;
- (id)recommendCreateGroupManager;
- (BOOL)enableUseMainLandingBootLaunch;
- (int)enableColdLaunchABTest;
- (BOOL)shouldPushIMWithTabbar;
- (BOOL)shouldDemoteWithTimestamp:(double)arg0;
- (BOOL)shouldEnableIMUnreadSharedVideoFeature;
- (BOOL)shouldEnableIMUnreadSharedVideoShowInFeed:(id)arg0;
- (void)reportIMMessageUnreadSharedVideo:(id)arg0 completion:(id /* block */)arg1;
- (id)customizedTrackingParamsWithReferString:(id)arg0 model:(id)arg1;
- (int)preIMUnreadCount;
- (BOOL)enableFeedReadyBootLaunchIM:(long long)arg0;
- (id)runFeedReadyIMTask:(long long)arg0;
- (id)runReadyIMTask;
- (id)getAlphaGestureWithTarget:(id)arg0 selector:(SEL)arg1;
- (id)plainTextForAttributedString:(id)arg0;
- (id)plainTextForAttributedString:(id)arg0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1;
- (id)getImRecommendGreetCardConfig;
- (BOOL)enableRecommendGreetCard;
- (BOOL)enableRecommendGreetConfigV1;
- (long long)getStartIMState;
- (id)tabBarMessageItemSpecificConfig;
- (BOOL)enableIMBigFontStyleOfBottomBar;
- (double)im_scaleFactorOfBottomBar;
- (BOOL)imAwemeDetailOptimizeEnable;
- (BOOL)enableMsgTabUCAsyncModification;
- (void)recordLandingReason:(id)arg0;
- (id)landingReason;
- (BOOL)enableImMoveToGlobalABTest;
- (id)imMoveToFeedConfig;
- (BOOL)enableIMMoveToFriendTabABTest;
- (id)imGroupTokenPattern;
- (id)aAWEIMEntryServiceCommonAdapter;
- (id)imEntryAdapter;
- (void)setLandingReasonStore:(id)arg0;
- (id)landingReasonStore;
- (void)setImEntryAdapter:(id)arg0;
- (void).cxx_destruct;

@end