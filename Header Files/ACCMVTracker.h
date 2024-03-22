//
//     Generated by private class-dump
//

@interface ACCMVTracker : NSObject

+ (BOOL)isColdStart;
+ (void)trackMVEnterAlbumTime:(double)arg0 publishModel:(id)arg1 changeMaterial:(BOOL)arg2;
+ (void)trackMVComposeTime:(double)arg0 templateID:(id)arg1 publishModel:(id)arg2 useNLETemplate:(BOOL)arg3 isChangeContent:(BOOL)arg4 changeAssets:(id)arg5 error:(id)arg6;
+ (void)trackMVClassicImportMaterial:(double)arg0 templateID:(id)arg1 picCount:(long long)arg2 error:(id)arg3;
+ (void)trackCutsameImportMaterialTime:(double)arg0 mvID:(id)arg1 mvURL:(id)arg2 md5:(id)arg3 errorCode:(long long)arg4 errorMsg:(id)arg5;
+ (void)trackCutsameGameplayTime:(double)arg0 mvID:(id)arg1 mvURL:(id)arg2 md5:(id)arg3 errorCode:(long long)arg4 errorMsg:(id)arg5;
+ (void)trackMVClassicGameplayTime:(double)arg0 templateID:(id)arg1 picCount:(long long)arg2 algorithms:(id)arg3 error:(id)arg4;
+ (id)commomParamsForAessts:(id)arg0;
+ (void)trackMVClassicResourceDownload:(double)arg0 templateID:(id)arg1 error:(id)arg2;
+ (void)trackForSmartMovieCompressMaterial:(double)arg0 templateID:(id)arg1 sourceAssetModelArray:(id)arg2 error:(id)arg3;
+ (void)setColdStart:(BOOL)arg0;
+ (void)trackMVCoverLoadTime:(double)arg0 mvTab:(id)arg1 mvId:(id)arg2 isCutSameMV:(BOOL)arg3;
+ (void)trackMVLoadTime:(double)arg0 isColdStart:(BOOL)arg1 isCache:(BOOL)arg2;
+ (void)trackMVFeedLoadTime:(double)arg0 responseTime:(double)arg1 mvTab:(id)arg2 loadType:(long long)arg3 error:(id)arg4;
+ (void)trackMVPreviewTime:(double)arg0 mvTab:(id)arg1 mvId:(id)arg2;
+ (void)trackMVPreviewPlayTime:(double)arg0 mvTab:(id)arg1 mvId:(id)arg2 enterMethod:(id)arg3;

@end
