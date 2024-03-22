//
//     Generated by private class-dump
//

@class NSString, UIImageView, CAShapeLayer, UILabel;

@interface AWEPayDiscountView : UIView {
    BOOL _isHiddenImageView;
    NSString *_discountStr;
    UILabel *_discountLabel;
    UIImageView *_discountImageView;
    CAShapeLayer *_maskLayer;
}

@property (retain, nonatomic) UILabel *discountLabel;
@property (retain, nonatomic) UIImageView *discountImageView;
@property (nonatomic) BOOL isHiddenImageView;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (copy, nonatomic) NSString *discountStr;

- (void)setDiscountLabel:(id)arg0;
- (id)discountLabel;
- (void)p_setupUI;
- (void)setDiscountImageView:(id)arg0;
- (id)discountImageView;
- (void)setDiscountStr:(id)arg0;
- (id)discountStr;
- (void)setIsHiddenImageView:(BOOL)arg0;
- (BOOL)isHiddenImageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 hiddenImageView:(BOOL)arg1;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)maskLayer;
- (void)setMaskLayer:(id)arg0;

@end