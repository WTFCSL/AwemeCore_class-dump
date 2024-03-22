//
//     Generated by private class-dump
//

@class NSString;

@interface AFDImagePreloadManager : NSObject <AFDImagePreloadManagerProtocol> {
    BOOL _isMemoryDangerTopLevel;
}

@property (nonatomic) BOOL isMemoryDangerTopLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)preloadRemainImageWithModel:(id)arg0 currentIndex:(long long)arg1 referString:(id)arg2 completion:(id /* block */)arg3;
+ (void)preloadImageByMultiBitrateAndSRIfNeededWithModel:(id)arg0 referString:(id)arg1 imageModel:(id)arg2 completion:(id /* block */)arg3;
+ (id)coverImageWithImageModel:(id)arg0 index:(long long)arg1 awemeModel:(id)arg2 referString:(id)arg3;
+ (void)preloadImageWithDatasource:(id)arg0 currentIndex:(long long)arg1 referString:(id)arg2;
+ (void)preloadImageModel:(id)arg0 referString:(id)arg1 completion:(id /* block */)arg2;
+ (id)setImageOfImageView:(id)arg0 referString:(id)arg1 withImageModel:(id)arg2 placeholder:(id)arg3 needSR:(BOOL)arg4 containerSize:(struct CGSize { double x0; double x1; })arg5 notFadeOut:(BOOL)arg6 completion:(id /* block */)arg7;
+ (void)smartPreloadImageWithDatasource:(id)arg0 currentIndex:(long long)arg1 referString:(id)arg2;
+ (void)preloadImageWithURLArray:(id)arg0 completion:(id /* block */)arg1;
+ (void)setImageOfImageView:(id)arg0 referString:(id)arg1 withImageModel:(id)arg2 placeholder:(id)arg3 completion:(id /* block */)arg4;
+ (void)preloadImageWithDatasource:(id)arg0 currentIndex:(long long)arg1 referString:(id)arg2 preCount:(long long)arg3 nextCount:(long long)arg4 preloadCount:(long long)arg5;
+ (void)selectBSModelAndUpdateConfigForModel:(id)arg0;
+ (BOOL)enableAlbumMemoryOptimize;
+ (unsigned long long)preloadImageOptions;
+ (void)preloadImageModel:(id)arg0 referString:(id)arg1 needSR:(BOOL)arg2 needImagePrefetch:(BOOL)arg3 options:(unsigned long long)arg4 completion:(id /* block */)arg5;
+ (id)srTransformerWithImageModel:(id)arg0;
+ (void)preloadImageWithURLArray:(id)arg0 referString:(id)arg1 SRTransformer:(id)arg2 needImagePrefetch:(BOOL)arg3 options:(unsigned long long)arg4 completion:(id /* block */)arg5;
+ (id)srTransformerWithImageModel:(id)arg0 containerSize:(struct CGSize { double x0; double x1; })arg1;
+ (id)cacheNameWithReferString:(id)arg0;
+ (unsigned long long)heicProgressImageOptionsWithOptions:(unsigned long long)arg0;
+ (void)setImageOfImageView:(id)arg0 referString:(id)arg1 withImageModel:(id)arg2 placeholder:(id)arg3 needSR:(BOOL)arg4 containerSize:(struct CGSize { double x0; double x1; })arg5 completion:(id /* block */)arg6;
+ (unsigned long long)imageOptionsWithoutFadeOut;
+ (unsigned long long)imageOptions;
+ (id)sharedManager;

- (void)setIsMemoryDangerTopLevel:(BOOL)arg0;
- (void)didReceiveMemoryDangerLevelTopNotification;
- (void)didReceiveMemoryBalanceRealTimeDangerLevelSecondaryNotification;
- (BOOL)isMemoryDangerTopLevel;
- (id)init;

@end
