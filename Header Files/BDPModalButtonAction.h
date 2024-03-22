//
//     Generated by private class-dump
//

@class UIColor, UIFont, NSString;

@interface BDPModalButtonAction : NSObject {
    BOOL _colorValid;
    UIColor *_color;
    UIFont *_font;
    NSString *_title;
    long long _style;
    id /* block */ _handler;
}

@property (retain, nonatomic) UIColor *color;
@property (copy, nonatomic) UIFont *font;
@property (nonatomic) BOOL colorValid;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long style;
@property (copy, nonatomic) id /* block */ handler;

+ (id)actionWithTitle:(id)arg0 color:(id)arg1 handler:(id /* block */)arg2;
+ (id)actionWithTitle:(id)arg0 style:(long long)arg1 handler:(id /* block */)arg2;

- (BOOL)colorValid;
- (void)setColorValid:(BOOL)arg0;
- (long long)style;
- (id)color;
- (void).cxx_destruct;
- (void)setHandler:(id /* block */)arg0;
- (id)title;
- (id)font;
- (void)setFont:(id)arg0;
- (id /* block */)handler;
- (void)setStyle:(long long)arg0;
- (void)setTitle:(id)arg0;
- (void)setColor:(id)arg0;

@end