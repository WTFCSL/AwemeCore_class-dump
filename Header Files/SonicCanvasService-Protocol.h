//
//     Generated by private class-dump
//

@protocol SonicCanvasService <SonicService>

- (void)openMonitor;
- (void)closeMonitor;
- (id)getMonitorData;
- (BOOL)screenshot:(id)arg0 dstWidth:(int)arg1 dstHeight:(int)arg2 dstBuffer:(void *)arg3;
- (void)pausePresentCanvas;
- (void)resumePresentCanvas;
- (void)disableAdaptiveFpsMode:(int)arg0;
- (void)enableAdaptiveFpsMode:(int)arg0 lowestFps:(int)arg1 highestFps:(int)arg2 watchTouch:(BOOL)arg3;
- (void)hintAdaptiveFpsMode;
- (void)removeView:(id)arg0;
- (void)addView:(id)arg0;

@end