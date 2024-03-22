//
//     Generated by private class-dump
//

@class DVESegmentClipBorderView, UIView;
@protocol DVESegmentClipViewDelegate;

@interface DVESegmentClipView : UIView {
    BOOL _isShowing;
    id<DVESegmentClipViewDelegate> _delegate;
    unsigned long long _mode;
    UIView *_leftArrowView;
    UIView *_rightArrowView;
    UIView *_leftLineView;
    UIView *_rightLineView;
    UIView *_topLineView;
    UIView *_bottomLineView;
    UIView *_innerBorderView;
    DVESegmentClipBorderView *_borderView;
}

@property (class, readonly, nonatomic) double arrowWidth;

@property (retain, nonatomic) UIView *leftArrowView;
@property (retain, nonatomic) UIView *rightArrowView;
@property (retain, nonatomic) UIView *leftLineView;
@property (retain, nonatomic) UIView *rightLineView;
@property (retain, nonatomic) UIView *topLineView;
@property (retain, nonatomic) UIView *bottomLineView;
@property (retain, nonatomic) UIView *innerBorderView;
@property (retain, nonatomic) DVESegmentClipBorderView *borderView;
@property (readonly, nonatomic) double space;
@property (readonly, nonatomic) double lineHeight;
@property (nonatomic) BOOL isShowing;
@property (weak, nonatomic) id<DVESegmentClipViewDelegate> delegate;
@property (nonatomic) unsigned long long mode;

+ (double)arrowWidth;

- (void)dismissWithAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)setIsShowing:(BOOL)arg0;
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
- (unsigned long long)mode;
- (id)initWithMode:(unsigned long long)arg0;
- (BOOL)isShowing;
- (void)setMode:(unsigned long long)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
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