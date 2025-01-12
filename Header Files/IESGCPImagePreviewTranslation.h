//
//     Generated by private class-dump
//

@class UIView, NSString, IESGCPImagePreviewViewController;

@interface IESGCPImagePreviewTranslation : NSObject <UIViewControllerAnimatedTransitioning> {
    BOOL _isBrowserMainView;
    IESGCPImagePreviewViewController *_previewViewController;
    UIView *_browserControllerView;
}

@property (nonatomic) BOOL isBrowserMainView;
@property (weak, nonatomic) IESGCPImagePreviewViewController *previewViewController;
@property (retain, nonatomic) UIView *browserControllerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)addShadowImageViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 image:(id)arg1;
- (id)browserControllerView;
- (BOOL)isBrowserMainView;
- (void)setIsBrowserMainView:(BOOL)arg0;
- (void)setBrowserControllerView:(id)arg0;
- (double)transitionDuration:(id)arg0;
- (void)animateTransition:(id)arg0;
- (void).cxx_destruct;
- (id)previewViewController;
- (void)setPreviewViewController:(id)arg0;

@end
