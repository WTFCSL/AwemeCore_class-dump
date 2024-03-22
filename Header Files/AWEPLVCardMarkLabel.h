//
//     Generated by private class-dump
//

@class UILabel, NSString, CAShapeLayer;

@interface AWEPLVCardMarkLabel : UIView {
    NSString *_text;
    UILabel *_textLabel;
    CAShapeLayer *_maskLayer;
}

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (copy, nonatomic) NSString *text;

- (void)setupCorner;
- (id)textLabel;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)text;
- (void)layoutSubviews;
- (void)setTextLabel:(id)arg0;
- (id)maskLayer;
- (void)setupView;
- (void)setMaskLayer:(id)arg0;

@end