//
//     Generated by private class-dump
//

@protocol BDPNativeGameBaseControllerProtocol <NSObject>

@property (nonatomic) double lastTapTime;
@property (nonatomic) BOOL isCompositeVideo;

- (void)onAppEnterBackground;
- (void)onAppEnterForeground;
- (void)setToolBarView:(id)arg0;
- (void)forceStopRunning;
- (void)setIsCompositeVideo:(BOOL)arg0;
- (void)setGamePause:(BOOL)arg0;
- (BOOL)isCompositeVideo;
- (void)stopExceptionMonitor;
- (void)startExceptionMonitor;
- (id)getCurrentGameView;
- (id)initWithUniqueID:(id)arg0;
- (double)lastTapTime;
- (void)setLastTapTime:(double)arg0;

@end
