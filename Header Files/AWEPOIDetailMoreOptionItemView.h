//
//     Generated by private class-dump
//

@class UIImageView, AWEPOIDetailMoreOptionItemModel, UIView, UILabel;

@interface AWEPOIDetailMoreOptionItemView : UIView {
    AWEPOIDetailMoreOptionItemModel *_item;
    UIView *_separator;
    UIImageView *_imageView;
    UILabel *_titleLabel;
}

@property (retain, nonatomic) AWEPOIDetailMoreOptionItemModel *item;
@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;

- (id)accessibilityLabel;
- (id)item;
- (void).cxx_destruct;
- (id)separator;
- (void)setSeparator:(id)arg0;
- (id)imageView;
- (id)titleLabel;
- (void)setImageView:(id)arg0;
- (void)layoutSubviews;
- (void)setTitleLabel:(id)arg0;
- (void)setItem:(id)arg0;
- (id)initWithItem:(id)arg0;
- (void)setupViews;
- (void)hideSeparator;

@end