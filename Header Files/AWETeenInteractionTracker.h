//
//     Generated by private class-dump
//

@interface AWETeenInteractionTracker : NSObject

+ (void)trackLikeWithModel:(id)arg0 extra:(id)arg1;
+ (void)trackFavouriteWithModel:(id)arg0 favourite:(BOOL)arg1 VcType:(long long)arg2 extra:(id)arg3;
+ (void)trackMorePanelShowWithModel:(id)arg0 enterFrom:(id)arg1 enterMethod:(id)arg2 enterPosition:(id)arg3 downloadStatus:(id)arg4 fullscreen:(BOOL)arg5 inAlbum:(BOOL)arg6;
+ (void)trackSysPhotoButtonShowWithModel:(id)arg0 enterFrom:(id)arg1 fullscreen:(BOOL)arg2;
+ (void)trackReportWithModel:(id)arg0 enterFrom:(id)arg1 enterMethod:(id)arg2 context:(id)arg3 fullscreen:(BOOL)arg4;
+ (void)trackShareClickWithModel:(id)arg0 VcType:(long long)arg1 platform:(id)arg2 fullscreen:(BOOL)arg3;
+ (void)trackDownloadClickWithModel:(id)arg0 enterFrom:(id)arg1 fullscreen:(BOOL)arg2;
+ (void)trackSysPhotoButtonClickWithModel:(id)arg0 enterFrom:(id)arg1 fullscreen:(BOOL)arg2;
+ (void)trackClickChangeSpeedEntrance:(id)arg0 enterFrom:(id)arg1 enterMethod:(id)arg2;
+ (void)trackChangeSpeedMode:(id)arg0 enterFrom:(id)arg1 enterMethod:(id)arg2 speedMode:(id)arg3;
+ (void)trackDislikeWithModel:(id)arg0 context:(id)arg1;
+ (void)trackBlockWithModel:(id)arg0 context:(id)arg1;
+ (void)trackBlockFinishWithModel:(id)arg0 context:(id)arg1;
+ (void)trackClickMoreWithModel:(id)arg0 context:(id)arg1;
+ (void)trackTimeBarDrawWithAction:(id)arg0 model:(id)arg1 context:(id)arg2;
+ (void)trackAnchorViewClickWithAnchroInfo:(id)arg0 context:(id)arg1;
+ (void)trackAnchorViewShowWithAnchroInfo:(id)arg0 context:(id)arg1;
+ (void)trackShowStrongSubscribeWithModel:(id)arg0 context:(id)arg1;
+ (void)trackDownloadEndWithModel:(id)arg0 enterFrom:(id)arg1 endStatus:(id)arg2 duration:(double)arg3 fullscreen:(BOOL)arg4;
+ (void)trackSysPhotoPermissionPopupWithEnterFrom:(id)arg0;
+ (void)trackSysPhotoPermissionSettingClickWithEnterFrom:(id)arg0;
+ (void)trackEncyKonwledgeClickWithModel:(id)arg0 context:(id)arg1 showType:(id)arg2;
+ (void)trackEncyKonwledgeClickWithModel:(id)arg0 enterFrom:(id)arg1 showType:(id)arg2 extra:(id)arg3;
+ (void)trackVideoBottomDetailPopUpWithModel:(id)arg0 context:(id)arg1;
+ (void)trackVideoBottomDetailCloseWithModel:(id)arg0 context:(id)arg1 enterMethod:(id)arg2;
+ (void)trackVideoBottomDetailScrollWithModel:(id)arg0 context:(id)arg1;
+ (void)trackTeenGrootEntranceClickWithModel:(id)arg0 context:(id)arg1 pediaID:(id)arg2;

@end