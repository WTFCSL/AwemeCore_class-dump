//
//     Generated by private class-dump
//

@interface IESLivePlaybackPictureInPictureLocalVideoTools : NSObject

+ (id)imageWithImage:(id)arg0 scaledToSize:(struct CGSize { double x0; double x1; })arg1;
+ (struct __CVBuffer { } *)pixelBufferFromCGImage:(struct CGImage { } *)arg0;
+ (void)createEmptyVideoWithSize:(struct CGSize { double x0; double x1; })arg0 atPath:(id)arg1 completion:(id /* block */)arg2;
+ (void)emptyVideoPathWithSize:(struct CGSize { double x0; double x1; })arg0 resultBlock:(id /* block */)arg1;

@end