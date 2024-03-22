//
//     Generated by private class-dump
//

@class AWEPlayVideoViewController, NSString, UITabBarController, UIView, UIViewController;
@protocol AWERVDSlideTransitionOuterContentProvider, IESVideoPlayerProtocol, AWERVDSlideTransitionInnerContentProvider;

@interface AWERVDInteractiveSectionSlideDownTransition : NSObject <AWETransitionContextProvider> {
    BOOL _isVideoMode;
    BOOL _isNeedOutPlay;
    BOOL _shouldUpdatePlayerController;
    BOOL _alwaysUseFromPlayerControllerWhenTransition;
    BOOL _updateProgress;
    BOOL _disablePlay;
    UIView *_containerView;
    UIView *_tabbar;
    UITabBarController *_tabBarController;
    UIView *_focusView;
    UIView *_maskView;
    UIView *_backgroundView;
    UIView *_snapshotTabbar;
    UIView *_fromView;
    UIView *_toView;
    UIView *_feedInteractionView;
    UIView *_bottomInteractionView;
    UIView *_feedBootomView;
    UIView *_fromVCViewImage;
    UIView *_toVCView;
    AWEPlayVideoViewController *_fromPlayer;
    AWEPlayVideoViewController *_toPlayer;
    id<IESVideoPlayerProtocol> _playerController;
    id<IESVideoPlayerProtocol> _toplayerController;
    id _fromContext;
    id _toContext;
    UIViewController<AWERVDSlideTransitionInnerContentProvider> *_fromCP;
    UIViewController<AWERVDSlideTransitionOuterContentProvider> *_toCP;
    unsigned long long _triggerDirection;
    unsigned long long _allowDirection;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _startFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _endFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _fromVCViewStartFrame;
}

@property (nonatomic) BOOL isVideoMode;
@property (nonatomic) BOOL isNeedOutPlay;
@property (nonatomic) BOOL shouldUpdatePlayerController;
@property (nonatomic) BOOL alwaysUseFromPlayerControllerWhenTransition;
@property (nonatomic) BOOL updateProgress;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *tabbar;
@property (retain, nonatomic) UITabBarController *tabBarController;
@property (retain, nonatomic) UIView *focusView;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *snapshotTabbar;
@property (retain, nonatomic) UIView *fromView;
@property (retain, nonatomic) UIView *toView;
@property (retain, nonatomic) UIView *feedInteractionView;
@property (retain, nonatomic) UIView *bottomInteractionView;
@property (retain, nonatomic) UIView *feedBootomView;
@property (retain, nonatomic) UIView *fromVCViewImage;
@property (retain, nonatomic) UIView *toVCView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } startFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } endFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } fromVCViewStartFrame;
@property (retain, nonatomic) AWEPlayVideoViewController *fromPlayer;
@property (retain, nonatomic) AWEPlayVideoViewController *toPlayer;
@property (retain, nonatomic) id<IESVideoPlayerProtocol> playerController;
@property (retain, nonatomic) id<IESVideoPlayerProtocol> toplayerController;
@property (retain, nonatomic) id fromContext;
@property (retain, nonatomic) id toContext;
@property (retain, nonatomic) UIViewController<AWERVDSlideTransitionInnerContentProvider> *fromCP;
@property (retain, nonatomic) UIViewController<AWERVDSlideTransitionOuterContentProvider> *toCP;
@property (nonatomic) unsigned long long triggerDirection;
@property (nonatomic) unsigned long long allowDirection;
@property (nonatomic) BOOL disablePlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)triggerDirection;
- (void)startCustomAnimationWithFromVC:(id)arg0 toVC:(id)arg1 fromContextProvider:(id)arg2 toContextProvider:(id)arg3 containerView:(id)arg4 context:(id)arg5;
- (void)updateAnimationWithPosition:(struct CGPoint { double x0; double x1; })arg0 startPosition:(struct CGPoint { double x0; double x1; })arg1;
- (void)finishAnimationWithCompletionBlock:(id /* block */)arg0;
- (void)cancelAnimationWithCompletionBlock:(id /* block */)arg0;
- (unsigned long long)allowTriggerDirectionForContext:(id)arg0;
- (void)setAllowDirection:(unsigned long long)arg0;
- (unsigned long long)allowDirection;
- (void)setTriggerDirection:(unsigned long long)arg0;
- (void)setFromCP:(id)arg0;
- (void)setToCP:(id)arg0;
- (double)progressForCurrentPosition:(struct CGPoint { double x0; double x1; })arg0 startPosition:(struct CGPoint { double x0; double x1; })arg1;
- (id)toCP;
- (id)fromCP;
- (void)setTabbar:(id)arg0;
- (id)tabbar;
- (void)setSnapshotTabbar:(id)arg0;
- (id)snapshotTabbar;
- (void)setFromContext:(id)arg0;
- (void)setToContext:(id)arg0;
- (id)fromContext;
- (void)setIsVideoMode:(BOOL)arg0;
- (void)setFromPlayer:(id)arg0;
- (void)setToPlayer:(id)arg0;
- (id)fromPlayer;
- (BOOL)isVideoMode;
- (id)toPlayer;
- (void)setShouldUpdatePlayerController:(BOOL)arg0;
- (BOOL)shouldUpdatePlayerController;
- (void)setUpdateProgress:(BOOL)arg0;
- (void)setFromVCViewImage:(id)arg0;
- (void)setBottomInteractionView:(id)arg0;
- (void)setToplayerController:(id)arg0;
- (void)setIsNeedOutPlay:(BOOL)arg0;
- (void)setAlwaysUseFromPlayerControllerWhenTransition:(BOOL)arg0;
- (BOOL)alwaysUseFromPlayerControllerWhenTransition;
- (id)fromVCViewImage;
- (id)bottomInteractionView;
- (void)setFeedBootomView:(id)arg0;
- (id)feedBootomView;
- (void)setFeedInteractionView:(id)arg0;
- (id)feedInteractionView;
- (void)setFromVCViewStartFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fromVCViewStartFrame;
- (id)toVCView;
- (id)toplayerController;
- (void)cancelSlideDownTransition;
- (void)cancelAnimationForNoUpdateProgress;
- (void)setDisablePlay:(BOOL)arg0;
- (BOOL)disablePlay;
- (BOOL)isNeedOutPlay;
- (void)setToVCView:(id)arg0;
- (BOOL)updateProgress;
- (id)fromView;
- (id)toView;
- (unsigned long long)interactionType;
- (id)backgroundView;
- (void).cxx_destruct;
- (void)setEndFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)playerController;
- (id)maskView;
- (void)setToView:(id)arg0;
- (void)setContainerView:(id)arg0;
- (void)setPlayerController:(id)arg0;
- (id)containerView;
- (void)setFromView:(id)arg0;
- (void)setBackgroundView:(id)arg0;
- (void)setMaskView:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })endFrame;
- (void)setStartFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)focusView;
- (id)tabBarController;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })startFrame;
- (void)setFocusView:(id)arg0;
- (id)toContext;
- (void)setTabBarController:(id)arg0;

@end
