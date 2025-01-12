//
//     Generated by private class-dump
//

@class UIColor, UIFont, NSString;

@interface CSJToastConfig : NSObject {
    float _duration;
    long long _postion;
    UIFont *_textFont;
    UIColor *_textColor;
    UIColor *_backgroundColor;
    double _cornerRadius;
    NSString *_message;
    long long _alignment;
    id /* block */ _showCompletion;
    id /* block */ _dismissCompletion;
    struct CGSize { double width; double height; } _superViewSize;
    struct CGPoint { double x; double y; } _location;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _insets;
}

@property (nonatomic) long long postion;
@property (retain, nonatomic) UIFont *textFont;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) float duration;
@property (nonatomic) double cornerRadius;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (copy, nonatomic) NSString *message;
@property (nonatomic) long long alignment;
@property (nonatomic) struct CGSize { double width; double height; } superViewSize;
@property (nonatomic) struct CGPoint { double x; double y; } location;
@property (copy, nonatomic) id /* block */ showCompletion;
@property (copy, nonatomic) id /* block */ dismissCompletion;

- (void)setSuperViewSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setShowCompletion:(id /* block */)arg0;
- (void)setDismissCompletion:(id /* block */)arg0;
- (long long)postion;
- (void)setPostion:(long long)arg0;
- (struct CGSize { double x0; double x1; })superViewSize;
- (id /* block */)showCompletion;
- (id /* block */)dismissCompletion;
- (void)setMessage:(id)arg0;
- (void)setInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (id)init;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (void).cxx_destruct;
- (void)setAlignment:(long long)arg0;
- (double)cornerRadius;
- (long long)alignment;
- (id)message;
- (struct CGPoint { double x0; double x1; })location;
- (float)duration;
- (void)setLocation:(struct CGPoint { double x0; double x1; })arg0;
- (id)backgroundColor;
- (void)setTextColor:(id)arg0;
- (void)setCornerRadius:(double)arg0;
- (void)setBackgroundColor:(id)arg0;
- (id)textFont;
- (id)textColor;
- (void)setDuration:(float)arg0;
- (void)setTextFont:(id)arg0;

@end
