//
//     Generated by private class-dump
//

@class UILabel, UIImageView, IESLiveKTVOrderPanelKingItem;

@interface IESLiveKTVOrderPanelKingCell : UICollectionViewCell {
    IESLiveKTVOrderPanelKingItem *_item;
    UILabel *_nameLabel;
    UIImageView *_iconImage;
}

@property (retain, nonatomic) IESLiveKTVOrderPanelKingItem *item;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIImageView *iconImage;

- (void)renderWithItem:(id)arg0;
- (id)iconImage;
- (id)item;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)nameLabel;
- (void)setIconImage:(id)arg0;
- (void)setItem:(id)arg0;
- (void)setNameLabel:(id)arg0;
- (void)setupUI;

@end
