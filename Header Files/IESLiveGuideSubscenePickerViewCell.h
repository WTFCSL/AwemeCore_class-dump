//
//     Generated by private class-dump
//

@class UIImageView, IESLiveGuideSubscenePickerItem, UIView, UILabel;

@interface IESLiveGuideSubscenePickerViewCell : UICollectionViewCell {
    IESLiveGuideSubscenePickerItem *_item;
    UIView *_container;
    UIView *_iconContainerView;
    UIImageView *_icon;
    UILabel *_nameLabel;
}

@property (retain, nonatomic) IESLiveGuideSubscenePickerItem *item;
@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UIView *iconContainerView;
@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *nameLabel;

- (void)p_applyAccessibility:(id)arg0;
- (id)container;
- (id)item;
- (id)icon;
- (void).cxx_destruct;
- (void)setContainer:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)nameLabel;
- (void)setIcon:(id)arg0;
- (void)setupConstraints;
- (void)updateWithItem:(id)arg0;
- (void)setItem:(id)arg0;
- (void)setNameLabel:(id)arg0;
- (void)setupViews;
- (id)iconContainerView;
- (void)setIconContainerView:(id)arg0;

@end