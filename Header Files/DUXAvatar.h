//
//     Generated by private class-dump
//

@class UIImageView, UIImage, NSURL;

@interface DUXAvatar : UIView {
    BOOL _loading;
    unsigned long long _sizeStyle;
    UIImage *_image;
    NSURL *_imageURL;
    id /* block */ _clickAction;
    UIImageView *_imageView;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _interactionZoneEnlargeInsets;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) unsigned long long sizeStyle;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSURL *imageURL;
@property (nonatomic) BOOL loading;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } interactionZoneEnlargeInsets;
@property (copy, nonatomic) id /* block */ clickAction;

- (id /* block */)clickAction;
- (void)setInteractionZoneEnlargeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (id)initWithImage:(id)arg0 sizeStyle:(unsigned long long)arg1 clickAction:(id /* block */)arg2;
- (void)setClickAction:(id /* block */)arg0;
- (void)setSizeStyle:(unsigned long long)arg0;
- (void)didClickAction;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })interactionZoneEnlargeInsets;
- (BOOL)canInteractToPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)loadingAvatar;
- (void)setLoading:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)image;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setImageURL:(id)arg0;
- (id)imageView;
- (void)setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)imageURL;
- (void)setImageView:(id)arg0;
- (void)setImage:(id)arg0;
- (id)initWithCoder:(id)arg0;
- (BOOL)loading;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (unsigned long long)sizeStyle;

@end