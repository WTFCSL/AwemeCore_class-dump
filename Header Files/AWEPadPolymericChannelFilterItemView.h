//
//     Generated by private class-dump
//

@class UILabel;

@interface AWEPadPolymericChannelFilterItemView : UICollectionViewCell {
    UILabel *_itemLabel;
}

@property (retain, nonatomic) UILabel *itemLabel;

+ (id)itemViewWithTitle:(id)arg0 selected:(BOOL)arg1;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setSelected:(BOOL)arg0;
- (void)setupView;
- (id)itemLabel;
- (void)setItemLabel:(id)arg0;

@end
