//
//     Generated by private class-dump
//

@class UIImage, UIImageView;

@interface IESECLLImageView : UIView {
    UIImageView *_imageView;
    long long _imageContentMode;
    UIImage *_image;
}

@property (nonatomic) long long imageContentMode;
@property (retain, nonatomic) UIImage *image;

- (id)initWithImage:(id)arg0;
- (void).cxx_destruct;
- (id)image;
- (void)setImageContentMode:(long long)arg0;
- (void)setImage:(id)arg0;
- (void)layoutSubviews;
- (long long)imageContentMode;
- (void)setupSubviews;

@end