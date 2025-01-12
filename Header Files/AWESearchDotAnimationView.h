//
//     Generated by private class-dump
//

@class UIButton, CAAnimationGroup, UIView;

@interface AWESearchDotAnimationView : UIView {
    double _animationDuration;
    double _backgroundMaxWidth;
    double _centerDotWidth;
    id /* block */ _dotClickedBlk;
    UIView *_flashView;
    UIView *_centerView;
    UIButton *_button;
    CAAnimationGroup *_expandGroups;
    CAAnimationGroup *_centerGroups;
}

@property (retain, nonatomic) UIView *flashView;
@property (retain, nonatomic) UIView *centerView;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) CAAnimationGroup *expandGroups;
@property (retain, nonatomic) CAAnimationGroup *centerGroups;
@property (nonatomic) double animationDuration;
@property (nonatomic) double backgroundMaxWidth;
@property (nonatomic) double centerDotWidth;
@property (copy, nonatomic) id /* block */ dotClickedBlk;

- (void)buttonClicked;
- (void)startFlashAnimation;
- (double)backgroundMaxWidth;
- (double)centerDotWidth;
- (id /* block */)dotClickedBlk;
- (id)expandGroups;
- (void)stopFlashAnimation;
- (void)setBackgroundMaxWidth:(double)arg0;
- (void)setCenterDotWidth:(double)arg0;
- (void)setDotClickedBlk:(id /* block */)arg0;
- (void)setExpandGroups:(id)arg0;
- (void).cxx_destruct;
- (double)animationDuration;
- (id)button;
- (void)setButton:(id)arg0;
- (id)centerView;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setCenterView:(id)arg0;
- (void)setAnimationDuration:(double)arg0;
- (void)layoutSubviews;
- (id)centerGroups;
- (void)setCenterGroups:(id)arg0;
- (id)flashView;
- (void)setFlashView:(id)arg0;

@end
