//
//     Generated by private class-dump
//

@protocol ACCEditMultiTrackProtocol <ACCEditWrapper>

- (void)setupMultiTrackCanvas;
- (struct CGSize { double x0; double x1; })sizeWithAsset:(id)arg0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })mainTrackDuration;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })subTrackDuration;
- (void)updateMainTrackWithTransformX:(float)arg0 transformY:(float)arg1 scale:(float)arg2;
- (void)updateSubTrackWithTransformX:(float)arg0 transformY:(float)arg1 scale:(float)arg2;
- (void)updateMainTrackWithClipTimeEnd:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)updateSubTrackWithClipTimeEnd:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)updateMainTrackWithCropLeftTopPoint:(struct CGPoint { double x0; double x1; })arg0 rightBottomPoint:(struct CGPoint { double x0; double x1; })arg1;
- (void)updateSubTrackWithCropLeftTopPoint:(struct CGPoint { double x0; double x1; })arg0 rightBottomPoint:(struct CGPoint { double x0; double x1; })arg1;
- (void)updateMainTrackCanvasStyleWithBorderWidth:(long long)arg0 borderColor:(id)arg1;
- (void)updateSubTrackCanvasStyleWithBorderWidth:(long long)arg0 borderColor:(id)arg1;

@end
