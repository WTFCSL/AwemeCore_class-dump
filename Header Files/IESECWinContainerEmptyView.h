//
//     Generated by private class-dump
//

@class UILabel, UIButton, UIImageView;

@interface IESECWinContainerEmptyView : UIView {
    id /* block */ _tapBlock;
    UILabel *_titleLabel;
    UIButton *_tapButton;
    UIImageView *_imageView;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *tapButton;
@property (retain, nonatomic) UIImageView *imageView;
@property (copy, nonatomic) id /* block */ tapBlock;

- (id /* block */)tapBlock;
- (void)setTapBlock:(id /* block */)arg0;
- (id)tapButton;
- (void)setTapButton:(id)arg0;
- (void).cxx_destruct;
- (id)imageView;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setImageView:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setUpViews;
- (void)buttonTapped;

@end