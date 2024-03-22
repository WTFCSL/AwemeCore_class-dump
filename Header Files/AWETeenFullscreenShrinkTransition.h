//
//     Generated by private class-dump
//

@class AWETeenClassicVideoController, NSString;

@interface AWETeenFullscreenShrinkTransition : NSObject <AWETransitionContextProvider> {
    AWETeenClassicVideoController *_fromPlayer;
}

@property (retain, nonatomic) AWETeenClassicVideoController *fromPlayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startDefaultAnimationWithFromVC:(id)arg0 toVC:(id)arg1 fromContextProvider:(id)arg2 toContextProvider:(id)arg3 containerView:(id)arg4 context:(id)arg5 interactionType:(unsigned long long)arg6 completionHandler:(id /* block */)arg7;
- (void)setFromPlayer:(id)arg0;
- (id)fromPlayer;
- (id)init;
- (unsigned long long)interactionType;
- (void).cxx_destruct;
- (void)dealloc;

@end