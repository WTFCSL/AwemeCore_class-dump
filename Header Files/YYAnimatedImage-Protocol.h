//
//     Generated by private class-dump
//

@protocol YYAnimatedImage <NSObject>

- (unsigned long long)animatedImageFrameCount;
- (double)animatedImageDurationAtIndex:(unsigned long long)arg0;
- (id)animatedImageFrameAtIndex:(unsigned long long)arg0;
- (unsigned long long)animatedImageLoopCount;
- (unsigned long long)animatedImageBytesPerFrame;

@optional

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })animatedImageContentsRectAtIndex:(unsigned long long)arg0;

@end