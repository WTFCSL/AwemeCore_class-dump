//
//     Generated by private class-dump
//

@class DVESegmentClipBorderView, ACCAdvanceEditExpandClickView, UIView;

@interface ACCAdvanceEditSegmentClipView : DVESegmentClipView {
    ACCAdvanceEditExpandClickView *_leftArrowView;
    ACCAdvanceEditExpandClickView *_rightArrowView;
    UIView *_leftLineView;
    UIView *_rightLineView;
    UIView *_topLineView;
    UIView *_bottomLineView;
    UIView *_innerBorderView;
    DVESegmentClipBorderView *_borderView;
}

@property (retain, nonatomic) ACCAdvanceEditExpandClickView *leftArrowView;
@property (retain, nonatomic) ACCAdvanceEditExpandClickView *rightArrowView;
@property (retain, nonatomic) UIView *leftLineView;
@property (retain, nonatomic) UIView *rightLineView;
@property (retain, nonatomic) UIView *topLineView;
@property (retain, nonatomic) UIView *bottomLineView;
@property (retain, nonatomic) UIView *innerBorderView;
@property (retain, nonatomic) DVESegmentClipBorderView *borderView;

+ (double)arrowWidth;

- (void)dismissWithAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (id)leftLineView;
- (id)rightLineView;
- (void)setLeftLineView:(id)arg0;
- (void)setRightLineView:(id)arg0;
- (void)setInnerBorderView:(id)arg0;
- (void)setLeftArrowView:(id)arg0;
- (void)setRightArrowView:(id)arg0;
- (id)leftArrowView;
- (id)innerBorderView;
- (void)setEditClipViewHidden:(BOOL)arg0;
- (void)setBorderClipViewHidden:(BOOL)arg0;
- (void)showWithAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)handlePan:(id)arg0;
- (void).cxx_destruct;
- (id)initWithMode:(unsigned long long)arg0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (double)space;
- (double)lineHeight;
- (id)rightArrowView;
- (void)setupUI;
- (id)borderView;
- (void)setBorderView:(id)arg0;
- (id)topLineView;
- (void)setTopLineView:(id)arg0;
- (id)bottomLineView;
- (void)setBottomLineView:(id)arg0;
- (void)setupGestures;

@end
