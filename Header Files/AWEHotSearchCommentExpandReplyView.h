//
//     Generated by private class-dump
//

@class UILabel, UIImageView, UIView;

@interface AWEHotSearchCommentExpandReplyView : UIView {
    id /* block */ _tappedBlock;
    UIView *_containerView;
    UIView *_lineView;
    UILabel *_titleLabel;
    UIImageView *_iconView;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (copy, nonatomic) id /* block */ tappedBlock;

- (void)configWithCellModel:(id)arg0;
- (void)setTappedBlock:(id /* block */)arg0;
- (id /* block */)tappedBlock;
- (id)showStringFromNumber:(id)arg0;
- (void)onTapped:(id)arg0;
- (void).cxx_destruct;
- (id)iconView;
- (void)setIconView:(id)arg0;
- (id)titleLabel;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)containerView;
- (void)setTitleLabel:(id)arg0;
- (id)lineView;
- (void)setLineView:(id)arg0;

@end
