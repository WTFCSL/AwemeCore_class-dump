//
//     Generated by private class-dump
//

@class UILabel, UIImageView;

@interface IESGCPPopoverMenuItemView : UIView {
    UILabel *_titleLabel;
    UIImageView *_imageView;
    id /* block */ _onTap;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (copy, nonatomic) id /* block */ onTap;

- (void).cxx_destruct;
- (id)imageView;
- (id)titleLabel;
- (void)setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setImageView:(id)arg0;
- (void)setOnTap:(id /* block */)arg0;
- (id /* block */)onTap;
- (void)setTitleLabel:(id)arg0;
- (void)handleTap:(id)arg0;

@end