//
//     Generated by private class-dump
//

@protocol AWEAwemeLongPressFunctionManagerProtocol <NSObject>

+ (BOOL)shouldShowDownloadWithAwemeModel:(id)arg0;
+ (void)convenientAppendModelWithModels:(id)arg0 params:(id)arg1 completion:(id /* block */)arg2;
+ (id)convenientGenerateModelWithParams:(id)arg0;
+ (BOOL)shouldShowShareAsStoryWithAwemeModel:(id)arg0 referString:(id)arg1;
+ (BOOL)shouldShowSpeedControlWithAwemeModel:(id)arg0 referString:(id)arg1;
+ (void)adjustDuetModel:(id)arg0 inPanelModels:(id)arg1;
+ (BOOL)shouldAdsInheritSpeedWithAwemeModel:(id)arg0 referString:(id)arg1;
+ (void)doDownloadTrackWithModel:(id)arg0 referString:(id)arg1 logExtraDict:(id)arg2;
+ (id)adTypeForTrackIfInheritSpeedWithAwemeModel:(id)arg0;
+ (id)dynamicCellBGColor:(BOOL)arg0;
+ (id)dynamicHighlightMaskColor:(BOOL)arg0;
+ (id)generateModelWithParams:(id)arg0 modelParams:(id)arg1 customBuildBlock:(id /* block */)arg2;
+ (BOOL)shouldShowTranspondIMShareWithAwemeModel:(id)arg0 referString:(id)arg1;
+ (id)filterTranspondIMShareModelListIfNeeded:(id)arg0;
+ (id)convenientGenerateDownloadModelWithParams:(id)arg0;
+ (BOOL)shouldShowFamiliarDislikeWithAwemeModel:(id)arg0 referString:(id)arg1;
+ (BOOL)shouldHideDislikeModeWithAwemeModel:(id)arg0 referString:(id)arg1;
+ (id)generateDownloadModelWithParams:(id)arg0 modelParams:(id)arg1 customBuildBlock:(id /* block */)arg2;
+ (id)dynamicIconColor;
+ (id)generateExposedExternalShareModelWithAwemeModel:(id)arg0 referString:(id)arg1 logExtraDict:(id)arg2 downloadModel:(id)arg3 downloadCompletion:(id /* block */)arg4 copyCommandCompletion:(id /* block */)arg5;
+ (void)adjustTranstoTextModel:(id)arg0 inPanelModels:(id)arg1;
+ (void)adjustSpeedTestInPanelModels:(id)arg0;

@end