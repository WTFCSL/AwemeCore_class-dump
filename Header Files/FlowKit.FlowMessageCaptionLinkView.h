//
//     Generated by private class-dump
//

@interface FlowKit.FlowMessageCaptionLinkView : UIButton {
    void /* unknown type, empty encoding */ iconImageLoadToken;
    void /* unknown type, empty encoding */ numberLb;
    void /* unknown type, empty encoding */ iconView;
    void /* unknown type, empty encoding */ titleLb;
}

@property (nonatomic) BOOL highlighted;

- (BOOL)isHighlighted;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg0 withEvent:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)touchesEnded:(id)arg0 withEvent:(id)arg1;
- (id)initWithCoder:(id)arg0;
- (void)touchesCancelled:(id)arg0 withEvent:(id)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)arg0;

@end