//
//     Generated by private class-dump
//

@class NSString;

@interface AWEFamiliarFriendsListTabSearchNonInteractedTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning> {
    BOOL _isFromInnerSearch;
    id /* block */ _finishNonInteractedTransition;
}

@property (nonatomic) BOOL isFromInnerSearch;
@property (copy, nonatomic) id /* block */ finishNonInteractedTransition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsFromInnerSearch:(BOOL)arg0;
- (void)setFinishNonInteractedTransition:(id /* block */)arg0;
- (BOOL)isFromInnerSearch;
- (id /* block */)finishNonInteractedTransition;
- (double)transitionDuration:(id)arg0;
- (void)animateTransition:(id)arg0;
- (void).cxx_destruct;

@end
