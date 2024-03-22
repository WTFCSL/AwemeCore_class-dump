//
//     Generated by private class-dump
//

@class UIImageView, UILabel;

@interface AWESearchMentionedStoreCell : UICollectionViewCell {
    UIImageView *_iconView;
    UILabel *_itemLabel;
    struct CGSize { double width; double height; } _iconViewSize;
    struct CGSize { double width; double height; } _itemLabelSize;
}

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *itemLabel;
@property (nonatomic) struct CGSize { double width; double height; } iconViewSize;
@property (nonatomic) struct CGSize { double width; double height; } itemLabelSize;

- (struct CGSize { double x0; double x1; })itemLabelSize;
- (void)setItemLabelSize:(struct CGSize { double x0; double x1; })arg0;
- (void).cxx_destruct;
- (id)iconView;
- (void)setIconView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGSize { double x0; double x1; })iconViewSize;
- (void)layoutSubviews;
- (void)setupUI;
- (id)itemLabel;
- (void)setItemLabel:(id)arg0;
- (void)updateWithModel:(id)arg0;
- (void)setIconViewSize:(struct CGSize { double x0; double x1; })arg0;

@end
