//
//     Generated by private class-dump
//

@protocol AWEMusicLunaService <HTSService>

- (void)onAppDidBecomeActive;
- (id)configureCommentGuideLunaAnchorViewWithModel:(id)arg0 trackParams:(id)arg1;
- (id)configureCommentGuideLunaAnchorViewWithModel:(id)arg0 trackParams:(id)arg1;
- (BOOL)canShowCommentGuideLunaEntryWithModel:(id)arg0;
- (BOOL)canShowCommentGuideLunaEntryWithModel:(id)arg0;
- (void)commentGuideEntryDidShowWith:(id)arg0 trackParams:(id)arg1;
- (void)commentGuideEntryDidShowWith:(id)arg0 trackParams:(id)arg1;
- (id)strategyLogParamsFromStrategy:(int)arg0;
- (id)strategyLogParamsFromStrategy:(int)arg0;
- (id)strategyLogParamsFromStrategyV2:(long long)arg0;
- (id)strategyLogParamsFromStrategyV2:(long long)arg0;
- (BOOL)isLunaInstalled;
- (BOOL)isLunaInstalledFromStorage;
- (BOOL)isLunaPopViewShowing;
- (BOOL)canShowDspLunaPopCard;
- (void)lunaUgPopViewDidShow;
- (id)lunaGuideCardInDsp;
- (id)lunaAnchorInDsp;
- (id)lunaEntryTitleInMusicDetail;
- (id)lunaEntryTitleInMusicDetailInstalled;
- (id)lunaMusicDetailConfig;
- (double)lunaPopVieDelayTime;
- (double)lunaPopVieShowDuration;
- (BOOL)canShowHighFollowPromotionAnchor;
- (void)updateHighFollowPromotionAnchorShowCount;
- (id)popViewConfigWithScene:(id)arg0 essentialInfo:(id)arg1 eventParams:(id)arg2;
- (id)popViewConfigWithScene:(id)arg0 essentialInfo:(id)arg1 eventParams:(id)arg2;
- (id)lunaUgPopViewWithConfig:(id)arg0;
- (id)lunaUgPopViewWithConfig:(id)arg0;
- (id)generatePopViewConfigWithSceneType:(long long)arg0 lunaSongID:(id)arg1 groupID:(id)arg2;
- (id)generatePopViewConfigWithSceneType:(long long)arg0 lunaSongID:(id)arg1 groupID:(id)arg2;
- (void)showUgPopView:(id)arg0 config:(id)arg1;
- (void)showUgPopView:(id)arg0 config:(id)arg1;
- (void)showUgPopView:(id)arg0 config:(id)arg1 completion:(id /* block */)arg2;
- (void)showUgPopView:(id)arg0 config:(id)arg1 completion:(id /* block */)arg2;
- (id)activePopStatus;
- (void)trackDiversionLunaWithConfig:(id)arg0;
- (void)trackDiversionLunaWithConfig:(id)arg0;
- (void)playlistDiversionLunaIn:(long long)arg0 playlistId:(id)arg1 trackId:(id)arg2 groupId:(id)arg3 diverionExtraParams:(id)arg4 completion:(id /* block */)arg5;
- (void)playlistDiversionLunaIn:(long long)arg0 playlistId:(id)arg1 trackId:(id)arg2 groupId:(id)arg3 diverionExtraParams:(id)arg4 completion:(id /* block */)arg5;
- (void)musicianDiversionLunaIn:(long long)arg0 artistID:(id)arg1 guideVersion:(unsigned long long)arg2 diverionExtraParams:(id)arg3;
- (void)musicianDiversionLunaIn:(long long)arg0 artistID:(id)arg1 guideVersion:(unsigned long long)arg2 diverionExtraParams:(id)arg3;
- (id)configureGuideMusicianPopViewEssentialInfoWithUserModel:(id)arg0;
- (id)configureGuideMusicianPopViewEssentialInfoWithUserModel:(id)arg0;
- (BOOL)canShowCommentGuideLunaEntryWithAweModel:(id)arg0;
- (BOOL)canShowCommentGuideLunaEntryWithAweModel:(id)arg0;
- (id)getBannerMainButtonTitleWithStyle:(unsigned long long)arg0;
- (id)getBannerMainButtonTitleWithStyle:(unsigned long long)arg0;
- (id)getBannerMainTitleWithStyle:(unsigned long long)arg0 songsCount:(long long)arg1 isCurrentUser:(BOOL)arg2;
- (id)getBannerMainTitleWithStyle:(unsigned long long)arg0 songsCount:(long long)arg1 isCurrentUser:(BOOL)arg2;
- (id)getBannerSubTitleWithStyle:(unsigned long long)arg0 songsCount:(long long)arg1 isCurrentUser:(BOOL)arg2;
- (id)getBannerSubTitleWithStyle:(unsigned long long)arg0 songsCount:(long long)arg1 isCurrentUser:(BOOL)arg2;
- (BOOL)canShowBannerWithWithStyle:(unsigned long long)arg0 songCounts:(long long)arg1;
- (BOOL)canShowBannerWithWithStyle:(unsigned long long)arg0 songCounts:(long long)arg1;
- (void)updateLunaDspTrackParams:(id)arg0;
- (id)getLunaDspTrackParams;
- (void)updateMiniLunaEventServiceExtraInfo:(id)arg0;
- (id)getMiniLunaEventServiceExtraInfo;

@end