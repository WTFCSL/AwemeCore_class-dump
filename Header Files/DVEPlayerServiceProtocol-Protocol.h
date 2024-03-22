//
//     Generated by private class-dump
//

@class RACSignal;

@protocol DVEPlayerServiceProtocol <NSObject>

@property (readonly, nonatomic) double currentPlayerTime;
@property (nonatomic) double needPausePlayerTime;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } startPlayTime;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) BOOL isPlayComplete;
@property (nonatomic) BOOL autoResetPauseTime;
@property (nonatomic) BOOL forceToPlayFromTargetStart;
@property (readonly, nonatomic) RACSignal *playerTimeDidChangeSignal;
@property (readonly, nonatomic) RACSignal *playerCompleteSignal;

- (void)setStartPlayTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (id)initWithNLEInterface:(id)arg0;
- (void)setPlayerTimeChangBlock:(id /* block */)arg0;
- (void)setPlayerStatuseChangBlock:(id /* block */)arg0;
- (void)playFrom:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0 duration:(double)arg1 completeBlock:(id /* block */)arg2;
- (void)playForSlot:(id)arg0 completeBlock:(id /* block */)arg1;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0 isSmooth:(BOOL)arg1;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0 isSmooth:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (double)maxTrackDuration;
- (void)resetAutoPauseTime;
- (void)resetPlayerWithViews:(id)arg0;
- (double)currentPlayerTime;
- (double)needPausePlayerTime;
- (void)setNeedPausePlayerTime:(double)arg0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })startPlayTime;
- (BOOL)isPlayComplete;
- (BOOL)autoResetPauseTime;
- (void)setAutoResetPauseTime:(BOOL)arg0;
- (BOOL)forceToPlayFromTargetStart;
- (void)setForceToPlayFromTargetStart:(BOOL)arg0;
- (id)playerTimeDidChangeSignal;
- (id)playerCompleteSignal;
- (long long)status;
- (BOOL)isPlaying;
- (void)play;
- (void)pause;

@end
