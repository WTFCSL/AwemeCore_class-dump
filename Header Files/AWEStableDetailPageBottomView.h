//
//     Generated by private class-dump
//

@class UILabel, UIImageView, UIView;

@interface AWEStableDetailPageBottomView : UIView {
    id /* block */ _backToFeedBottomBarAction;
    UIView *_containerView;
    UILabel *_titleLabel;
    UIImageView *_backImageView;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *backImageView;
@property (copy, nonatomic) id /* block */ backToFeedBottomBarAction;

- (void)setBackImageView:(id)arg0;
- (id)backImageView;
- (double)containerTopMargin;
- (double)containerLeftAndRightMargin;
- (void)clickContainer;
- (void)setBackToFeedBottomBarAction:(id /* block */)arg0;
- (id /* block */)backToFeedBottomBarAction;
- (id)iconImage;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)containerView;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (double)containerHeight;

@end