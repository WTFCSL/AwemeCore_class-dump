//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, UIView;
@protocol HTSLiveAnimationView;

@interface HTSLiveNativeAnimationScheduler : NSObject <UIGestureRecognizerDelegate> {
    BOOL _enableSwipeToDimiss;
    BOOL _animating;
    BOOL _invalid;
    BOOL _disableQueueConsume;
    UIView *_playground;
    NSMutableArray *_animations;
    UIView<HTSLiveAnimationView> *_currentAnimationView;
}

@property (weak, nonatomic) UIView *playground;
@property (retain, nonatomic) NSMutableArray *animations;
@property (nonatomic) BOOL animating;
@property (nonatomic) BOOL invalid;
@property (weak, nonatomic) UIView<HTSLiveAnimationView> *currentAnimationView;
@property (nonatomic) BOOL disableQueueConsume;
@property (nonatomic) BOOL enableSwipeToDimiss;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)liveThermalStateSeriousNotification:(id)arg0;
- (void)setPlayground:(id)arg0;
- (BOOL)shouldSetInitialDisableQueueForScene:(long long)arg0;
- (id)currentAnimationView;
- (void)pushAnimation:(id)arg0 withCallback:(id /* block */)arg1;
- (void)startNextAnimationIfNeeded;
- (BOOL)disableQueueConsume;
- (void)setDisableQueueConsume:(BOOL)arg0;
- (void)shiftAnimation:(BOOL)arg0;
- (void)setCurrentAnimationView:(id)arg0;
- (void)excuteAnimation:(id)arg0 finished:(id /* block */)arg1;
- (id)impForAnimation:(id)arg0;
- (void)makeImp:(id)arg0 interactiveWithAnimation:(id)arg1;
- (id)awardContent:(long long)arg0;
- (id)tapGestureRecognizer:(id)arg0;
- (BOOL)enableSwipeToDimiss;
- (void)addSwipeGestureRecognizer:(id)arg0;
- (void)swipeGestureRecognizeAction:(id)arg0;
- (id)initWithPlayground:(id)arg0 diContext:(id)arg1;
- (void)cancelCurrentAnimation;
- (void)dispatch:(id)arg0 finished:(id /* block */)arg1;
- (void)enableAnimationQueueConsume:(BOOL)arg0;
- (void)setEnableSwipeToDimiss:(BOOL)arg0;
- (id)playground;
- (void)stopAnimations;
- (void)dispatch:(long long)arg0;
- (void).cxx_destruct;
- (id)animations;
- (void)purge;
- (void)setAnimations:(id)arg0;
- (void)setAnimating:(BOOL)arg0;
- (void)setInvalid:(BOOL)arg0;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (void)dealloc;
- (BOOL)invalid;
- (BOOL)animating;
- (void)p_addObservers;

@end
