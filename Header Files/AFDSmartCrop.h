//
//     Generated by private class-dump
//

@interface AFDSmartCrop : NSObject

+ (void)downloadResourcesIfNeeded;
+ (id)cropImage:(id)arg0 toSize:(struct CGSize { double x0; double x1; })arg1 withCenter:(struct CGPoint { double x0; double x1; })arg2;
+ (void)smartCropImage:(id)arg0 toSize:(struct CGSize { double x0; double x1; })arg1 completion:(id /* block */)arg2;
+ (void)smartCropImage:(id)arg0 toAspectRatio:(double)arg1 completion:(id /* block */)arg2;
+ (id)cropImage:(id)arg0 toAspectRatio:(double)arg1 withCenter:(struct CGPoint { double x0; double x1; })arg2;
+ (void)smartCropImageWithURLArray:(id)arg0 toAspectRatio:(double)arg1 cacheKey:(id)arg2 completion:(id /* block */)arg3;
+ (id)sharedCache;
+ (struct CGSize { double x0; double x1; })getImageSize:(id)arg0;

@end
