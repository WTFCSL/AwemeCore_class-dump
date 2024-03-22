//
//     Generated by private class-dump
//

@class AWEPlayVideoViewController, NSString, UIView, UIViewController;
@protocol AWERVDFullScreenTransitionOuterContextProvider, IESVideoPlayerProtocol, AWEModernFullscreenTransitionInnerContextProvider;

@interface AWERVDFullscreenInteractiveShrinkTransition : NSObject <AWETransitionContextProvider> {
    BOOL _isVideoMode;
    BOOL _disableSyncReferString;
    BOOL _disableTileSyncPlay;
    UIView *_maskView;
    UIView *_containerView;
    UIView *_focusView;
    UIView *_fromView;
    AWEPlayVideoViewController *_fromPlayer;
    AWEPlayVideoViewController *_toPlayer;
    id<IESVideoPlayerProtocol> _playerController;
    id _fromContext;
    id _toContext;
    UIViewController<AWEModernFullscreenTransitionInnerContextProvider> *_fromCP;
    UIViewController<AWERVDFullScreenTransitionOuterContextProvider> *_toCP;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _startFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _endFrame;
}

@property (nonatomic) BOOL isVideoMode;
@property (nonatomic) BOOL disableSyncReferString;
@property (nonatomic) BOOL disableTileSyncPlay;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *focusView;
@property (retain, nonatomic) UIView *fromView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } startFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } endFrame;
@property (retain, nonatomic) AWEPlayVideoViewController *fromPlayer;
@property (retain, nonatomic) AWEPlayVideoViewController *toPlayer;
@property (retain, nonatomic) id<IESVideoPlayerProtocol> playerController;
@property (retain, nonatomic) id fromContext;
@property (retain, nonatomic) id toContext;
@property (retain, nonatomic) UIViewController<AWEModernFullscreenTransitionInnerContextProvider> *fromCP;
@property (retain, nonatomic) UIViewController<AWERVDFullScreenTransitionOuterContextProvider> *toCP;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startCustomAnimationWithFromVC:(id)arg0 toVC:(id)arg1 fromContextProvider:(id)arg2 toContextProvider:(id)arg3 containerView:(id)arg4 context:(id)arg5;
- (void)updateAnimationWithPosition:(struct CGPoint { double x0; double x1; })arg0 startPosition:(struct CGPoint { double x0; double x1; })arg1;
- (void)finishAnimationWithCompletionBlock:(id /* block */)arg0;
- (void)cancelAnimationWithCompletionBlock:(id /* block */)arg0;
- (unsigned long long)allowTriggerDirectionForContext:(id)arg0;
- (BOOL)disableSyncReferString;
- (void)setFromCP:(id)arg0;
- (void)setToCP:(id)arg0;
- (double)progressForCurrentPosition:(struct CGPoint { double x0; double x1; })arg0 startPosition:(struct CGPoint { double x0; double x1; })arg1;
- (id)toCP;
- (id)fromCP;
- (void)setFromContext:(id)arg0;
- (void)setToContext:(id)arg0;
- (id)fromContext;
- (void)setIsVideoMode:(BOOL)arg0;
- (void)setDisableSyncReferString:(BOOL)arg0;
- (void)setFromPlayer:(id)arg0;
- (void)setToPlayer:(id)arg0;
- (id)fromPlayer;
- (BOOL)isVideoMode;
- (id)toPlayer;
- (void)setDisableTileSyncPlay:(BOOL)arg0;
- (BOOL)disableTileSyncPlay;
- (id)fromView;
- (id)init;
- (unsigned long long)interactionType;
- (void).cxx_destruct;
- (void)setEndFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)playerController;
- (id)maskView;
- (void)setContainerView:(id)arg0;
- (void)setPlayerController:(id)arg0;
- (id)containerView;
- (void)setFromView:(id)arg0;
- (void)dealloc;
- (void)setMaskView:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })endFrame;
- (void)setStartFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)focusView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })startFrame;
- (void)setFocusView:(id)arg0;
- (id)toContext;

@end