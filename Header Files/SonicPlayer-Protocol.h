//
//     Generated by private class-dump
//

@protocol SonicPlayer <NSObject>

- (unsigned int)getVideoWidth;
- (unsigned int)getVideoHeight;
- (long long)getVideoRotation;
- (BOOL)updateTexture:(struct __CVBuffer **)arg0;
- (void)dispose;
- (void)resume;
- (void)setCurrentTime:(double)arg0;
- (void)setListener:(id)arg0;
- (double)getDuration;
- (void)setVolume:(float)arg0;
- (void)setSource:(id)arg0;
- (void)setLooping:(BOOL)arg0;
- (void)play;
- (void)pause;
- (double)getCurrentTime;

@end
