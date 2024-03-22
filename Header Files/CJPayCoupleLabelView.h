//
//     Generated by private class-dump
//

@class CJPayPaddingLabel, UIFont;

@interface CJPayCoupleLabelView : UIView {
    UIFont *_font;
    CJPayPaddingLabel *_firstLabel;
    CJPayPaddingLabel *_secondLabel;
}

@property (retain, nonatomic) CJPayPaddingLabel *firstLabel;
@property (retain, nonatomic) CJPayPaddingLabel *secondLabel;
@property (retain, nonatomic) UIFont *font;

- (void)updateCoupleLabelContents:(id)arg0;
- (void)updateCoupleLableForSignStatus;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)font;
- (void)setFont:(id)arg0;
- (id)firstLabel;
- (void)setFirstLabel:(id)arg0;
- (id)secondLabel;
- (void)setSecondLabel:(id)arg0;

@end
