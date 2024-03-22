//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIView;

@interface BDNovelComicCatalogJumpView : UIView {
    UIImageView *_imageView;
    UILabel *_titleView;
    UIView *_lineView;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleView;
@property (retain, nonatomic) UIView *lineView;

- (void)readerThemeChange:(id)arg0;
- (void)showWithText:(id)arg0 isTop:(BOOL)arg1 completion:(id /* block */)arg2;
- (void).cxx_destruct;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setImageView:(id)arg0;
- (void)setTitleView:(id)arg0;
- (void)hide;
- (void)layoutSubviews;
- (id)titleView;
- (id)lineView;
- (void)setLineView:(id)arg0;

@end