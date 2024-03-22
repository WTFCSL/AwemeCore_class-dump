//
//     Generated by private class-dump
//

@class NSString;

@interface AWEMediaDownloader : NSObject <AWEMediaDownloader, AWEMediaDownloaderBanner, AWEMediaDownloaderComment, AWEMediaDownloaderCore, AWEMediaDownloaderMusic, AWEMediaDownloaderLegacy, HTSService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)downloadWithOptions:(id)arg0 progressBlock:(id /* block */)arg1 resultBlock:(id /* block */)arg2;
+ (id)downloadCommentWithOptions:(id)arg0 resultBlock:(id /* block */)arg1;
+ (id)downloadWithOptions:(id)arg0 resultBlock:(id /* block */)arg1;
+ (BOOL)checkIfCanDownloadWithOptions:(id)arg0;
+ (void)copyLinkIfPreventDownloadTypeReviewing:(id)arg0;
+ (id)downloadForbiddenToast;
+ (void)downloadVideoToAlbumWithURLString:(id)arg0 completion:(id /* block */)arg1;
+ (void)downloadVideoWithURLGoup:(id)arg0 destinationURL:(id)arg1 progress:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
+ (BOOL)shouldForbidDownloadUnreviewedVideo;
+ (BOOL)forbidDownloadAd:(id)arg0 shareType:(long long)arg1;
+ (BOOL)forbiddenedDownloading:(id)arg0 shareType:(long long)arg1;
+ (void)saveLifeStory:(id)arg0 completion:(id /* block */)arg1;
+ (BOOL)shouldMuteDownloadWithMusic:(id)arg0;
+ (void)showMuteDownloadAlertWithConfirmHandler:(id /* block */)arg0 cancelHandler:(id /* block */)arg1 logParams:(id)arg2;
+ (id)getDownloadContext;
+ (id)createDownloadBarView;
+ (void)changeDownloadBarViewMode:(long long)arg0;
+ (void)showRetryDownloadBubble;
+ (void)dismissRetryDownloadBubble;
+ (void)gotoPhotoLibrarySetting;
+ (id)downloadContext;
+ (void)updateDownloadBarProgress;
+ (void)downloadBarDismissOnTimer:(id)arg0;
+ (void)failBubbleDismissOnTimer:(id)arg0;
+ (id)commentDownloadContext;
+ (void)downloadFileCheckWithAweme:(id)arg0 completion:(id /* block */)arg1;
+ (void)downloadVideoWithURLString:(id)arg0 completion:(id /* block */)arg1;
+ (void)_dismissLoadingView;
+ (void)downloadVideoWithURLGoup:(id)arg0 seed:(long long)arg1 destinationURL:(id)arg2 progress:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
+ (void)saveVideoLifeStory:(id)arg0 completion:(id /* block */)arg1;
+ (void)saveImageLifeStory:(id)arg0 completion:(id /* block */)arg1;
+ (id)_localPathURLForVideo:(id)arg0;
+ (void)downloadLifeStoryWithURLString:(id)arg0 lifeStory:(id)arg1 distinationURL:(id)arg2 hasWatermark:(BOOL)arg3 completion:(id /* block */)arg4;
+ (void)downloadImageAndAddSWatermarkWithLifeStory:(id)arg0 completion:(id /* block */)arg1;
+ (void)composeWithFileURL:(id)arg0 lifeStory:(id)arg1 edgeData:(id)arg2 completion:(id /* block */)arg3;
+ (void)initialize;
+ (void)_showLoadingView;
+ (id)loadingView;
+ (void)updateDownloadProgress:(double)arg0;

@end
