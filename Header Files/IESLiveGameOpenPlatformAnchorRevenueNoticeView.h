//
//     Generated by private class-dump
//

@class UIImageView, IESLiveGameOpenPlatformAnchorRevenueNoticeViewModel, UILabel, UIButton;

@interface IESLiveGameOpenPlatformAnchorRevenueNoticeView : UIView {
    IESLiveGameOpenPlatformAnchorRevenueNoticeViewModel *_viewModel;
    UIButton *_containerButton;
    UIImageView *_iconImageView;
    UILabel *_revenueLabel;
    UILabel *_nextRevenueLabel;
    id /* block */ _onClickedBlock;
}

@property (retain, nonatomic) IESLiveGameOpenPlatformAnchorRevenueNoticeViewModel *viewModel;
@property (retain, nonatomic) UIButton *containerButton;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *revenueLabel;
@property (retain, nonatomic) UILabel *nextRevenueLabel;
@property (copy, nonatomic) id /* block */ onClickedBlock;

- (void)setOnClickedBlock:(id /* block */)arg0;
- (id /* block */)onClickedBlock;
- (void)onClicked:(id /* block */)arg0;
- (id)revenueLabel;
- (id)nextRevenueLabel;
- (void)showNextRevenue:(id)arg0 animationStyle:(long long)arg1;
- (void)hideRevenueWithAnimation:(BOOL)arg0;
- (void)updateLabelLayout;
- (void)setRevenueLabel:(id)arg0;
- (void)setNextRevenueLabel:(id)arg0;
- (void).cxx_destruct;
- (void)setup;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)layoutSubviews;
- (id)iconImageView;
- (void)setIconImageView:(id)arg0;
- (id)containerButton;
- (void)setContainerButton:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 viewModel:(id)arg1;

@end
