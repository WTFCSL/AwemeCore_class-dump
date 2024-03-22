//
//     Generated by private class-dump
//

@interface BDCReaderZoomConfig : NSObject {
    BOOL _doubleTapZoomEnable;
    float _doubleTapEventRecognizeDelay;
    float _doubleTapMaximumZoomScale;
    float _gestureMaximumZoomScale;
    float _horzentialBounceChangeOffset;
    float _horzentialMaxBounceOffset;
    float _verticalBounceChangeOffset;
    float _verticalMaxBounceOffset;
}

@property (nonatomic) BOOL doubleTapZoomEnable;
@property (nonatomic) float doubleTapEventRecognizeDelay;
@property (nonatomic) float doubleTapMaximumZoomScale;
@property (nonatomic) float gestureMaximumZoomScale;
@property (nonatomic) float horzentialBounceChangeOffset;
@property (nonatomic) float horzentialMaxBounceOffset;
@property (nonatomic) float verticalBounceChangeOffset;
@property (nonatomic) float verticalMaxBounceOffset;

- (BOOL)doubleTapZoomEnable;
- (void)setDoubleTapZoomEnable:(BOOL)arg0;
- (float)doubleTapEventRecognizeDelay;
- (void)setDoubleTapEventRecognizeDelay:(float)arg0;
- (float)doubleTapMaximumZoomScale;
- (void)setDoubleTapMaximumZoomScale:(float)arg0;
- (float)gestureMaximumZoomScale;
- (void)setGestureMaximumZoomScale:(float)arg0;
- (float)horzentialBounceChangeOffset;
- (void)setHorzentialBounceChangeOffset:(float)arg0;
- (float)horzentialMaxBounceOffset;
- (void)setHorzentialMaxBounceOffset:(float)arg0;
- (float)verticalBounceChangeOffset;
- (void)setVerticalBounceChangeOffset:(float)arg0;
- (float)verticalMaxBounceOffset;
- (void)setVerticalMaxBounceOffset:(float)arg0;
- (id)init;

@end