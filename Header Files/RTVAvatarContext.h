//
//     Generated by private class-dump
//

@class UIColor;

@interface RTVAvatarContext : NSObject {
    BOOL _useInnerBorder;
    double _borderWidth;
    UIColor *_borderColor;
    struct CGSize { double width; double height; } _avatarSize;
}

@property (nonatomic) struct CGSize { double width; double height; } avatarSize;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) BOOL useInnerBorder;

+ (id)contextWithAvatarSize:(struct CGSize { double x0; double x1; })arg0 borderWidth:(double)arg1 borderColor:(id)arg2;

- (BOOL)useInnerBorder;
- (void)setUseInnerBorder:(BOOL)arg0;
- (double)borderWidth;
- (void).cxx_destruct;
- (id)borderColor;
- (void)setBorderColor:(id)arg0;
- (void)setBorderWidth:(double)arg0;
- (struct CGSize { double x0; double x1; })avatarSize;
- (void)setAvatarSize:(struct CGSize { double x0; double x1; })arg0;

@end
