//
//     Generated by private class-dump
//

@class UIImageView, UIImage, UIView;

@interface ACCVideoCoverPlayerContainerView : UIView {
    UIImage *_renderedImage;
    UIView *_customerContentView;
    UIImageView *_imageView;
    UIView *_editingView;
    struct CGSize { double width; double height; } _containerSize;
}

@property (nonatomic) struct CGSize { double width; double height; } containerSize;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *editingView;
@property (readonly, nonatomic) UIImage *renderedImage;
@property (readonly, nonatomic) UIView *customerContentView;

- (id)customerContentView;
- (id)editingView;
- (void)setEditingView:(id)arg0;
- (void)updateRenderImage:(id)arg0;
- (void)updateEditingView:(id)arg0;
- (id)renderedImage;
- (void)setContainerSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })containerSize;
- (void).cxx_destruct;
- (id)imageView;
- (void)setImageView:(id)arg0;
- (void)layoutSubviews;
- (id)initWithContainerSize:(struct CGSize { double x0; double x1; })arg0;

@end
