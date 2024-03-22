//
//     Generated by private class-dump
//

@class IESLiveAnimatedImageView, NSString, UIView;

@interface IESLiveAnimatedTextAttachment : NSTextAttachment {
    BOOL _isAnimated;
    BOOL _adjustImageViewFrame;
    NSString *_imageUrl;
    UIView *_containerView;
    double _alignFontSize;
    IESLiveAnimatedImageView *_imageView;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _textContainerInset;
}

@property (weak, nonatomic) IESLiveAnimatedImageView *imageView;
@property (nonatomic) BOOL isAnimated;
@property (copy, nonatomic) NSString *imageUrl;
@property (weak, nonatomic) UIView *containerView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } textContainerInset;
@property (nonatomic) double alignFontSize;
@property (nonatomic) BOOL adjustImageViewFrame;

- (void)setIsAnimated:(BOOL)arg0;
- (void)setAdjustImageViewFrame:(BOOL)arg0;
- (double)alignFontSize;
- (void)setAlignFontSize:(double)arg0;
- (BOOL)adjustImageViewFrame;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })textContainerInset;
- (BOOL)isAnimated;
- (void).cxx_destruct;
- (id)imageForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 textContainer:(id)arg1 characterIndex:(unsigned long long)arg2;
- (id)imageView;
- (void)setContainerView:(id)arg0;
- (void)setImageView:(id)arg0;
- (void)setTextContainerInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (id)containerView;
- (id)imageUrl;
- (void)setImageUrl:(id)arg0;

@end
