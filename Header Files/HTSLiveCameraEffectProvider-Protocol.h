//
//     Generated by private class-dump
//

@protocol HTSLiveCameraEffectProvider <NSObject>

@property (nonatomic) BOOL openGesture;

- (id)cameraPreview;
- (BOOL)openGesture;
- (void)setOpenGesture:(BOOL)arg0;

@optional

- (void)updatePreviewHeiContrains:(float)arg0;
- (void)openGesture:(BOOL)arg0;
- (void)layoutTouchableViewWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutTouchableViewNormal;
- (void)setCornerHidden:(BOOL)arg0;
- (BOOL)streamIsNotInNormalLayout;

@end
