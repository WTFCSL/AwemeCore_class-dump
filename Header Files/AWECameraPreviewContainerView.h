//
//     Generated by private class-dump
//

@protocol VERecorderPublicProtocol;

@interface AWECameraPreviewContainerView : UIView <CameraKit.CameraPreviewProtocol> {
    BOOL _enableInteraction;
    BOOL _shouldHandleTouch;
    id /* block */ _touchFilter;
    id<VERecorderPublicProtocol> _camera;
}

@property (weak, nonatomic) id<VERecorderPublicProtocol> camera;
@property (nonatomic) BOOL enableInteraction;
@property (nonatomic) BOOL shouldHandleTouch;
@property (copy, nonatomic) id /* block */ touchFilter;

- (BOOL)enableInteraction;
- (void)setEnableInteraction:(BOOL)arg0;
- (BOOL)shouldHandleTouch;
- (void)setShouldHandleTouch:(BOOL)arg0;
- (id /* block */)touchFilter;
- (void)setTouchFilter:(id /* block */)arg0;
- (void)p_handleTouchs:(id)arg0 withEvent:(id)arg1 touchType:(long long)arg2;
- (id)init;
- (id)camera;
- (void)setCamera:(id)arg0;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg0 withEvent:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)touchesEnded:(id)arg0 withEvent:(id)arg1;
- (void)touchesMoved:(id)arg0 withEvent:(id)arg1;
- (void)touchesCancelled:(id)arg0 withEvent:(id)arg1;

@end