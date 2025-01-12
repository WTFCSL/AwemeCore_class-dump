//
//     Generated by private class-dump
//

@class NSString, UIImage;

@interface AWETeenLoadingButton : UIButton {
    NSString *_stashTitle;
    UIImage *_stashImage;
}

@property (copy, nonatomic) NSString *stashTitle;
@property (retain, nonatomic) UIImage *stashImage;

- (void)setStashTitle:(id)arg0;
- (id)p_loadingAnimation;
- (id)stashTitle;
- (void)setStashImage:(id)arg0;
- (id)p_image:(id)arg0 tintColor:(id)arg1 blendMode:(int)arg2;
- (id)stashImage;
- (void)stopLoading;
- (void).cxx_destruct;
- (void)startLoading;

@end
