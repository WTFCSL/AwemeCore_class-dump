//
//     Generated by private class-dump
//

@class NSString;

@interface AFDRichAwemeService : HTSService <AFDRichAwemeService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)calculateCutImagesCount:(id)arg0;
- (id)contentCellReuseIdentifier;
- (id)multiContentCellReuseIdentifier;
- (id)nonVideoCardCellReuseIdentifier;
- (BOOL)shouldUseMultiContentContainerWithModel:(id)arg0 referString:(id)arg1;
- (BOOL)shouldUseMultiContentContainerWithModel:(id)arg0 awemeType:(long long)arg1;
- (id)albumPreviewImagesWithImageModel:(id)arg0;
- (id)musicCardCellReuseIdentifier;
- (id)greetCardCandidatesManager;
- (double)calculateWHRatioForAwemeModel:(id)arg0;
- (id)aspectRatioLimitForDetailAlbumElement;
- (BOOL)isEnableEmptyStoryWithModel:(id)arg0;
- (BOOL)isEnableEmptyCloseFriendsWithModel:(id)arg0 referString:(id)arg1;
- (BOOL)presentSlidesAsVideoAlbum;
- (id)getFeedAlbumImageLayoutConfigWithImageModel:(id)arg0;
- (BOOL)shouldShowAlbumIconWithModel:(id)arg0;
- (long long)scrollBouncesDelay;
- (BOOL)albumAddScrollBounces;
- (BOOL)albumDetailAllowEnteringProfile;
- (BOOL)isRichContentWithModel:(id)arg0 awemeType:(long long)arg1;
- (BOOL)isRichContentWithModel:(id)arg0 referString:(id)arg1;
- (BOOL)shouldDisableDetailPageForAweme:(id)arg0;
- (long long)captionTagTypeWithAwemeModel:(id)arg0;
- (long long)postworkTagTypeWithAwemeModel:(id)arg0;
- (id)postworkIconNameWithAwemeModel:(id)arg0;
- (BOOL)needUpdatePostworkIconWithAwemeModel:(id)arg0;
- (double)slidesPlayDurationWithAweme:(id)arg0;
- (id)createRichContentViewController;
- (BOOL)isGeneralizedImageContentWithModel:(id)arg0;
- (BOOL)isLivePhotoSlidesWithAweme:(id)arg0;
- (BOOL)isSlidesWithAweme:(id)arg0;
- (id)createRichAwemeViewController;
- (Class)imagePreloader;
- (Class)musicImageBeatsPreloader;
- (id)createAlbumFinishTriggerWith:(id)arg0;
- (Class)albumFinishTrigger;
- (id)createSlidesViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 awemeModel:(id)arg1 referString:(id)arg2 trackPlayFinishBlock:(id /* block */)arg3 trackNewPlayFinishBlock:(id /* block */)arg4;
- (long long)scaleModeWithImageSize:(struct CGSize { double x0; double x1; })arg0;
- (id)createSlidesViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 playMode:(unsigned long long)arg1 awemeModel:(id)arg2 referString:(id)arg3 trackPlayFinishBlock:(id /* block */)arg4 trackNewPlayFinishBlock:(id /* block */)arg5;
- (BOOL)needPreloadStoryData;
- (Class)storyPreloader;
- (BOOL)enablePostworkWaterfall;
- (Class)postWorkWaterfallListViewControllerClass;
- (Class)albumPreviewFlowLayoutClass;
- (BOOL)isAlbumWithModel:(id)arg0;
- (BOOL)shouldShowAlbumSpriteSheetImageWithModel:(id)arg0;
- (BOOL)isHitMomentCombination;
- (id)momentCombinationStoryTextWithModel:(id)arg0;
- (id)momentCombinationMomentTextWithModel:(id)arg0;
- (id)momentCombinationMomentTextToPostWithModel:(id)arg0;
- (id)momentCombinationReplaceWithSourceText:(id)arg0;
- (id)tagLabelInfoColorString;
- (id)tagLabelBackgroundColorString;
- (id)closeFriendTagDescriptionWithModel:(id)arg0;
- (BOOL)shouldShowWidgetGuideForStoryInteraction;
- (id)momentCombinationMomentText;
- (BOOL)shouldShowPublicMomentTextWithModel:(id)arg0;
- (BOOL)isHitMomentCombinationV2V3;
- (BOOL)isStoryNewMomentInV2345ForTagWithModel:(id)arg0;
- (BOOL)enableMomentGuideForCameraBtnInV3V5WithModel:(id)arg0;
- (BOOL)showRoundedCornerSwitch;
- (BOOL)shouldShowRoundedCornerWithModel:(id)arg0;
- (void)updateCornerRadiusWithVideoController:(id)arg0 model:(id)arg1;
- (void)updateCornerRadiusWithVideoController:(id)arg0 model:(id)arg1 shrinkContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg2 contentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg3;
- (double)coverImageCornerRadiusWithImage:(id)arg0;
- (unsigned long long)imageSRLevel;
- (long long)albumImagePreloadSRRange;
- (long long)albumImageLowResShorterLength;
- (long long)albumImageLowResLongerLength;
- (void)removeMemoryCacheForSearch;
- (BOOL)shouldShowOriginTextTag:(id)arg0;
- (BOOL)shouldShowStoryReverseAlbumTagWithModel:(id)arg0;
- (void)selectBSModelAndUpdateConfigWithModel:(id)arg0;
- (id)albumAppendImagesNotificationName;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateScaleFitFrameWithInitialFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 targetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (void)removeMemoryCacheForHot;
- (id)syncGetAWEMomentCombinationDict;
- (id)combinationModel;
- (id)momentCombinationTextWithModel:(id)arg0 textSource:(unsigned long long)arg1;
- (BOOL)isStorySimpleImageNewMomentInV2WithModel:(id)arg0;
- (BOOL)isStoryNewMomentInV3WithModel:(id)arg0;
- (BOOL)isStorySimpleImageWithModel:(id)arg0;
- (BOOL)isStorySimpleImageNewMomentWithModel:(id)arg0;
- (BOOL)isStoryNewMomentWithModel:(id)arg0;
- (BOOL)isStorySimpleImageNewMomentInV4V5WithModel:(id)arg0;
- (void)updateCornerRadiusWithVideoController:(id)arg0 model:(id)arg1 cornerRadiusRatio:(double)arg2;
- (id)cellReuseIdentifier;
- (id)albumTitle;

@end
