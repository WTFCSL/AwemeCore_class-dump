//
//     Generated by private class-dump
//

@class UIStackView, UIImageView, AWEEnterpriseGoodsListViewModel, UIView, UILabel, NSDate;

@interface AWEEnterpriseGoodsListView : AWEEnterpriseMessageBaseView {
    NSDate *_startLoadTimeDate;
    UIView *_containerView;
    UIView *_headerView;
    UILabel *_headerLabel;
    UIImageView *_iconImageView;
    UIStackView *_itemStack;
    UIView *_separatorLine;
    AWEEnterpriseGoodsListViewModel *_viewModel;
}

@property (retain, nonatomic) NSDate *startLoadTimeDate;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UILabel *headerLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIStackView *itemStack;
@property (retain, nonatomic) UIView *separatorLine;
@property (weak, nonatomic) AWEEnterpriseGoodsListViewModel *viewModel;

- (void)bindViewModel:(id)arg0;
- (void)constraintSubviews;
- (void)viewTapped;
- (void)setStartLoadTimeDate:(id)arg0;
- (id)itemStack;
- (void)p_configStackViewWithShowStatus:(long long)arg0;
- (id)startLoadTimeDate;
- (void)setItemStack:(id)arg0;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setHeaderView:(id)arg0;
- (void)setViewModel:(id)arg0;
- (struct CGSize { double x0; double x1; })currentContentSize;
- (id)containerView;
- (id)viewModel;
- (void)layoutSubviews;
- (id)headerView;
- (id)iconImageView;
- (void)setIconImageView:(id)arg0;
- (void)setupUI;
- (id)headerLabel;
- (void)setHeaderLabel:(id)arg0;
- (id)separatorLine;
- (void)setSeparatorLine:(id)arg0;

@end
