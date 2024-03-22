//
//     Generated by private class-dump
//

@class UIImage, NSString, UIView;

@interface TOCropViewControllerTransitioning : NSObject <UIViewControllerAnimatedTransitioning> {
    BOOL _isDismissing;
    UIImage *_image;
    UIView *_fromView;
    UIView *_toView;
    id /* block */ _prepareForTransitionHandler;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _fromFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _toFrame;
}

@property (nonatomic) BOOL isDismissing;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIView *fromView;
@property (retain, nonatomic) UIView *toView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } fromFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } toFrame;
@property (copy, nonatomic) id /* block */ prepareForTransitionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setFromFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setPrepareForTransitionHandler:(id /* block */)arg0;
- (void)setToFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fromFrame;
- (id /* block */)prepareForTransitionHandler;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })toFrame;
- (double)transitionDuration:(id)arg0;
- (void)animateTransition:(id)arg0;
- (id)fromView;
- (id)toView;
- (void).cxx_destruct;
- (id)image;
- (BOOL)isDismissing;
- (void)setToView:(id)arg0;
- (void)setImage:(id)arg0;
- (void)setFromView:(id)arg0;
- (void)reset;
- (void)setIsDismissing:(BOOL)arg0;

@end
