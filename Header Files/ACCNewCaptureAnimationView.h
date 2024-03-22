//
//     Generated by private class-dump
//

@class UIButton;
@protocol ACCNewCaptureAnimationViewDelegate;

@interface ACCNewCaptureAnimationView : UIView {
    double _widthDiff;
    id<ACCNewCaptureAnimationViewDelegate> _delegate;
    UIButton *_placeHolderButton;
}

@property (retain, nonatomic) UIButton *placeHolderButton;
@property (nonatomic) double widthDiff;
@property (weak, nonatomic) id<ACCNewCaptureAnimationViewDelegate> delegate;

- (void)setWidthDiff:(double)arg0;
- (double)widthDiff;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 placeHolderButton:(id)arg1;
- (id)placeHolderButton;
- (void)setPlaceHolderButton:(id)arg0;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg0 withEvent:(id)arg1;
- (void)touchesEnded:(id)arg0 withEvent:(id)arg1;
- (id)delegate;
- (void)touchesMoved:(id)arg0 withEvent:(id)arg1;
- (void)touchesCancelled:(id)arg0 withEvent:(id)arg1;
- (void)setDelegate:(id)arg0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;

@end