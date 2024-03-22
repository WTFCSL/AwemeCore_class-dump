//
//     Generated by private class-dump
//

@class UIImageView, UIImage, NSString;

@interface DUXContentFormImageViewAction : NSObject <DUXContentFormContent> {
    id /* block */ didClickAction;
    UIImage *_image;
    UIImageView *_imageView;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) id /* block */ didClickAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionWithImage:(id)arg0;
+ (id)actionWithImage:(id)arg0 clickAction:(id /* block */)arg1;

- (void)setDidClickAction:(id /* block */)arg0;
- (id /* block */)didClickAction;
- (void)didClickContentView;
- (id)duxContentForm_view;
- (void).cxx_destruct;
- (id)image;
- (id)imageView;
- (void)setImageView:(id)arg0;
- (void)setImage:(id)arg0;

@end
