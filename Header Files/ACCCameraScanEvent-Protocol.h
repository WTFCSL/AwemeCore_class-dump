//
//     Generated by private class-dump
//

@protocol ACCCameraScanEvent <NSObject>

@optional

- (void)onReceivedCameraScanAnythingResult:(id)arg0;
- (void)onReceivedCameraScanQRCodeResults:(id)arg0;
- (void)onReceivedCameraScanQRCodeResult:(id)arg0;
- (void)onReceivedCameraBrightnessOpenFlashlightResult:(BOOL)arg0;
- (void)onReceivedDetectTimeOutQrcodeZoomFactor:(double)arg0;
- (void)onReceivedQrcodeUpdateZoomFactor:(double)arg0;

@end