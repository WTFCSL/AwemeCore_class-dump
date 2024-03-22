//
//     Generated by private class-dump
//

@class UILabel, UIImageView, AWEDitoPOIFavoriteEnterTitleComponentViewModel;

@interface AWEDitoPOIFavoriteEnterTitleComponentView : DitoComponentView {
    AWEDitoPOIFavoriteEnterTitleComponentViewModel *_viewModel;
    UILabel *_titleLabel;
    UILabel *_enterLabel;
    UIImageView *_iconView;
}

@property (weak, nonatomic) AWEDitoPOIFavoriteEnterTitleComponentViewModel *viewModel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *enterLabel;
@property (retain, nonatomic) UIImageView *iconView;

- (void)updateViewModel:(id)arg0;
- (void)didTapEnterLabel;
- (void).cxx_destruct;
- (id)iconView;
- (void)setIconView:(id)arg0;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (id)enterLabel;
- (void)setEnterLabel:(id)arg0;

@end
