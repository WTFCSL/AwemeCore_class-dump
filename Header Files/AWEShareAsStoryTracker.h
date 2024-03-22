//
//     Generated by private class-dump
//

@interface AWEShareAsStoryTracker : NSObject

+ (id)trackSnackBarParamsWithAwemeModel:(id)arg0 enterFrom:(id)arg1 enterMethod:(id)arg2;
+ (void)trackGetCloudCompileAuthInfoTimeCost:(double)arg0 enterFrom:(id)arg1 shootWay:(id)arg2 videoType:(long long)arg3;
+ (void)trackGetCloudCompileInfoCountWithEnterFrom:(id)arg0 shootWay:(id)arg1 videoType:(long long)arg2 useCache:(long long)arg3;
+ (void)trackGetCloudCompileVideoVidTimeCost:(double)arg0 enterFrom:(id)arg1 shootWay:(id)arg2 videoType:(long long)arg3 useCache:(long long)arg4;
+ (void)trackGetCloudCompileInfoTotalTimeCost:(double)arg0 enterFrom:(id)arg1 shootWay:(id)arg2 videoType:(long long)arg3 useCache:(long long)arg4;
+ (void)trackGetCloudCompileVideoVidResult:(BOOL)arg0 enterFrom:(id)arg1 shootWay:(id)arg2 videoType:(long long)arg3 useCache:(long long)arg4 errorCode:(int)arg5 extention:(int)arg6 errorMsg:(id)arg7 isVEError:(BOOL)arg8;
+ (void)trackEnterEditPageStatus:(BOOL)arg0 error:(id)arg1 awemeType:(id)arg2 awemeId:(id)arg3 enterFrom:(id)arg4;
+ (void)reportTrackInfoWithDownloadDuration:(double)arg0 success:(BOOL)arg1 aweType:(id)arg2 isStreamEdit:(BOOL)arg3 playerCacheStrategy:(long long)arg4 enterFrom:(id)arg5 videoDuration:(double)arg6;
+ (void)trackStreamEditDownloadImageTimeCost:(double)arg0 awemeId:(id)arg1 enterFrom:(id)arg2 awemeType:(id)arg3 isLocalResource:(BOOL)arg4;
+ (void)trackDownloadImageStatus:(BOOL)arg0 error:(id)arg1 awemeType:(id)arg2 awemeId:(id)arg3 enterFrom:(id)arg4 isLocalResource:(BOOL)arg5;
+ (void)trackShareToStoryDownloadBackgroundImageTimeCost:(double)arg0 awemeId:(id)arg1 enterFrom:(id)arg2 awemeType:(id)arg3 isLocalResource:(BOOL)arg4;
+ (void)trackDownloadBackgroundImageStatus:(BOOL)arg0 error:(id)arg1 awemeType:(id)arg2 awemeId:(id)arg3 enterFrom:(id)arg4 isLocalResource:(BOOL)arg5;
+ (void)trackDownloadEffectStatus:(BOOL)arg0 error:(id)arg1 awemeType:(id)arg2 awemeId:(id)arg3 enterFrom:(id)arg4;
+ (void)trackStreamEditDownloadEffectTimeCost:(double)arg0 awemeId:(id)arg1 enterFrom:(id)arg2 awemeType:(id)arg3;
+ (void)reportCancelShareEventWithEnterFrom:(id)arg0 videoDuration:(double)arg1 loadDuration:(double)arg2;
+ (void)trackStreamEditGetPlayerCacheVideoTimeCost:(double)arg0 awemeId:(id)arg1;
+ (void)trackUseStreamEditStyleStatus:(BOOL)arg0 awemeType:(id)arg1 awemeId:(id)arg2 enterFrom:(id)arg3 duration:(double)arg4;
+ (void)trackStreamEditGetPlayerCacheStatus:(BOOL)arg0 error:(id)arg1 awemeType:(id)arg2 awemeId:(id)arg3 enterFrom:(id)arg4 duration:(double)arg5;
+ (void)trackSnackBarShowWithParams:(id)arg0;
+ (void)trackSnackBarClickWithParams:(id)arg0;
+ (id)trackQuickShareVideoStreamEditWithTimeout:(BOOL)arg0 isPermanentValidVideoUrl:(BOOL)arg1 downloaderStatus:(long long)arg2 downloaderErrorCode:(long long)arg3 isError:(long long)arg4 awemeType:(id)arg5 awemeId:(id)arg6 enterFrom:(id)arg7 duration:(double)arg8;
+ (void)trackGetLocalVideoStatus:(BOOL)arg0 error:(id)arg1 awemeType:(id)arg2 awemeId:(id)arg3 enterFrom:(id)arg4;
+ (void)reportPlayAddrNullEventWithEnterFrom:(id)arg0;
+ (void)trackStreamEditVideoDownloadWithStatus:(BOOL)arg0 duration:(double)arg1 url:(id)arg2;
+ (void)trackGetPlayerCacheStatus:(BOOL)arg0 error:(id)arg1 params:(id)arg2;
+ (void)trackShowJumpBubbleEvent:(id)arg0;
+ (void)trackClickJumpBubbleEvent:(id)arg0;
+ (void)reportAutoPopEditPageEventWithError:(id)arg0 enterFrom:(id)arg1;
+ (void)trackStreamEditVideoLaggingWithBufferingCount:(BOOL)arg0 duration:(double)arg1 url:(id)arg2;
+ (void)trackStayInEditPageTimeCost:(double)arg0 enterFrom:(id)arg1 shootWay:(id)arg2 videoType:(long long)arg3 fromStoryButton:(BOOL)arg4;
+ (void)trackCancelQuickShareWithPublishModel:(id)arg0;
+ (void)trackQuickShareDoneActionWithPublishModel:(id)arg0 method:(id)arg1 isEdited:(BOOL)arg2;
+ (void)trackShareToStoryDownloadMusicTimeCost:(double)arg0 enterFrom:(id)arg1 awemeType:(id)arg2;
+ (void)trackShareToStoryDownloadMusicSuccess:(BOOL)arg0 enterFrom:(id)arg1 awemeType:(id)arg2;
+ (void)trackGetCloudCompileAuthInfoResult:(BOOL)arg0 errorCode:(long long)arg1 errorMsg:(id)arg2;
+ (void)trackStreamEditStartDownloadTimeCost:(double)arg0 awemeId:(id)arg1;
+ (void)trackStreamEditDetectBlackBorderTimeCost:(double)arg0 awemeId:(id)arg1;
+ (void)trackStreamEditPreparationTimeCost:(double)arg0;
+ (void)trackDetectBlackBorderStatus:(BOOL)arg0 error:(id)arg1 awemeType:(id)arg2 awemeId:(id)arg3 enterFrom:(id)arg4;
+ (void)trackVEDownloadCacheStatus:(BOOL)arg0 enterFrom:(id)arg1 fromShareInterface:(BOOL)arg2 cachePathValid:(BOOL)arg3 cacheSizeValid:(BOOL)arg4 mediaSizeValid:(BOOL)arg5;
+ (void)trackVESetupDownloaderStatus:(long long)arg0 enterFrom:(id)arg1 fromShareInterface:(BOOL)arg2;

@end