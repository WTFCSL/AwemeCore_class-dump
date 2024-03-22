//
//     Generated by private class-dump
//

@class NSString, UIImage;

@interface AWEDetailShootButtonConfig : NSObject {
    BOOL _useWhiteStyle;
    NSString *_iconImageName;
    UIImage *_iconImage;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _iconBound;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _contentEdgeInsets;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _imageEdgeInsets;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _titleEdgeInsets;
}

@property (copy, nonatomic) NSString *iconImageName;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } iconBound;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentEdgeInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } imageEdgeInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } titleEdgeInsets;
@property (nonatomic) BOOL useWhiteStyle;
@property (retain, nonatomic) UIImage *iconImage;

+ (id)duetConfig;
+ (id)defaultConfig;

- (void)setIconBound:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })iconBound;
- (BOOL)useWhiteStyle;
- (void)setUseWhiteStyle:(BOOL)arg0;
- (id)iconImage;
- (void)setContentEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentEdgeInsets;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })imageEdgeInsets;
- (id)iconImageName;
- (void)setIconImage:(id)arg0;
- (void)setIconImageName:(id)arg0;
- (void)setImageEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })titleEdgeInsets;
- (void)setTitleEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;

@end
