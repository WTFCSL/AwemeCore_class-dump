//
//     Generated by private class-dump
//

@class DVEMultipleTrackViewCellViewModel, UIImageView, UILabel, UIView;

@interface DVEMultipleTrackViewCell : UICollectionViewCell {
    BOOL _enabledCornerRadius;
    DVEMultipleTrackViewCellViewModel *_viewModel;
    UIView *_backView;
    UILabel *_titleLabel;
    UIImageView *_iconImageView;
    UILabel *_iconLabel;
    UIView *_anchorView;
}

@property (retain, nonatomic) DVEMultipleTrackViewCellViewModel *viewModel;
@property (retain, nonatomic) UIView *backView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *iconLabel;
@property (nonatomic) BOOL enabledCornerRadius;
@property (retain, nonatomic) UIView *anchorView;

- (void)updateUIIfNeeded;
- (void)clipPanChangedAtPosition:(unsigned long long)arg0 offset:(double)arg1;
- (void)setupBackview;
- (void)setupIconImageView;
- (void)clipPanBegin;
- (void)clipPanEnd;
- (void)setEnabledCornerRadius:(BOOL)arg0;
- (BOOL)enabledCornerRadius;
- (void)setBackView:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setViewModel:(id)arg0;
- (id)backView;
- (id)viewModel;
- (void)setTitleLabel:(id)arg0;
- (id)iconImageView;
- (id)anchorView;
- (void)setAnchorView:(id)arg0;
- (void)setIconImageView:(id)arg0;
- (void)setupUI;
- (void)setupTitleLabel;
- (void)updateFrame;
- (id)iconLabel;
- (void)setIconLabel:(id)arg0;

@end
