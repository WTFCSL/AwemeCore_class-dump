//
//     Generated by private class-dump
//

@class NSString;

@interface AWEShareUtils : NSObject <AWEShareUtility>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isPlatformAvailable:(long long)arg0;
+ (BOOL)isPlatformInstalled:(long long)arg0;
+ (BOOL)openAppWithPlatform:(long long)arg0;
+ (BOOL)isDisplayingSharePanel;
+ (void)shortenURL:(id)arg0 persistent:(BOOL)arg1 completion:(id /* block */)arg2;
+ (id)linkStringFormatWithSplitWord:(id)arg0 description:(id)arg1 urlString:(id)arg2;
+ (BOOL)enableGetPasteboard;
+ (void)syncPasteboardChangeCount;
+ (void)trackGetPasteboardString:(id)arg0 error:(id)arg1;
+ (void)readMarkImage:(id)arg0 completion:(id /* block */)arg1;
+ (BOOL)detectSelfReflowFromPhotoAlbumIfNeeded:(id)arg0;
+ (void)clearDownloadCache;
+ (void)showNoAlbumPermissionAlertWithCancelHandler:(id /* block */)arg0 confirmHandler:(id /* block */)arg1;
+ (id)textByTruncatingText:(id)arg0 withMaxLength:(unsigned long long)arg1;
+ (BOOL)pasteboardHasChanged;

@end
