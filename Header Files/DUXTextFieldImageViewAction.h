//
//     Generated by private class-dump
//

@class NSString, UIImageView, UIImage, UIView;

@interface DUXTextFieldImageViewAction : NSObject <DUXTextFieldContent> {
    id /* block */ didClickAction;
    UIImage *_image;
    UIImageView *_imageView;
    UIView *_contentView;
    struct CGSize { double width; double height; } actionSize;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) id /* block */ didClickAction;
@property (nonatomic) struct CGSize { double width; double height; } actionSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionWithImage:(id)arg0;
+ (id)actionWithImage:(id)arg0 clickAction:(id /* block */)arg1;

- (id)duxTextField_view;
- (void)setDidClickAction:(id /* block */)arg0;
- (id /* block */)didClickAction;
- (struct CGSize { double x0; double x1; })actionSize;
- (void)setActionSize:(struct CGSize { double x0; double x1; })arg0;
- (void)didClickContentView;
- (void).cxx_destruct;
- (id)image;
- (id)imageView;
- (void)setImageView:(id)arg0;
- (id)contentView;
- (void)setImage:(id)arg0;
- (void)setContentView:(id)arg0;

@end