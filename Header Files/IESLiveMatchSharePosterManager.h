//
//     Generated by private class-dump
//

@interface IESLiveMatchSharePosterManager : NSObject

+ (BOOL)p_hasAlbumPermission;
+ (void)showShareTicketWithParams:(id)arg0;
+ (void)showSharePanelWithTargetImage:(id)arg0 saveImage:(id)arg1 hybridViewController:(id)arg2 paramModel:(id)arg3;
+ (void)showShareImageUrlToPanelWithModel:(id)arg0;
+ (void)showMatchInfoSharePanelWithTargetImage:(id)arg0 paramModel:(id)arg1;
+ (void)showForecastSharePanelWithTargetView:(id)arg0 paramModel:(id)arg1;
+ (void)showChampionSharePanelWithTargetView:(id)arg0 paramModel:(id)arg1;
+ (void)showNameplateSharePanelWithTargetView:(id)arg0 paramModel:(id)arg1;
+ (void)showShareTicketSharePanelWithTargetView:(id)arg0 paramModel:(id)arg1;
+ (void)showOptimizedShareTicketSharePanelWithTargetView:(id)arg0 saveImage:(id)arg1 hybridViewController:(id)arg2 paramModel:(id)arg3;
+ (id)reposterExtraInfoWithParam:(id)arg0;
+ (id)contentModelExtraParamsWithContentType:(id)arg0;
+ (id)mapLiveRoomModelWithEpisode:(id)arg0;
+ (BOOL)targetImageVisible:(id)arg0;
+ (void)loadMatchInfoSharePosterViewWithBaseView:(id)arg0 targetImage:(id)arg1 paramModel:(id)arg2 shareModel:(id)arg3 isPreView:(BOOL)arg4 completion:(id /* block */)arg5;
+ (void)constructShareContentModelWithQrShareScene:(id)arg0 isHiddenReposter:(BOOL)arg1 roomModel:(id)arg2 completion:(id /* block */)arg3;
+ (void)loadChampionSharePanelWithBaseView:(id)arg0 targetImage:(id)arg1 isPreView:(BOOL)arg2;
+ (void)combinationBizPosterWithContentModel:(id)arg0;
+ (void)loadShareImageUrlToPanelWithBaseView:(id)arg0 targetImage:(id)arg1 paramModel:(id)arg2 isPreView:(BOOL)arg3 completion:(id /* block */)arg4;
+ (void)showShareTicketWithModel:(id)arg0;
+ (void)p_showShareTicketWithModel:(id)arg0;

@end
