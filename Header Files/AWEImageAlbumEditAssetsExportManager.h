//
//     Generated by private class-dump
//

@class NSString;

@interface AWEImageAlbumEditAssetsExportManager : NSObject <ACCImageAlbumAssetsExportManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })maxExportSize;
+ (void)exportWithImages:(id)arg0 publishModel:(id)arg1 completion:(id /* block */)arg2;
+ (id)exportWithAssetModels:(id)arg0 publishModel:(id)arg1 completion:(id /* block */)arg2;
+ (void)exportWithResourceModels:(id)arg0 publishModel:(id)arg1 completion:(id /* block */)arg2;
+ (void)exportWithImagePaths:(id)arg0 imagePathsForCompress:(id)arg1 publishModel:(id)arg2 completion:(id /* block */)arg3;
+ (struct CGSize { double x0; double x1; })exportSizeWithImageSize:(struct CGSize { double x0; double x1; })arg0;
+ (struct CGSize { double x0; double x1; })exportSizeForPHAsset:(id)arg0;
+ (void)p_fetchImageWithPlaceholderModels:(id)arg0 publishModel:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)p_exportLock;
+ (id)p_exportQueue;
+ (void)p_handleExportSucceedWithPlaceholderModels:(id)arg0 publishModel:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)p_exportAssetToLocalFileWithModel:(id)arg0 rootOutputFolderPath:(id)arg1 completion:(id /* block */)arg2;
+ (BOOL)p_copyImageWithModel:(id)arg0 originalImageFilePath:(id)arg1 rootOutputFolderPath:(id)arg2 isCompressedImage:(BOOL)arg3;
+ (id)recodeOriginImageDataWith:(id)arg0 placeholderModel:(id)arg1;
+ (BOOL)p_saveOriginalImageWithModel:(id)arg0 originalImage:(id)arg1 imageData:(id)arg2 rootOutputFolderPath:(id)arg3;
+ (void)p_saveCompressedImageWithModel:(id)arg0 originalImage:(id)arg1 imageData:(id)arg2 rootOutputFolderPath:(id)arg3;
+ (struct CGSize { double x0; double x1; })p_exportImageSize:(struct CGSize { double x0; double x1; })arg0;
+ (void)fetchOriginImageWithAsset:(id)arg0 imageSize:(struct CGSize { double x0; double x1; })arg1 resizeMode:(long long)arg2 completion:(id /* block */)arg3;
+ (id)downsampleWithLimitSize:(struct CGSize { double x0; double x1; })arg0 originImage:(id)arg1 placeholderModel:(id)arg2;
+ (id)p_originalImagePathAtFolder:(id)arg0 index:(long long)arg1;
+ (id)p_compressedImagePathAtFolder:(id)arg0 index:(long long)arg1;
+ (id)p_creatImageInputInfo:(id)arg0 isOriginal:(BOOL)arg1 taskId:(id)arg2;
+ (BOOL)saveImageWithFilePath:(id)arg0 imageData:(id)arg1 originImage:(id)arg2 usingOriginImageData:(BOOL)arg3 trackParams:(id)arg4;
+ (BOOL)saveImageWithFilePath:(id)arg0 imageData:(id)arg1 originImage:(id)arg2 usingOriginImageData:(BOOL)arg3;
+ (long long)resizeMode;

@end