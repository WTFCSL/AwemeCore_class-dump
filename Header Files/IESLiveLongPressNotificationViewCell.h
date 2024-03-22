//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIView;

@interface IESLiveLongPressNotificationViewCell : UITableViewCell {
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UIImageView *_arrowView;
    UIView *_lineView;
}

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UIView *lineView;

- (void).cxx_destruct;
- (id)iconView;
- (void)setIconView:(id)arg0;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTitleLabel:(id)arg0;
- (id)arrowView;
- (void)setArrowView:(id)arg0;
- (id)lineView;
- (void)setLineView:(id)arg0;
- (void)setupUI;

@end
