//
//     Generated by private class-dump
//

@interface LiveStreamImageConvertHelper : NSObject

+ (id)ConvertImageBufferData:(struct __CVBuffer { } *)arg0 imageName:(id)arg1 imageType:(unsigned long long)arg2 ratio:(double)arg3 save:(BOOL)arg4;
+ (void)saveImgData:(id)arg0 imageName:(id)arg1;
+ (void)showImageData:(struct CGImage { } *)arg0 imageName:(id)arg1;
+ (struct __CVBuffer { } *)CVPixelBufferRefFromUIImage:(id)arg0 pixelType:(unsigned int)arg1;

@end
