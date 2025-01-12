//
//     Generated by private class-dump
//

@class UIImageView, UIImage, CAShapeLayer, UIView;

@interface IESLiveChatChannelAvatar : UIView {
    UIImageView *_avatar;
    CAShapeLayer *_avatarShapeLayer;
    CAShapeLayer *_avatarBorderLayer;
    double _radius;
    double _arcRaduis;
    UIImage *_placeholdImage;
    UIView *_customView;
    CAShapeLayer *_customViewShapeLayer;
    struct CGPoint { double x; double y; } _arcCenter;
    struct CGSize { double width; double height; } _avatarSize;
    struct CGSize { double width; double height; } _customSize;
}

@property (retain, nonatomic) UIImageView *avatar;
@property (retain, nonatomic) CAShapeLayer *avatarShapeLayer;
@property (retain, nonatomic) CAShapeLayer *avatarBorderLayer;
@property (nonatomic) double radius;
@property (nonatomic) struct CGPoint { double x; double y; } arcCenter;
@property (nonatomic) double arcRaduis;
@property (nonatomic) struct CGSize { double width; double height; } avatarSize;
@property (retain, nonatomic) UIImage *placeholdImage;
@property (nonatomic) struct CGSize { double width; double height; } customSize;
@property (retain, nonatomic) UIView *customView;
@property (retain, nonatomic) CAShapeLayer *customViewShapeLayer;

+ (void)clipViewWithSize:(struct CGSize { double x0; double x1; })arg0 customView:(id)arg1 arcCenter:(struct CGPoint { double x0; double x1; })arg2 arcRadius:(double)arg3;

- (void)setCustomSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })customSize;
- (id)initWithSize:(struct CGSize { double x0; double x1; })arg0 radius:(double)arg1 URLs:(id)arg2 placeholderImage:(id)arg3 arcCenter:(struct CGPoint { double x0; double x1; })arg4 arcRadius:(double)arg5;
- (struct CGPoint { double x0; double x1; })arcCenter;
- (double)arcRaduis;
- (id)avatarShapeLayer;
- (id)initWithSize:(struct CGSize { double x0; double x1; })arg0 radius:(double)arg1 liveImage:(id)arg2 placeholderImage:(id)arg3 arcCenter:(struct CGPoint { double x0; double x1; })arg4 arcRadius:(double)arg5;
- (void)setImageWithURLs:(id)arg0 placeholderImage:(id)arg1;
- (void)updateImageClipStatus:(BOOL)arg0;
- (void)setAvatarShapeLayer:(id)arg0;
- (id)avatarBorderLayer;
- (void)setAvatarBorderLayer:(id)arg0;
- (void)setArcCenter:(struct CGPoint { double x0; double x1; })arg0;
- (void)setArcRaduis:(double)arg0;
- (id)placeholdImage;
- (void)setPlaceholdImage:(id)arg0;
- (id)customViewShapeLayer;
- (void)setCustomViewShapeLayer:(id)arg0;
- (void).cxx_destruct;
- (double)radius;
- (void)setImage:(id)arg0;
- (id)customView;
- (void)setRadius:(double)arg0;
- (void)setCustomView:(id)arg0;
- (id)avatar;
- (void)setAvatar:(id)arg0;
- (void)setupUI;
- (struct CGSize { double x0; double x1; })avatarSize;
- (void)setAvatarSize:(struct CGSize { double x0; double x1; })arg0;

@end
