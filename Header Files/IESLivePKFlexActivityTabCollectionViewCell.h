//
//     Generated by private class-dump
//

@class IESLivePKFlexActivityTabItem, UIImageView, UILabel, UIView;

@interface IESLivePKFlexActivityTabCollectionViewCell : UICollectionViewCell {
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIView *_containerView;
    UIImageView *_deselectBackgroundImageView;
    UIImageView *_selectedBackgroundImageView;
    IESLivePKFlexActivityTabItem *_item;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *deselectBackgroundImageView;
@property (retain, nonatomic) UIImageView *selectedBackgroundImageView;
@property (retain, nonatomic) IESLivePKFlexActivityTabItem *item;

- (id)selectedBackgroundImageView;
- (id)deselectBackgroundImageView;
- (void)updateCellLayoutIfNeed;
- (void)setDeselectBackgroundImageView:(id)arg0;
- (void)setSelectedBackgroundImageView:(id)arg0;
- (id)item;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)containerView;
- (void)setSelected:(BOOL)arg0;
- (void)prepareForReuse;
- (void)setTitleLabel:(id)arg0;
- (void)updateWithItem:(id)arg0;
- (void)setItem:(id)arg0;
- (void)setupView;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;

@end
