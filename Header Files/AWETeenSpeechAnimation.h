//
//     Generated by private class-dump
//

@class NSString;

@interface AWETeenSpeechAnimation : NSObject <UIViewControllerAnimatedTransitioning> {
    long long _animatorType;
}

@property (nonatomic) long long animatorType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)presentAnimation:(id)arg0;
- (void)dismissAnimation:(id)arg0;
- (long long)animatorType;
- (id)initWithAnimatorType:(long long)arg0;
- (void)setAnimatorType:(long long)arg0;
- (double)transitionDuration:(id)arg0;
- (void)animateTransition:(id)arg0;

@end
