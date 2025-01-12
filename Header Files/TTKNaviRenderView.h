//
//     Generated by private class-dump
//

@class NSTimer, TTKNaviRenderManager, NSObject;
@protocol OS_dispatch_queue;

@interface TTKNaviRenderView : UIView {
    NSTimer *_timer;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _preventGesture;
    BOOL _paused;
    BOOL _timerOptimize;
    long long _preferredFramesPerSecond;
    TTKNaviRenderManager *_renderManager;
    long long _lastFPS;
    struct CGPoint { double x; double y; } _lastestPinchLocation2;
}

@property (weak, nonatomic) TTKNaviRenderManager *renderManager;
@property (nonatomic) long long preferredFramesPerSecond;
@property (nonatomic) long long lastFPS;
@property (nonatomic) struct CGPoint { double x; double y; } lastestPinchLocation2;
@property (nonatomic) BOOL preventGesture;
@property (nonatomic) BOOL paused;
@property (nonatomic) BOOL timerOptimize;

- (void)setLastFPS:(long long)arg0;
- (long long)lastFPS;
- (BOOL)isValidTimer;
- (void)renderFrame;
- (void)setPreventGesture:(BOOL)arg0;
- (id)initWithRenderManager:(id)arg0 fps:(long long)arg1;
- (void)continueTimerTick;
- (void)resumeTimerWithLastFPS;
- (void)stopTimerAfter2Seconds;
- (void)setRenderManager:(id)arg0;
- (void)addTimerFromGlobalRunloop;
- (void)p_handleSDKPanGesture:(id)arg0;
- (void)p_handleSDKPinchGesture:(id)arg0;
- (void)p_handleTouchPoint:(struct CGPoint { double x0; double x1; })arg0 hash:(unsigned long long)arg1 count:(unsigned long long)arg2 touchType:(long long)arg3;
- (struct CGPoint { double x0; double x1; })lastestPinchLocation2;
- (void)setLastestPinchLocation2:(struct CGPoint { double x0; double x1; })arg0;
- (BOOL)preventGesture;
- (void)removeTimerFromGlobalRunloop;
- (void)resumeTimer:(long long)arg0;
- (BOOL)timerOptimize;
- (void)cancelStoppingTimer;
- (void)setTimerOptimize:(BOOL)arg0;
- (void)sync;
- (void)removeFromSuperview;
- (BOOL)paused;
- (void)appDidEnterBackground:(id)arg0;
- (void).cxx_destruct;
- (void)stopTimer;
- (void)setPaused:(BOOL)arg0;
- (void)appWillEnterForeground:(id)arg0;
- (void)setPreferredFramesPerSecond:(long long)arg0;
- (void)layoutSubviews;
- (void)dealloc;
- (long long)preferredFramesPerSecond;
- (id)renderManager;
- (void)appWillTerminate:(id)arg0;
- (void)stopTimer:(long long)arg0;

@end
