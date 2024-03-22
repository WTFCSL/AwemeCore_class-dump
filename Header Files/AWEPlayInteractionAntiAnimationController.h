//
//     Generated by private class-dump
//

@class UIView, NSString, NSTimer, UIImageView, CAAnimation, LOTAnimationView, AVAudioPlayer, UILabel;

@interface AWEPlayInteractionAntiAnimationController : AWEPlayInteractionBaseController <CAAnimationDelegate, AVAudioPlayerDelegate> {
    BOOL _animationFinish;
    BOOL _isRelieveAnimation;
    UIView *_containerView;
    LOTAnimationView *_lotView;
    UIImageView *_lotImage;
    UIImageView *_bgView;
    UILabel *_label;
    NSString *_labelText;
    NSTimer *_timer;
    AVAudioPlayer *_audioPlayer;
    AVAudioPlayer *_siuAudioPlayer;
    long long _currentTime;
    CAAnimation *_animation;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) LOTAnimationView *lotView;
@property (retain, nonatomic) UIImageView *lotImage;
@property (retain, nonatomic) UIImageView *bgView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) NSString *labelText;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) AVAudioPlayer *audioPlayer;
@property (retain, nonatomic) AVAudioPlayer *siuAudioPlayer;
@property (nonatomic) long long currentTime;
@property (retain, nonatomic) CAAnimation *animation;
@property (nonatomic) BOOL animationFinish;
@property (nonatomic) BOOL isRelieveAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pauseCountDown;
- (void)resumeCountDown;
- (void)addTimer;
- (void)removeControllerFromSuperView;
- (void)setAnimationFinish:(BOOL)arg0;
- (BOOL)animationFinish;
- (void)setLotView:(id)arg0;
- (id)lotView;
- (id)lotImage;
- (void)receivePlayNotification:(id)arg0;
- (void)receiveStopNotification:(id)arg0;
- (void)receivePauseNotification:(id)arg0;
- (void)receiveResumeNotification:(id)arg0;
- (void)setIsRelieveAnimation:(BOOL)arg0;
- (void)getAnimation;
- (id)siuAudioPlayer;
- (void)endAnimationwithDelay:(double)arg0;
- (id)lotWithDirectory:(id)arg0;
- (id)audioDataWithDirectory:(id)arg0;
- (void)setSiuAudioPlayer:(id)arg0;
- (id)imageWithDirectory:(id)arg0 name:(id)arg1;
- (void)countDownAnimation:(BOOL)arg0;
- (void)hideWithAnimate:(BOOL)arg0;
- (void)showWithAnimate:(BOOL)arg0 withTime:(long long)arg1 playAudio:(BOOL)arg2 withCountDown:(BOOL)arg3;
- (BOOL)isRelieveAnimation;
- (void)restartCountDown:(long long)arg0;
- (void)pauseSound;
- (void)traceShowBarEvent;
- (void)resumeSound;
- (void)countDownAnimation;
- (void)setLotImage:(id)arg0;
- (id)timer;
- (void)invalidateTimer;
- (void)animationDidStart:(id)arg0;
- (void)setLabelText:(id)arg0;
- (void).cxx_destruct;
- (id)animation;
- (void)setCurrentTime:(long long)arg0;
- (void)setAnimation:(id)arg0;
- (id)audioPlayer;
- (void)setData:(id)arg0;
- (void)setLabel:(id)arg0;
- (void)setContainerView:(id)arg0;
- (id)labelText;
- (void)setTimer:(id)arg0;
- (id)containerView;
- (long long)currentTime;
- (void)animationDidStop:(id)arg0 finished:(BOOL)arg1;
- (void)setAudioPlayer:(id)arg0;
- (id)label;
- (void)dealloc;
- (void)viewDidLoad;
- (id)bgView;
- (void)setBgView:(id)arg0;
- (void)audioPlayerDidFinishPlaying:(id)arg0 successfully:(BOOL)arg1;
- (void)resetAnimation;

@end
