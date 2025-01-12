//
//     Generated by private class-dump
//

@class UIImageView, UIImage;

@interface BDPLoadingAnimationView : UIView {
    BOOL _finished;
    long long _circleStyle;
    UIImageView *_loadingIcon;
    UIImage *_iconClose;
    UIImage *_iconOpen;
}

@property (nonatomic) long long circleStyle;

+ (void)preloadAnimationImages;
+ (id)URLWithImageName:(id)arg0;

- (void)setCircleStyle:(long long)arg0;
- (long long)circleStyle;
- (void)setLoadingColor;
- (void)setLoadingOpenState;
- (void)setLoadingCloseState;
- (void)stopLoading;
- (id)init;
- (void).cxx_destruct;
- (void)startLoading;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)dealloc;

@end
