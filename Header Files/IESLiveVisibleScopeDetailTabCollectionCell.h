//
//     Generated by private class-dump
//

@class UILabel, UIView;

@interface IESLiveVisibleScopeDetailTabCollectionCell : UICollectionViewCell {
    UIView *_backView;
    UILabel *_titleLabel;
}

@property (retain, nonatomic) UIView *backView;
@property (retain, nonatomic) UILabel *titleLabel;

+ (id)identifier;

- (void)configWithType:(unsigned long long)arg0 isSelected:(BOOL)arg1;
- (void)setBackView:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)backView;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;

@end