//
//     Generated by private class-dump
//

@class NSString;
@protocol UIViewControllerContextTransitioning;

@interface TranslationDismissAnimationController : NSObject <UIViewControllerAnimatedTransitioning> {
    long long _durationType;
    id<UIViewControllerContextTransitioning> _transitionContext;
    unsigned long long _translationStyle;
}

@property (retain, nonatomic) id<UIViewControllerContextTransitioning> transitionContext;
@property (nonatomic) unsigned long long translationStyle;
@property (nonatomic) long long durationType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDurationType:(long long)arg0;
- (id)initWithTranslationStyle:(unsigned long long)arg0;
- (long long)durationType;
- (void)setTranslationStyle:(unsigned long long)arg0;
- (unsigned long long)translationStyle;
- (double)transitionDuration:(id)arg0;
- (void)animateTransition:(id)arg0;
- (void)setTransitionContext:(id)arg0;
- (id)transitionContext;
- (void).cxx_destruct;

@end
