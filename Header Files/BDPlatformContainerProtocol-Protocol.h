//
//     Generated by private class-dump
//

@protocol BDPlatformContainerProtocol <NSObject>

- (void)closeContainer:(id)arg0;
- (void)closeContainer:(id)arg0 completion:(id /* block */)arg1;
- (void)closeContainer:(id)arg0 animated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)closeLandscapeContainer:(id)arg0 animated:(BOOL)arg1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getLeftToolBarRect;
- (void)startAdaptOrientation;
- (void)endAdaptOrientation;
- (void)hideToolBarMoreButton;
- (void)forceReboot:(id)arg0;
- (void)forceClose:(id)arg0;
- (double)foregroundTotalDuration;
- (id)topView;

@end
