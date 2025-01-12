//
//     Generated by private class-dump
//

@class NSString, UITabBarController, UIView, UIViewController;
@protocol AWEAvatarToFullScreenOutterTransitionContextProvider, AWEAvatarToFullScreenInnerTransitionContextProvider;

@interface AWEAvatarToFullScreenInteractiveShrinkTransition : NSObject <AWETransitionContextProvider> {
    UIView *_fromVCSnapshot;
    UIView *_toVCSnapshot;
    UIView *_avatarStartView;
    UIView *_avatarTargetView;
    UIView *_containerView;
    UIView *_maskView;
    UIView *_avatarStartSnapShot;
    UIView *_fromView;
    UITabBarController *_tabBarController;
    UIView *_snapshotTabbar;
    UIView *_tabbar;
    double _translateY;
    double _scale;
    UIViewController<AWEAvatarToFullScreenInnerTransitionContextProvider> *_fromCP;
    UIViewController<AWEAvatarToFullScreenOutterTransitionContextProvider> *_toCP;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _avatarStartFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _avatarTargetFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _zoomMinFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _zoomStartFrame;
}

@property (retain, nonatomic) UIView *fromVCSnapshot;
@property (retain, nonatomic) UIView *toVCSnapshot;
@property (retain, nonatomic) UIView *avatarStartView;
@property (retain, nonatomic) UIView *avatarTargetView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIView *avatarStartSnapShot;
@property (retain, nonatomic) UIView *fromView;
@property (retain, nonatomic) UITabBarController *tabBarController;
@property (retain, nonatomic) UIView *snapshotTabbar;
@property (retain, nonatomic) UIView *tabbar;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } avatarStartFrame;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } avatarTargetFrame;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } zoomMinFrame;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } zoomStartFrame;
@property double translateY;
@property double scale;
@property (retain, nonatomic) UIViewController<AWEAvatarToFullScreenInnerTransitionContextProvider> *fromCP;
@property (retain, nonatomic) UIViewController<AWEAvatarToFullScreenOutterTransitionContextProvider> *toCP;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startCustomAnimationWithFromVC:(id)arg0 toVC:(id)arg1 fromContextProvider:(id)arg2 toContextProvider:(id)arg3 containerView:(id)arg4 context:(id)arg5;
- (void)updateAnimationWithPosition:(struct CGPoint { double x0; double x1; })arg0 startPosition:(struct CGPoint { double x0; double x1; })arg1;
- (void)finishAnimationWithCompletionBlock:(id /* block */)arg0;
- (void)cancelAnimationWithCompletionBlock:(id /* block */)arg0;
- (unsigned long long)allowTriggerDirectionForContext:(id)arg0;
- (void)setFromVCSnapshot:(id)arg0;
- (id)fromVCSnapshot;
- (void)setToVCSnapshot:(id)arg0;
- (id)toVCSnapshot;
- (void)setFromCP:(id)arg0;
- (void)setToCP:(id)arg0;
- (double)progressForCurrentPosition:(struct CGPoint { double x0; double x1; })arg0 startPosition:(struct CGPoint { double x0; double x1; })arg1;
- (id)toCP;
- (id)fromCP;
- (void)setTranslateY:(double)arg0;
- (double)translateY;
- (void)setTabbar:(id)arg0;
- (id)tabbar;
- (void)setSnapshotTabbar:(id)arg0;
- (id)snapshotTabbar;
- (void)setAvatarStartView:(id)arg0;
- (void)setAvatarTargetView:(id)arg0;
- (id)avatarStartView;
- (void)setAvatarStartSnapShot:(id)arg0;
- (void)setAvatarStartFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })avatarStartFrame;
- (id)avatarStartSnapShot;
- (id)avatarTargetView;
- (void)setAvatarTargetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })avatarTargetFrame;
- (void)setZoomMinFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setZoomStartFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGPoint { double x0; double x1; })resistancePointForCurrentPoint:(struct CGPoint { double x0; double x1; })arg0 startPoint:(struct CGPoint { double x0; double x1; })arg1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })zoomStartFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })zoomMinFrame;
- (double)resistanceFunction:(double)arg0;
- (struct CGPoint { double x0; double x1; })transformPodintFrom:(struct CGPoint { double x0; double x1; })arg0 start:(struct CGPoint { double x0; double x1; })arg1;
- (id)fromView;
- (unsigned long long)interactionType;
- (void).cxx_destruct;
- (id)maskView;
- (void)setContainerView:(id)arg0;
- (double)scale;
- (id)containerView;
- (void)setFromView:(id)arg0;
- (void)setScale:(double)arg0;
- (void)setMaskView:(id)arg0;
- (id)tabBarController;
- (void)setTabBarController:(id)arg0;

@end
