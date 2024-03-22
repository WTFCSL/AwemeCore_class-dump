//
//     Generated by private class-dump
//

@protocol AWELanscapePlayerControlViewDelegate <AWENoxusPlayerProgressSliderDelegate, AWELandscapeProgressSliderDelegate, AWELandscapeMorePanelViewDelegate>

@optional

- (id)supportedResolutionTypes;
- (void)landscapeClickTitleView;
- (void)hideLongPressGuideIfNeed;
- (void)hideDoubleTapPauseGuideIfNeed;
- (void)landscapePlayerControlCoCreatorButtonClicked:(id)arg0;
- (void)changeToFullScreen:(BOOL)arg0 type:(unsigned long long)arg1;
- (void)landscapePlayerControlPlayButtonClicked:(id)arg0 enterMethod:(unsigned long long)arg1;
- (void)landscapePlayerControl:(id)arg0 twoFingerPanGesture:(id)arg1;
- (void)landscapePlayerControl:(id)arg0 pinchGesture:(id)arg1;
- (void)landscapePaymentViewRequestOrder:(id)arg0;
- (void)landscapePlayerControlHideMorePanelWithCompletion:(id /* block */)arg0;
- (BOOL)isShowMixSplitScreenCoverView;
- (void)landscapePlayerControlProgressSliderTouchEnded:(id)arg0;
- (void)landscapePlayerControl:(id)arg0 sliderTouchBegan:(id)arg1;
- (void)landscapePlayerControl:(id)arg0 sliderValueChanged:(id)arg1;
- (void)landscapePlayerControl:(id)arg0 sliderTouchEnded:(id)arg1 bySlideScreen:(BOOL)arg2;
- (void)landscapePlayerControlAuthorButtonClicked:(id)arg0;
- (void)landscapePlayerControlBackButtonClicked:(id)arg0;
- (void)landscapePlayerControlUserButtonClicked:(id)arg0;
- (void)landscapePlayerControlMixButtonClicked:(id)arg0;
- (void)landscapePlayerControlLikeButtonClicked:(id)arg0;
- (void)landscapePlayerControlCommentButtonClicked:(id)arg0;
- (void)landscapePlayerControlMoreButtonClicked:(id)arg0;
- (void)landscapePlayerControlShareButtonClicked:(id)arg0;
- (void)landscapePlayerControlRetryButtonClicked:(id)arg0;
- (void)landscapePlayerControlFollowButtonClicked:(id)arg0;
- (void)landscapePlayerControlScreenCastButtonClicked:(id)arg0;
- (void)landscapePlayerControlFeedShareButtonClicked:(id)arg0;
- (BOOL)landscapePlayerControlEnablePanScreenProgress:(id)arg0;
- (void)landscapePlayerControlLVSelectEpisodeButtonClicked:(id)arg0;
- (void)landscapeSettingTypeListSelectModel:(id)arg0;
- (void)landscapeWillShowSpeedPanel:(id)arg0;
- (void)landscapeShowLongVideoAlbumPanel:(id)arg0;
- (void)landscapeWillShowResolutionPanel:(id)arg0;
- (void)landscapePlayerControlDanmakuPostButtonClicked:(id)arg0;
- (void)landscapePlayerControlCollectionButtonClicked:(id)arg0;
- (void)landscapePlayerControlLockButtonClicked:(id)arg0;
- (void)landscapePlayerControlCartButtonClicked:(id)arg0;
- (void)landscapePlayerControlCartButtonShow:(id)arg0;
- (void)landscapeEnableScroll;
- (void)landscapePlayerControlFeedBackButtonClicked:(id)arg0;
- (BOOL)isShowingAppointmentTip;
- (BOOL)hasFirstShowControlView;
- (void)landscapeAutoRotateSwitchChanged;
- (void)didShowDeviceLimitView;
- (double)getStartTimestamp;
- (void)landscapeShowDanmakuSettingsPanel:(id)arg0;

@end
