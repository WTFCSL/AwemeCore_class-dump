//
//     Generated by private class-dump
//

@class UIImageView;

@interface BDCTInsetImageView : UIView {
    UIImageView *_innerView;
}

@property (retain, nonatomic) UIImageView *innerView;

- (void)setInnerView:(id)arg0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutSubviews;
- (id)innerView;

@end