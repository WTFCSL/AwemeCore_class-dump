//
//     Generated by private class-dump
//

@protocol ACCRecorderProtocolD <ACCRecorderProtocol>

- (BOOL)setMusicPlayMode:(long long)arg0;
- (void)setVideoBufferCallback:(id /* block */)arg0;
- (void)setActiveColorSpace:(unsigned long long)arg0 completionHandler:(id /* block */)arg1;
- (void)captureImageWithOptions:(id)arg0 finishHandler:(id /* block */)arg1;
- (void)setEnableMicPCMWrite:(BOOL)arg0;
- (void)musicSeekToTime:(double)arg0;
- (void)setBalanceEnabled:(BOOL)arg0 targetLufs:(long long)arg1;
- (void)setNewBalanceEnabled:(BOOL)arg0 newBalanceCallback:(id /* block */)arg1;
- (void)setTimeAlignEnabled:(BOOL)arg0 modelPath:(id)arg1 timeAlignCallback:(id /* block */)arg2;
- (long long)getCurrentLatency;
- (void)enableEffectMusicTime:(BOOL)arg0;

@end