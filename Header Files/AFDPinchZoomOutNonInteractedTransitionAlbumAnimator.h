//
//     Generated by private class-dump
//

@class NSString, UIViewController, UIView;
@protocol AFDPureModePageViewControllerProtocol;

@interface AFDPinchZoomOutNonInteractedTransitionAlbumAnimator : NSObject <AFDPinchZoomOutNonInteractedTransitionAnimatorProtocol> {
    double _transitionDuration;
    UIView *_containerView;
    UIViewController<AFDPureModePageViewControllerProtocol> *_pureModeVC;
}

@property (nonatomic) double transitionDuration;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIViewController<AFDPureModePageViewControllerProtocol> *pureModeVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPureModeVC:(id)arg0;
- (void)playTransitionAnimationWithCompletion:(id /* block */)arg0;
- (id)pureModeVC;
- (double)transitionDuration;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (void)setTransitionDuration:(double)arg0;

@end
