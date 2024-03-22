//
//     Generated by private class-dump
//

@class UILabel, UIImageView, IESLiveDanmakuSettingBlockItem;

@interface IESLiveDanmakuSettingToolBarCell : UICollectionViewCell {
    IESLiveDanmakuSettingBlockItem *_item;
    UILabel *_titleLabel;
    UIImageView *_iconView;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) IESLiveDanmakuSettingBlockItem *item;

- (void)cellDidTapped;
- (id)item;
- (void).cxx_destruct;
- (id)iconView;
- (void)setIconView:(id)arg0;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setItem:(id)arg0;
- (void)setupViews;

@end
