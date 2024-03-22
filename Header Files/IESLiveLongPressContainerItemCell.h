//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIView;

@interface IESLiveLongPressContainerItemCell : UICollectionViewCell {
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UIView *_bgView;
    UIView *_redDot;
}

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIView *redDot;

- (void)setRedDot:(id)arg0;
- (id)redDot;
- (void)updateWithFuncModel:(id)arg0;
- (void).cxx_destruct;
- (id)iconView;
- (void)setIconView:(id)arg0;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setHighlighted:(BOOL)arg0;
- (void)setTitleLabel:(id)arg0;
- (id)bgView;
- (void)setBgView:(id)arg0;
- (void)setupUI;

@end
