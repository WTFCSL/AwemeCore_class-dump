//
//     Generated by private class-dump
//

@interface AWEAdVibrationManagerProtocol : HTSService <AWEAdVibrationManagerProtocol> {
    void /* unknown type, empty encoding */ aweme;
    void /* unknown type, empty encoding */ playerCurrentPlaybackTime;
    void /* unknown type, empty encoding */ hapticEngine;
    void /* unknown type, empty encoding */ hapticPatternPlayer;
    void /* unknown type, empty encoding */ ahap;
}

@property (nonatomic, copy) id /* block */ playerCurrentPlaybackTime;

- (void)onPlayerWillLoopPlaying:(id)arg0;
- (void)preloadVibrationResourceFor:(id)arg0;
- (void)removeCacheFor:(id)arg0;
- (void)onPlayer:(id)arg0 didChangePlaybackStateWithAction:(long long)arg1;
- (void)onPlayer:(id)arg0 didChangeStallState:(long long)arg1 actionType:(long long)arg2 reason:(unsigned long long)arg3;
- (void)closeAdOperationGuide;
- (void)clearAllCache;
- (void)onServiceInit;
- (id)initWithAweme:(id)arg0;
- (void)clearLocalJsonData;
- (id /* block */)playerCurrentPlaybackTime;
- (void)setPlayerCurrentPlaybackTime:(id /* block */)arg0;
- (id)init;
- (void).cxx_destruct;

@end
