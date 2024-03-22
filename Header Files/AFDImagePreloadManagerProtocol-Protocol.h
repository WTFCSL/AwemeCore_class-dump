//
//     Generated by private class-dump
//

@protocol AFDImagePreloadManagerProtocol <NSObject>

+ (void)preloadRemainImageWithModel:(id)arg0 currentIndex:(long long)arg1 referString:(id)arg2 completion:(id /* block */)arg3;
+ (void)preloadImageByMultiBitrateAndSRIfNeededWithModel:(id)arg0 referString:(id)arg1 imageModel:(id)arg2 completion:(id /* block */)arg3;
+ (id)coverImageWithImageModel:(id)arg0 index:(long long)arg1 awemeModel:(id)arg2 referString:(id)arg3;
+ (void)preloadImageWithDatasource:(id)arg0 currentIndex:(long long)arg1 referString:(id)arg2;
+ (void)preloadImageModel:(id)arg0 referString:(id)arg1 completion:(id /* block */)arg2;
+ (id)setImageOfImageView:(id)arg0 referString:(id)arg1 withImageModel:(id)arg2 placeholder:(id)arg3 needSR:(BOOL)arg4 containerSize:(struct CGSize { double x0; double x1; })arg5 notFadeOut:(BOOL)arg6 completion:(id /* block */)arg7;
+ (void)smartPreloadImageWithDatasource:(id)arg0 currentIndex:(long long)arg1 referString:(id)arg2;
+ (void)selectBSModelAndUpdateConfigForModel:(id)arg0;

@end