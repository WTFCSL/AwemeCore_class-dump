//
//     Generated by private class-dump
//

@protocol IESLiveByteCastProviderAdapter <NSObject>

@optional

- (BOOL)isScreenCasting;
- (void)seekToProgress:(double)arg0;
- (void)seekLiveToNewest;
- (void)lockControlView;
- (void)unLockControlView;
- (BOOL)isXsgSupportSeek;
- (BOOL)canCastDanmaku;
- (BOOL)isPlaying;
- (void)play;
- (void)pause;

@end
