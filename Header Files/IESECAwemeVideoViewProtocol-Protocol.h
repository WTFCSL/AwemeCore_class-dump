//
//     Generated by private class-dump
//

@class NSString, UIViewController, NSDictionary;
@protocol AWEAwemePlayVideoViewControllerProtocol, AWEPlayVideoViewControllerProtocol, IESECAwemeVideoViewDelegate;

@protocol IESECAwemeVideoViewProtocol <NSObject>

@property (readonly, nonatomic) UIViewController<AWEAwemePlayVideoViewControllerProtocol, AWEPlayVideoViewControllerProtocol> *playerController;
@property (weak, nonatomic) id<IESECAwemeVideoViewDelegate> delegate;
@property (nonatomic) BOOL repeat;
@property (nonatomic) BOOL mute;
@property (nonatomic) BOOL needToPauseLive;
@property (nonatomic) long long videoScaleMode;
@property (nonatomic) long long coverContentMode;
@property (readonly, nonatomic) unsigned long long playState;
@property (readonly, nonatomic) BOOL inTransition;
@property (readonly, copy, nonatomic) NSString *videoID;
@property (retain, nonatomic) NSDictionary *logExtraDict;

- (void)setLogExtraDict:(id)arg0;
- (id)logExtraDict;
- (long long)coverContentMode;
- (void)setCoverContentMode:(long long)arg0;
- (double)currentPlayTime;
- (void)setLoopPlayerWithLoopState:(BOOL)arg0 loopWay:(long long)arg1 loopStartTime:(double)arg2 loopEndTime:(double)arg3;
- (void)hideGradientView;
- (BOOL)needToPauseLive;
- (void)setNeedToPauseLive:(BOOL)arg0;
- (void)modernTransitionUpdateOffset:(long long)arg0 isScrolled:(BOOL)arg1;
- (id)modernTransitionContext;
- (void)modernTransitionDidCompleteWithOffset:(long long)arg0;
- (void)setVideoScaleMode:(long long)arg0;
- (void)updateReferString:(id)arg0;
- (void)updateAwemeInfos:(id)arg0;
- (void)setCoverImageUrlList:(id)arg0;
- (long long)videoScaleMode;
- (BOOL)mute;
- (void)beginTransition;
- (id)playerController;
- (void)stop;
- (void)endTransition;
- (double)duration;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)play;
- (void)pause;
- (void)reset;
- (void)setMute:(BOOL)arg0;
- (BOOL)inTransition;
- (void)addPeriodicTimeObserverForInterval:(double)arg0 queue:(id)arg1 usingBlock:(id /* block */)arg2;
- (double)playableDuration;
- (id)videoID;
- (unsigned long long)playState;
- (BOOL)repeat;
- (void)setRepeat:(BOOL)arg0;
- (void)seekToTime:(double)arg0 completion:(id /* block */)arg1;

@optional

- (void)setPlayerSubTag:(id)arg0;
- (void)setPlayerTag:(id)arg0;
- (void)setPlayerControllerBackgroundColor:(id)arg0;
- (void)setCacheSecondDuration:(int)arg0;

@end
