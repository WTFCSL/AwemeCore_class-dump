//
//     Generated by private class-dump
//

@protocol AWEStudioStoryVideoService <NSObject>

- (BOOL)enableShareVideoAsStoryPermissionOptimation;
- (struct CGSize { double x0; double x1; })getCanvasSize;
- (id)startMusicShareToStoryVideoEditWithMusic:(id)arg0 extraInfo:(id)arg1;
- (id)handleVideosWithSelectedWithAssetModel:(id)arg0 publishViewModel:(id)arg1 fromView:(id)arg2;
- (id)startVideoEditViewControllerWithBirthdayTemplates:(id)arg0 enterFrom:(id)arg1;
- (BOOL)shouldEnableShareAsStoryWithAwemeModel:(id)arg0;
- (id)createStoryFromProfileWithAvatarImage:(id)arg0 originImage:(id)arg1 userDisplayName:(id)arg2 hashTag:(id)arg3 leftEffectId:(id)arg4 rightEffectId:(id)arg5 unmodifiablePublishParams:(id)arg6 referString:(id)arg7 enterFrom:(id)arg8 directPublish:(BOOL)arg9 showLoading:(BOOL)arg10 landingAfterPublish:(BOOL)arg11 beforeEditPublish:(id /* block */)arg12;
- (BOOL)enableShareVideoAsStory;
- (BOOL)enableShareImageAlbumAsStory;
- (id)shareAsStoryWithAweme:(id)arg0 unmodifiablePublishParams:(id)arg1 enterFrom:(id)arg2;
- (id)shareAsStoryWithAweme:(id)arg0 unmodifiablePublishParams:(id)arg1 extraInfo:(id)arg2 enterFrom:(id)arg3;
- (id)startMusicShareToStoryVideoEditWithMusicId:(id)arg0 extraInfo:(id)arg1;
- (void)createStoryFromProfileWithSignatureContent:(id)arg0 publishButtonTitle:(id)arg1 publishButtonClickBlock:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)shareAsStoryWithAweme:(id)arg0 unmodifiablePublishParams:(id)arg1 enterFrom:(id)arg2 trackParams:(id)arg3;
- (id)startStoryVideoWithInfo:(id)arg0 fromShake:(BOOL)arg1 imModel:(id)arg2;
- (id)startIMMediaEdit:(id)arg0 sourceModel:(id)arg1 imModel:(id)arg2;
- (id)startBirthdayVideoEditViewControllerWithEffects:(id)arg0 currentEffect:(id)arg1 forUser:(id)arg2 imModel:(id)arg3;
- (BOOL)AITextStickerLastTimeSwitchStatus;
- (id)shareAsStoryWithAweme:(id)arg0 unmodifiablePublishParams:(id)arg1 extraInfo:(id)arg2 enterFrom:(id)arg3 trackParams:(id)arg4;
- (id)startStoryVideoWithStickerIDArray:(id)arg0 musicModel:(id)arg1 imModel:(id)arg2 info:(id)arg3;
- (id)startStoryVideoWithStickerIDArray:(id)arg0 musicModel:(id)arg1 imModel:(id)arg2 info:(id)arg3 referString:(id)arg4;
- (id)startSelfieEmojiRecordWithExtraInfo:(id)arg0;
- (id)generateStoryTTLSwitchView:(long long)arg0 selectResultBlock:(id /* block */)arg1;

@end
