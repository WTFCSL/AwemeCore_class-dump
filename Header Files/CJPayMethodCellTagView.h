//
//     Generated by private class-dump
//

@class UILabel, UIColor;

@interface CJPayMethodCellTagView : UIView {
    UILabel *_titleLabel;
    UIColor *_borderColor;
    UIColor *_textColor;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIColor *borderColor;
@property (retain, nonatomic) UIColor *textColor;

- (void)p_setupUI;
- (void).cxx_destruct;
- (id)borderColor;
- (void)setBorderColor:(id)arg0;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTextColor:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (id)textColor;
- (void)updateTitle:(id)arg0;

@end
