//
//     Generated by private class-dump
//

@protocol ACCShareImageAlbumFeedBusinessProtocol <NSObject>

+ (void)showDownloadActionSheetWithIsSingleImage:(BOOL)arg0 enterFrom:(id)arg1 title:(id)arg2 willDismissHandler:(id /* block */)arg3 resultHandler:(id /* block */)arg4;
+ (void)showDownloadActionSheetWithIsSingleImage:(BOOL)arg0 enterFrom:(id)arg1 title:(id)arg2 currentCanDownload:(BOOL)arg3 willDismissHandler:(id /* block */)arg4 resultHandler:(id /* block */)arg5;
+ (void)setSlides:(BOOL)arg0 isImageClip:(BOOL)arg1;
+ (void)showDownloadActionSheetWithIsSingleImage:(BOOL)arg0 canSaveAsVideo:(BOOL)arg1 canSaveAsRenderImage:(BOOL)arg2 enterFrom:(id)arg3 title:(id)arg4 willDismissHandler:(id /* block */)arg5 resultHandler:(id /* block */)arg6;
+ (void)showDownloadActionSheetWithIsSingleImage:(BOOL)arg0 enterFrom:(id)arg1 willDismissHandler:(id /* block */)arg2 resultHandler:(id /* block */)arg3;
+ (void)showDownloadActionSheetWithIsSingleImage:(BOOL)arg0 enterFrom:(id)arg1 currentCanDownload:(BOOL)arg2 willDismissHandler:(id /* block */)arg3 resultHandler:(id /* block */)arg4;
+ (id)imagePickerController;

@end
