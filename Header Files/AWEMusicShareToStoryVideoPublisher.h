//
//     Generated by private class-dump
//

@interface AWEMusicShareToStoryVideoPublisher : NSObject

+ (void)p_hideLoadingView;
+ (void)p_logErrorWithError:(id)arg0 msg:(id)arg1;
+ (void)p_showLoadingViewWithCancelHander:(id /* block */)arg0;
+ (void)p_downloadImageWithURLModel:(id)arg0 then:(id /* block */)arg1;
+ (void)p_downloadMusicWithMusic:(id)arg0 then:(id /* block */)arg1;
+ (void)p_getOpenPlatformShareIdWithSourceStyleId:(id)arg0 trackId:(id)arg1 completion:(id /* block */)arg2;
+ (void)p_handleNextWithVaildRequirement:(id)arg0;
+ (void)p_logInfoWithMsg:(id)arg0;
+ (void)p_showErrorToast;
+ (id)p_generatePublishModelWithRequirement:(id)arg0;
+ (id)p_genBackgroundImage:(id)arg0 size:(struct CGSize { double x0; double x1; })arg1 isPGC:(BOOL)arg2;
+ (id)p_coverStickerEffectIdWithIsPGC:(BOOL)arg0;
+ (id)p_getDoiminantColorOfImage:(id)arg0 topLeftPoint:(struct CGPoint { double x0; double x1; })arg1 bottomRightPoint:(struct CGPoint { double x0; double x1; })arg2;
+ (id)p_newLyricStickerEffectId;
+ (id)p_coverStickerAnimationEffectId;
+ (id)p_lyricStickerEffectId;
+ (BOOL)p_isEmptyHashTagName:(id)arg0;
+ (BOOL)p_replaceCoverEffectImageResourceWithImage:(id)arg0 forEffect:(id)arg1;
+ (id)p_coverEffectImageResourceName;
+ (void)handleMusicShareToStoryVideoEditWithMusic:(id)arg0 extraInfo:(id)arg1 completion:(id /* block */)arg2;
+ (id)p_getDoiminantColorStringOfImage:(id)arg0 topLeftPoint:(struct CGPoint { double x0; double x1; })arg1 bottomRightPoint:(struct CGPoint { double x0; double x1; })arg2;

@end
