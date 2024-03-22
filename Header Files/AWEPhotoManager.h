//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPhotoManager : NSObject <AWEPhotoManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)requestAuthorizationWithCompletionOnMainQueue:(id /* block */)arg0;
+ (int)getUIImageWithPHAsset:(id)arg0 networkAccessAllowed:(BOOL)arg1 progressHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (void)getLatestAssetWithType:(unsigned long long)arg0 completion:(id /* block */)arg1;
+ (int)getUIImageWithPHAsset:(id)arg0 imageSize:(struct CGSize { double x0; double x1; })arg1 networkAccessAllowed:(BOOL)arg2 progressHandler:(id /* block */)arg3 completion:(id /* block */)arg4;
+ (void)getOriginalPhotoDataFromICloudWithAsset:(id)arg0 progressHandler:(id /* block */)arg1 completion:(id /* block */)arg2;
+ (void)getPhotoDataWithAsset:(id)arg0 version:(long long)arg1 completion:(id /* block */)arg2;
+ (int)getUIImageWithPHAsset:(id)arg0 imageSize:(struct CGSize { double x0; double x1; })arg1 contentMode:(long long)arg2 networkAccessAllowed:(BOOL)arg3 progressHandler:(id /* block */)arg4 completion:(id /* block */)arg5;
+ (id)privateVideoURLWithInfo:(id)arg0;
+ (void)getAssetsFromFetchResult:(id)arg0 filterBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
+ (void)getAssetsWithAlbum:(id)arg0 type:(unsigned long long)arg1 filterBlock:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (void)getAssetsWithIdentifiers:(id)arg0 completion:(id /* block */)arg1;
+ (void)getAssetsAndAVAssetAndCoverImageWithIdentifiers:(id)arg0 completion:(id /* block */)arg1;
+ (void)getAssetsWithType:(unsigned long long)arg0 filterBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
+ (void)getAssetsWithType:(unsigned long long)arg0 filterBlock:(id /* block */)arg1 ascending:(BOOL)arg2 completion:(id /* block */)arg3;
+ (void)getAllAssetsWithType:(unsigned long long)arg0 ascending:(BOOL)arg1 completion:(id /* block */)arg2;
+ (int)getUIImageWithPHAsset:(id)arg0 imageSize:(struct CGSize { double x0; double x1; })arg1 contentMode:(long long)arg2 networkAccessAllowed:(BOOL)arg3 resizeMode:(long long)arg4 progressHandler:(id /* block */)arg5 completion:(id /* block */)arg6;
+ (int)getUIImageWithPHAsset:(id)arg0 targetSize:(struct CGSize { double x0; double x1; })arg1 contentMode:(long long)arg2 options:(id)arg3 resultHandler:(id /* block */)arg4;
+ (void)getOriginalPhotoDataWithAsset:(id)arg0 completion:(id /* block */)arg1;
+ (void)getPhotosBytesWithArray:(id)arg0 completion:(id /* block */)arg1;
+ (void)getPhotosBytesWithArray:(id)arg0 resizeMode:(long long)arg1 completion:(id /* block */)arg2;
+ (struct CGSize { double x0; double x1; })sizeFor1080P:(id)arg0;
+ (id)processImageTo1080P:(id)arg0;
+ (id)processImageWithBlackEdgeWithOutputSize:(struct CGSize { double x0; double x1; })arg0 sourceImage:(id)arg1;
+ (id)getMD5withPath:(id)arg0 usedBytes:(long long)arg1;
+ (id)timeStringWithDuration:(double)arg0;
+ (id)assetModelWithPHAsset:(id)arg0;
+ (unsigned long long)authorizationStatus;
+ (void)cancelImageRequest:(int)arg0;
+ (void)authorizationStatusWithCompletion:(id /* block */)arg0;

@end