//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIGestureRecognizer;

@interface AWEPLVMixButtonHeaderButtonView : UIView {
    unsigned long long _buttonType;
    id /* block */ _jumpSchemaOnClickBlock;
    UIGestureRecognizer *_tapGesture;
    UIImageView *_icon;
    UILabel *_titleLabel;
}

@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) unsigned long long buttonType;
@property (copy, nonatomic) id /* block */ jumpSchemaOnClickBlock;
@property (retain, nonatomic) UIGestureRecognizer *tapGesture;

- (void)setupViewWithTitle:(id)arg0 image:(id)arg1;
- (void)jumpSchemaOnClick;
- (id /* block */)jumpSchemaOnClickBlock;
- (void)setToButtonTypeIfCan:(unsigned long long)arg0;
- (void)setJumpSchemaOnClickBlock:(id /* block */)arg0;
- (id)icon;
- (unsigned long long)buttonType;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)tapGesture;
- (void)setIcon:(id)arg0;
- (void)setButtonType:(unsigned long long)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setupView;
- (id)initWithTitle:(id)arg0 image:(id)arg1;
- (void)setTitle:(id)arg0 image:(id)arg1;
- (void)setTapGesture:(id)arg0;

@end