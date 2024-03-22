//
//     Generated by private class-dump
//

@class NSString;

@interface AWEUserProfileModuleService : HTSService <AWEPublishTaskMessage, AWEUserProfileModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canShowHideMyPostCellForUser:(id)arg0;
+ (BOOL)canShowDoubleCheckBlockViewWithUser:(id)arg0;
+ (void)showDoubleCheckBlockViewWithUser:(id)arg0 enterFrom:(id)arg1;
+ (void)showDoubleCheckBlockViewWithUser:(id)arg0 enterFrom:(id)arg1 previousPage:(id)arg2;
+ (BOOL)canShowDoubleCheckUnfollowViewWithUser:(id)arg0;
+ (void)showDoubleCheckUnfollowViewWithUser:(id)arg0 params:(id)arg1 unfollowConfirmationBlock:(id /* block */)arg2;
+ (void)showDoubleCheckUnfollowViewWithUser:(id)arg0 params:(id)arg1 needAlert:(BOOL)arg2 unfollowConfirmationBlock:(id /* block */)arg3;
+ (void)showDoubleCheckForPrivateUser:(id)arg0 params:(id)arg1 unfollowConfirmationBlock:(id /* block */)arg2;
+ (void)didTapHideMyPostFromUser:(id)arg0 enterFrom:(id)arg1 otherTrackParams:(id)arg2;
+ (void)didTapHideHerPostFromUser:(id)arg0 enterFrom:(id)arg1 enterMethod:(id)arg2 otherTrackParams:(id)arg3;
+ (id)getProfileImageManagerCacheName;
+ (BOOL)favoriteFolderPanelShowed;
+ (Class)aAWEUserProfileModuleServiceDOUYINLiteAdaperClass;
+ (Class)aAWEUserProfileModuleServiceDOUYINAdaperClass;
+ (Class)aAWEUserProfileModuleServiceDOUYINCIAdaperClass;

- (void)task:(id)arg0 didCreateAweme:(BOOL)arg1 error:(id)arg2;
- (void)task:(id)arg0 didEndWithResult:(long long)arg1 error:(id)arg2;
- (void)onServiceInit;
- (id)favoriteNoticeManager;
- (BOOL)isFavoriteTransferButtonInCommentInput;
- (Class)userDetailHelperProtocolClass;
- (id)profilePreloadManager;
- (Class)aweUserHomeViewControllerClass;
- (Class)aweUserDetailViewControllerClass;
- (Class)aweUserDynamicViewControllerClass;
- (Class)userPromotionAuthManagerClass;
- (void)showProfileHeaderActionControllerWithUser:(id)arg0 params:(id)arg1 unfollowConfirmationBlock:(id /* block */)arg2;
- (id)createProfileEditTextViewControllerWithEditType:(long long)arg0 user:(id)arg1;
- (id)createUserLikesDataManagerWithUserID:(id)arg0;
- (id)createUserPostsDataManagerWithUserID:(id)arg0 secUserID:(id)arg1;
- (Class)ProfileUtilitiesClass;
- (id)aweYellowDotManager;
- (id)aweProfileBubblePriorityQueueManager;
- (id)currentElementForProfileBubblePriorityQueue:(unsigned long long)arg0;
- (Class)profileEditSubmitManagerClass;
- (id)profileActivityManager;
- (Class)profileActivityManagerClass;
- (void)showLocationEditLocationFromH5:(id /* block */)arg0;
- (void)resetYoutubeAuthorizationFlow;
- (BOOL)resumeAuthorizationFlowWithURL:(id)arg0;
- (BOOL)usernameContainsForbiddenCharacters:(id)arg0;
- (Class)profileBubbleDebugManager;
- (id)followGuideManager;
- (Class)profileTabHelperClass;
- (Class)completeInfoUtilClass;
- (Class)userWorkCollectionViewCellClass;
- (id)userWorkCellViewModelPool;
- (Class)profileMediaUtils;
- (void)directShowAvatarPickerWithEnterFrom:(id)arg0 isFirstReplace:(BOOL)arg1 enablePublishAvatarStory:(BOOL)arg2 trackInfo:(id)arg3;
- (id)profilePendantButtonWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 fontSize:(double)arg1 User:(id)arg2 enterFrom:(id)arg3;
- (id)profilePendantManagerWithUser:(id)arg0 enterFrom:(id)arg1;
- (id)profileHeaderActionController;
- (id)locationDisplayTextGenerator;
- (Class)aweEffectModelFunctionManager;
- (id)homePageItemConfigManager;
- (BOOL)isHomePageBubbleDisplaying;
- (id)aStrWith:(long long)arg0 withSuffix:(id)arg1 preferFontSize:(unsigned long long)arg2 isLoaded:(BOOL)arg3 textColor:(id)arg4;
- (id)newUserRemoteYellowDotManagerWithUserModel:(id)arg0;
- (void)updateUserRemoteYellowDotManager:(id)arg0 withUser:(id)arg1;
- (BOOL)isShowProfileSideBar;
- (void)handleUserPromotionMsg:(id)arg0;
- (void)showUserPostViewControllerWithUserID:(id)arg0 initialAwemeID:(id)arg1 fromViewController:(id)arg2 referString:(id)arg3 completion:(id /* block */)arg4;
- (void)showUserPostViewControllerWithUserModel:(id)arg0 initialIndex:(long long)arg1 awemeList:(id)arg2 contextProvider:(id)arg3 minCursor:(id)arg4 maxCursor:(id)arg5 referString:(id)arg6 logExtraDict:(id)arg7;
- (id)getUserPostsDataManagerWithUserID:(id)arg0;
- (id)getAWEProfileMoreMenuViewController;
- (id)getAWEProfileMoreMenuContextWithUser:(id)arg0 trackParam:(id)arg1 showMethod:(unsigned long long)arg2 eventCommonParamsHandler:(id)arg3;
- (Class)userProfileSettingManager;
- (id)starActivityEntranceView;
- (id)profileStorage;
- (BOOL)isNewProfileUIStyle;
- (BOOL)isEnquireOrPostScriptAlertOnScreen;
- (BOOL)isEnquireEnable;
- (void)showEnquireAlertForUser:(id)arg0 enterFrom:(id)arg1 completion:(id /* block */)arg2;
- (void)showSelectSchoolViewControllerWithCompletionBlock:(id /* block */)arg0;
- (void)getClosestSchool:(id /* block */)arg0;
- (id)createProfileEditViewModel;
- (id)profilePageBGColor;
- (id)profileCollectionViewWaterfallLayout;
- (Class)favoriteDualColumnPopoverClass;
- (id)favoriteDualColumnPopoverHelper;
- (void)showProfileMoreMenuViewControllerWithUser:(id)arg0 trackParam:(id)arg1;
- (void)showProfileMoreMenuViewControllerWithUser:(id)arg0 trackParam:(id)arg1 showMethod:(unsigned long long)arg2;
- (void)showProfileMoreMenuViewControllerWithUser:(id)arg0 trackParam:(id)arg1 showMethod:(unsigned long long)arg2 dismissBlock:(id /* block */)arg3;
- (void)showProfileMoreMenuViewControllerWithUser:(id)arg0 trackParam:(id)arg1 showMethod:(unsigned long long)arg2 actionClickedBlock:(id /* block */)arg3 dismissBlock:(id /* block */)arg4;
- (id)profileRedDotManager;
- (id)profileRedDotUpdateDataManager;
- (unsigned long long)favoriteFirstTabRedDotType;
- (unsigned long long)favoriteSecondTabRedDotTypeWithModel:(id)arg0;
- (BOOL)isFavoriteSecondTabRedDotShowWithModel:(id)arg0;
- (void)clearFavoriteSecondTabNodeForType:(id)arg0;
- (void)clearFavoriteFirstTabNode;
- (void)sendFavoriteRedDotLCMessageForType:(id)arg0 params:(id)arg1;
- (id)profileMenuSectionViewModelWithUser:(id)arg0;
- (id)privateSettingGuideManager;
- (BOOL)collectionTabShown;
- (BOOL)hitMentionTabABTest;
- (id)eventParamsWithEventMapJson:(id)arg0 originParams:(id)arg1 event:(id)arg2;
- (id)getProfileCalculateColor;
- (id)userHomeViewController;
- (id)userHomeTabBarButton;
- (BOOL)enableEditProfileExtensionModule;
- (BOOL)canShowEditProfileExtensionGuideBubble;
- (id)followLimitationManager;
- (void)updateUserPrivateNumFromTab:(id)arg0;
- (id)currentUserPrivateNum;
- (void)landingHomepageWithParams:(id)arg0;
- (void)showNickNameEditViewControllerWitTitle:(id)arg0 buttonTitle:(id)arg1 completion:(id /* block */)arg2;
- (void)showAvatarEditViewControllerWithTitle:(id)arg0 nickNameTitle:(id)arg1 avatarButtonTitle:(id)arg2 shouldshowNickNameVC:(BOOL)arg3 completion:(id /* block */)arg4;
- (id)profileTipViewWithTipText:(id)arg0 linkText:(id)arg1;
- (id)profileJustWatchedView;
- (id)justWatchedView;
- (BOOL)tabHelperShouldShowCollectionTabWithUser:(id)arg0;
- (id)profileRewadLynxManager;
- (id)getGroupedCardsDictionaryWithUserModel:(id)arg0;
- (void)updateCardIdsWithCardIdList:(id)arg0 userModel:(id)arg1;
- (void)copyIdStringWithUser:(id)arg0;
- (id)profileTabLockIconImage;
- (id)userProfileParamsInjectImp;
- (id)userProfileSettingsAPIRequestModifier;
- (id)mutiTargetConfigAdapter;
- (BOOL)profileTabScrollEnable;
- (id)brandVideoAwemeModelWithUser:(id)arg0;
- (void)modifyAwemeModelMentionedPublicStatus:(id)arg0 WithCompletion:(id /* block */)arg1;
- (BOOL)checkPresentFirstSwitchFavoriteFolderPrivacyToastWithIsSecret:(BOOL)arg0;
- (id)schoolListDataController;
- (id)schoolSearchDataController;
- (id)schoolNearestDataController;
- (id)adaptedDUXShowStringWithFromNumber:(long long)arg0;
- (void)markHeaderInteractionNoticeAreaShowUnreadLottie;
- (id)extensionAreaAllCardIdsWithUserModel:(id)arg0;
- (id)extensionAreaShowCardIdsWithUserModel:(id)arg0;
- (BOOL)shouldEnableAutoSort;
- (BOOL)shouldReportAutoSort;
- (id)userProfileLayoutPreviewView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 useWaterfallLayout:(BOOL)arg1;
- (BOOL)profileUseWaterfallLayout;
- (unsigned long long)profileLayoutSerialStyle;
- (id)profileUidABCenter;
- (void)showTabBarBadgeWithModel:(id)arg0 showCallBack:(id /* block */)arg1 hideCallBack:(id /* block */)arg2 downgradeCallBack:(id /* block */)arg3;
- (void)hideTabBarBadgeWithCompletion:(id /* block */)arg0;
- (struct CGSize { double x0; double x1; })calculateImageSize:(id)arg0 cellWidth:(double)arg1;
- (void)loadPostWorkCompletion:(id /* block */)arg0;
- (BOOL)enableTabBatchModify;
- (id)batchModifyViewControllerWithDataController:(id)arg0;
- (BOOL)enableTwoPagePersonalHomepage;
- (id)favoriteAwemeDataControllerWithPageSize:(long long)arg0;
- (Class)collectionFolderManagerClass;
- (id)favoriteManager;
- (Class)favoriteManagerClass;
- (BOOL)isUsingCollectGuideV2;
- (BOOL)shouldIgnoreFavoriteButtonClickBeforeAddToCollects;
- (BOOL)shouldUseFavoriteLongPressGesture;
- (double)favoriteDualColumnImageHeight:(id)arg0 cellWidth:(double)arg1;
- (id)favoriteFileVideoDataControllerWithCollectsID:(id)arg0 collectsName:(id)arg1;
- (id)favoriteFileDetailViewControllerWithDataController:(id)arg0 containerController:(id)arg1 isPanelStyle:(BOOL)arg2;
- (BOOL)shouldShowfavoriteGuideInRecommend;
- (BOOL)isUsingVerticalPopover;
- (void)removeLongPressPopover;
- (BOOL)shouldTransferLikeToFavorite;
- (BOOL)isFavoriteTransferButtonInLeftInteraction;
- (BOOL)hasFavoriteFolderCache;
- (void)remakeFolderCacheByList:(id)arg0 hasMore:(BOOL)arg1 cursor:(id)arg2;
- (id)favoriteFolderFollowSuccessPopoverView;
- (id)addToFavoriteFilePopupViewManager;
- (long long)collectTotalStatusWithUserID:(id)arg0;
- (id)favoriteV2ViewController;
- (id)favoriteFolderViewController;
- (void)setBlockFavoriteFolderPrivacySwitch:(BOOL)arg0;
- (BOOL)enableFavoriteV2Style;
- (BOOL)enableFavoriteRecommend;
- (id)favoriteTrackManager;
- (id)favoriteRecommendSnakeBarManager;
- (void)storeCollectsTotalStatus:(long long)arg0 userID:(id)arg1;
- (BOOL)miniCardShouldRemoveInteraction;
- (id)profilePopoverHelper;
- (id)batchModifyAlert;
- (void)sendGreetBtnClickedWithUser:(id)arg0 enterFrom:(id)arg1;
- (id)getBizDataForNodeType:(id)arg0;
- (BOOL)showNoticeMessage;
- (id)createInteractionFavoriteElementViewModel:(id)arg0;
- (id)componentServiceImpFromHome:(id)arg0;
- (id)createMilestoneController;
- (Class)geckoManager;
- (void)handleProfileExtensionAreaActionWithType:(unsigned long long)arg0 userModel:(id)arg1 schema:(id)arg2;
- (id)serviceNameForProfileExtensionAreaActionWithType:(unsigned long long)arg0;
- (long long)getInsertIndex:(id)arg0 notShowCards:(id)arg1 userModel:(id)arg2;
- (id)profileLocationSegments;
- (id)extensionAreaAllCardsWithUserModel:(id)arg0;
- (void)showFavoriteElementPopoverWithConfig:(id)arg0;
- (id)aAWEUserProfileModuleServiceDOUYINLiteAdaper;
- (id)userProfileViewController;
- (void)p_removeDidPublishedLivePlaybackPlaceholder:(id)arg0;
- (id)aAWEUserProfileModuleServiceDOUYINAdaper;
- (id)aAWEUserProfileModuleServiceDOUYINCIAdaper;
- (id)collectionViewController;
- (void)dealloc;

@end