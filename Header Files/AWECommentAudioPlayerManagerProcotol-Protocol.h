//
//     Generated by private class-dump
//

@protocol AWECommentAudioPlayerManagerDelegate;

@protocol AWECommentAudioPlayerManagerProcotol <NSObject>

@property (readonly, nonatomic) double currentTime;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) BOOL isPlayerPlaying;
@property (nonatomic) BOOL needContinueAudioPlayFromService;
@property (nonatomic) BOOL needContinueAudioPlayFromSystemNotice;
@property (weak, nonatomic) id<AWECommentAudioPlayerManagerDelegate> delegate;

- (BOOL)isPlayerPlaying;
- (void)playAudioSeekToTime:(double)arg0;
- (void)continueAudioPlay;
- (void)playAudioWithVideoModel:(id)arg0 startTime:(double)arg1 audioEffectExternInfo:(id)arg2;
- (void)pauseAudioWithIsForce:(BOOL)arg0;
- (void)setNeedContinueAudioPlayFromService:(BOOL)arg0;
- (void)setNeedContinueAudioPlayFromSystemNotice:(BOOL)arg0;
- (BOOL)needContinueAudioPlayFromSystemNotice;
- (void)playAudioWithLocalUrlString:(id)arg0 startTime:(double)arg1;
- (void)playAudioWithVideoModel:(id)arg0 startTime:(double)arg1;
- (void)stopAudioWithIsForce:(BOOL)arg0;
- (BOOL)needContinueAudioPlayFromService;
- (double)duration;
- (id)delegate;
- (double)currentTime;
- (void)setDelegate:(id)arg0;

@end
