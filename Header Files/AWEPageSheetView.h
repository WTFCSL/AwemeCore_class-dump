//
//     Generated by private class-dump
//

@class UIButton, UIView, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface AWEPageSheetView : UIView {
    UIPanGestureRecognizer *_panGestureRecognizer;
    UIPanGestureRecognizer *_horizontalPanGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    double _topCornerRadius;
    UIButton *_closeButton;
    UIView *_grabber;
}

@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (retain, nonatomic) UIPanGestureRecognizer *horizontalPanGestureRecognizer;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic) double topCornerRadius;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIView *grabber;

- (id)horizontalPanGestureRecognizer;
- (void)setTopCornerRadius:(double)arg0;
- (void)setHorizontalPanGestureRecognizer:(id)arg0;
- (void)setPanGestureRecognizer:(id)arg0;
- (id)panGestureRecognizer;
- (void).cxx_destruct;
- (void)setTapGestureRecognizer:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)tapGestureRecognizer;
- (void)didAddSubview:(id)arg0;
- (id)grabber;
- (void)setGrabber:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (double)topCornerRadius;

@end
