//
//     Generated by private class-dump
//

@interface CMCAwemeSceneController : CMCSceneController

- (void)didClickButtonWithContext:(id)arg0;
- (void)didClickRedPacketWithContext:(id)arg0;
- (void)didClickAttractionViewWithContext:(id)arg0;
- (void)didClickStartAtlasLinkWithContext:(id)arg0;
- (void)didClickMissionLinkWithContext:(id)arg0;
- (void)didClickAdLinkWithContext:(id)arg0;
- (void)didClickIronManLinkWithContext:(id)arg0;
- (void)didClickDescriptionLabelWithContext:(id)arg0 attributedText:(id)arg1 URLString:(id)arg2 tappingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg3;
- (void)didClickNameOfProfilelessUserWithContext:(id)arg0;
- (void)didClickAvatarOfProfilelessUserWithContext:(id)arg0;
- (void)didClickLivePalletWithContext:(id)arg0;
- (void)didClickAvatarOfProfileUserWithContext:(id)arg0;
- (void)trackAwesomeSplashModelReceivedWithContext:(id)arg0;
- (void)didClickAwesomeSplashWithContext:(id)arg0;
- (void)trackClickOnUserAvatarWithContext:(id)arg0 clickRefer:(id)arg1;
- (void)didClickCarAnchorWithContext:(id)arg0;
- (void)trackPlayWithContext:(id)arg0;
- (void)openAdsExplanationWithContext:(id)arg0;
- (void)reportAdWithContext:(id)arg0;
- (id)getAdReportInfoWithContext:(id)arg0;
- (void)reportViewerActionWithContext:(id)arg0;
- (void)performCustomLeftPanActionWithContext:(id)arg0;
- (void)trackLeftPanTransitionWithContext:(id)arg0;
- (void)trackProfilelessAdLeftPanTransitionWithContext:(id)arg0;
- (id)destinationViewControllerForLeftPanTransitionWithContext:(id)arg0;
- (BOOL)shouldUseCustomActionWhenPanLeftWithContext:(id)arg0;
- (void)notifyLeftPanTransitionToIronManWithContext:(id)arg0;
- (void)clickUserNickNameWithContext:(id)arg0;
- (void)challengeCoverLinkJumpToOtherPageWithContext:(id)arg0;
- (void)clickButton:(id)arg0 refer:(id)arg1;
- (long long)ironmanTypeForURL:(id)arg0;
- (void)adapter_didClickIronManLinkWithContext:(id)arg0;
- (id)getTagIdForHashtag:(id)arg0 inAweme:(id)arg1;
- (BOOL)isInteractiveAICardSceneWithAweme:(id)arg0;
- (id)interactiveAIPublicParamsWithReferString:(id)arg0;
- (void)trackWithForceOpenURL:(id)arg0;
- (void)handleDidClickProfilelessUserWithTrackRefer:(id)arg0 context:(id)arg1;
- (BOOL)shouldTrackLongVideoAd:(id)arg0;
- (id)_viewControllerForLeftPanTransitionOnAweme:(id)arg0 context:(id)arg1;
- (void)_trackLeftPanProfileTransitionOnAweme:(id)arg0 withRefer:(id)arg1;
- (void)trackURLForRealUserWithAweme:(id)arg0;
- (BOOL)shouldBatManUseCustomActionWhenPanLeftWith:(id)arg0;
- (BOOL)tryOpenOneKeyGetPhoneNumberWithContext:(id)arg0;
- (void)tryFetchCouponIfNeeded:(id)arg0;
- (id)buildCustomParamsWithModel:(id)arg0;
- (void)sceneDidLoad;

@end