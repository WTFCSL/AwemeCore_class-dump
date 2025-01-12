//
//     Generated by private class-dump
//

@interface TSPKAdvanceAppStatusTrigger : TSPKDetectTrigger {
    BOOL _detectEnterForeground;
    double _minAppStatusChangeTime;
    double _lastTimeInBackground;
}

@property (nonatomic) BOOL detectEnterForeground;
@property (nonatomic) double minAppStatusChangeTime;
@property (nonatomic) double lastTimeInBackground;

- (void)applicationEnterBackground;
- (void)applicationEnterForeground;
- (void)setDetectEnterForeground:(BOOL)arg0;
- (void)setMinAppStatusChangeTime:(double)arg0;
- (BOOL)detectEnterForeground;
- (double)lastTimeInBackground;
- (double)minAppStatusChangeTime;
- (void)executeDetectAction;
- (void)setLastTimeInBackground:(double)arg0;
- (void)decodeParams:(id)arg0;
- (void)setup;
- (void)dealloc;

@end
