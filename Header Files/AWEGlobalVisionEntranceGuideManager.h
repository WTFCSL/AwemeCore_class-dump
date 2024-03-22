//
//     Generated by private class-dump
//

@interface AWEGlobalVisionEntranceGuideManager : NSObject

+ (void)recordSkipWithAwemeModel:(id)arg0 totalPlayTime:(double)arg1 referString:(id)arg2;
+ (BOOL)needShowGlobalVisionEntranceGuideWithModel:(id)arg0 referString:(id)arg1 previousPage:(id)arg2;
+ (void)setGlobalVisionTimeRecordIfNeed;
+ (BOOL)enableVideoPinchScale;
+ (id)getCoverImage;
+ (void)recordDislikeWithAwemeModel:(id)arg0 referString:(id)arg1;
+ (BOOL)shouldShowOutGuideOnCell;
+ (void)showGlobalVisionEntranceGuideOnView:(id)arg0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1 referString:(id)arg2 model:(id)arg3 completionBlock:(id /* block */)arg4;
+ (void)setOutGuideShow;
+ (BOOL)shouldRecordOrShowWithStorageAndTestAndModel:(id)arg0;
+ (unsigned long long)globalVisionEnableScene;
+ (BOOL)needShowGuideForConcernWithModel:(id)arg0;
+ (void)trackPinchGuideShow:(id)arg0;

@end