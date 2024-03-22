//
//     Generated by private class-dump
//

@interface AWEInTodayPlayerDownloader : NSObject

+ (id)memoriesPathForLocalImageTileModel:(id)arg0;
+ (void)downloadResourceWithModels:(id)arg0 progress:(id /* block */)arg1 hotspot:(id /* block */)arg2 complete:(id /* block */)arg3;
+ (void)downloadWithModel:(id)arg0 progress:(id /* block */)arg1 complete:(id /* block */)arg2;
+ (void)checkFilePathExists;
+ (void)downloadLocalImageWithModel:(id)arg0 progress:(id /* block */)arg1 complete:(id /* block */)arg2;
+ (void)downloadAwemeImageWithModel:(id)arg0 progress:(id /* block */)arg1 complete:(id /* block */)arg2;
+ (void)downloadLocalVideoWithModel:(id)arg0 progress:(id /* block */)arg1 complete:(id /* block */)arg2;
+ (void)downloadAwemeVideoWithModel:(id)arg0 progress:(id /* block */)arg1 complete:(id /* block */)arg2;
+ (id)memoriesDirectoryPath;
+ (id)memoriesDirectory;
+ (void)downloadPhotoHandlerWithModel:(id)arg0 withImage:(id)arg1 info:(id)arg2 savePath:(id)arg3 complete:(id /* block */)arg4;
+ (void)exportLocalVideoWithAVAsset:(id)arg0 destURL:(id)arg1 complete:(id /* block */)arg2;
+ (void)cleanAllResource;

@end
