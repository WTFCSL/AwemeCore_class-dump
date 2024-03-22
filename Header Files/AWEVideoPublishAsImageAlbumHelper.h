//
//     Generated by private class-dump
//

@class NSString;

@interface AWEVideoPublishAsImageAlbumHelper : NSObject <ACCVideoPublishAsImageAlbumProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isCanvansPhotoAndEnablePublishAsImageAlbum:(id)arg0;
+ (void)saveOriginalImageWithImage:(id)arg0 to:(id)arg1 completion:(id /* block */)arg2;
+ (BOOL)isCanvansPhotoAndEnablePublishAsImageAlbumWithoutDynamicCheck:(id)arg0;
+ (BOOL)enableUsingOriginImagePublishWithModel:(id)arg0;
+ (BOOL)isSupportedCovertCanvansType:(id)arg0;
+ (id)existingOriginalImageFilePathFromPublishModel:(id)arg0;
+ (BOOL)isPhotoPublishAsImageForSlides:(id)arg0;
+ (struct CGSize { double x0; double x1; })exportSizeForPHAsset:(id)arg0;
+ (void)saveOriginalImageWithAsset:(id)arg0 to:(id)arg1 completion:(id /* block */)arg2;
+ (BOOL)isMergeImageForPublish:(id)arg0 index:(long long)arg1;
+ (BOOL)isPhotoSaveAsImageForSlides:(id)arg0;
+ (BOOL)isCanvansPhotoAndEnableSaveAlbumAsImageAlbum:(id)arg0;
+ (BOOL)hasCanvasEdit:(id)arg0;
+ (long long)mergeVideoCountForPublish:(id)arg0;
+ (id)subscriberPool;
+ (void)sendOriginImageDidSaveMessageWithTaskId:(id)arg0;
+ (BOOL)hasUnSupportedEditAbility:(id)arg0;
+ (BOOL)hasFixedUnSupportedPublishConfig:(id)arg0;
+ (BOOL)hasDynamicUnSupportedPublishConfig:(id)arg0;
+ (BOOL)p_isCanvansPhotoAndEnableCheck:(id)arg0 isForSaveAlbum:(BOOL)arg1 ignoreDynamicCheck:(BOOL)arg2;
+ (BOOL)p_hasUnSupportedEditAbility:(id)arg0 isForSaveAlbum:(BOOL)arg1;
+ (BOOL)p_hasUnSupportedSticker:(id)arg0 isForSaveAlbum:(BOOL)arg1;
+ (BOOL)isSupportedInteractionStickers:(id)arg0 publishModel:(id)arg1;
+ (BOOL)hasDynamicSticker:(id)arg0 sticker:(id)arg1;
+ (id)p_preassembleOriginalImageModelInfoTo:(id)arg0;
+ (void)p_saveOriginalImageWithImage:(id)arg0 filePath:(id)arg1 taskID:(id)arg2 compressOrigin:(BOOL)arg3 completion:(id /* block */)arg4;
+ (void)saveOriginalImageWithImage:(id)arg0 to:(id)arg1 compressOrigin:(BOOL)arg2 completion:(id /* block */)arg3;
+ (BOOL)p_saveImageWithFilePath:(id)arg0 imageData:(id)arg1;
+ (id)p_compressedFramsImageFilePathFromOriginalFilePath:(id)arg0;
+ (BOOL)isPhotoPublishAsImageForSlides:(id)arg0 isForSaveAlbum:(BOOL)arg1;
+ (long long)mergeImageCountForPublish:(id)arg0;
+ (void)addSubscriber:(id)arg0;
+ (long long)resizeMode;
+ (void)removeSubscriber:(id)arg0;

@end
