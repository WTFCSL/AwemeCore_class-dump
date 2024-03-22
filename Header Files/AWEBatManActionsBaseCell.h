//
//     Generated by private class-dump
//

@class UILabel, UIImageView, AWEBatManActionsCellModel;

@interface AWEBatManActionsBaseCell : UICollectionViewCell {
    UIImageView *_iconImageView;
    AWEBatManActionsCellModel *_itemModel;
    UILabel *_titleLabel;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) AWEBatManActionsCellModel *itemModel;

- (id)itemModel;
- (void)setItemModel:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTitleLabel:(id)arg0;
- (id)iconImageView;
- (void)setIconImageView:(id)arg0;
- (void)setupUI;

@end