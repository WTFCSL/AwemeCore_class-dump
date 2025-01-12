//
//     Generated by private class-dump
//

@class NSString, CSJMaterialMeta;

@interface CSJFullScreenTransitioningDelegate : NSObject <UIViewControllerAnimatedTransitioning, UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate> {
    CSJMaterialMeta *_material;
    struct CGSize { double width; double height; } _adSize;
}

@property (nonatomic) struct CGSize { double width; double height; } adSize;
@property (retain, nonatomic) CSJMaterialMeta *material;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setAdSize:(struct CGSize { double x0; double x1; })arg0;
- (id)initWithAdSize:(struct CGSize { double x0; double x1; })arg0 materialMeta:(id)arg1;
- (double)transitionDuration:(id)arg0;
- (void)animateTransition:(id)arg0;
- (void).cxx_destruct;
- (id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2;
- (id)animationControllerForDismissedController:(id)arg0;
- (id)material;
- (struct CGSize { double x0; double x1; })adSize;
- (void)setMaterial:(id)arg0;

@end
