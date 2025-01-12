//
//     Generated by private class-dump
//

@class UIStackView, AWEEnterpriseEnterTipsVideoViewModel, UIImageView, UILabel, UIView;

@interface AWEEnterpriseEnterTipsVideoView : AWEEnterpriseMessageBaseView {
    UIView *_containerView;
    UIStackView *_titleStackView;
    UILabel *_mainTitleLabel;
    UILabel *_subTitleLabel;
    UIImageView *_coverImageView;
    UIImageView *_playIconImage;
    AWEEnterpriseEnterTipsVideoViewModel *_viewModel;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIStackView *titleStackView;
@property (retain, nonatomic) UILabel *mainTitleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *playIconImage;
@property (weak, nonatomic) AWEEnterpriseEnterTipsVideoViewModel *viewModel;

- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (void)bindViewModel:(id)arg0;
- (void)constraintSubviews;
- (id)mainTitleLabel;
- (void)setMainTitleLabel:(id)arg0;
- (void)viewTapped;
- (id)playIconImage;
- (void)setPlayIconImage:(id)arg0;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setViewModel:(id)arg0;
- (struct CGSize { double x0; double x1; })currentContentSize;
- (id)containerView;
- (id)viewModel;
- (void)setupUI;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;
- (id)titleStackView;
- (void)setTitleStackView:(id)arg0;

@end
