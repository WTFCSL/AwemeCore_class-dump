//
//     Generated by private class-dump
//

@class UIVisualEffectView, UIView;

@interface ACCCutSameCropMaskView : UIView {
    UIVisualEffectView *_blurView;
    UIView *_frameView;
    struct CGSize { double width; double height; } _frameSize;
    struct CGPoint { double x; double y; } _offset;
}

@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) UIView *frameView;
@property (nonatomic) struct CGSize { double width; double height; } frameSize;
@property (nonatomic) struct CGPoint { double x; double y; } offset;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 isBlackMask:(BOOL)arg1;
- (void)animateForBlurEffect:(BOOL)arg0 animate:(BOOL)arg1;
- (void)refresh;
- (void)setBlurView:(id)arg0;
- (void).cxx_destruct;
- (id)blurView;
- (void)setOffset:(struct CGPoint { double x0; double x1; })arg0;
- (struct CGPoint { double x0; double x1; })offset;
- (void)layoutSubviews;
- (id)frameView;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })frameSize;
- (void)setFrameView:(id)arg0;

@end
