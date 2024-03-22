//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIButton;

@interface IESLiveImageTextView : UIView {
    UIImageView *_imageView;
    UILabel *_textLabel;
    id /* block */ _tapBlock;
    UIButton *_button;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIButton *button;
@property (copy, nonatomic) id /* block */ tapBlock;

+ (id)initWithConfigBlock:(id /* block */)arg0;

- (id /* block */)tapBlock;
- (void)setTapBlock:(id /* block */)arg0;
- (void)buttonClicked;
- (void)setupSubViews;
- (id)textLabel;
- (void).cxx_destruct;
- (id)button;
- (void)setButton:(id)arg0;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setImageView:(id)arg0;
- (void)setTextLabel:(id)arg0;

@end