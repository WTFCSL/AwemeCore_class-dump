//
//     Generated by private class-dump
//

@class UIImageView, UILabel;

@interface AWEFormatCaptionTipView : UIView {
    double _height;
    UIImageView *_iconView;
    UILabel *_textLabel;
}

@property (nonatomic) double height;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *textLabel;

- (id)textLabel;
- (void).cxx_destruct;
- (double)height;
- (id)iconView;
- (void)setIconView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setHeight:(double)arg0;
- (void)layoutSubviews;
- (void)setTextLabel:(id)arg0;
- (void)setupUI;

@end
