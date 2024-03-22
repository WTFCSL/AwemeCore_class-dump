//
//     Generated by private class-dump
//

@protocol IESLiveWebImageService <NSObject>

- (long long)ieslive_getWebInternalType;
- (id)imageCachePathForKey:(id)arg0;
- (void)storeImage:(id)arg0 forKey:(id)arg1 toDisk:(BOOL)arg2;
- (void)loadImageWithURL:(id)arg0 options:(unsigned long long)arg1 complete:(id /* block */)arg2;
- (void)prefetchImagesWithURLs:(id)arg0 complete:(id /* block */)arg1;
- (void)ieslive_appliedImageView:(id)arg0 imageURLs:(id)arg1 placeholderImage:(id)arg2 cornerRadius:(double)arg3 completed:(id /* block */)arg4;
- (void)ieslive_appliedImageView:(id)arg0 imageURLs:(id)arg1 placeholderImage:(id)arg2 needCircular:(BOOL)arg3 completed:(id /* block */)arg4;
- (void)ieslive_appliedImageView:(id)arg0 imageURLs:(id)arg1 placeholderImage:(id)arg2 webImageOptions:(unsigned long long)arg3 cornerRadius:(double)arg4 completed:(id /* block */)arg5;
- (void)ieslive_cancelCurrentImageLoadWithImageView:(id)arg0;
- (void)ieslive_appliedUIButton:(id)arg0 controlState:(unsigned long long)arg1 imageURLs:(id)arg2 placeholderImage:(id)arg3 options:(unsigned long long)arg4 cornerRadius:(double)arg5 completed:(id /* block */)arg6;
- (id)imageFromCacheWithKey:(id)arg0 cacheType:(long long)arg1;
- (BOOL)imageExistInCacheWithKey:(id)arg0 cacheType:(long long)arg1;
- (void)storeImage:(id)arg0 imageData:(id)arg1 forKey:(id)arg2 toDisk:(BOOL)arg3;
- (void)loadImageWithURLs:(id)arg0 options:(unsigned long long)arg1 complete:(id /* block */)arg2;
- (id)createWebPDecoderWithData:(id)arg0 scale:(double)arg1;
- (id)createWebPPlayer;
- (id)webPPlayerWithName:(id)arg0;
- (id)parseNinePatchInfoFromImageURL:(id)arg0 error:(id *)arg1;
- (id)imageDataForKey:(id)arg0;

@optional

- (id)imageWithData:(id)arg0 preloadAllFrame:(BOOL)arg1;
- (void)loadImagesWithURLs:(id)arg0 options:(unsigned long long)arg1 complete:(id /* block */)arg2;
- (void)loadImagesWithURLs:(id)arg0 options:(unsigned long long)arg1 completionBlock:(id /* block */)arg2;
- (void)loadImageWithURL:(id)arg0 options:(unsigned long long)arg1 targetSize:(struct CGSize { double x0; double x1; })arg2 complete:(id /* block */)arg3;
- (id)createWebPPlayerWithDisplayLinkOptimize:(BOOL)arg0;
- (void)ieslive_appliedImageView:(id)arg0 imageURLs:(id)arg1 placeholderImage:(id)arg2 cornerRadius:(double)arg3 cacheName:(id)arg4 completed:(id /* block */)arg5;
- (void)ieslive_loadNinepatchImageWithURLs:(id)arg0 completionBlock:(id /* block */)arg1;

@end
