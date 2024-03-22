//
//     Generated by private class-dump
//

@class NSMutableDictionary, LynxUI;

@interface LynxTransitionAnimationManager : NSObject {
    LynxUI *_ui;
    NSMutableDictionary *_transitionAnimations;
    NSMutableDictionary *_transitionInfos;
    NSMutableDictionary *_transitionDelegates;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _latestFrame;
}

@property (weak, nonatomic) LynxUI *ui;
@property (retain, nonatomic) NSMutableDictionary *transitionAnimations;
@property (readonly, nonatomic) NSMutableDictionary *transitionInfos;
@property (retain, nonatomic) NSMutableDictionary *transitionDelegates;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } latestFrame;

- (id)initWithLynxUI:(id)arg0;
- (void)transitionsDidAssemble;
- (unsigned char)isShouldTransitionType:(unsigned long long)arg0;
- (void)removeTransitionAnimation:(unsigned long long)arg0;
- (BOOL)isTransitionBackgroundColor;
- (void)performTransitionAnimationsWithBackground:(id)arg0 callback:(id /* block */)arg1;
- (BOOL)hasTransition:(unsigned long long)arg0;
- (void)performTransitionAnimationsWithOpacity:(double)arg0 callback:(id /* block */)arg1;
- (void)removeAllLayoutTransitionAnimation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })latestFrame;
- (void)createLayoutAnimation:(id)arg0 beginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1 endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg2 callback:(id /* block */)arg3 needAdditionalAnimator:(BOOL)arg4;
- (void)setLatestFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)createTransitionDelegate:(id)arg0;
- (void)enqueueTransitionAnimation:(id)arg0 withConfig:(id)arg1 withDelegate:(id)arg2;
- (void)autoAddAnimationForComplexBackgroundWithUI:(id)arg0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1 config:(id)arg2 withProp:(unsigned long long)arg3;
- (void)removeAllTransitionAnimation;
- (id)transitionDelegates;
- (void)setupTransitionAnimationForContents:(id)arg0 withConfig:(id)arg1 forLayer:(id)arg2 withProp:(unsigned long long)arg3;
- (void)assembleTransitions:(id)arg0;
- (BOOL)maybeUpdateBackgroundWithTransitionAnimation:(id)arg0;
- (BOOL)maybeUpdateOpacityWithTransitionAnimation:(double)arg0;
- (BOOL)maybeUpdateFrameWithTransitionAnimation:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 withPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg1 border:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg2 margin:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg3;
- (BOOL)isTransitionSize:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 newFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (BOOL)isTransitionPosition:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 newFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (BOOL)isTransitionOpacity:(double)arg0 newOpacity:(double)arg1;
- (BOOL)isTransitionVisibility:(BOOL)arg0 newState:(BOOL)arg1;
- (BOOL)isTransitionTransform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })arg0 newTransform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })arg1;
- (BOOL)isTransitionTransformRotation:(id)arg0 newTransformRotation:(id)arg1;
- (void)performTransitionAnimationsWithVisibility:(BOOL)arg0 callback:(id /* block */)arg1;
- (void)performTransitionAnimationsWithTransform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })arg0 transformWithoutRotate:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })arg1 transformWithoutRotateXY:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })arg2 rotation:(id)arg3 callback:(id /* block */)arg4;
- (void)applyTransitionAnimation;
- (id)transitionAnimations;
- (void)setTransitionAnimations:(id)arg0;
- (id)transitionInfos;
- (void)setTransitionDelegates:(id)arg0;
- (void).cxx_destruct;
- (id)ui;
- (void)setUi:(id)arg0;

@end