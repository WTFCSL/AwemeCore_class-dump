//
//     Generated by private class-dump
//

@interface BDXLynxFlowerPixelBufferTransformer : NSObject

+ (void)convertBGRAtoRGBA:(char *)arg0 withSize:(unsigned long long)arg1;
+ (id)bdx_imageFromCVPixelBufferRefForTTPlayer:(struct __CVBuffer { } *)arg0;
+ (id)bdx_imageFromCVPixelBufferRefForSystemPlayer:(struct __CVBuffer { } *)arg0;
+ (struct __CVBuffer { } *)bdx_pixelBufferFromImage:(id)arg0;

@end