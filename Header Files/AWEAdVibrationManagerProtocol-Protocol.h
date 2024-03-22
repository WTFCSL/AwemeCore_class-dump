//
//     Generated by private class-dump
//

@protocol AWEAdVibrationManagerProtocol <HTSService>

@property (nonatomic, copy) id /* block */ playerCurrentPlaybackTime;

- (id)initWithAweme:(id)arg0;
- (void)onPlayerWillLoopPlaying:(id)arg0;
- (id /* block */)playerCurrentPlaybackTime;
- (void)setPlayerCurrentPlaybackTime:(id /* block */)arg0;
- (void)preloadVibrationResourceFor:(id)arg0;
- (void)preloadVibrationResourceFor:(id)arg0;
- (void)removeCacheFor:(id)arg0;
- (void)removeCacheFor:(id)arg0;
- (void)onPlayer:(id)arg0 didChangePlaybackStateWithAction:(long long)arg1;
- (void)onPlayer:(id)arg0 didChangePlaybackStateWithAction:(long long)arg1;
- (void)onPlayer:(id)arg0 didChangeStallState:(long long)arg1 actionType:(long long)arg2 reason:(unsigned long long)arg3;
- (void)closeAdOperationGuide;

@end
