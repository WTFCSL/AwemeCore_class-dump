//
//     Generated by private class-dump
//

@class UIImageView;

@interface BDAWaitingView : UIView {
    UIImageView *_imageView;
}

@property (retain, nonatomic) UIImageView *imageView;

- (void)buildImageView;
- (void)stopAnimating;
- (void)startAnimating;
- (void)willMoveToSuperview:(id)arg0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setImageView:(id)arg0;
- (id)initWithCoder:(id)arg0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })arg0;

@end
