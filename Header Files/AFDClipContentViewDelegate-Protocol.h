//
//     Generated by private class-dump
//

@protocol AFDClipContentViewDelegate <NSObject>

@optional

- (void)zoomScrollViewWillBeginDragging;
- (void)zoomScrollViewWillBeginZooming;
- (void)zoomScrollViewDidEndZooming;
- (void)zoomScrollViewWillBeginZoomBouncing:(unsigned long long)arg0 beginScale:(double)arg1 currentScale:(double)arg2;
- (void)zoomInfoDidChange:(id)arg0 zoomInfo:(struct AFDAlbumImageZoomInfo { double x0; struct CGPoint { double x0; double x1; } x1; })arg1;

@end