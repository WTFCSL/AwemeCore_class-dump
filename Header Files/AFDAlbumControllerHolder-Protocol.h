//
//     Generated by private class-dump
//

@protocol AFDAlbumControllerHolder <NSObject>

- (struct CGSize { double x0; double x1; })getImageViewSizeWithMaxWHRatio;
- (double)getImageContentTopInset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getTemporaryImageViewRectWithMinWHRatio;
- (void)needUpdateImageContentViewLayoutWithAnthorPostion;
- (id)getCurrentImageView;
- (id)getCurrentContentView;
- (id)getCurrentContentViewBackgroundColor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getCurrentContentViewRect:(id)arg0;
- (void)endShrinkAlbumContentAnimation;
- (BOOL)shouldAlbumResponseToPinch;
- (void)updateShrinkAlbumContentMode:(BOOL)arg0;
- (void)startProgressTimer;

@end