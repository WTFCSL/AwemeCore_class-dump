//
//     Generated by private class-dump
//

@class UIImage, NSURL;

@interface AWEInnerPushCommonViewSingleIconModel : NSObject {
    UIImage *_image;
    NSURL *_imageUrl;
    id /* block */ _tapActionButtonBlock;
}

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSURL *imageUrl;
@property (copy, nonatomic) id /* block */ tapActionButtonBlock;

- (void)setTapActionButtonBlock:(id /* block */)arg0;
- (id /* block */)tapActionButtonBlock;
- (void).cxx_destruct;
- (id)image;
- (void)setImage:(id)arg0;
- (id)imageUrl;
- (void)setImageUrl:(id)arg0;

@end