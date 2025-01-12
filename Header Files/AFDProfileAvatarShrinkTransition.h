//
//     Generated by private class-dump
//

@class NSString;

@interface AFDProfileAvatarShrinkTransition : NSObject <CAAnimationDelegate, AWETransitionContextProvider> {
    id /* block */ _completionBlock;
}

@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startDefaultAnimationWithFromVC:(id)arg0 toVC:(id)arg1 fromContextProvider:(id)arg2 toContextProvider:(id)arg3 containerView:(id)arg4 context:(id)arg5 interactionType:(unsigned long long)arg6 completionHandler:(id /* block */)arg7;
- (unsigned long long)interactionType;
- (void).cxx_destruct;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg0;
- (void)animationDidStop:(id)arg0 finished:(BOOL)arg1;

@end
