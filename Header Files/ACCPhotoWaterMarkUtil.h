//
//     Generated by private class-dump
//

@interface ACCPhotoWaterMarkUtil : NSObject

+ (void)acc_addWaterMarkForSourceImage:(id)arg0 waterMarkImageName:(id)arg1 completion:(id /* block */)arg2;
+ (void)acc_addWaterMarkForSourceImage:(id)arg0 waterMarkImage:(id)arg1 completion:(id /* block */)arg2;
+ (void)acc_addWaterMarkWithoutPaddingForSourceImage:(id)arg0 waterMarkImage:(id)arg1 completion:(id /* block */)arg2;
+ (void)acc_addWaterMarkForSourceImage:(id)arg0 completion:(id /* block */)arg1;
+ (void)acc_addWatermarkForEffectSourceImage:(id)arg0 userName:(id)arg1 watermarkImage:(id)arg2 shouldRemoveLabel:(BOOL)arg3 completion:(id /* block */)arg4;
+ (id)p_fullSizeImageWithSourceImageSize:(struct CGSize { double x0; double x1; })arg0 waterMarkImageName:(id)arg1;
+ (void)acc_addWaterMarkWithPadding:(BOOL)arg0 sourceImage:(id)arg1 waterMarkImage:(id)arg2 completion:(id /* block */)arg3;
+ (id)p_imageWithViewOnScreenScale:(id)arg0;
+ (id)p_fullSizeImageWithSourceImageSize:(struct CGSize { double x0; double x1; })arg0 waterMarkImage:(id)arg1;

@end