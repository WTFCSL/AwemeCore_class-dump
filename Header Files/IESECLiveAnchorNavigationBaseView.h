//
//     Generated by private class-dump
//

@class UILabel, UIButton, UIView;

@interface IESECLiveAnchorNavigationBaseView : UIView {
    BOOL _shouldShowMaskView;
    UIView *_wrapper;
    UIView *_contentView;
    UIView *_navigationBar;
    UIButton *_leftButton;
    UILabel *_title;
    UIButton *_secondRightButton;
    UIButton *_firstRightButton;
    UIView *_navigationBarSeparator;
    UIView *_maskView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _contentBounds;
}

@property (retain, nonatomic) UIView *wrapper;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UIView *navigationBar;
@property (retain, nonatomic) UIButton *leftButton;
@property (retain, nonatomic) UIButton *secondRightButton;
@property (retain, nonatomic) UIButton *firstRightButton;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *navigationBarSeparator;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentBounds;
@property (readonly, nonatomic) double navbarHeight;
@property (nonatomic) BOOL shouldShowMaskView;
@property (retain, nonatomic) UIView *maskView;

- (BOOL)shouldShowMaskView;
- (id)firstRightButton;
- (void)setFirstRightButton:(id)arg0;
- (void)setShouldShowMaskView:(BOOL)arg0;
- (id)secondRightButton;
- (void)pushOnView:(id)arg0 targetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1 completion:(id /* block */)arg2;
- (void)firstRightButtonFired:(id)arg0;
- (void)secondRightButtonFired:(id)arg0;
- (void)pushOnView:(id)arg0 targetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (double)navbarHeight;
- (void)setSecondRightButton:(id)arg0;
- (id)navigationBarSeparator;
- (void)setNavigationBarSeparator:(id)arg0;
- (void)setLeftButton:(id)arg0;
- (id)leftButton;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void).cxx_destruct;
- (id)maskView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)contentView;
- (id)title;
- (void)viewDidAppear;
- (id)navigationBar;
- (void)setNavigationBar:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentBounds;
- (void)layoutSubviews;
- (void)pop;
- (void)setMaskView:(id)arg0;
- (void)setTitle:(id)arg0;
- (void)setContentView:(id)arg0;
- (id)wrapper;
- (void)setContentBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setupUI;
- (void)viewDidDisappear;
- (void)setWrapper:(id)arg0;

@end
