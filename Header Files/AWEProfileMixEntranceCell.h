//
//     Generated by private class-dump
//

@class UIImageView, UILabel;

@interface AWEProfileMixEntranceCell : UICollectionViewCell {
    UIImageView *_icon;
    UIImageView *_arrow;
    UILabel *_title;
}

@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UIImageView *arrow;
@property (retain, nonatomic) UILabel *title;

- (void)setArrow:(id)arg0;
- (id)arrow;
- (id)icon;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)title;
- (void)setIcon:(id)arg0;
- (void)prepareForReuse;
- (void)setupConstraints;
- (void)setTitle:(id)arg0;
- (void)setupUI;

@end