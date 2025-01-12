//
//     Generated by private class-dump
//

@class UIColor, NSString, UIImageView, UIImage;

@interface LynxUIFilterImage : LynxUI {
    long long _resizeMode;
    NSString *_src;
    UIImage *_originalImage;
    UIImageView *_imageView;
    struct CGPoint { double x; double y; } _shadowOffset;
    UIColor *_shadowColor;
    double _shadowRadius;
    double _blurRadius;
    BOOL _isDirty;
}

@property (nonatomic) long long resizeMode;
@property (retain, nonatomic) NSString *src;
@property (retain, nonatomic) UIImage *originalImage;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__1821;
+ (id)__lynx_prop_config__1932;
+ (id)__lynx_prop_config__2023;
+ (id)__lynx_prop_config__2194;

- (void)propsDidUpdate;
- (BOOL)updateLayerMaskOnFrameChanged;
- (void)setSrc:(id)arg0 requestReset:(BOOL)arg1;
- (void)requestImage;
- (void)upateFrameWithoutLayerMask;
- (void)setMode:(long long)arg0 requestReset:(BOOL)arg1;
- (void)setBlurRadius:(id)arg0 requestReset:(BOOL)arg1;
- (void)setDropShadow:(id)arg0 requestReset:(BOOL)arg1;
- (id)init;
- (void)setOriginalImage:(id)arg0;
- (void).cxx_destruct;
- (void)setResizeMode:(long long)arg0;
- (long long)resizeMode;
- (id)originalImage;
- (id)src;
- (void)setSrc:(id)arg0;
- (id)createView;
- (void)frameDidChange;

@end
