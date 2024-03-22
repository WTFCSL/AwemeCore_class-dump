//
//     Generated by private class-dump
//

@class NSString, UIColor, UIImage;

@interface AWETeenMoreSheetAction : NSObject {
    NSString *_title;
    NSString *_cachedImageName;
    UIColor *_titleColor;
    UIImage *_image;
    UIColor *_imageColor;
    id /* block */ _handler;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *cachedImageName;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIColor *imageColor;
@property (copy, nonatomic) id /* block */ handler;

+ (id)actionWithTitle:(id)arg0 titleColor:(id)arg1 image:(id)arg2 imageColor:(id)arg3 handler:(id /* block */)arg4;
+ (id)actionWithTitle:(id)arg0 titleColor:(id)arg1 cachedImageName:(id)arg2 imageColor:(id)arg3 handler:(id /* block */)arg4;
+ (id)actionWithTitle:(id)arg0 image:(id)arg1 handler:(id /* block */)arg2;

- (void)setCachedImageName:(id)arg0;
- (id)cachedImageName;
- (void).cxx_destruct;
- (id)image;
- (id)titleColor;
- (void)setHandler:(id /* block */)arg0;
- (id)title;
- (void)setImage:(id)arg0;
- (void)setImageColor:(id)arg0;
- (id)imageColor;
- (void)setTitleColor:(id)arg0;
- (id /* block */)handler;
- (void)setTitle:(id)arg0;

@end