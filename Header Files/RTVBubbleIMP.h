//
//     Generated by private class-dump
//

@class NSString;

@interface RTVBubbleIMP : NSObject <RTVBubbleGenerator>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)showBubble:(id)arg0 forView:(id)arg1 inContainerView:(id)arg2 anchorAdjustment:(struct CGPoint { double x0; double x1; })arg3 inDirection:(unsigned long long)arg4 bgStyle:(unsigned long long)arg5 completion:(id /* block */)arg6;
- (id)showBubble:(id)arg0 forView:(id)arg1 inContainerView:(id)arg2 anchorAdjustment:(struct CGPoint { double x0; double x1; })arg3 inDirection:(unsigned long long)arg4 bgStyle:(unsigned long long)arg5 showDuration:(double)arg6 completion:(id /* block */)arg7;
- (id)showBubbleWithCustomView:(id)arg0 contentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg1 forView:(id)arg2 inContainerView:(id)arg3 fromAnchor:(struct CGPoint { double x0; double x1; })arg4 inDirection:(unsigned long long)arg5 anchorAdjustment:(struct CGPoint { double x0; double x1; })arg6 bgStyle:(unsigned long long)arg7 completion:(id /* block */)arg8;
- (void)dismissBubble:(id)arg0;
- (void)dismissBubbleWithAnimation:(id)arg0;

@end