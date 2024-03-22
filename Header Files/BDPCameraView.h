//
//     Generated by private class-dump
//

@class UITapGestureRecognizer, AVCaptureVideoPreviewLayer, BDPCameraFocusView;
@protocol BDPCameraViewDelegate;

@interface BDPCameraView : UIView {
    BOOL _focusViewAnimating;
    id<BDPCameraViewDelegate> _delegate;
    AVCaptureVideoPreviewLayer *_previewLayer;
    BDPCameraFocusView *_focusView;
    UITapGestureRecognizer *_tapGesture;
}

@property (weak, nonatomic) id<BDPCameraViewDelegate> delegate;

- (void)setupCapturePreviewLayer:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)tapGestureRecognizerAction:(id)arg0;

@end
